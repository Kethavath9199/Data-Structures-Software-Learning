#pragma once

#include "moduleQuiz.h"

using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for LinearSearch
	/// </summary>
	public ref class LinearSearch : public System::Windows::Forms::UserControl
	{
	public:
		LinearSearch(void)
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
		~LinearSearch()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  AnimationPanel;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  btnEnterInput;
	private: System::Windows::Forms::Label^  lblErrorMessage;
	private: System::Windows::Forms::Button^  btnAnimate;
	private: System::Windows::Forms::TextBox^  txtSearch;

	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Button^  btnReset;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  quizPanel;

	private: System::Windows::Forms::Label^  label12;



	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinearSearch::typeid));
			this->AnimationPanel = (gcnew System::Windows::Forms::Panel());
			this->lblErrorMessage = (gcnew System::Windows::Forms::Label());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnEnterInput = (gcnew System::Windows::Forms::Button());
			this->btnAnimate = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->AnimationPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// AnimationPanel
			// 
			this->AnimationPanel->BackColor = System::Drawing::Color::White;
			this->AnimationPanel->Controls->Add(this->lblErrorMessage);
			this->AnimationPanel->Location = System::Drawing::Point(20, 700);
			this->AnimationPanel->Name = L"AnimationPanel";
			this->AnimationPanel->Size = System::Drawing::Size(1038, 200);
			this->AnimationPanel->TabIndex = 1;
			// 
			// lblErrorMessage
			// 
			this->lblErrorMessage->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblErrorMessage->ForeColor = System::Drawing::Color::Firebrick;
			this->lblErrorMessage->Location = System::Drawing::Point(546, 176);
			this->lblErrorMessage->Name = L"lblErrorMessage";
			this->lblErrorMessage->Size = System::Drawing::Size(485, 20);
			this->lblErrorMessage->TabIndex = 4;
			this->lblErrorMessage->Text = L"label2";
			this->lblErrorMessage->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblErrorMessage->Click += gcnew System::EventHandler(this, &LinearSearch::lblErrorMessage_Click);
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtInput->Location = System::Drawing::Point(20, 917);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 28);
			this->txtInput->TabIndex = 2;
			// 
			// btnEnterInput
			// 
			this->btnEnterInput->BackColor = System::Drawing::Color::LightCoral;
			this->btnEnterInput->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEnterInput->FlatAppearance->BorderSize = 0;
			this->btnEnterInput->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEnterInput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEnterInput->Location = System::Drawing::Point(126, 917);
			this->btnEnterInput->Name = L"btnEnterInput";
			this->btnEnterInput->Size = System::Drawing::Size(110, 30);
			this->btnEnterInput->TabIndex = 3;
			this->btnEnterInput->Text = L"Enter Input";
			this->btnEnterInput->UseVisualStyleBackColor = false;
			this->btnEnterInput->Click += gcnew System::EventHandler(this, &LinearSearch::btnEnterInput_Click);
			// 
			// btnAnimate
			// 
			this->btnAnimate->BackColor = System::Drawing::Color::LightCoral;
			this->btnAnimate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAnimate->FlatAppearance->BorderSize = 0;
			this->btnAnimate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAnimate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAnimate->Location = System::Drawing::Point(746, 917);
			this->btnAnimate->Name = L"btnAnimate";
			this->btnAnimate->Size = System::Drawing::Size(100, 30);
			this->btnAnimate->TabIndex = 5;
			this->btnAnimate->Text = L"Animate";
			this->btnAnimate->UseVisualStyleBackColor = false;
			this->btnAnimate->Click += gcnew System::EventHandler(this, &LinearSearch::btnAnimate_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(284, 917);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(100, 28);
			this->txtSearch->TabIndex = 6;
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::LightCoral;
			this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSearch->FlatAppearance->BorderSize = 0;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(390, 917);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(169, 30);
			this->btnSearch->TabIndex = 7;
			this->btnSearch->Text = L"Enter input to search";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &LinearSearch::btnSearch_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &LinearSearch::timer1_Tick);
			// 
			// btnPause
			// 
			this->btnPause->BackColor = System::Drawing::Color::LightCoral;
			this->btnPause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPause->FlatAppearance->BorderSize = 0;
			this->btnPause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPause->Location = System::Drawing::Point(852, 917);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(100, 30);
			this->btnPause->TabIndex = 8;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &LinearSearch::btnPause_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::LightCoral;
			this->btnReset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReset->FlatAppearance->BorderSize = 0;
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(958, 917);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 9;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &LinearSearch::btnReset_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(437, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 39);
			this->label1->TabIndex = 11;
			this->label1->Text = L"LINEAR SEARCH";
			this->label1->Click += gcnew System::EventHandler(this, &LinearSearch::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Problem:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(100, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(611, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Given an array arr[] of n elements, write a function to search a given element x " 
				L"in arr[].";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 21);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Examples:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::MistyRose;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(100, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(958, 197);
			this->label5->TabIndex = 15;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(237, 434);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(573, 203);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 671);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 26);
			this->label6->TabIndex = 18;
			this->label6->Text = L"LEARN WITH FUN";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 1530);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 21);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Output:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::MistyRose;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 969);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1029, 536);
			this->label8->TabIndex = 20;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Snow;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(78, 1531);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(210, 20);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Element is present at index 3";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(16, 1568);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(1034, 85);
			this->label10->TabIndex = 22;
			this->label10->Text = resources->GetString(L"label10.Text");
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(25, 338);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(1033, 80);
			this->label11->TabIndex = 23;
			this->label11->Text = resources->GetString(L"label11.Text");
			// 
			// quizPanel
			// 
			this->quizPanel->AutoScroll = true;
			this->quizPanel->Location = System::Drawing::Point(20, 1715);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(23, 1691);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(382, 21);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Answer the question correctly to pass the module.";
			// 
			// LinearSearch
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Snow;
			this->Controls->Add(this->label12);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->btnAnimate);
			this->Controls->Add(this->btnEnterInput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->AnimationPanel);
			this->Name = L"LinearSearch";
			this->Size = System::Drawing::Size(1078, 2200);
			this->Load += gcnew System::EventHandler(this, &LinearSearch::LinearSearch_Load);
			this->AnimationPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String ^username;
			int numInputs;
			int maxInputs;
			int maxLength;
			int startX;
			int startY;
			int boxWidth;
			int boxHeight;
			System::Collections::Generic::List<int> input;
			int searchInput;
			System::Collections::Generic::List<Label ^> labelList;
			int id;
			PictureBox ^arrow;
			int arrowHeight;
			Label ^outputLabel;

			bool inputValidate(System::String ^input){
				 if(numInputs == maxInputs){
					lblErrorMessage->Text = "You can enter maximum of " + maxInputs + " inputs.";
					return false;
				 }

				 if(input == ""){
					 lblErrorMessage->Text = "Enter an input value first.";
					 return false;
				 }
				 else if(input->Length > maxLength){
					 lblErrorMessage->Text = "Limit exceeded. Please enter a smaller number";
					 return false;
				 }

				 for(int i = 0; i < input->Length; i++){
					 if(input[i] < '0' || input[i] > '9'){
						 lblErrorMessage->Text = "Invalid input. Please enter an integer.";
						 return false;
					 }
				 }

				 return true;
			}

	private: System::Void btnEnterInput_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";

				 // Data Validation
				 bool check = inputValidate(txtInput->Text);

				 if(check){
					 int x = Convert::ToInt32(txtInput->Text);
					 txtInput->Text = Convert::ToString(x);
					 // Enter input into animation
					 numInputs++;
					 Label ^newLabel = gcnew Label();
					 newLabel->Location = Drawing::Point(startX+numInputs*boxWidth, startY);
					 newLabel->Size = Drawing::Size(boxWidth, boxHeight);
					 newLabel->Text = txtInput->Text;
					 newLabel->BackColor = Color::LightSkyBlue;
					 newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
					 newLabel->TextAlign = ContentAlignment::MiddleCenter;
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 input.Add(int::Parse(txtInput->Text));
					 labelList.Add(newLabel);
					 AnimationPanel->Controls->Add(newLabel);

					 Label ^newLabel2 = gcnew Label();
					 newLabel2->Text = (numInputs-1).ToString();
					 newLabel2->Location = Drawing::Point(startX+numInputs*boxWidth, startY+boxHeight);
					 newLabel2->Size = Drawing::Size(boxWidth, boxHeight);
					 newLabel2->TextAlign = ContentAlignment::TopCenter;
					 newLabel2->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 AnimationPanel->Controls->Add(newLabel2);

					 txtInput->Text = "";
				 }
			 }

	private: System::Void LinearSearch_Load(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 searchInput = -1;
				 id = -1;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 outputLabel = gcnew Label();



				 // Question Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 3;
				 newPanel->module_id = 0;
				 newPanel->username = username;
				 newPanel->update_id = 11;
				 newPanel->update_name = "SearchingProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }

	private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 bool check = inputValidate(txtSearch->Text);

				 if(check){
					 int x = Convert::ToInt32(txtSearch->Text);
					 txtSearch->Text = Convert::ToString(x);

					 Label ^newLabel = gcnew Label();
					 newLabel->Text = "Input to search: " + txtSearch->Text;
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 newLabel->Size = Drawing::Size(175, 20);
					 newLabel->Location = Drawing::Point((AnimationPanel->Size.Width)-(newLabel->Size.Width), 0);
					 searchInput = int::Parse(txtSearch->Text);
					 AnimationPanel->Controls->Add(newLabel);
					 newLabel->BringToFront();

					 txtSearch->Text = "";
				 }
			 }

	private: System::Void btnAnimate_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";

				 if(searchInput == -1){
					 lblErrorMessage->Text = "Enter input to search.";
					 return;
				 }

				 //for(int i = 0; i < numInputs; i++){
					// labelList[i]->BackColor = Color::LightSkyBlue;
				 //}
				 //id = -1;
				 //outputLabel->Text = "";
				 btnEnterInput->Enabled = false;
				 btnSearch->Enabled = false;

				 timer1->Enabled = true;
			 }

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 Debug::WriteLine(numInputs);

				 if(id == -1){
					 arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png";
					 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png");
					 arrow->SizeMode = PictureBoxSizeMode::StretchImage;
					 arrow->Size = Drawing::Size(boxWidth, arrowHeight);
					 arrow->Location = Drawing::Point(startX+(id+2)*boxWidth, startY-arrowHeight);
					 AnimationPanel->Controls->Add(arrow);
					 id++;
					 labelList[id]->BackColor = Color::LemonChiffon;
					 return;
				 }
				 else if(id >= numInputs){
					 outputLabel->Text = "Input not found!";
					 outputLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 outputLabel->Size = Drawing::Size(175, 20);
					 outputLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(outputLabel);
					 timer1->Enabled = false;
					 return;
				 }

				 if(input[id] == searchInput){
					 labelList[id]->BackColor = Color::PaleGreen;
					 outputLabel->Text = "Input found at index: " + id;
					 outputLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 outputLabel->Size = Drawing::Size(175, 20);
					 outputLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(outputLabel);
					 timer1->Enabled = false;
				 }
				 else{
					 labelList[id]->BackColor = Color::LightCoral;
					 id++;
					 if(id < numInputs) labelList[id]->BackColor = Color::LemonChiffon;
					 arrow->Location = Drawing::Point(startX+(id+1)*boxWidth, startY-arrowHeight);
				 }
			 }

	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 timer1->Enabled = false;
			 }

	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 timer1->Enabled = false;
				 AnimationPanel->Controls->Clear();
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 searchInput = -1;
				 id = -1;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 input.Clear();
				 labelList.Clear();
				 outputLabel->Text = "";

				 btnEnterInput->Enabled = true;
				 btnSearch->Enabled = true;
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lblErrorMessage_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
