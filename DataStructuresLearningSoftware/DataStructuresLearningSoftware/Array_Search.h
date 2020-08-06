#pragma once

#include "moduleQuiz.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for Array_Search
	/// </summary>
	public ref class Array_Search : public System::Windows::Forms::UserControl
	{
	public:
		Array_Search(void)
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
		~Array_Search()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  Reset_Button;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label_rec_7;
	private: System::Windows::Forms::Label^  label_rec_6;
	private: System::Windows::Forms::Label^  label_rec_5;
	private: System::Windows::Forms::Label^  label_rec_4;
	private: System::Windows::Forms::Label^  label_rec_3;
	private: System::Windows::Forms::Label^  label_rec_2;
	private: System::Windows::Forms::Label^  label_rec_1;
	private: System::Windows::Forms::PictureBox^  arrow;
	private: System::Windows::Forms::TextBox^  input;
	private: System::Windows::Forms::Label^  search_q;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  quizPanel;

	private: System::Windows::Forms::Label^  label2;
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
			this->Reset_Button = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_rec_7 = (gcnew System::Windows::Forms::Label());
			this->label_rec_6 = (gcnew System::Windows::Forms::Label());
			this->label_rec_5 = (gcnew System::Windows::Forms::Label());
			this->label_rec_4 = (gcnew System::Windows::Forms::Label());
			this->label_rec_3 = (gcnew System::Windows::Forms::Label());
			this->label_rec_2 = (gcnew System::Windows::Forms::Label());
			this->label_rec_1 = (gcnew System::Windows::Forms::Label());
			this->arrow = (gcnew System::Windows::Forms::PictureBox());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->search_q = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->arrow))->BeginInit();
			this->SuspendLayout();
			// 
			// Reset_Button
			// 
			this->Reset_Button->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->Reset_Button->FlatAppearance->BorderSize = 0;
			this->Reset_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Reset_Button->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Reset_Button->Location = System::Drawing::Point(819, 374);
			this->Reset_Button->Margin = System::Windows::Forms::Padding(2);
			this->Reset_Button->Name = L"Reset_Button";
			this->Reset_Button->Size = System::Drawing::Size(100, 30);
			this->Reset_Button->TabIndex = 13;
			this->Reset_Button->Text = L"Reset";
			this->Reset_Button->UseVisualStyleBackColor = false;
			this->Reset_Button->Click += gcnew System::EventHandler(this, &Array_Search::Reset_Button_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(488, 376);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 30);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Start";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Array_Search::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->label_rec_7);
			this->panel1->Controls->Add(this->label_rec_6);
			this->panel1->Controls->Add(this->label_rec_5);
			this->panel1->Controls->Add(this->label_rec_4);
			this->panel1->Controls->Add(this->label_rec_3);
			this->panel1->Controls->Add(this->label_rec_2);
			this->panel1->Controls->Add(this->label_rec_1);
			this->panel1->Controls->Add(this->arrow);
			this->panel1->Location = System::Drawing::Point(185, 166);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(734, 186);
			this->panel1->TabIndex = 11;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Array_Search::panel1_Paint);
			// 
			// label_rec_7
			// 
			this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_7->Location = System::Drawing::Point(596, 68);
			this->label_rec_7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_7->Name = L"label_rec_7";
			this->label_rec_7->Size = System::Drawing::Size(76, 82);
			this->label_rec_7->TabIndex = 8;
			this->label_rec_7->Text = L"245";
			this->label_rec_7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_6
			// 
			this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_6->Location = System::Drawing::Point(506, 68);
			this->label_rec_6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_6->Name = L"label_rec_6";
			this->label_rec_6->Size = System::Drawing::Size(76, 82);
			this->label_rec_6->TabIndex = 7;
			this->label_rec_6->Text = L"64";
			this->label_rec_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_5
			// 
			this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_5->Location = System::Drawing::Point(416, 68);
			this->label_rec_5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_5->Name = L"label_rec_5";
			this->label_rec_5->Size = System::Drawing::Size(76, 82);
			this->label_rec_5->TabIndex = 6;
			this->label_rec_5->Text = L"45";
			this->label_rec_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_4
			// 
			this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_4->Location = System::Drawing::Point(326, 68);
			this->label_rec_4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_4->Name = L"label_rec_4";
			this->label_rec_4->Size = System::Drawing::Size(76, 82);
			this->label_rec_4->TabIndex = 5;
			this->label_rec_4->Text = L"23";
			this->label_rec_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_3
			// 
			this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_3->Location = System::Drawing::Point(236, 68);
			this->label_rec_3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_3->Name = L"label_rec_3";
			this->label_rec_3->Size = System::Drawing::Size(76, 82);
			this->label_rec_3->TabIndex = 4;
			this->label_rec_3->Text = L"897";
			this->label_rec_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_2
			// 
			this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_2->Location = System::Drawing::Point(146, 68);
			this->label_rec_2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_2->Name = L"label_rec_2";
			this->label_rec_2->Size = System::Drawing::Size(76, 82);
			this->label_rec_2->TabIndex = 3;
			this->label_rec_2->Text = L"244";
			this->label_rec_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_1
			// 
			this->label_rec_1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_rec_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_1->Location = System::Drawing::Point(56, 68);
			this->label_rec_1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_1->Name = L"label_rec_1";
			this->label_rec_1->Size = System::Drawing::Size(76, 82);
			this->label_rec_1->TabIndex = 2;
			this->label_rec_1->Text = L"10";
			this->label_rec_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// arrow
			// 
			this->arrow->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->arrow->Location = System::Drawing::Point(7, 13);
			this->arrow->Margin = System::Windows::Forms::Padding(2);
			this->arrow->Name = L"arrow";
			this->arrow->Size = System::Drawing::Size(75, 41);
			this->arrow->TabIndex = 1;
			this->arrow->TabStop = false;
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::Color::White;
			this->input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->input->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->input->Location = System::Drawing::Point(360, 376);
			this->input->Margin = System::Windows::Forms::Padding(2);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(124, 28);
			this->input->TabIndex = 10;
			// 
			// search_q
			// 
			this->search_q->AutoSize = true;
			this->search_q->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search_q->Location = System::Drawing::Point(181, 378);
			this->search_q->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->search_q->Name = L"search_q";
			this->search_q->Size = System::Drawing::Size(175, 20);
			this->search_q->TabIndex = 9;
			this->search_q->Text = L"Enter element to search";
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Array_Search::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(398, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 39);
			this->label1->TabIndex = 14;
			this->label1->Text = L"SEARCHING IN ARRAYS";
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(37, 531);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 507);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 21);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Answer the question correctly to pass the module.";
			// 
			// Array_Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Reset_Button);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->search_q);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Array_Search";
			this->Size = System::Drawing::Size(1105, 1000);
			this->Load += gcnew System::EventHandler(this, &Array_Search::Array_Search_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->arrow))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: String ^username;

		static int posx = 0;
		static int index = 0;
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) { // This function is called upon every tick of the clock
				 int var = this->arrow->Location.X;
				 if(var<=this->label_rec_7->Location.X + 73){
					 if(var==this->label_rec_1->Location.X && this->label_rec_1->Text==this->input->Text)
					 {
						 timer1->Enabled = false;
						 this->input->Enabled = true;
						 this->button3->Enabled = true;
						 this->label_rec_1->BackColor = System::Drawing::SystemColors::InactiveBorder;
						 this->label_rec_1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					 }
					 else if(var==this->label_rec_2->Location.X && this->label_rec_2->Text==this->input->Text)
					 {
						 timer1->Enabled = false;
						 this->input->Enabled = true;
						 this->button3->Enabled = true;
						 this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveBorder;
						 this->label_rec_2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					 }
					 else if(var==this->label_rec_3->Location.X && this->label_rec_3->Text==this->input->Text)
					 {
						 timer1->Enabled = false;
						 this->input->Enabled = true;
						 this->button3->Enabled = true;
						 this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveBorder;
						 this->label_rec_3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					 }
					 else if(var==this->label_rec_4->Location.X && this->label_rec_4->Text==this->input->Text)
					 {
						 timer1->Enabled = false;
						 this->input->Enabled = true;
						 this->button3->Enabled = true;
						 this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveBorder;
						 this->label_rec_4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					 }
					 else if(var==this->label_rec_5->Location.X && this->label_rec_5->Text==this->input->Text)
					 {
						 timer1->Enabled = false;
						 this->input->Enabled = true;
						 this->button3->Enabled = true;
						 this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveBorder;
						 this->label_rec_5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					 }
					 else if(var==this->label_rec_6->Location.X && this->label_rec_6->Text==this->input->Text)
					 {
						 timer1->Enabled = false;
						 this->input->Enabled = true;
						 this->button3->Enabled = true;
						 this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveBorder;
						 this->label_rec_6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					 }
					 else if(var==this->label_rec_7->Location.X && this->label_rec_7->Text==this->input->Text)
					 {
						 timer1->Enabled = false;
						 this->input->Enabled = true;
						 this->button3->Enabled = true;
						 this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveBorder;
						 this->label_rec_7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					 }
					 else{
						 this->posx = this->arrow->Location.X + 1;
						 this->arrow->Location = System::Drawing::Point(this->posx , this->arrow->Location.Y);
					 }
				 }
				 else
				 {                                                                       // If the input is not found, it will show an error message box
					 timer1->Enabled = false;
					 MessageBox::Show("Element Not Found !!");
					 this->input->Enabled = true;
					 this->button3->Enabled = true;
					 this->arrow->Location = System::Drawing::Point( 9, this->arrow->Location.Y);
					 this->input->Text = "";
				 }

			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {     // This function is called upon clicking the search button
				 this->arrow->Location = System::Drawing::Point( 9, this->arrow->Location.Y);
				 this->label_rec_1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 if(this->input->Text!="")
				 {
					 timer1->Enabled = true;
					 this->input->Enabled = false;
					 this->button3->Enabled = false;
				 }
				 else
				 {
					 MessageBox::Show("Enter number first!!");
				 }

			 }
	private: System::Void Reset_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->label_rec_1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->label_rec_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label_rec_7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->arrow->Location = System::Drawing::Point( 9, this->arrow->Location.Y);
				 //this->input->Text = "";
			 }

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void Array_Search_Load(System::Object^  sender, System::EventArgs^  e) {
			 // Quiz Panel Load
			 moduleQuiz ^newPanel = gcnew moduleQuiz();
			 newPanel->ds_id = 1;
			 newPanel->module_id = 3;
			 newPanel->username = username;
			 newPanel->update_id = 9;
			 newPanel->update_name = "ArraysProgress";
			 quizPanel->Controls->Clear();
			 quizPanel->Controls->Add(newPanel);
		 }
};
}
