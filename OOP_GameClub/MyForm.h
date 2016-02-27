#pragma once

#include "DBEmulation.h"

namespace OOP_GameClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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








	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  tourGameNameTB;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tourNameTB;



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
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
				 this->saveBtn = (gcnew System::Windows::Forms::Button());
				 this->tourGameNameTB = (gcnew System::Windows::Forms::TextBox());
				 this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
				 this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				 this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->tourNameTB = (gcnew System::Windows::Forms::TextBox());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->groupBox1->SuspendLayout();
				 this->groupBox2->SuspendLayout();
				 this->groupBox3->SuspendLayout();
				 this->groupBox4->SuspendLayout();
				 this->groupBox5->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(36, 17);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(72, 13);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Games in DB:";
				 // 
				 // gamesNumberL
				 // 
				 this->gamesNumberL->AutoSize = true;
				 this->gamesNumberL->Location = System::Drawing::Point(114, 17);
				 this->gamesNumberL->Name = L"gamesNumberL";
				 this->gamesNumberL->Size = System::Drawing::Size(13, 13);
				 this->gamesNumberL->TabIndex = 1;
				 this->gamesNumberL->Text = L"0";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(26, 41);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(82, 13);
				 this->label2->TabIndex = 0;
				 this->label2->Text = L"Members in DB:";
				 // 
				 // membersNumberL
				 // 
				 this->membersNumberL->AutoSize = true;
				 this->membersNumberL->Location = System::Drawing::Point(114, 41);
				 this->membersNumberL->Name = L"membersNumberL";
				 this->membersNumberL->Size = System::Drawing::Size(13, 13);
				 this->membersNumberL->TabIndex = 1;
				 this->membersNumberL->Text = L"0";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(14, 65);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(94, 13);
				 this->label4->TabIndex = 0;
				 this->label4->Text = L"Participants in DB:";
				 // 
				 // participantNumberL
				 // 
				 this->participantNumberL->AutoSize = true;
				 this->participantNumberL->Location = System::Drawing::Point(114, 65);
				 this->participantNumberL->Name = L"participantNumberL";
				 this->participantNumberL->Size = System::Drawing::Size(13, 13);
				 this->participantNumberL->TabIndex = 1;
				 this->participantNumberL->Text = L"0";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(7, 88);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(101, 13);
				 this->label6->TabIndex = 0;
				 this->label6->Text = L"Tournaments in DB:";
				 // 
				 // tourNumberL
				 // 
				 this->tourNumberL->AutoSize = true;
				 this->tourNumberL->Location = System::Drawing::Point(114, 88);
				 this->tourNumberL->Name = L"tourNumberL";
				 this->tourNumberL->Size = System::Drawing::Size(13, 13);
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
				 this->groupBox1->Location = System::Drawing::Point(458, 12);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(154, 117);
				 this->groupBox1->TabIndex = 2;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"DB status";
				 // 
				 // memberSurnameTB
				 // 
				 this->memberSurnameTB->Location = System::Drawing::Point(6, 74);
				 this->memberSurnameTB->Name = L"memberSurnameTB";
				 this->memberSurnameTB->Size = System::Drawing::Size(100, 20);
				 this->memberSurnameTB->TabIndex = 3;
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(9, 58);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(49, 13);
				 this->label7->TabIndex = 2;
				 this->label7->Text = L"Surname";
				 // 
				 // memberNameTB
				 // 
				 this->memberNameTB->Location = System::Drawing::Point(4, 34);
				 this->memberNameTB->Name = L"memberNameTB";
				 this->memberNameTB->Size = System::Drawing::Size(100, 20);
				 this->memberNameTB->TabIndex = 3;
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(7, 18);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(35, 13);
				 this->label5->TabIndex = 2;
				 this->label5->Text = L"Name";
				 // 
				 // groupBox2
				 // 
				 this->groupBox2->Controls->Add(this->groupBox4);
				 this->groupBox2->Controls->Add(this->label10);
				 this->groupBox2->Controls->Add(this->groupBox3);
				 this->groupBox2->Controls->Add(this->saveBtn);
				 this->groupBox2->Location = System::Drawing::Point(12, 12);
				 this->groupBox2->Name = L"groupBox2";
				 this->groupBox2->Size = System::Drawing::Size(275, 161);
				 this->groupBox2->TabIndex = 0;
				 this->groupBox2->TabStop = false;
				 this->groupBox2->Text = L"Add new player";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(125, 65);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(16, 13);
				 this->label10->TabIndex = 0;
				 this->label10->Text = L"to";
				 // 
				 // groupBox3
				 // 
				 this->groupBox3->Controls->Add(this->memberSurnameTB);
				 this->groupBox3->Controls->Add(this->label7);
				 this->groupBox3->Controls->Add(this->label5);
				 this->groupBox3->Controls->Add(this->memberNameTB);
				 this->groupBox3->Location = System::Drawing::Point(6, 19);
				 this->groupBox3->Name = L"groupBox3";
				 this->groupBox3->Size = System::Drawing::Size(113, 100);
				 this->groupBox3->TabIndex = 4;
				 this->groupBox3->TabStop = false;
				 this->groupBox3->Text = L"Member";
				 // 
				 // saveBtn
				 // 
				 this->saveBtn->Location = System::Drawing::Point(187, 125);
				 this->saveBtn->Name = L"saveBtn";
				 this->saveBtn->Size = System::Drawing::Size(75, 23);
				 this->saveBtn->TabIndex = 0;
				 this->saveBtn->Text = L"Save";
				 this->saveBtn->UseVisualStyleBackColor = true;
				 this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
				 // 
				 // tourGameNameTB
				 // 
				 this->tourGameNameTB->Location = System::Drawing::Point(6, 74);
				 this->tourGameNameTB->Name = L"tourGameNameTB";
				 this->tourGameNameTB->Size = System::Drawing::Size(100, 20);
				 this->tourGameNameTB->TabIndex = 1;
				 // 
				 // groupBox4
				 // 
				 this->groupBox4->Controls->Add(this->tourGameNameTB);
				 this->groupBox4->Controls->Add(this->label11);
				 this->groupBox4->Controls->Add(this->label3);
				 this->groupBox4->Controls->Add(this->tourNameTB);
				 this->groupBox4->Location = System::Drawing::Point(147, 19);
				 this->groupBox4->Name = L"groupBox4";
				 this->groupBox4->Size = System::Drawing::Size(115, 100);
				 this->groupBox4->TabIndex = 4;
				 this->groupBox4->TabStop = false;
				 this->groupBox4->Text = L"Tournament";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->Location = System::Drawing::Point(6, 53);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(35, 13);
				 this->label11->TabIndex = 2;
				 this->label11->Text = L"Game";
				 // 
				 // groupBox5
				 // 
				 this->groupBox5->Controls->Add(this->dataGridView1);
				 this->groupBox5->Location = System::Drawing::Point(12, 193);
				 this->groupBox5->Name = L"groupBox5";
				 this->groupBox5->Size = System::Drawing::Size(600, 237);
				 this->groupBox5->TabIndex = 4;
				 this->groupBox5->TabStop = false;
				 // 
				 // dataGridView1
				 // 
				 this->dataGridView1->AllowUserToAddRows = false;
				 this->dataGridView1->AllowUserToDeleteRows = false;
				 this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
					 this->Column1,
						 this->Column2, this->Column3
				 });
				 this->dataGridView1->Location = System::Drawing::Point(10, 19);
				 this->dataGridView1->Name = L"dataGridView1";
				 this->dataGridView1->ReadOnly = true;
				 this->dataGridView1->Size = System::Drawing::Size(584, 212);
				 this->dataGridView1->TabIndex = 0;
				 // 
				 // Column1
				 // 
				 this->Column1->Frozen = true;
				 this->Column1->HeaderText = L"Member";
				 this->Column1->Name = L"Column1";
				 this->Column1->ReadOnly = true;
				 // 
				 // Column2
				 // 
				 this->Column2->Frozen = true;
				 this->Column2->HeaderText = L"Tournament";
				 this->Column2->Name = L"Column2";
				 this->Column2->ReadOnly = true;
				 // 
				 // Column3
				 // 
				 this->Column3->HeaderText = L"Game";
				 this->Column3->Name = L"Column3";
				 this->Column3->ReadOnly = true;
				 // 
				 // tourNameTB
				 // 
				 this->tourNameTB->Location = System::Drawing::Point(6, 34);
				 this->tourNameTB->Name = L"tourNameTB";
				 this->tourNameTB->Size = System::Drawing::Size(100, 20);
				 this->tourNameTB->TabIndex = 3;
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(9, 18);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(35, 13);
				 this->label3->TabIndex = 2;
				 this->label3->Text = L"Name";
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(624, 442);
				 this->Controls->Add(this->groupBox2);
				 this->Controls->Add(this->groupBox1);
				 this->Controls->Add(this->groupBox5);
				 this->Name = L"MyForm";
				 this->Text = L"Game Club";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->groupBox2->ResumeLayout(false);
				 this->groupBox2->PerformLayout();
				 this->groupBox3->ResumeLayout(false);
				 this->groupBox3->PerformLayout();
				 this->groupBox4->ResumeLayout(false);
				 this->groupBox4->PerformLayout();
				 this->groupBox5->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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

	private: System::Void refreshDataTable() {
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		dbData = gcnew DBEmulation();
		//init();

		
		dbData->Load();
		gamesNumberL->Text = dbData->GetGameItems()->Count.ToString();
		participantNumberL->Text = dbData->GetParticipantItems()->Count.ToString();
		membersNumberL->Text = dbData->GetMemberItems()->Count.ToString();
		tourNumberL->Text = dbData->GetTournamentItems()->Count.ToString();
		refreshDataTable();
	}
	private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		if (memberNameTB->Text == ""
			|| memberSurnameTB->Text == ""
			|| tourNameTB->Text == ""
			|| tourGameNameTB->Text == "") {
			MessageBox::Show("Please fill in all required fields");
			return;
		}

		Game^ g1 = gcnew Game(tourGameNameTB->Text);
		dbData->AddNewItem(g1);
		Member^ m1 = gcnew Member(memberNameTB->Text, memberSurnameTB->Text);
		dbData->AddNewItem(m1);
		Tournament^ t1 = gcnew Tournament(tourNameTB->Text, g1->GetId());
		dbData->AddNewItem(t1);
		Participant^ p1 = gcnew Participant(t1->GetId(), m1->GetId());
		dbData->AddNewItem(p1);

		dbData->Save();
		refreshDataTable();
	}

};
}
