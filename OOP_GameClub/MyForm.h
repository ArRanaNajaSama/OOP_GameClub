#pragma once

#include "DBEmulation.h"

namespace OOP_GameClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  gamesNumberL;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  membersNumberL;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  participantNumberL;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  tourNumberL;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::TextBox^  memberSurnameTB;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  memberNameTB;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::Label^  label11;







	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tourNameTB;




	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  gameNameTB;
	private: System::Windows::Forms::ComboBox^  selectGameCMB;



	private: System::Windows::Forms::Button^  addTournamentBTN;
	private: System::Windows::Forms::Button^  addMemberBTN;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  selectTourCMB;

	private: System::Windows::Forms::Button^  addGameBTN;
	private: System::Windows::Forms::Button^  deleteBtn;
	private: System::Windows::Forms::ListView^  GameLV;
	private: System::Windows::Forms::ListView^  MemberLV;
	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  gb6;
	private: System::Windows::Forms::ListView^  TourLV;



	private: DBEmulation^ dbData;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->gamesNumberL = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->membersNumberL = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->participantNumberL = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->tourNumberL = (gcnew System::Windows::Forms::Label());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->memberSurnameTB = (gcnew System::Windows::Forms::TextBox());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->memberNameTB = (gcnew System::Windows::Forms::TextBox());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				 this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
				 this->addGameBTN = (gcnew System::Windows::Forms::Button());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->gameNameTB = (gcnew System::Windows::Forms::TextBox());
				 this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
				 this->selectGameCMB = (gcnew System::Windows::Forms::ComboBox());
				 this->addTournamentBTN = (gcnew System::Windows::Forms::Button());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->tourNameTB = (gcnew System::Windows::Forms::TextBox());
				 this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
				 this->addMemberBTN = (gcnew System::Windows::Forms::Button());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->selectTourCMB = (gcnew System::Windows::Forms::ComboBox());
				 this->saveBtn = (gcnew System::Windows::Forms::Button());
				 this->deleteBtn = (gcnew System::Windows::Forms::Button());
				 this->GameLV = (gcnew System::Windows::Forms::ListView());
				 this->MemberLV = (gcnew System::Windows::Forms::ListView());
				 this->label = (gcnew System::Windows::Forms::Label());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->label12 = (gcnew System::Windows::Forms::Label());
				 this->gb6 = (gcnew System::Windows::Forms::GroupBox());
				 this->TourLV = (gcnew System::Windows::Forms::ListView());
				 this->groupBox1->SuspendLayout();
				 this->groupBox2->SuspendLayout();
				 this->groupBox6->SuspendLayout();
				 this->groupBox4->SuspendLayout();
				 this->groupBox3->SuspendLayout();
				 this->gb6->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(48, 21);
				 this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(95, 17);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Games in DB:";
				 // 
				 // gamesNumberL
				 // 
				 this->gamesNumberL->AutoSize = true;
				 this->gamesNumberL->Location = System::Drawing::Point(152, 21);
				 this->gamesNumberL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->gamesNumberL->Name = L"gamesNumberL";
				 this->gamesNumberL->Size = System::Drawing::Size(16, 17);
				 this->gamesNumberL->TabIndex = 1;
				 this->gamesNumberL->Text = L"0";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(35, 50);
				 this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(108, 17);
				 this->label2->TabIndex = 0;
				 this->label2->Text = L"Members in DB:";
				 // 
				 // membersNumberL
				 // 
				 this->membersNumberL->AutoSize = true;
				 this->membersNumberL->Location = System::Drawing::Point(152, 50);
				 this->membersNumberL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->membersNumberL->Name = L"membersNumberL";
				 this->membersNumberL->Size = System::Drawing::Size(16, 17);
				 this->membersNumberL->TabIndex = 1;
				 this->membersNumberL->Text = L"0";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(19, 80);
				 this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(124, 17);
				 this->label4->TabIndex = 0;
				 this->label4->Text = L"Participants in DB:";
				 // 
				 // participantNumberL
				 // 
				 this->participantNumberL->AutoSize = true;
				 this->participantNumberL->Location = System::Drawing::Point(152, 80);
				 this->participantNumberL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->participantNumberL->Name = L"participantNumberL";
				 this->participantNumberL->Size = System::Drawing::Size(16, 17);
				 this->participantNumberL->TabIndex = 1;
				 this->participantNumberL->Text = L"0";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(9, 108);
				 this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(134, 17);
				 this->label6->TabIndex = 0;
				 this->label6->Text = L"Tournaments in DB:";
				 // 
				 // tourNumberL
				 // 
				 this->tourNumberL->AutoSize = true;
				 this->tourNumberL->Location = System::Drawing::Point(152, 108);
				 this->tourNumberL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->tourNumberL->Name = L"tourNumberL";
				 this->tourNumberL->Size = System::Drawing::Size(16, 17);
				 this->tourNumberL->TabIndex = 1;
				 this->tourNumberL->Text = L"0";
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->label1);
				 this->groupBox1->Controls->Add(this->tourNumberL);
				 this->groupBox1->Controls->Add(this->gamesNumberL);
				 this->groupBox1->Controls->Add(this->label6);
				 this->groupBox1->Controls->Add(this->label2);
				 this->groupBox1->Controls->Add(this->participantNumberL);
				 this->groupBox1->Controls->Add(this->membersNumberL);
				 this->groupBox1->Controls->Add(this->label4);
				 this->groupBox1->Location = System::Drawing::Point(611, 15);
				 this->groupBox1->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox1->Size = System::Drawing::Size(205, 144);
				 this->groupBox1->TabIndex = 2;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"DB status";
				 // 
				 // memberSurnameTB
				 // 
				 this->memberSurnameTB->Location = System::Drawing::Point(8, 91);
				 this->memberSurnameTB->Margin = System::Windows::Forms::Padding(4);
				 this->memberSurnameTB->Name = L"memberSurnameTB";
				 this->memberSurnameTB->Size = System::Drawing::Size(136, 22);
				 this->memberSurnameTB->TabIndex = 3;
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(9, 70);
				 this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(65, 17);
				 this->label7->TabIndex = 2;
				 this->label7->Text = L"Surname";
				 // 
				 // memberNameTB
				 // 
				 this->memberNameTB->Location = System::Drawing::Point(8, 43);
				 this->memberNameTB->Margin = System::Windows::Forms::Padding(4);
				 this->memberNameTB->Name = L"memberNameTB";
				 this->memberNameTB->Size = System::Drawing::Size(136, 22);
				 this->memberNameTB->TabIndex = 3;
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(9, 22);
				 this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(45, 17);
				 this->label5->TabIndex = 2;
				 this->label5->Text = L"Name";
				 // 
				 // groupBox2
				 // 
				 this->groupBox2->Controls->Add(this->groupBox6);
				 this->groupBox2->Controls->Add(this->groupBox4);
				 this->groupBox2->Controls->Add(this->groupBox3);
				 this->groupBox2->Location = System::Drawing::Point(16, 15);
				 this->groupBox2->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox2->Name = L"groupBox2";
				 this->groupBox2->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox2->Size = System::Drawing::Size(587, 265);
				 this->groupBox2->TabIndex = 0;
				 this->groupBox2->TabStop = false;
				 this->groupBox2->Text = L"New";
				 // 
				 // groupBox6
				 // 
				 this->groupBox6->Controls->Add(this->addGameBTN);
				 this->groupBox6->Controls->Add(this->label9);
				 this->groupBox6->Controls->Add(this->gameNameTB);
				 this->groupBox6->Location = System::Drawing::Point(200, 23);
				 this->groupBox6->Name = L"groupBox6";
				 this->groupBox6->Size = System::Drawing::Size(162, 220);
				 this->groupBox6->TabIndex = 5;
				 this->groupBox6->TabStop = false;
				 this->groupBox6->Text = L"Game";
				 // 
				 // addGameBTN
				 // 
				 this->addGameBTN->Location = System::Drawing::Point(81, 190);
				 this->addGameBTN->Name = L"addGameBTN";
				 this->addGameBTN->Size = System::Drawing::Size(75, 23);
				 this->addGameBTN->TabIndex = 8;
				 this->addGameBTN->Text = L"Save";
				 this->addGameBTN->UseVisualStyleBackColor = true;
				 this->addGameBTN->Click += gcnew System::EventHandler(this, &MyForm::addGameBTN_Click);
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Location = System::Drawing::Point(7, 23);
				 this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(45, 17);
				 this->label9->TabIndex = 3;
				 this->label9->Text = L"Name";
				 // 
				 // gameNameTB
				 // 
				 this->gameNameTB->Location = System::Drawing::Point(7, 43);
				 this->gameNameTB->Name = L"gameNameTB";
				 this->gameNameTB->Size = System::Drawing::Size(149, 22);
				 this->gameNameTB->TabIndex = 0;
				 // 
				 // groupBox4
				 // 
				 this->groupBox4->Controls->Add(this->selectGameCMB);
				 this->groupBox4->Controls->Add(this->addTournamentBTN);
				 this->groupBox4->Controls->Add(this->label11);
				 this->groupBox4->Controls->Add(this->label3);
				 this->groupBox4->Controls->Add(this->tourNameTB);
				 this->groupBox4->Location = System::Drawing::Point(407, 23);
				 this->groupBox4->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox4->Name = L"groupBox4";
				 this->groupBox4->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox4->Size = System::Drawing::Size(153, 220);
				 this->groupBox4->TabIndex = 4;
				 this->groupBox4->TabStop = false;
				 this->groupBox4->Text = L"Tournament";
				 // 
				 // selectGameCMB
				 // 
				 this->selectGameCMB->FormattingEnabled = true;
				 this->selectGameCMB->Location = System::Drawing::Point(7, 91);
				 this->selectGameCMB->Name = L"selectGameCMB";
				 this->selectGameCMB->Size = System::Drawing::Size(132, 24);
				 this->selectGameCMB->TabIndex = 7;
				 this->selectGameCMB->Text = L"Select Game";
				 // 
				 // addTournamentBTN
				 // 
				 this->addTournamentBTN->Location = System::Drawing::Point(65, 190);
				 this->addTournamentBTN->Name = L"addTournamentBTN";
				 this->addTournamentBTN->Size = System::Drawing::Size(75, 23);
				 this->addTournamentBTN->TabIndex = 6;
				 this->addTournamentBTN->Text = L"Save";
				 this->addTournamentBTN->UseVisualStyleBackColor = true;
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->Location = System::Drawing::Point(8, 65);
				 this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(46, 17);
				 this->label11->TabIndex = 2;
				 this->label11->Text = L"Game";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(12, 22);
				 this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(45, 17);
				 this->label3->TabIndex = 2;
				 this->label3->Text = L"Name";
				 // 
				 // tourNameTB
				 // 
				 this->tourNameTB->Location = System::Drawing::Point(8, 42);
				 this->tourNameTB->Margin = System::Windows::Forms::Padding(4);
				 this->tourNameTB->Name = L"tourNameTB";
				 this->tourNameTB->Size = System::Drawing::Size(132, 22);
				 this->tourNameTB->TabIndex = 3;
				 // 
				 // groupBox3
				 // 
				 this->groupBox3->Controls->Add(this->addMemberBTN);
				 this->groupBox3->Controls->Add(this->label8);
				 this->groupBox3->Controls->Add(this->selectTourCMB);
				 this->groupBox3->Controls->Add(this->memberSurnameTB);
				 this->groupBox3->Controls->Add(this->label7);
				 this->groupBox3->Controls->Add(this->label5);
				 this->groupBox3->Controls->Add(this->memberNameTB);
				 this->groupBox3->Location = System::Drawing::Point(8, 23);
				 this->groupBox3->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox3->Name = L"groupBox3";
				 this->groupBox3->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox3->Size = System::Drawing::Size(151, 220);
				 this->groupBox3->TabIndex = 4;
				 this->groupBox3->TabStop = false;
				 this->groupBox3->Text = L"Member";
				 // 
				 // addMemberBTN
				 // 
				 this->addMemberBTN->Location = System::Drawing::Point(69, 190);
				 this->addMemberBTN->Name = L"addMemberBTN";
				 this->addMemberBTN->Size = System::Drawing::Size(75, 23);
				 this->addMemberBTN->TabIndex = 7;
				 this->addMemberBTN->Text = L"Save";
				 this->addMemberBTN->UseVisualStyleBackColor = true;
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Location = System::Drawing::Point(9, 128);
				 this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(128, 17);
				 this->label8->TabIndex = 5;
				 this->label8->Text = L"Select Tournament";
				 this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 // 
				 // selectTourCMB
				 // 
				 this->selectTourCMB->FormattingEnabled = true;
				 this->selectTourCMB->Location = System::Drawing::Point(8, 148);
				 this->selectTourCMB->Name = L"selectTourCMB";
				 this->selectTourCMB->Size = System::Drawing::Size(136, 24);
				 this->selectTourCMB->TabIndex = 4;
				 this->selectTourCMB->Text = L"Select Tournament";
				 // 
				 // saveBtn
				 // 
				 this->saveBtn->Location = System::Drawing::Point(662, 183);
				 this->saveBtn->Margin = System::Windows::Forms::Padding(4);
				 this->saveBtn->Name = L"saveBtn";
				 this->saveBtn->Size = System::Drawing::Size(100, 28);
				 this->saveBtn->TabIndex = 0;
				 this->saveBtn->Text = L"Save";
				 this->saveBtn->UseVisualStyleBackColor = true;
				 this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
				 // 
				 // deleteBtn
				 // 
				 this->deleteBtn->Location = System::Drawing::Point(682, 206);
				 this->deleteBtn->Margin = System::Windows::Forms::Padding(4);
				 this->deleteBtn->Name = L"deleteBtn";
				 this->deleteBtn->Size = System::Drawing::Size(100, 28);
				 this->deleteBtn->TabIndex = 0;
				 this->deleteBtn->Text = L"Delete";
				 this->deleteBtn->UseVisualStyleBackColor = true;
				 this->deleteBtn->Click += gcnew System::EventHandler(this, &MyForm::deleteBtn_Click);
				 // 
				 // GameLV
				 // 
				 this->GameLV->Location = System::Drawing::Point(281, 41);
				 this->GameLV->Name = L"GameLV";
				 this->GameLV->Size = System::Drawing::Size(245, 97);
				 this->GameLV->TabIndex = 1;
				 this->GameLV->UseCompatibleStateImageBehavior = false;
				 this->GameLV->View = System::Windows::Forms::View::List;
				 // 
				 // MemberLV
				 // 
				 this->MemberLV->Location = System::Drawing::Point(537, 41);
				 this->MemberLV->Name = L"MemberLV";
				 this->MemberLV->Size = System::Drawing::Size(245, 97);
				 this->MemberLV->TabIndex = 2;
				 this->MemberLV->UseCompatibleStateImageBehavior = false;
				 this->MemberLV->View = System::Windows::Forms::View::List;
				 // 
				 // label
				 // 
				 this->label->AutoSize = true;
				 this->label->Location = System::Drawing::Point(17, 21);
				 this->label->Name = L"label";
				 this->label->Size = System::Drawing::Size(115, 17);
				 this->label->TabIndex = 3;
				 this->label->Text = L"Tournament List:";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(278, 19);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(127, 17);
				 this->label10->TabIndex = 4;
				 this->label10->Text = L"Tournament Game";
				 // 
				 // label12
				 // 
				 this->label12->AutoSize = true;
				 this->label12->Location = System::Drawing::Point(534, 21);
				 this->label12->Name = L"label12";
				 this->label12->Size = System::Drawing::Size(86, 17);
				 this->label12->TabIndex = 5;
				 this->label12->Text = L"Participants:";
				 // 
				 // gb6
				 // 
				 this->gb6->Controls->Add(this->TourLV);
				 this->gb6->Controls->Add(this->label12);
				 this->gb6->Controls->Add(this->label10);
				 this->gb6->Controls->Add(this->label);
				 this->gb6->Controls->Add(this->MemberLV);
				 this->gb6->Controls->Add(this->GameLV);
				 this->gb6->Controls->Add(this->deleteBtn);
				 this->gb6->Location = System::Drawing::Point(16, 289);
				 this->gb6->Margin = System::Windows::Forms::Padding(4);
				 this->gb6->Name = L"gb6";
				 this->gb6->Padding = System::Windows::Forms::Padding(4);
				 this->gb6->Size = System::Drawing::Size(800, 242);
				 this->gb6->TabIndex = 4;
				 this->gb6->TabStop = false;
				 this->gb6->Text = L"Information";
				 // 
				 // TourLV
				 // 
				 this->TourLV->Location = System::Drawing::Point(20, 41);
				 this->TourLV->Name = L"TourLV";
				 this->TourLV->Size = System::Drawing::Size(245, 97);
				 this->TourLV->Sorting = System::Windows::Forms::SortOrder::Ascending;
				 this->TourLV->TabIndex = 0;
				 this->TourLV->UseCompatibleStateImageBehavior = false;
				 this->TourLV->View = System::Windows::Forms::View::List;
				 this->TourLV->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::TourLV_SelectedIndexChanged);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(832, 544);
				 this->Controls->Add(this->groupBox2);
				 this->Controls->Add(this->groupBox1);
				 this->Controls->Add(this->saveBtn);
				 this->Controls->Add(this->gb6);
				 this->Margin = System::Windows::Forms::Padding(4);
				 this->Name = L"MyForm";
				 this->Text = L"Game Club";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->groupBox2->ResumeLayout(false);
				 this->groupBox6->ResumeLayout(false);
				 this->groupBox6->PerformLayout();
				 this->groupBox4->ResumeLayout(false);
				 this->groupBox4->PerformLayout();
				 this->groupBox3->ResumeLayout(false);
				 this->groupBox3->PerformLayout();
				 this->gb6->ResumeLayout(false);
				 this->gb6->PerformLayout();
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private: System::Void init() {
		Game^ g1 = gcnew Game("Game1");
		dbData->AddNewItem(g1);
		Game^ g2 = gcnew Game("Game2");
		dbData->AddNewItem(g2);
		Member^ m1 = gcnew Member("Pevlik", "Morozov");
		dbData->AddNewItem(m1);
		Tournament^ t1 = gcnew Tournament("Tournament1", g1->GetId());
		dbData->AddNewItem(t1);
		Participant^ p1 = gcnew Participant(t1->GetId(), m1->GetId());
		dbData->AddNewItem(p1);

		dbData->Save();
	}

	private: System::Void updateDBStatus() {
		gamesNumberL->Text = dbData->GetGameItems()->Count.ToString();
		participantNumberL->Text = dbData->GetParticipantItems()->Count.ToString();
		membersNumberL->Text = dbData->GetMemberItems()->Count.ToString();
		tourNumberL->Text = dbData->GetTournamentItems()->Count.ToString();
		fillTourList();
	}

	private: System::Void fillTourList() {
		ListView::ListViewItemCollection^ TourCollection = TourLV->Items;
		TourCollection->Clear();
		for each(KeyValuePair<System::Guid, Tournament^>^ item in dbData->GetTournamentItems())
		{
			TourCollection->Add(item->Value->GetName(), item->Key.ToString());
		}
	}


	private: System::Void fillGameList() {
		ListView::ListViewItemCollection^ GameCollection = GameLV->Items;
		GameCollection->Clear();
		for each (KeyValuePair<Guid, Game^>^ item in dbData->GetGameItems())
		{
			GameCollection->Add(item->Value->GetName(), item->Key.ToString());
		}
	}

	private: System::Void fillMemberList() {
		ListView::ListViewItemCollection^ MemberCollection = MemberLV->Items;
		MemberCollection->Clear();
		for each (KeyValuePair<Guid, Member^>^ item in dbData->GetMemberItems())
		{
			MemberCollection->Add(item->Value->GetName() + " " + item->Value->GetSurname(), item->Key.ToString());
		}
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		dbData = gcnew DBEmulation();
		//init();
		dbData->Load();
		updateDBStatus();
	}

	
	// Game Table: F for separate save of the new game.
	private: System::Void addGameBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		if ()

	}
	private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		if (memberNameTB->Text == ""
			|| memberSurnameTB->Text == ""
			|| tourNameTB->Text == ""
			|| selectGameCMB->Text == "") {
			MessageBox::Show("Please fill in all required fields");
			return;
		}

		Game^ g1 = gcnew Game(selectGameCMB->Text);
		dbData->AddNewItem(g1);
		Member^ m1 = gcnew Member(memberNameTB->Text, memberSurnameTB->Text);
		dbData->AddNewItem(m1);
		Tournament^ t1 = gcnew Tournament(tourNameTB->Text, g1->GetId());
		dbData->AddNewItem(t1);
		Participant^ p1 = gcnew Participant(t1->GetId(), m1->GetId());
		dbData->AddNewItem(p1);

		dbData->Save();
		updateDBStatus();
	}

	private: System::Void deleteBtn_Click(System::Object^  sender, System::EventArgs^  e) {

		if (TourLV->SelectedItems->Count == 0) {
			MessageBox::Show("Please select tournament to delete");
			return;
		}

		for each (ListViewItem^ item in TourLV->SelectedItems) {
			dbData->RemoveItem(Guid(item->ImageKey));
		}

		dbData->Save();
		updateDBStatus();
	}


	private: System::Void TourLV_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		for each (ListViewItem^ item in TourLV->SelectedItems) {
			Guid Id = Guid(item->ImageKey);

			ListView::ListViewItemCollection^ GameCollection = GameLV->Items;
			GameCollection->Clear();
			GameCollection->Add(dbData->GetGameItems()[dbData->GetTournamentItems()[Id]->GetGameId()]->GetName(),
				dbData->GetTournamentItems()[Id]->GetGameId().ToString());

			ListView::ListViewItemCollection^ MemberCollection = MemberLV->Items;
			MemberCollection->Clear();
			List<Guid>^ memberList = dbData->GetMembersByTournament(Id);
			for each (Guid item in memberList)
			{
				MemberCollection->Add(dbData->GetMemberItems()[item]->GetName() + " " + dbData->GetMemberItems()[item]->GetSurname(), item.ToString());
			}
		}
	}


};
}
