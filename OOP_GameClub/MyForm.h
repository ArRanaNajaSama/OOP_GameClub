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
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  tourGameNameTB;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox5;
    private: System::Windows::Forms::Button^  deleteBtn;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tourNameTB;
	private: System::Windows::Forms::ListView^  MemberLV;
	private: System::Windows::Forms::ListView^  GameLV;
	private: System::Windows::Forms::ListView^  TourLV;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
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
				 this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
				 this->tourGameNameTB = (gcnew System::Windows::Forms::TextBox());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->tourNameTB = (gcnew System::Windows::Forms::TextBox());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
				 this->saveBtn = (gcnew System::Windows::Forms::Button());
                 this->deleteBtn = (gcnew System::Windows::Forms::Button());
				 this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
				 this->MemberLV = (gcnew System::Windows::Forms::ListView());
				 this->GameLV = (gcnew System::Windows::Forms::ListView());
				 this->TourLV = (gcnew System::Windows::Forms::ListView());
				 this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
				 this->groupBox1->SuspendLayout();
				 this->groupBox2->SuspendLayout();
				 this->groupBox4->SuspendLayout();
				 this->groupBox3->SuspendLayout();
				 this->groupBox5->SuspendLayout();
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
				 this->memberSurnameTB->Size = System::Drawing::Size(132, 22);
				 this->memberSurnameTB->TabIndex = 3;
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(12, 71);
				 this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(65, 17);
				 this->label7->TabIndex = 2;
				 this->label7->Text = L"Surname";
				 // 
				 // memberNameTB
				 // 
				 this->memberNameTB->Location = System::Drawing::Point(5, 42);
				 this->memberNameTB->Margin = System::Windows::Forms::Padding(4);
				 this->memberNameTB->Name = L"memberNameTB";
				 this->memberNameTB->Size = System::Drawing::Size(132, 22);
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
				 this->groupBox2->Controls->Add(this->groupBox4);
				 this->groupBox2->Controls->Add(this->label10);
				 this->groupBox2->Controls->Add(this->groupBox3);
				 this->groupBox2->Controls->Add(this->saveBtn);
				 this->groupBox2->Location = System::Drawing::Point(16, 15);
				 this->groupBox2->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox2->Name = L"groupBox2";
				 this->groupBox2->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox2->Size = System::Drawing::Size(367, 198);
				 this->groupBox2->TabIndex = 0;
				 this->groupBox2->TabStop = false;
				 this->groupBox2->Text = L"Add new player";
				 // 
				 // groupBox4
				 // 
				 this->groupBox4->Controls->Add(this->tourGameNameTB);
				 this->groupBox4->Controls->Add(this->label11);
				 this->groupBox4->Controls->Add(this->label3);
				 this->groupBox4->Controls->Add(this->tourNameTB);
				 this->groupBox4->Location = System::Drawing::Point(196, 23);
				 this->groupBox4->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox4->Name = L"groupBox4";
				 this->groupBox4->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox4->Size = System::Drawing::Size(153, 123);
				 this->groupBox4->TabIndex = 4;
				 this->groupBox4->TabStop = false;
				 this->groupBox4->Text = L"Tournament";
				 // 
				 // tourGameNameTB
				 // 
				 this->tourGameNameTB->Location = System::Drawing::Point(8, 91);
				 this->tourGameNameTB->Margin = System::Windows::Forms::Padding(4);
				 this->tourGameNameTB->Name = L"tourGameNameTB";
				 this->tourGameNameTB->Size = System::Drawing::Size(132, 22);
				 this->tourGameNameTB->TabIndex = 1;
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
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(167, 80);
				 this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(20, 17);
				 this->label10->TabIndex = 0;
				 this->label10->Text = L"to";
				 // 
				 // groupBox3
				 // 
				 this->groupBox3->Controls->Add(this->memberSurnameTB);
				 this->groupBox3->Controls->Add(this->label7);
				 this->groupBox3->Controls->Add(this->label5);
				 this->groupBox3->Controls->Add(this->memberNameTB);
				 this->groupBox3->Location = System::Drawing::Point(8, 23);
				 this->groupBox3->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox3->Name = L"groupBox3";
				 this->groupBox3->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox3->Size = System::Drawing::Size(151, 123);
				 this->groupBox3->TabIndex = 4;
				 this->groupBox3->TabStop = false;
				 this->groupBox3->Text = L"Member";
				 // 
				 // saveBtn
				 // 
				 this->saveBtn->Location = System::Drawing::Point(249, 154);
				 this->saveBtn->Margin = System::Windows::Forms::Padding(4);
				 this->saveBtn->Name = L"saveBtn";
				 this->saveBtn->Size = System::Drawing::Size(100, 28);
				 this->saveBtn->TabIndex = 0;
				 this->saveBtn->Text = L"Save";
				 this->saveBtn->UseVisualStyleBackColor = true;
				 this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
				 // 
				 // groupBox5
				 // 
				 this->groupBox5->Controls->Add(this->MemberLV);
				 this->groupBox5->Controls->Add(this->GameLV);
				 this->groupBox5->Controls->Add(this->TourLV);
                 this->groupBox5->Controls->Add(this->deleteBtn);
				 this->groupBox5->Location = System::Drawing::Point(16, 238);
				 this->groupBox5->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox5->Name = L"groupBox5";
				 this->groupBox5->Padding = System::Windows::Forms::Padding(4);
				 this->groupBox5->Size = System::Drawing::Size(800, 292);
				 this->groupBox5->TabIndex = 4;
				 this->groupBox5->TabStop = false;
				 // 
				 // MemberLV
				 // 
				 this->MemberLV->Location = System::Drawing::Point(507, 12);
				 this->MemberLV->Name = L"MemberLV";
				 this->MemberLV->Size = System::Drawing::Size(121, 97);
				 this->MemberLV->TabIndex = 2;
				 this->MemberLV->UseCompatibleStateImageBehavior = false;
				 this->MemberLV->View = System::Windows::Forms::View::List;
				 // 
				 // GameLV
				 // 
				 this->GameLV->Location = System::Drawing::Point(363, 12);
				 this->GameLV->Name = L"GameLV";
				 this->GameLV->Size = System::Drawing::Size(121, 97);
				 this->GameLV->TabIndex = 1;
				 this->GameLV->UseCompatibleStateImageBehavior = false;
				 this->GameLV->View = System::Windows::Forms::View::List;
				 // 
				 // TourLV
				 // 
				 this->TourLV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
				 this->TourLV->Location = System::Drawing::Point(13, 12);
				 this->TourLV->Name = L"TourLV";
				 this->TourLV->Size = System::Drawing::Size(289, 97);
				 this->TourLV->TabIndex = 0;
				 this->TourLV->UseCompatibleStateImageBehavior = false;
				 this->TourLV->View = System::Windows::Forms::View::List;
				 this->TourLV->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::TourLV_SelectedIndexChanged);
				 // 
				 // deleteBtn
				 // 
				 this->deleteBtn->Location = System::Drawing::Point(25, 135);
				 this->deleteBtn->Margin = System::Windows::Forms::Padding(4);
				 this->deleteBtn->Name = L"deleteBtn";
				 this->deleteBtn->Size = System::Drawing::Size(100, 28);
				 this->deleteBtn->TabIndex = 0;
				 this->deleteBtn->Text = L"Delete";
				 this->deleteBtn->UseVisualStyleBackColor = true;
				 this->deleteBtn->Click += gcnew System::EventHandler(this, &MyForm::deleteBtn_Click);
                 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(832, 544);
				 this->Controls->Add(this->groupBox2);
				 this->Controls->Add(this->groupBox1);
				 this->Controls->Add(this->groupBox5);
				 this->Margin = System::Windows::Forms::Padding(4);
				 this->Name = L"MyForm";
				 this->Text = L"Game Club";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->groupBox2->ResumeLayout(false);
				 this->groupBox2->PerformLayout();
				 this->groupBox4->ResumeLayout(false);
				 this->groupBox4->PerformLayout();
				 this->groupBox3->ResumeLayout(false);
				 this->groupBox3->PerformLayout();
				 this->groupBox5->ResumeLayout(false);
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
