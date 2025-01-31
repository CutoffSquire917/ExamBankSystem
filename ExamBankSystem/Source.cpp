#include <iostream>
#include <string>
#include <fstream>
#include "MainBankForm.h"
#include <Windows.h>
#include "MyQueue.h"

using namespace ExamBankSystem;
using namespace System;
using namespace System::Windows::Forms;

MyQueue<CreditCard>* CreditCardList = new MyQueue<CreditCard>();
MyQueue<CostHistory>* CostHistoryList = new MyQueue<CostHistory>();

std::string encypt(std::string input) {
	const std::string numbers_count = "1234567890";
	const std::string alphabet_count = "abcdefghijklmnopCreditCardListrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] >= 48 && input[i] <= 57) {
			for (size_t j = 0; j < numbers_count.length(); j++)
			{
				if (input[i] == numbers_count[j]) {
					input[i] = numbers_count[(j + 7) % 10];
					break;
				}
			}
		}
		else if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)) {
			for (size_t j = 0; j < alphabet_count.length(); j++)
			{
				if (input[i] == alphabet_count[j]) {
					input[i] = alphabet_count[(j + 11) % 52];
					break;
				}
			}
		}
	}
	return input;
}

void CostHistoryFromFile(MyQueue<CostHistory>* obj, const std::string fileWay) {
	try
	{
		std::ifstream file;
		file.open(fileWay);
		if (!file.is_open()) {
			throw std::runtime_error("FILE IS DAMAGED");
		}
		while (!file.eof()) {

			std::string encrypted_card_data = "";
			file >> encrypted_card_data;

			if (encrypted_card_data == "") break;

			std::string card_number = encrypted_card_data.substr(0, encrypted_card_data.find('&'));
			encrypted_card_data.erase(0, encrypted_card_data.find('&') + 1);

			std::string card_date = encrypted_card_data.substr(0, encrypted_card_data.find('&'));
			encrypted_card_data.erase(0, encrypted_card_data.find('&') + 1);

			std::string card_s_number = encrypted_card_data.substr(0, encrypted_card_data.find('&'));
			encrypted_card_data.erase(0, encrypted_card_data.find('&') + 1);
			obj->AddToEnd(CostHistory(
				card_number,
				card_date,
				card_s_number
			));
		}
		file.close();
	}
	catch (...)
	{
		throw std::runtime_error("FILE IS DAMAGED");
	}
}
void CostHistoryToFile(const CostHistory obj, const std::string fileWay) {
	try
	{
		std::ofstream file;
		file.open(fileWay, std::ofstream::app);

		if (!file.is_open()) {
			throw std::runtime_error("FILE IS DAMAGED");
		}
		std::string temp_transfer_sum = obj.TransferSumGet();
		std::string temp_date = obj.DateGet();
		if (temp_transfer_sum[0] == '-') {
			temp_transfer_sum.replace(0, 1, "*");
		}
		else if (temp_transfer_sum[0] == '+') {
			temp_transfer_sum.replace(0, 1, "~");
		}
		temp_transfer_sum.replace(temp_transfer_sum.find("."), 1, "#");
		for (size_t i = 0; i < 2; i++)
		{
			temp_date.erase(temp_date.find("."), 1);
		}
		file << temp_transfer_sum << "&" << obj.CategoryGet() << "&" << temp_date << "\n";
		file.close();
	}
	catch (...)
	{
		throw std::runtime_error("FILE IS DAMAGED");
	}
}

void CardFromFile(MyQueue<CreditCard>* obj, const std::string fileWay) {
	try
	{
		std::ifstream file;
		file.open(fileWay);
		if (!file.is_open()) {
			throw std::runtime_error("FILE IS DAMAGED");
		}
		while (!file.eof()) {

			std::string encrypted_card_data = "";
			file >> encrypted_card_data;

			if (encrypted_card_data == "") break;

			std::string card_number = encrypted_card_data.substr(0, encrypted_card_data.find('&'));
			encrypted_card_data.erase(0, encrypted_card_data.find('&') + 1);

			std::string card_date = encrypted_card_data.substr(0, encrypted_card_data.find('&'));
			encrypted_card_data.erase(0, encrypted_card_data.find('&') + 1);

			std::string card_s_number = encrypted_card_data.substr(0, encrypted_card_data.find('&'));
			encrypted_card_data.erase(0, encrypted_card_data.find('&') + 1);

			obj->AddToEnd(CreditCard(
				card_number,
				card_date,
				card_s_number,
				encrypted_card_data
			));
		}
		file.close();
	}
	catch (...)
	{
		throw std::runtime_error("FILE IS DAMAGED");
	}
}
void CardToFile(const CreditCard obj, const std::string fileWay) {
	try
	{
		std::ofstream file;
		file.open(fileWay, std::ofstream::app);
		
		if (!file.is_open()) {
			throw std::runtime_error("FILE IS DAMAGED");
		}
		std::string temp_card_number = obj.GetCardNumber();
		for (size_t i = 4; i < 14; i+=4)
		{
			temp_card_number.erase(i, 1);
		}
		file << temp_card_number << "&" << obj.GetCardDate().erase(2, 3) << "&" << obj.GetCardSecretNumber() << "&" << obj.GetCardColor() << "\n";
		file.close();
	}
	catch (...)
	{
		throw std::runtime_error("FILE IS DAMAGED");
	}
}

[STAThreadAttribute]
int main(array<String^>^ args) {
	
	//CardToFile(CreditCard(encypt("4441111160919313"), encypt("0731"),
	//	encypt("304"), encypt("black")), "private/CreditCardList.txt");
	//CardToFile(CreditCard(encypt("2020202020202020"), encypt("2020"),
	//	encypt("202"), encypt("white")), "private/CreditCardList.txt");
	//CostHistoryToFile(CostHistory(encypt("*1000#00"), encypt("Transaction"),
	// encypt("290125")), "private/CostHistoryList.txt");
	CardFromFile(CreditCardList, "private/CreditCardList.txt");
	CostHistoryFromFile(CostHistoryList, "private/CostHistoryList.txt");
	//std::cout << CreditCardList->GetValue(1).GetCardNumber() << "\n";
	//std::cout << "\t\t" << CreditCardList->GetValue(1).GetCardDate() << "\n";
	//std::cout << "\t\t" << CreditCardList->GetValue(1).GetCardSecretNumber() << "\n";

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ExamBankSystem::MainBankForm form;
	Application::Run(% form);

	

}