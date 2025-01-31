#pragma once

//#include <msclr/marshal_cppstd.h>
#include "MyQueue.h"
#include "CostAllList.h"
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
	/// Сводка для MainBankForm
	/// </summary>
	public ref class MainBankForm : public System::Windows::Forms::Form
	{
	public:
		MainBankForm(void)
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
		~MainBankForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Panel^ card_panel;
	private: System::Windows::Forms::Label^ card_number;
	private: System::Windows::Forms::Label^ card_secret_number;

	private: System::Windows::Forms::Label^ card_date;

	private: System::Windows::Forms::Button^ btn_next_card;
	private: System::Windows::Forms::Panel^ background_card;
	private: System::Windows::Forms::Panel^ background_cost_history;



	private: System::Windows::Forms::Button^ btn_transaction;

	private: System::Windows::Forms::Button^ btn_receiving;


	private: System::Windows::Forms::Button^ btn_other;
	private: System::Windows::Forms::Button^ btn_top_costs;
	private: System::Windows::Forms::Button^ btn_cost_report;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_prev_card;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainBankForm::typeid));
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->card_panel = (gcnew System::Windows::Forms::Panel());
			this->card_secret_number = (gcnew System::Windows::Forms::Label());
			this->card_date = (gcnew System::Windows::Forms::Label());
			this->card_number = (gcnew System::Windows::Forms::Label());
			this->btn_next_card = (gcnew System::Windows::Forms::Button());
			this->background_card = (gcnew System::Windows::Forms::Panel());
			this->btn_prev_card = (gcnew System::Windows::Forms::Button());
			this->btn_other = (gcnew System::Windows::Forms::Button());
			this->btn_receiving = (gcnew System::Windows::Forms::Button());
			this->btn_transaction = (gcnew System::Windows::Forms::Button());
			this->background_cost_history = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_cost_report = (gcnew System::Windows::Forms::Button());
			this->btn_top_costs = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btn_all_history = (gcnew System::Windows::Forms::Button());
			this->card_panel->SuspendLayout();
			this->background_card->SuspendLayout();
			this->background_cost_history->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
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
			this->btn_close->Click += gcnew System::EventHandler(this, &MainBankForm::btn_close_Click);
			// 
			// card_panel
			// 
			this->card_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->card_panel->Controls->Add(this->card_secret_number);
			this->card_panel->Controls->Add(this->card_date);
			this->card_panel->Controls->Add(this->card_number);
			this->card_panel->Location = System::Drawing::Point(100, 60);
			this->card_panel->Name = L"card_panel";
			this->card_panel->Size = System::Drawing::Size(520, 270);
			this->card_panel->TabIndex = 1;
			// 
			// card_secret_number
			// 
			this->card_secret_number->AutoSize = true;
			this->card_secret_number->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->card_secret_number->ForeColor = System::Drawing::Color::Transparent;
			this->card_secret_number->Location = System::Drawing::Point(390, 201);
			this->card_secret_number->Name = L"card_secret_number";
			this->card_secret_number->Size = System::Drawing::Size(71, 38);
			this->card_secret_number->TabIndex = 2;
			this->card_secret_number->Text = L"000";
			this->card_secret_number->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// card_date
			// 
			this->card_date->AutoSize = true;
			this->card_date->Font = (gcnew System::Drawing::Font(L"Verdana", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->card_date->ForeColor = System::Drawing::Color::Transparent;
			this->card_date->Location = System::Drawing::Point(324, 120);
			this->card_date->Name = L"card_date";
			this->card_date->Size = System::Drawing::Size(176, 45);
			this->card_date->TabIndex = 1;
			this->card_date->Text = L"00 / 00";
			this->card_date->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// card_number
			// 
			this->card_number->AutoSize = true;
			this->card_number->Font = (gcnew System::Drawing::Font(L"Verdana", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->card_number->ForeColor = System::Drawing::Color::Transparent;
			this->card_number->Location = System::Drawing::Point(6, 42);
			this->card_number->Name = L"card_number";
			this->card_number->Size = System::Drawing::Size(475, 45);
			this->card_number->TabIndex = 0;
			this->card_number->Text = L"0000 0000 0000 0000";
			this->card_number->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_next_card
			// 
			this->btn_next_card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_next_card->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_next_card->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_next_card->FlatAppearance->BorderSize = 0;
			this->btn_next_card->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_next_card->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_next_card->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->btn_next_card->Location = System::Drawing::Point(645, 140);
			this->btn_next_card->Name = L"btn_next_card";
			this->btn_next_card->Size = System::Drawing::Size(55, 120);
			this->btn_next_card->TabIndex = 2;
			this->btn_next_card->Text = L"->";
			this->btn_next_card->UseVisualStyleBackColor = false;
			this->btn_next_card->Click += gcnew System::EventHandler(this, &MainBankForm::btn_next_card_Click);
			// 
			// background_card
			// 
			this->background_card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->background_card->Controls->Add(this->btn_prev_card);
			this->background_card->Controls->Add(this->btn_other);
			this->background_card->Controls->Add(this->btn_receiving);
			this->background_card->Controls->Add(this->btn_transaction);
			this->background_card->Location = System::Drawing::Point(0, 40);
			this->background_card->Name = L"background_card";
			this->background_card->Size = System::Drawing::Size(720, 370);
			this->background_card->TabIndex = 3;
			// 
			// btn_prev_card
			// 
			this->btn_prev_card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_prev_card->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_prev_card->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prev_card->FlatAppearance->BorderSize = 0;
			this->btn_prev_card->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prev_card->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_prev_card->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->btn_prev_card->Location = System::Drawing::Point(20, 100);
			this->btn_prev_card->Name = L"btn_prev_card";
			this->btn_prev_card->Size = System::Drawing::Size(55, 120);
			this->btn_prev_card->TabIndex = 4;
			this->btn_prev_card->Text = L"<-";
			this->btn_prev_card->UseVisualStyleBackColor = false;
			this->btn_prev_card->Visible = false;
			this->btn_prev_card->Click += gcnew System::EventHandler(this, &MainBankForm::btn_prev_card_Click);
			// 
			// btn_other
			// 
			this->btn_other->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_other->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_other->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_other->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_other->FlatAppearance->BorderSize = 0;
			this->btn_other->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_other->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_other->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_other.Image")));
			this->btn_other->Location = System::Drawing::Point(470, 296);
			this->btn_other->Name = L"btn_other";
			this->btn_other->Size = System::Drawing::Size(140, 65);
			this->btn_other->TabIndex = 2;
			this->btn_other->UseVisualStyleBackColor = false;
			// 
			// btn_receiving
			// 
			this->btn_receiving->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_receiving->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_receiving->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_receiving->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_receiving->FlatAppearance->BorderSize = 0;
			this->btn_receiving->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_receiving->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_receiving.Image")));
			this->btn_receiving->Location = System::Drawing::Point(290, 296);
			this->btn_receiving->Name = L"btn_receiving";
			this->btn_receiving->Size = System::Drawing::Size(140, 65);
			this->btn_receiving->TabIndex = 1;
			this->btn_receiving->UseVisualStyleBackColor = false;
			// 
			// btn_transaction
			// 
			this->btn_transaction->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_transaction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_transaction->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_transaction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_transaction->FlatAppearance->BorderSize = 0;
			this->btn_transaction->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_transaction->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_transaction.Image")));
			this->btn_transaction->Location = System::Drawing::Point(110, 296);
			this->btn_transaction->Name = L"btn_transaction";
			this->btn_transaction->Size = System::Drawing::Size(140, 65);
			this->btn_transaction->TabIndex = 0;
			this->btn_transaction->UseVisualStyleBackColor = false;
			// 
			// background_cost_history
			// 
			this->background_cost_history->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->background_cost_history->Controls->Add(this->panel4);
			this->background_cost_history->Controls->Add(this->panel3);
			this->background_cost_history->Controls->Add(this->btn_cost_report);
			this->background_cost_history->Controls->Add(this->btn_top_costs);
			this->background_cost_history->Location = System::Drawing::Point(50, 420);
			this->background_cost_history->Name = L"background_cost_history";
			this->background_cost_history->Size = System::Drawing::Size(620, 580);
			this->background_cost_history->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Location = System::Drawing::Point(10, 195);
			this->panel4->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(600, 80);
			this->panel4->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Ebrima", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(399, 10);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(161, 31);
			this->label8->TabIndex = 7;
			this->label8->Text = L"replenishment";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Ebrima", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label6->Location = System::Drawing::Point(464, 41);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"00.00.00";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"AIGDT", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->label7->Location = System::Drawing::Point(20, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 39);
			this->label7->TabIndex = 3;
			this->label7->Text = L"-1000";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(10, 105);
			this->panel3->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(600, 80);
			this->panel3->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Ebrima", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label5->Location = System::Drawing::Point(464, 41);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 31);
			this->label5->TabIndex = 5;
			this->label5->Text = L"00.00.00";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"AIGDT", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(20, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 39);
			this->label3->TabIndex = 3;
			this->label3->Text = L"+1000";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Ebrima", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(54, 10);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(512, 31);
			this->label4->TabIndex = 4;
			this->label4->Text = L"foods category";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_cost_report
			// 
			this->btn_cost_report->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_cost_report->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cost_report->FlatAppearance->BorderSize = 0;
			this->btn_cost_report->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cost_report->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_cost_report->ForeColor = System::Drawing::Color::Transparent;
			this->btn_cost_report->Location = System::Drawing::Point(10, 20);
			this->btn_cost_report->Margin = System::Windows::Forms::Padding(0);
			this->btn_cost_report->Name = L"btn_cost_report";
			this->btn_cost_report->Size = System::Drawing::Size(295, 75);
			this->btn_cost_report->TabIndex = 1;
			this->btn_cost_report->Text = L"Сost report ->";
			this->btn_cost_report->UseVisualStyleBackColor = false;
			// 
			// btn_top_costs
			// 
			this->btn_top_costs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_top_costs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_top_costs->FlatAppearance->BorderSize = 0;
			this->btn_top_costs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_top_costs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_top_costs->ForeColor = System::Drawing::Color::Transparent;
			this->btn_top_costs->Location = System::Drawing::Point(315, 20);
			this->btn_top_costs->Margin = System::Windows::Forms::Padding(0);
			this->btn_top_costs->Name = L"btn_top_costs";
			this->btn_top_costs->Size = System::Drawing::Size(295, 75);
			this->btn_top_costs->TabIndex = 0;
			this->btn_top_costs->Text = L"Top costs ->";
			this->btn_top_costs->UseVisualStyleBackColor = false;
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
			this->btn_all_history->Location = System::Drawing::Point(515, 10);
			this->btn_all_history->Margin = System::Windows::Forms::Padding(0);
			this->btn_all_history->Name = L"btn_all_history";
			this->btn_all_history->Size = System::Drawing::Size(95, 31);
			this->btn_all_history->TabIndex = 7;
			this->btn_all_history->Text = L"All ->";
			this->btn_all_history->UseVisualStyleBackColor = false;
			this->btn_all_history->Click += gcnew System::EventHandler(this, &MainBankForm::btn_all_history_Click);
			// 
			// MainBankForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(720, 1000);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->btn_next_card);
			this->Controls->Add(this->card_panel);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->background_card);
			this->Controls->Add(this->background_cost_history);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainBankForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainBankForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &MainBankForm::MainBankForm_Load);
			this->card_panel->ResumeLayout(false);
			this->card_panel->PerformLayout();
			this->background_card->ResumeLayout(false);
			this->background_cost_history->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainBankForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (CreditCardList->GetSize() != 0) {
			CardChanging();
		}
		if (CreditCardList->GetSize() <= 0) {
			this->btn_next_card->Visible = false;
		}

		for (size_t i = 0; i < CostHistoryList->GetSize(); i++)
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
				decypt(CostHistoryList->GetValue(CostHistoryList->GetSize()-1-i).TransferSumGet()).c_str());
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
			cost_temp_panel->Location = System::Drawing::Point(46, 425 + 75 * i);
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

	private: System::Void CardChanging() {
		this->card_number->Text = LocalToString(decypt(CreditCardList->GetValue(card_switch).GetCardNumber()));
		this->card_date->Text = LocalToString(decypt(CreditCardList->GetValue(card_switch).GetCardDate()));
		this->card_secret_number->Text = LocalToString(decypt(CreditCardList->GetValue(card_switch).GetCardSecretNumber()));
		if (CreditCardList->GetValue(card_switch).GetCardColor() == "black"
			&& this->card_number->ForeColor == black_card_color)
		{
			this->card_panel->BackColor = black_card_color;
			this->card_number->ForeColor = Color::Transparent;
			this->card_date->ForeColor = Color::Transparent;
			this->card_secret_number->ForeColor = Color::Transparent;
		}
		else if (CreditCardList->GetValue(card_switch).GetCardColor() == "white"
			&& this->card_number->ForeColor == Color::Transparent)
		{
			this->card_panel->BackColor = white_card_color;
			this->card_number->ForeColor = black_card_color;
			this->card_date->ForeColor = black_card_color;
			this->card_secret_number->ForeColor = black_card_color;

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
	private: System::Void btn_next_card_Click(System::Object^ sender, System::EventArgs^ e) {
		card_switch++;
		CardChanging();
		this->btn_prev_card->Visible = true;
		if (card_switch >= CreditCardList->GetSize()-1) {
			this->btn_next_card->Visible = false;
		}
	}
	private: System::Void btn_prev_card_Click(System::Object^ sender, System::EventArgs^ e) {
		card_switch--;
		CardChanging();
		if (card_switch <= 0) {
			this->btn_prev_card->Visible = false;
		}
		this->btn_next_card->Visible = true;
	}
	

	private: System::Void btn_all_history_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CostAllList^ newForm = gcnew CostAllList();
		newForm->ShowDialog();
		if (Application::OpenForms->Count > 0) {
			this->Show();
		}
	}
};

}

