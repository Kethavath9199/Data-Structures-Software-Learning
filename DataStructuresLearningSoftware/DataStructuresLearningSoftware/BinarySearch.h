#pragma once

#include "moduleQuiz.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Diagnostics;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for BinarySearch
	/// </summary>
	public ref class BinarySearch : public System::Windows::Forms::UserControl
	{
	public:
		BinarySearch(void)
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
		~BinarySearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  AnimationPanel;
	protected: 

	private: System::Windows::Forms::Button^  btnAnimate;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  btnEnterInput;
	private: System::Windows::Forms::TextBox^  txtSearch;
	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Label^  lblErrorMessage;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Panel^  quizPanel;

	private: System::Windows::Forms::Label^  label23;
	private: System::ComponentModel::IContainer^  components;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BinarySearch::typeid));
			this->AnimationPanel = (gcnew System::Windows::Forms::Panel());
			this->lblErrorMessage = (gcnew System::Windows::Forms::Label());
			this->btnAnimate = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnEnterInput = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// AnimationPanel
			// 
			this->AnimationPanel->BackColor = System::Drawing::Color::White;
			this->AnimationPanel->Location = System::Drawing::Point(25, 792);
			this->AnimationPanel->Name = L"AnimationPanel";
			this->AnimationPanel->Size = System::Drawing::Size(1038, 200);
			this->AnimationPanel->TabIndex = 0;
			// 
			// lblErrorMessage
			// 
			this->lblErrorMessage->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblErrorMessage->ForeColor = System::Drawing::Color::Firebrick;
			this->lblErrorMessage->Location = System::Drawing::Point(574, 995);
			this->lblErrorMessage->Name = L"lblErrorMessage";
			this->lblErrorMessage->Size = System::Drawing::Size(485, 20);
			this->lblErrorMessage->TabIndex = 6;
			this->lblErrorMessage->Text = L"label1";
			this->lblErrorMessage->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnAnimate
			// 
			this->btnAnimate->BackColor = System::Drawing::Color::LightCoral;
			this->btnAnimate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAnimate->FlatAppearance->BorderSize = 0;
			this->btnAnimate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAnimate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAnimate->Location = System::Drawing::Point(751, 1030);
			this->btnAnimate->Name = L"btnAnimate";
			this->btnAnimate->Size = System::Drawing::Size(100, 30);
			this->btnAnimate->TabIndex = 1;
			this->btnAnimate->Text = L"Animate";
			this->btnAnimate->UseVisualStyleBackColor = false;
			this->btnAnimate->Click += gcnew System::EventHandler(this, &BinarySearch::btnAnimate_Click_1);
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtInput->Location = System::Drawing::Point(25, 1031);
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
			this->btnEnterInput->ForeColor = System::Drawing::Color::Black;
			this->btnEnterInput->Location = System::Drawing::Point(131, 1031);
			this->btnEnterInput->Name = L"btnEnterInput";
			this->btnEnterInput->Size = System::Drawing::Size(110, 30);
			this->btnEnterInput->TabIndex = 3;
			this->btnEnterInput->Text = L"Enter input";
			this->btnEnterInput->UseVisualStyleBackColor = false;
			this->btnEnterInput->Click += gcnew System::EventHandler(this, &BinarySearch::btnEnterInput_Click_1);
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(280, 1031);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(100, 28);
			this->txtSearch->TabIndex = 4;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &BinarySearch::txtSearch_TextChanged);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::LightCoral;
			this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSearch->FlatAppearance->BorderSize = 0;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(386, 1031);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(169, 30);
			this->btnSearch->TabIndex = 5;
			this->btnSearch->Text = L"Enter input to search";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &BinarySearch::btnSearch_Click_1);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::LightCoral;
			this->btnReset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReset->FlatAppearance->BorderSize = 0;
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(963, 1029);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 7;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &BinarySearch::btnReset_Click_1);
			// 
			// btnPause
			// 
			this->btnPause->BackColor = System::Drawing::Color::LightCoral;
			this->btnPause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPause->FlatAppearance->BorderSize = 0;
			this->btnPause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPause->Location = System::Drawing::Point(857, 1029);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(100, 30);
			this->btnPause->TabIndex = 8;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &BinarySearch::btnPause_Click_1);
			// 
			// timer1
			// 
			this->timer1->Interval = 1500;
			this->timer1->Tick += gcnew System::EventHandler(this, &BinarySearch::timer1_Tick_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(432, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"BINARY SEARCH";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1038, 68);
			this->label2->TabIndex = 10;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 21);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Binary Search:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(139, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(924, 69);
			this->label4->TabIndex = 12;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(204, 230);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(679, 347);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 603);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1038, 151);
			this->label5->TabIndex = 14;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 763);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 26);
			this->label6->TabIndex = 15;
			this->label6->Text = L"LEARN WITH FUN";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::MistyRose;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 1100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1038, 855);
			this->label7->TabIndex = 16;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(392, 1080);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(321, 21);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Recursive implementation of Binary Search";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(21, 1972);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 21);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Output:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::MistyRose;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(94, 1973);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(210, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Element is present at index 3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(393, 2016);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(318, 21);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Iterative implementation of Binary Search";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::MistyRose;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(21, 2043);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(1024, 853);
			this->label12->TabIndex = 21;
			this->label12->Text = resources->GetString(L"label12.Text");
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(21, 2913);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 21);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Output:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::MistyRose;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(94, 2914);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(210, 20);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Element is present at index 3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(21, 2948);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(135, 21);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Time Complexity:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(162, 2949);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(393, 20);
			this->label16->TabIndex = 25;
			this->label16->Text = L"The time complexity of Binary Search can be written as";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::MistyRose;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(162, 2978);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(129, 20);
			this->label17->TabIndex = 26;
			this->label17->Text = L"T(n) = T(n/2) + c ";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(162, 3008);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(883, 51);
			this->label18->TabIndex = 27;
			this->label18->Text = L"The above recurrence can be solved either using Recurrence T ree method or Master" 
				L" method. It falls in case II of Master Method and solution of the recurrence is " 
				L"Theta(Logn)";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(21, 3059);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(129, 21);
			this->label19->TabIndex = 28;
			this->label19->Text = L"Auxiliary Space:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(162, 3060);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(787, 20);
			this->label20->TabIndex = 29;
			this->label20->Text = L"O(1) in case of iterative implementation. In case of recursive implementation, O(" 
				L"Logn) recursion call stack space.";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(21, 3091);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(170, 21);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Algorithmic Paradigm:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(197, 3092);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(163, 20);
			this->label22->TabIndex = 31;
			this->label22->Text = L"Decrease and Conquer";
			// 
			// quizPanel
			// 
			this->quizPanel->Location = System::Drawing::Point(25, 3184);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 32;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(27, 3160);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(382, 21);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Answer the question correctly to pass the module.";
			// 
			// BinarySearch
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Snow;
			this->Controls->Add(this->label23);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->lblErrorMessage);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->btnEnterInput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnAnimate);
			this->Controls->Add(this->AnimationPanel);
			this->Name = L"BinarySearch";
			this->Size = System::Drawing::Size(1088, 3700);
			this->Load += gcnew System::EventHandler(this, &BinarySearch::BinarySearch_Load);
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
			int si;
			int ei;
			PictureBox ^arrow;
			int arrowHeight;
			System::Collections::Generic::List<Label ^> indexList;
			Label ^label_si;
			Label ^label_ei;
			Label ^label_mid;
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

	private: System::Void BinarySearch_Load(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 numInputs = 0;
				 maxInputs = 15;
				 maxLength = 5;
				 boxHeight = 60;
				 boxWidth = 60;
				 startX = 0;
				 startY = (AnimationPanel->Size.Height)/2;
				 searchInput = -1;
				 si = -5;
				 ei = -5;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 label_si = gcnew Label();
				 label_mid = gcnew Label();
				 label_ei = gcnew Label();
				 outputLabel = gcnew Label();

				 // Question Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 3;
				 newPanel->module_id = 1;
				 newPanel->username = username;
				 newPanel->update_id = 11;
				 newPanel->update_name = "SearchingProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }

	private: System::Void btnEnterInput_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
					 newLabel2->Size = Drawing::Size(boxWidth, 20);
					 newLabel2->TextAlign = ContentAlignment::TopCenter;
					 indexList.Add(newLabel2);
					 newLabel2->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 AnimationPanel->Controls->Add(newLabel2);

					 txtInput->Text = "";
				 }
			 }

	private: System::Void btnSearch_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
	
	private: System::Void btnReset_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
				 si = -5;
				 ei = -5;
				 arrowHeight = 75;
				 arrow = gcnew PictureBox();
				 input.Clear();
				 labelList.Clear();
				 indexList.Clear();
				 outputLabel->Text = "";

				 btnEnterInput->Enabled = true;
				 btnSearch->Enabled = true;
			 }

	private: System::Void btnPause_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 timer1->Enabled = false;
			 }
	
	private: System::Void btnAnimate_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";

				 if(searchInput == -1){
					 lblErrorMessage->Text = "Enter input to search.";
					 return;
				 }

				 int x = input[0];
				 for(int i = 1; i < input.Count; i++){
					 if(input[i] < x){
						 lblErrorMessage->Text = "The input is not in ascending order.";
						 return;
					 }
					 x = input[i];
				 }

				 /*for(int i = 0; i < numInputs; i++){
					 labelList[i]->BackColor = Color::LightSkyBlue;
				 }*/


				 // si = -5;
				 // ei = -5;
				 // outputLabel->Text = "";
				 btnEnterInput->Enabled = false;
				 btnSearch->Enabled = false;

				 timer1->Enabled = true;
			 }
	
	private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
				 if(si == -5){
					 si = 0;
					 ei = numInputs-1;

					 int mid = (si+ei)/2;
					 labelList[mid]->BackColor = Color::LemonChiffon;
					 arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png";
					 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.png");
					 arrow->SizeMode = PictureBoxSizeMode::StretchImage;
					 arrow->Size = Drawing::Size(boxWidth, arrowHeight);
					 arrow->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY-arrowHeight);
					 AnimationPanel->Controls->Add(arrow);

					 indexList[si]->ForeColor = Color::DarkBlue; 
					 indexList[ei]->ForeColor = Color::DarkBlue;
					 indexList[mid]->ForeColor = Color::DarkOrange;
					 
					 label_si->Text = "start";
					 label_si->Location = Drawing::Point(startX+(si+1)*boxWidth, startY+boxHeight+20);
					 label_si->Size = Drawing::Size(boxWidth, 20);
					 label_si->TextAlign = ContentAlignment::TopCenter;
					 label_si->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_si->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_si);

					 label_ei->Text = "end";
					 label_ei->Location = Drawing::Point(startX+(ei+1)*boxWidth, startY+boxHeight+20);
					 label_ei->Size = Drawing::Size(boxWidth, 20);
					 label_ei->TextAlign = ContentAlignment::TopCenter;
					 label_ei->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_ei->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_ei);
	
					 label_mid->Text = "mid";
					 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
					 label_mid->Size = Drawing::Size(boxWidth, 20);
					 label_mid->TextAlign = ContentAlignment::TopCenter;
					 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_mid->ForeColor = Color::DarkOrange;
					 AnimationPanel->Controls->Add(label_mid);

					 return;
				 }

				 int mid = (si+ei)/2;

				 label_si->Text = "";
				 label_ei->Text = "";
				 indexList[si]->ForeColor = Color::Black;
				 indexList[ei]->ForeColor = Color::Black;
				 label_mid->Text = "";
				 indexList[mid]->ForeColor = Color::Black;
				 
				 if(input[mid] < searchInput){
					 si = mid+1;
				 }
				 else if(searchInput < input[mid]){
					 ei = mid-1;
				 }
				 else{
					 si = mid;
					 ei = mid;
				 }

				 mid = (si+ei)/2;
				 labelList[mid]->BackColor = Color::LemonChiffon;
				 arrow->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY-arrowHeight);

				 if(si < ei){
					 for(int i = 0; i < numInputs; i++){
						 if(i < si || i > ei){
							 labelList[i]->BackColor = Color::LightCoral;
						 }
					 }

					 indexList[mid]->ForeColor = Color::DarkOrange;
					 indexList[si]->ForeColor = Color::DarkBlue; 
					 indexList[ei]->ForeColor = Color::DarkBlue;
					 
					 label_mid->Text = "mid";
					 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
					 label_mid->Size = Drawing::Size(boxWidth, 20);
					 label_mid->TextAlign = ContentAlignment::TopCenter;
					 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_mid->ForeColor = Color::DarkOrange;

					 label_ei->Text = "end";
					 label_ei->Location = Drawing::Point(startX+(ei+1)*boxWidth, startY+boxHeight+20);
					 label_ei->Size = Drawing::Size(boxWidth, 20);
					 label_ei->TextAlign = ContentAlignment::TopCenter;
					 label_ei->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_ei->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_ei);

					 label_si->Text = "start";
					 label_si->Location = Drawing::Point(startX+(si+1)*boxWidth, startY+boxHeight+20);
					 label_si->Size = Drawing::Size(boxWidth, 20);
					 label_si->TextAlign = ContentAlignment::TopCenter;
					 label_si->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_si->ForeColor = Color::DarkBlue;
					 AnimationPanel->Controls->Add(label_si);

					 AnimationPanel->Controls->Add(label_mid);
				 }
				 else if(si == ei){
					 for(int i = 0; i < numInputs; i++){
						 if(i == mid) continue;
						 labelList[i]->BackColor = Color::LightCoral;
					 }

					 if(input[mid] != searchInput){
						 labelList[mid]->BackColor = Color::LemonChiffon;
						 indexList[mid]->ForeColor = Color::DarkOrange;
						 label_mid->Text = "mid";
						 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
						 label_mid->Size = Drawing::Size(boxWidth, 20);
						 label_mid->TextAlign = ContentAlignment::TopCenter;
						 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
						 label_mid->ForeColor = Color::DarkOrange;
						 AnimationPanel->Controls->Add(label_mid);
						 label_mid->BringToFront();
						 return;
					 }

					 labelList[mid]->BackColor = Color::PaleGreen;
					 indexList[mid]->ForeColor = Color::DarkGreen;

					 label_mid->Text = "mid";
					 label_mid->Location = Drawing::Point(startX+(mid+1)*boxWidth, startY+boxHeight+20);
					 label_mid->Size = Drawing::Size(boxWidth, 20);
					 label_mid->TextAlign = ContentAlignment::TopCenter;
					 label_mid->Font = gcnew Drawing::Font("Comic Sans MS", 9, FontStyle::Regular);
					 label_mid->ForeColor = Color::DarkGreen;
					 AnimationPanel->Controls->Add(label_mid);
					 label_mid->BringToFront();

					 outputLabel->Text = "Input found at index " + mid;
					 outputLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 outputLabel->Size = Drawing::Size(175, 20);
					 outputLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(outputLabel);
					 timer1->Enabled = false;
				 }
				 else{
					 for(int i = 0; i < numInputs; i++){
						 labelList[i]->BackColor = Color::LightCoral;
					 }

					 outputLabel->Text = "Input not found!";
					 outputLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 outputLabel->Size = Drawing::Size(175, 20);
					 outputLabel->Location = Drawing::Point(0, 0);
					 AnimationPanel->Controls->Add(outputLabel);
					 timer1->Enabled = false;
					 return;
				 }
			 }
private: System::Void txtSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
