#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for LinkedList_Traversal
	/// </summary>
	public ref class LinkedList_Traversal : public System::Windows::Forms::UserControl
	{
	public:
		LinkedList_Traversal(void)
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
		~LinkedList_Traversal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  but_play;
	protected: 
	private: System::Windows::Forms::Button^  but_pause;
	private: System::Windows::Forms::Button^  but_start;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lbeli7;
	private: System::Windows::Forms::Label^  lbeli6;
	private: System::Windows::Forms::Label^  lbeli5;
	private: System::Windows::Forms::Label^  lbeli4;
	private: System::Windows::Forms::Label^  lbeli3;
	private: System::Windows::Forms::Label^  lbeli2;
	private: System::Windows::Forms::Label^  lbeli1;
	private: System::Windows::Forms::Label^  arrowlli;
	private: System::Windows::Forms::Label^  lli7;
	private: System::Windows::Forms::Label^  lli6;
	private: System::Windows::Forms::Label^  lli5;
	private: System::Windows::Forms::Label^  lli4;
	private: System::Windows::Forms::Label^  lli3;
	private: System::Windows::Forms::Label^  lli2;
	private: System::Windows::Forms::Label^  lli1;
	private: System::Windows::Forms::Timer^  timerLTrav;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinkedList_Traversal::typeid));
			this->but_play = (gcnew System::Windows::Forms::Button());
			this->but_pause = (gcnew System::Windows::Forms::Button());
			this->but_start = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbeli7 = (gcnew System::Windows::Forms::Label());
			this->lbeli6 = (gcnew System::Windows::Forms::Label());
			this->lbeli5 = (gcnew System::Windows::Forms::Label());
			this->lbeli4 = (gcnew System::Windows::Forms::Label());
			this->lbeli3 = (gcnew System::Windows::Forms::Label());
			this->lbeli2 = (gcnew System::Windows::Forms::Label());
			this->lbeli1 = (gcnew System::Windows::Forms::Label());
			this->arrowlli = (gcnew System::Windows::Forms::Label());
			this->lli7 = (gcnew System::Windows::Forms::Label());
			this->lli6 = (gcnew System::Windows::Forms::Label());
			this->lli5 = (gcnew System::Windows::Forms::Label());
			this->lli4 = (gcnew System::Windows::Forms::Label());
			this->lli3 = (gcnew System::Windows::Forms::Label());
			this->lli2 = (gcnew System::Windows::Forms::Label());
			this->lli1 = (gcnew System::Windows::Forms::Label());
			this->timerLTrav = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// but_play
			// 
			this->but_play->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->but_play->FlatAppearance->BorderSize = 0;
			this->but_play->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_play->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->but_play->ForeColor = System::Drawing::SystemColors::ControlText;
			this->but_play->Location = System::Drawing::Point(717, 2);
			this->but_play->Margin = System::Windows::Forms::Padding(2);
			this->but_play->Name = L"but_play";
			this->but_play->Size = System::Drawing::Size(70, 25);
			this->but_play->TabIndex = 7;
			this->but_play->Text = L"Play";
			this->but_play->UseVisualStyleBackColor = false;
			this->but_play->Click += gcnew System::EventHandler(this, &LinkedList_Traversal::but_play_Click);
			// 
			// but_pause
			// 
			this->but_pause->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->but_pause->FlatAppearance->BorderSize = 0;
			this->but_pause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_pause->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->but_pause->Location = System::Drawing::Point(643, 2);
			this->but_pause->Margin = System::Windows::Forms::Padding(2);
			this->but_pause->Name = L"but_pause";
			this->but_pause->Size = System::Drawing::Size(70, 25);
			this->but_pause->TabIndex = 6;
			this->but_pause->Text = L"Pause";
			this->but_pause->UseVisualStyleBackColor = false;
			this->but_pause->Click += gcnew System::EventHandler(this, &LinkedList_Traversal::but_pause_Click);
			// 
			// but_start
			// 
			this->but_start->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->but_start->FlatAppearance->BorderSize = 0;
			this->but_start->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_start->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->but_start->Location = System::Drawing::Point(569, 2);
			this->but_start->Margin = System::Windows::Forms::Padding(2);
			this->but_start->Name = L"but_start";
			this->but_start->Size = System::Drawing::Size(70, 25);
			this->but_start->TabIndex = 5;
			this->but_start->Text = L"Start";
			this->but_start->UseVisualStyleBackColor = false;
			this->but_start->Click += gcnew System::EventHandler(this, &LinkedList_Traversal::but_start_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->but_play);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->but_pause);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->but_start);
			this->panel3->Controls->Add(this->lbeli7);
			this->panel3->Controls->Add(this->lbeli6);
			this->panel3->Controls->Add(this->lbeli5);
			this->panel3->Controls->Add(this->lbeli4);
			this->panel3->Controls->Add(this->lbeli3);
			this->panel3->Controls->Add(this->lbeli2);
			this->panel3->Controls->Add(this->lbeli1);
			this->panel3->Controls->Add(this->arrowlli);
			this->panel3->Controls->Add(this->lli7);
			this->panel3->Controls->Add(this->lli6);
			this->panel3->Controls->Add(this->lli5);
			this->panel3->Controls->Add(this->lli4);
			this->panel3->Controls->Add(this->lli3);
			this->panel3->Controls->Add(this->lli2);
			this->panel3->Controls->Add(this->lli1);
			this->panel3->Location = System::Drawing::Point(158, 203);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(789, 286);
			this->panel3->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(733, 149);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Tail";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 146);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Head";
			// 
			// lbeli7
			// 
			this->lbeli7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbeli7->Location = System::Drawing::Point(645, 203);
			this->lbeli7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbeli7->Name = L"lbeli7";
			this->lbeli7->Size = System::Drawing::Size(75, 81);
			this->lbeli7->TabIndex = 14;
			this->lbeli7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbeli6
			// 
			this->lbeli6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbeli6->Location = System::Drawing::Point(548, 203);
			this->lbeli6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbeli6->Name = L"lbeli6";
			this->lbeli6->Size = System::Drawing::Size(75, 81);
			this->lbeli6->TabIndex = 13;
			this->lbeli6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbeli5
			// 
			this->lbeli5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbeli5->Location = System::Drawing::Point(450, 203);
			this->lbeli5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbeli5->Name = L"lbeli5";
			this->lbeli5->Size = System::Drawing::Size(75, 81);
			this->lbeli5->TabIndex = 12;
			this->lbeli5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbeli4
			// 
			this->lbeli4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbeli4->Location = System::Drawing::Point(352, 203);
			this->lbeli4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbeli4->Name = L"lbeli4";
			this->lbeli4->Size = System::Drawing::Size(75, 81);
			this->lbeli4->TabIndex = 11;
			this->lbeli4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbeli3
			// 
			this->lbeli3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbeli3->Location = System::Drawing::Point(255, 203);
			this->lbeli3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbeli3->Name = L"lbeli3";
			this->lbeli3->Size = System::Drawing::Size(75, 81);
			this->lbeli3->TabIndex = 10;
			this->lbeli3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbeli2
			// 
			this->lbeli2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbeli2->Location = System::Drawing::Point(158, 203);
			this->lbeli2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbeli2->Name = L"lbeli2";
			this->lbeli2->Size = System::Drawing::Size(75, 81);
			this->lbeli2->TabIndex = 9;
			this->lbeli2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbeli1
			// 
			this->lbeli1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbeli1->Location = System::Drawing::Point(60, 203);
			this->lbeli1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbeli1->Name = L"lbeli1";
			this->lbeli1->Size = System::Drawing::Size(75, 81);
			this->lbeli1->TabIndex = 8;
			this->lbeli1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// arrowlli
			// 
			this->arrowlli->BackColor = System::Drawing::Color::DodgerBlue;
			this->arrowlli->Location = System::Drawing::Point(7, 65);
			this->arrowlli->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->arrowlli->Name = L"arrowlli";
			this->arrowlli->Size = System::Drawing::Size(75, 41);
			this->arrowlli->TabIndex = 7;
			// 
			// lli7
			// 
			this->lli7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lli7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lli7->Location = System::Drawing::Point(645, 118);
			this->lli7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lli7->Name = L"lli7";
			this->lli7->Size = System::Drawing::Size(76, 82);
			this->lli7->TabIndex = 6;
			this->lli7->Text = L"-22";
			this->lli7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lli6
			// 
			this->lli6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lli6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lli6->Location = System::Drawing::Point(548, 118);
			this->lli6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lli6->Name = L"lli6";
			this->lli6->Size = System::Drawing::Size(76, 82);
			this->lli6->TabIndex = 5;
			this->lli6->Text = L"0";
			this->lli6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lli5
			// 
			this->lli5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lli5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lli5->Location = System::Drawing::Point(450, 118);
			this->lli5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lli5->Name = L"lli5";
			this->lli5->Size = System::Drawing::Size(76, 82);
			this->lli5->TabIndex = 4;
			this->lli5->Text = L"11";
			this->lli5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lli4
			// 
			this->lli4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lli4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lli4->Location = System::Drawing::Point(352, 118);
			this->lli4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lli4->Name = L"lli4";
			this->lli4->Size = System::Drawing::Size(76, 82);
			this->lli4->TabIndex = 3;
			this->lli4->Text = L"10";
			this->lli4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lli3
			// 
			this->lli3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lli3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lli3->Location = System::Drawing::Point(255, 118);
			this->lli3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lli3->Name = L"lli3";
			this->lli3->Size = System::Drawing::Size(76, 82);
			this->lli3->TabIndex = 2;
			this->lli3->Text = L"07";
			this->lli3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lli2
			// 
			this->lli2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lli2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lli2->Location = System::Drawing::Point(158, 118);
			this->lli2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lli2->Name = L"lli2";
			this->lli2->Size = System::Drawing::Size(76, 82);
			this->lli2->TabIndex = 1;
			this->lli2->Text = L"18";
			this->lli2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lli1
			// 
			this->lli1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lli1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lli1->Location = System::Drawing::Point(60, 118);
			this->lli1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lli1->Name = L"lli1";
			this->lli1->Size = System::Drawing::Size(76, 82);
			this->lli1->TabIndex = 0;
			this->lli1->Text = L"333";
			this->lli1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timerLTrav
			// 
			this->timerLTrav->Interval = 1;
			this->timerLTrav->Tick += gcnew System::EventHandler(this, &LinkedList_Traversal::timerLTrav_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(385, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"LINKED LIST TRAVERSAL";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1065, 45);
			this->label2->TabIndex = 6;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(162, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"LEARN WITH FUN";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 535);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1065, 906);
			this->label4->TabIndex = 8;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 1476);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 21);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Output:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LightBlue;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(93, 1477);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 20);
			this->label8->TabIndex = 10;
			this->label8->Text = L"1  2  3";
			// 
			// LinkedList_Traversal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel3);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LinkedList_Traversal";
			this->Size = System::Drawing::Size(1105, 1700);
			this->Load += gcnew System::EventHandler(this, &LinkedList_Traversal::LinkedList_Traversal_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: String ^username;
		
		private: System::Void timerLTrav_Tick(System::Object^  sender, System::EventArgs^  e) {
			  int var = this->arrowlli->Location.X;
			 if(var<=this->lli7->Location.X + 73){
				 if(var==this->lli1->Location.X )
				 {
					this->lli1->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->lli1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbeli1->Text = this->lli1->Text;
				 }
				else if(var==this->lli2->Location.X )
				{
					this->lli2->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->lli2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbeli2->Text = this->lli2->Text;
				}
				else if(var==this->lli3->Location.X )
				{
					this->lli3->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->lli3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbeli3->Text = this->lli3->Text;
				}
				else if(var==this->lli4->Location.X )
				{
					this->lli4->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->lli4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbeli4->Text = this->lli4->Text;
				}
				else if(var==this->lli5->Location.X )
				{
					this->lli5->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->lli5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbeli5->Text = this->lli5->Text;
				}
				else if(var==this->lli6->Location.X)
				{
					this->lli6->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->lli6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbeli6->Text = this->lli6->Text;
				}
				else if(var==this->lli7->Location.X)
				{

					this->lli7->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->lli7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbeli7->Text = this->lli7->Text;
				}
				/*else{
					this->Llabel->Location = System::Drawing::Point(this->Llabel->Location.X + 1 , this->Llabel->Location.Y);
					MessageBox::Show("T");
				}*/
				this->arrowlli->Location = System::Drawing::Point(this->arrowlli->Location.X + 1 , this->arrowlli->Location.Y);
			}
			else
			{
				timerLTrav->Enabled = false;
				MessageBox::Show("Traversal Done");
				this->lbeli1->Text = "";
				this->lbeli2->Text = "";
				this->lbeli3->Text = "";
				this->lbeli4->Text = "";
				this->lbeli5->Text = "";
				this->lbeli6->Text = "";
				this->lbeli7->Text = "";
				this->arrowlli->Location = System::Drawing::Point( 9, this->arrowlli->Location.Y);
			}
		 
}

private: System::Void but_start_Click(System::Object^  sender, System::EventArgs^  e) {
				this->lli1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				this->lli2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				this->lli3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				this->lli4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				this->lli5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				this->lli6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				this->lli7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				this->lbeli1->Text = "";
				this->lbeli2->Text = "";
				this->lbeli3->Text = "";
				this->lbeli4->Text = "";
				this->lbeli5->Text = "";
				this->lbeli6->Text = "";
				this->lbeli7->Text = "";
				this->arrowlli->Location = System::Drawing::Point( 9, this->arrowlli->Location.Y);
				timerLTrav->Enabled = true;
		 }
private: System::Void but_pause_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerLTrav->Enabled = false;
}
private: System::Void but_play_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerLTrav->Enabled = true;
		 }

		 private: System::Void LinkedList_Traversal_Load(System::Object^  sender, System::EventArgs^  e) {
				  }
};
}
