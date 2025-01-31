#pragma once

#include "MyQueue.h"
//#include "MainBankForm.h"
#include <iostream>
#include <string>
extern MyQueue<CreditCard>* CreditCardList;
extern MyQueue<CostHistory>* CostHistoryList;

namespace ExamBankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CostAllList
	/// </summary>
	public ref class CostAllList : public System::Windows::Forms::Form
	{
	public:
		CostAllList(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CostAllList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;

	private: System::Windows::Forms::Panel^ background_cost_history;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btn_all_history;

	private: size_t card_switch = 0;
	private: System::Drawing::Color white_card_color = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(250)),
		static_cast<System::Int32>(static_cast<System::Byte>(250)));
	private: System::Drawing::Color black_card_color = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(23)),
		static_cast<System::Int32>(static_cast<System::Byte>(23)),
		static_cast<System::Int32>(static_cast<System::Byte>(23)));
	private: System::Windows::Forms::Button^ btn_return;







	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->background_cost_history = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btn_all_history = (gcnew System::Windows::Forms::Button());
			this->btn_return = (gcnew System::Windows::Forms::Button());
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btn_close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Font = (gcnew System::Drawing::Font(L"Candara", 14, System::Drawing::FontStyle::Bold));
			this->btn_close->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_close->Location = System::Drawing::Point(620, 0);
			this->btn_close->Margin = System::Windows::Forms::Padding(0);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(100, 40);
			this->btn_close->TabIndex = 0;
			this->btn_close->Text = L"⨉";
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &CostAllList::btn_close_Click);
			// 
			// background_cost_history
			// 
			this->background_cost_history->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->background_cost_history->Location = System::Drawing::Point(50, 37);
			this->background_cost_history->Name = L"background_cost_history";
			this->background_cost_history->Size = System::Drawing::Size(620, 963);
			this->background_cost_history->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel5->Controls->Add(this->btn_all_history);
			this->panel5->Location = System::Drawing::Point(50, 950);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(620, 50);
			this->panel5->TabIndex = 7;
			// 
			// btn_all_history
			// 
			this->btn_all_history->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_all_history->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_all_history->FlatAppearance->BorderSize = 0;
			this->btn_all_history->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_all_history->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_all_history->ForeColor = System::Drawing::Color::Transparent;
			this->btn_all_history->Location = System::Drawing::Point(267, 10);
			this->btn_all_history->Margin = System::Windows::Forms::Padding(0);
			this->btn_all_history->Name = L"btn_all_history";
			this->btn_all_history->Size = System::Drawing::Size(95, 31);
			this->btn_all_history->TabIndex = 7;
			this->btn_all_history->Text = L"All ->";
			this->btn_all_history->UseVisualStyleBackColor = false;
			// 
			// btn_return
			// 
			this->btn_return->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_return->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btn_return->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_return->FlatAppearance->BorderSize = 0;
			this->btn_return->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_return->Font = (gcnew System::Drawing::Font(L"Candara", 14, System::Drawing::FontStyle::Bold));
			this->btn_return->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_return->Location = System::Drawing::Point(520, 0);
			this->btn_return->Margin = System::Windows::Forms::Padding(0);
			this->btn_return->Name = L"btn_return";
			this->btn_return->Size = System::Drawing::Size(100, 40);
			this->btn_return->TabIndex = 8;
			this->btn_return->Text = L"<-";
			this->btn_return->UseVisualStyleBackColor = false;
			this->btn_return->Click += gcnew System::EventHandler(this, &CostAllList::btn_return_Click);
			// 
			// CostAllList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(720, 1000);
			this->Controls->Add(this->btn_return);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->background_cost_history);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CostAllList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"CostAllList";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &CostAllList::CostAllList_Load);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CostAllList_Load(System::Object^ sender, System::EventArgs^ e) {
		for (size_t i = 0; i < 7; i++)
		{
			Label^ temp_sum = gcnew Label();
			temp_sum->AutoSize = true;
			temp_sum->Font = (gcnew System::Drawing::Font(L"AIGDT", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			try
			{
				if (std::stod(decypt(CostHistoryList->GetValue(CostHistoryList->GetSize() - 1 - i).TransferSumGet())) < 0) {
					temp_sum->ForeColor = System::Drawing::Color::Red;
				}
				else {
					temp_sum->ForeColor = System::Drawing::Color::Transparent;
				}
			}
			catch (...)
			{
				temp_sum->ForeColor = System::Drawing::Color::Transparent;
			}
			temp_sum->Location = System::Drawing::Point(10, 19);
			temp_sum->Name = L"temp_sum";
			temp_sum->Size = System::Drawing::Size(117, 39);
			temp_sum->Text = gcnew System::String(
				decypt(CostHistoryList->GetValue(CostHistoryList->GetSize() - 1 - i).TransferSumGet()).c_str());
			temp_sum->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Controls->Add(temp_sum);

			Label^ temp_category = gcnew Label();
			temp_category->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			temp_category->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			temp_category->ForeColor = System::Drawing::Color::Transparent;
			temp_category->Name = L"temp_category";
			temp_category->Text = gcnew System::String(
				decypt(CostHistoryList->GetValue(CostHistoryList->GetSize() - 1 - i).CategoryGet()).c_str());
			temp_category->Size = System::Drawing::Size(300, 31);
			temp_category->Location = System::Drawing::Point(140, 5);
			temp_category->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			temp_category->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Controls->Add(temp_category);

			Label^ temp_date = gcnew Label();
			temp_date->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			temp_date->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			temp_date->ForeColor = System::Drawing::Color::Transparent;
			temp_date->Name = L"temp_date";
			temp_date->Text = gcnew System::String(
				decypt(CostHistoryList->GetValue(CostHistoryList->GetSize() - 1 - i).DateGet()).c_str());
			temp_date->Size = System::Drawing::Size(300, 31);
			temp_date->Location = System::Drawing::Point(140, 30);
			temp_date->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			temp_date->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Controls->Add(temp_date);

			Panel^ cost_temp_panel = gcnew Panel();
			cost_temp_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			cost_temp_panel->Location = System::Drawing::Point(46, 55 + 75 * i);
			cost_temp_panel->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			cost_temp_panel->Name = L"cost_temp_panel" + i.ToString();
			cost_temp_panel->Size = System::Drawing::Size(450, 65);
			cost_temp_panel->Controls->Add(temp_sum);
			cost_temp_panel->Controls->Add(temp_category);
			cost_temp_panel->Controls->Add(temp_date);
			this->Controls->Add(cost_temp_panel);
			this->Controls->SetChildIndex(cost_temp_panel, 1);
		}

	}

	
	private: std::string encypt(std::string input) {
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
	private: std::string decypt(std::string input) {
		const std::string numbers_count = "0123456789";
		const std::string alphabet_count = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for (size_t i = 0; i < input.length(); i++)
		{
			if (input[i] >= 48 && input[i] <= 57) {
				for (size_t j = 0; j < numbers_count.length(); j++)
				{
					if (input[i] == numbers_count[j]) {
						if (int(j) - 7 <= 0) {
							input[i] = numbers_count[(3 + int(j)) % 10];
						}
						else {
							input[i] = numbers_count[(j - 7) % 10];
						}
						break;
					}
				}
			}
			else if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)) {
				for (size_t j = 0; j < alphabet_count.length(); j++)
				{
					if (input[i] == alphabet_count[j]) {
						if (int(j) - 11 <= 0) {
							input[i] = alphabet_count[(41 + j) % 52];
						}
						else {
							input[i] = alphabet_count[(j - 11) % 52];
						}
						break;
					}
				}
			}
		}
		return input;
	}
	private: System::String^ LocalToString(const std::string toString) {
		return gcnew System::String(toString.c_str());
	}


	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btn_return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};

}

