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
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(181, 9);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(72, 13);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Games in DB:";
				 // 
				 // gamesNumberL
				 // 
				 this->gamesNumberL->AutoSize = true;
				 this->gamesNumberL->Location = System::Drawing::Point(259, 9);
				 this->gamesNumberL->Name = L"gamesNumberL";
				 this->gamesNumberL->Size = System::Drawing::Size(13, 13);
				 this->gamesNumberL->TabIndex = 1;
				 this->gamesNumberL->Text = L"0";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(171, 33);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(82, 13);
				 this->label2->TabIndex = 0;
				 this->label2->Text = L"Members in DB:";
				 // 
				 // membersNumberL
				 // 
				 this->membersNumberL->AutoSize = true;
				 this->membersNumberL->Location = System::Drawing::Point(259, 33);
				 this->membersNumberL->Name = L"membersNumberL";
				 this->membersNumberL->Size = System::Drawing::Size(13, 13);
				 this->membersNumberL->TabIndex = 1;
				 this->membersNumberL->Text = L"0";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(159, 57);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(94, 13);
				 this->label4->TabIndex = 0;
				 this->label4->Text = L"Participants in DB:";
				 // 
				 // participantNumberL
				 // 
				 this->participantNumberL->AutoSize = true;
				 this->participantNumberL->Location = System::Drawing::Point(259, 57);
				 this->participantNumberL->Name = L"participantNumberL";
				 this->participantNumberL->Size = System::Drawing::Size(13, 13);
				 this->participantNumberL->TabIndex = 1;
				 this->participantNumberL->Text = L"0";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(152, 80);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(101, 13);
				 this->label6->TabIndex = 0;
				 this->label6->Text = L"Tournaments in DB:";
				 // 
				 // tourNumberL
				 // 
				 this->tourNumberL->AutoSize = true;
				 this->tourNumberL->Location = System::Drawing::Point(259, 80);
				 this->tourNumberL->Name = L"tourNumberL";
				 this->tourNumberL->Size = System::Drawing::Size(13, 13);
				 this->tourNumberL->TabIndex = 1;
				 this->tourNumberL->Text = L"0";
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(284, 262);
				 this->Controls->Add(this->tourNumberL);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->participantNumberL);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->membersNumberL);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->gamesNumberL);
				 this->Controls->Add(this->label1);
				 this->Name = L"MyForm";
				 this->Text = L"MyForm";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void init()
	{
		Game^ g1 = gcnew Game("Game1");
		dbData->AddNewItem(g1);
		Game^ g2 = gcnew Game("Game2");
		dbData->AddNewItem(g2);
		Member^ m1 = gcnew Member("Pevlik", "Morozov");
		dbData->AddNewItem(m1);
		Tournament^ t1 = gcnew Tournament("Tournament1", g1->GetId());
		dbData->AddNewItem(t1);
		Participant^ p1 = gcnew Participant("Part1", t1->GetId(), m1->GetId());
		dbData->AddNewItem(p1);

		dbData->Save();
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		dbData = gcnew DBEmulation();
		init();

		
		dbData->Load();
		gamesNumberL->Text = dbData->GetGameItems()->Count.ToString();
		participantNumberL->Text = dbData->GetParticipantItems()->Count.ToString();
		membersNumberL->Text = dbData->GetMemberItems()->Count.ToString();
		tourNumberL->Text = dbData->GetTournamentItems()->Count.ToString();
	}
	};
}
