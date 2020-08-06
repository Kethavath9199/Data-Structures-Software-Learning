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
	/// Summary for quicksort
	/// </summary>
	public ref class quicksort : public System::Windows::Forms::UserControl
	{
	public:
		quicksort(void)
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
		~quicksort()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;



	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  buttonresume;





	private: System::Windows::Forms::Panel^  panel1;









	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Panel^  quizPanel;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button1;





	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(quicksort::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->buttonresume = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1038, 49);
			this->label2->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(462, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 39);
			this->label1->TabIndex = 14;
			this->label1->Text = L"QUICK SORT";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 2600);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 26);
			this->label6->TabIndex = 28;
			this->label6->Text = L"LEARN WITH FUN";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Bisque;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(852, 2858);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 30);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Pause";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &quicksort::btnPause_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Bisque;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(958, 2858);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 30);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &quicksort::button7_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Bisque;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(126, 2861);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 30);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Enter input";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &quicksort::button3_Click_1);
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtInput->Location = System::Drawing::Point(20, 2861);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 28);
			this->txtInput->TabIndex = 21;
			// 
			// buttonresume
			// 
			this->buttonresume->BackColor = System::Drawing::Color::Bisque;
			this->buttonresume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonresume->FlatAppearance->BorderSize = 0;
			this->buttonresume->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonresume->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonresume->Location = System::Drawing::Point(746, 2860);
			this->buttonresume->Name = L"buttonresume";
			this->buttonresume->Size = System::Drawing::Size(100, 30);
			this->buttonresume->TabIndex = 20;
			this->buttonresume->Text = L"Resume";
			this->buttonresume->UseVisualStyleBackColor = false;
			this->buttonresume->Click += gcnew System::EventHandler(this, &quicksort::button6_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(20, 2629);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1038, 178);
			this->panel1->TabIndex = 19;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Bisque;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label24->Location = System::Drawing::Point(916, 2816);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 29);
			this->label24->TabIndex = 30;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::Bisque;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label22->Location = System::Drawing::Point(489, 2816);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 29);
			this->label22->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Bisque;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label12->Location = System::Drawing::Point(866, 2820);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 25);
			this->label12->TabIndex = 28;
			this->label12->Text = L"and";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Bisque;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label10->Location = System::Drawing::Point(802, 2816);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 29);
			this->label10->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Bisque;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label9->Location = System::Drawing::Point(691, 2816);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 29);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Swap:";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Bisque;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label11->Location = System::Drawing::Point(132, 2816);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 29);
			this->label11->TabIndex = 25;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Bisque;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label18->Location = System::Drawing::Point(21, 2816);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(106, 29);
			this->label18->TabIndex = 24;
			this->label18->Text = L"Pivot:";
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Bisque;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label19->Location = System::Drawing::Point(438, 2820);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(46, 25);
			this->label19->TabIndex = 23;
			this->label19->Text = L"and";
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Bisque;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label20->Location = System::Drawing::Point(375, 2816);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 29);
			this->label20->TabIndex = 22;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Bisque;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label21->Location = System::Drawing::Point(264, 2816);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(106, 29);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Comparing:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(18, 5122);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(382, 21);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Answer the question correctly to pass the module.";
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(16, 5147);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 38;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Bisque;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(261, 2861);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Sort";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &quicksort::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(201, 599);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(703, 312);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1065, 225);
			this->label3->TabIndex = 40;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(360, 21);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Pseudo Code for recursive QuickSort function :";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Bisque;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 327);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1065, 248);
			this->label5->TabIndex = 42;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 927);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 21);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Partition Algorithm";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(20, 948);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1065, 65);
			this->label8->TabIndex = 44;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Bisque;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(20, 1013);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1065, 265);
			this->label13->TabIndex = 45;
			this->label13->Text = resources->GetString(L"label13.Text");
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(20, 1288);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(208, 21);
			this->label14->TabIndex = 46;
			this->label14->Text = L"Pseudo code for partition()";
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Bisque;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(20, 1309);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1065, 507);
			this->label15->TabIndex = 47;
			this->label15->Text = resources->GetString(L"label15.Text");
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(20, 1825);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(207, 21);
			this->label16->TabIndex = 48;
			this->label16->Text = L"Illustration of partition() :";
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Bisque;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(21, 1846);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(1065, 685);
			this->label17->TabIndex = 49;
			this->label17->Text = resources->GetString(L"label17.Text");
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(16, 2937);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(127, 21);
			this->label25->TabIndex = 50;
			this->label25->Text = L"Implementation:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(16, 2958);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(464, 20);
			this->label26->TabIndex = 51;
			this->label26->Text = L"Following are C++, Java and Python implementations of QuickSort.";
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::Bisque;
			this->label27->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(16, 2978);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(1065, 1472);
			this->label27->TabIndex = 52;
			this->label27->Text = resources->GetString(L"label27.Text");
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(16, 4463);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(67, 21);
			this->label28->TabIndex = 53;
			this->label28->Text = L"Output:";
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::Bisque;
			this->label29->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(16, 4484);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(1065, 40);
			this->label29->TabIndex = 54;
			this->label29->Text = L"Sorted array:\r\n1 5 7 8 9 10";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(16, 4540);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(170, 21);
			this->label30->TabIndex = 55;
			this->label30->Text = L"Analysis of QuickSort";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(16, 4561);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(450, 20);
			this->label31->TabIndex = 56;
			this->label31->Text = L"Time taken by QuickSort in general can be written as following.";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Bisque;
			this->label32->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(20, 4581);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(240, 20);
			this->label32->TabIndex = 57;
			this->label32->Text = L"T(n) = T(k) + T(n-k-1) + \\theta(n)";
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(16, 4601);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(1065, 42);
			this->label33->TabIndex = 58;
			this->label33->Text = resources->GetString(L"label33.Text");
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(16, 4652);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(1065, 62);
			this->label34->TabIndex = 59;
			this->label34->Text = resources->GetString(L"label34.Text");
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Bisque;
			this->label35->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(16, 4714);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(225, 60);
			this->label35->TabIndex = 60;
			this->label35->Text = L"T(n) = T(0) + T(n-1) + \\theta(n)\r\nwhich is equivalent to  \r\n T(n) = T(n-1) + \\the" 
				L"ta(n)";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(16, 4785);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(335, 20);
			this->label36->TabIndex = 61;
			this->label36->Text = L"The solution of above recurrence is \\theta(n2).";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(16, 4821);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1065, 23);
			this->label37->TabIndex = 62;
			this->label37->Text = L"Best Case: The best case occurs when the partition process always picks the middl" 
				L"e element as pivot. Following is recurrence for best case.";
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::Bisque;
			this->label38->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(16, 4844);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(199, 23);
			this->label38->TabIndex = 63;
			this->label38->Text = L"T(n) = 2T(n/2) + \\theta(n)";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(16, 4867);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(701, 20);
			this->label39->TabIndex = 64;
			this->label39->Text = L"The solution of above recurrence is \\theta(nLogn). It can be solved using case 2 " 
				L"of Master Theorem.";
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(16, 4904);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(1065, 104);
			this->label40->TabIndex = 65;
			this->label40->Text = resources->GetString(L"label40.Text");
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Bisque;
			this->label41->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(16, 5008);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(261, 20);
			this->label41->TabIndex = 66;
			this->label41->Text = L"T(n) = T(n/9) + T(9n/10) + \\theta(n)";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(16, 5028);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(39, 20);
			this->label42->TabIndex = 67;
			this->label42->Text = L"time";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &quicksort::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &quicksort::timer3_Tick);
			// 
			// quicksort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->buttonresume);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"quicksort";
			this->Size = System::Drawing::Size(1105, 5700);
			this->Load += gcnew System::EventHandler(this, &quicksort::quicksort_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//------------------------------------------------------------------------------------------------------------------------------------------------//
	public:	
		String ^username;
		int num_elements;
		int box_length;
		int box_width;
		int start_x;
		float curr_size;
		int left_start;
		int start_y;
		int number_size;
		int sort_selected;

		int timer1_set;
		int timer3_set;
		int* quicksort_stack;
		int quicksort_top;

		int partition_l;
		int partition_h;
		int partition_var;
		int partition_no;

		System::Collections::Generic::List<int> input_array;
		System::Collections::Generic::List<int> input_array_completed;
		System::Collections::Generic::List<Label ^> LabelList;

		//----------------------------------------------------TAKING INPUT CODE -----------------------------------------------------------------//
		void show_array(int start,int length){
			//To Show The Array

			for(int i=start;i<=length;i++){

				Label ^newLabel = gcnew Label();
				newLabel->Location = Drawing::Point(start_x+(i)*box_length, start_y);
				newLabel->Size = Drawing::Size(box_length, box_width);
				newLabel->Text = System::Convert::ToString(input_array[i]);

				if(input_array_completed[i]==0){
					newLabel->BackColor = Color::LightSkyBlue;
				}
				else if(input_array_completed[i]==-1){
					newLabel->BackColor = Color::PaleGreen;
				}
				else if(input_array_completed[i]==-3){
					newLabel->BackColor = Color::Red;
				}
				else{
					newLabel->BackColor = Color::Orange;
				}

				newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
				newLabel->TextAlign = ContentAlignment::MiddleCenter;
				newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				panel1->Controls->Add(newLabel);
			}	
		}

		void calculate_size(){
			//start position is: 315,85
			//size of panel is : 1100,700
			//For initialising input array
			int i;
			for(i=60;i>=35;i=i-5){
				if(num_elements*i<700)break;
			}

			box_length=i;
			box_width= 50;

			start_x=50;
			start_y=50;
		}

		bool inputValidate(System::String ^input){
			try{
				int input_ele = int::Parse(input);
				calculate_size();
				return true;
			}
			catch(...){
				MessageBox::Show("Input Entered is not correct");

			}
			return false;
		}

		//-------------------------------------------------------QUICK SORT CODE --------------------------------------------------------------------//
		void swap ( int a, int b ){ 
			int t = input_array[a]; 
			input_array[a] = input_array[b]; 
			input_array[b] = t;
			label10->Text=System::Convert::ToString(input_array[a]);
			label24->Text=System::Convert::ToString(input_array[b]);

		}	
		int partition ( int l, int h){ 
			int x = input_array[h]; 
			int i = (l - 1); 

			for (int j = l; j <= h- 1; j++) 
			{ 
				if(input_array[j] <= x){ 
					i++; 
					swap (i, j); 
				} 
			} 
			swap (i+1,h); 
			return (i + 1); 
		} 

		//------------------------------------------------------WINDOWS FORM CODE --------------------------------------------------------------------//
	private: System::Void quicksort_Load(System::Object^  sender, System::EventArgs^  e) {
				 quicksort_stack=new int[100];
				 sort_selected=1;
				 buttonresume->Enabled=false;
				 button5->Enabled=false;

				 // Quiz Panel Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 4;
				 newPanel->module_id = 4;
				 newPanel->username = username;
				 newPanel->update_id = 12;
				 newPanel->update_name = "SortingProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }

	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 //pause
				 if(timer1->Enabled == true){
					 timer1_set=1;
					 timer1->Enabled=false;
				 }
				 if(timer3->Enabled == true){
					 timer3_set=1;
					 timer3->Enabled=false;
				 }
			 }
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 //enter input
				 String ^s=txtInput->Text;
				 bool check=inputValidate(s);
				 txtInput->Text="";
				 if(check){
					 int input = int::Parse(s);
					 num_elements++;
					 input_array.Add(input);
					 input_array_completed.Add(0);
					 panel1->Controls->Clear();
					 show_array(0,input_array.Count-1);
				 }	
			 }
	private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 //reset
				 timer1->Enabled = false;
				 timer2->Enabled= false;

				 button3->Enabled=true;
				 buttonresume->Enabled=false;
				 button5->Enabled=false;

				 panel1->Controls->Clear();
				 num_elements = 0;
				 input_array.Clear();
				 label20->Text="";
				 label22->Text="";
				 label10->Text="";
				 label24->Text="";
				 label11->Text="";
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //quicksort
				 if(input_array.Count==0){MessageBox::Show("The input array is null,add something");return;}
				 quicksort_top=-1;
				 quicksort_stack[++quicksort_top]=0;
				 quicksort_stack[++quicksort_top]=input_array.Count-1;
				 buttonresume->Enabled=true;
				 button3->Enabled=false;
				 button5->Enabled=true;
				 timer1->Enabled=true;
			 }

	private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 //resume
				 if(timer1_set==1){timer1_set=0;timer1->Enabled=true;}
				 if(timer3_set==1){timer3_set=0;timer3->Enabled=true;}
			 }



			 //------------------------------------------TIMER CODE-----------------------------------------------------------//

	
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //timer
			 int n=input_array.Count;
			 if(sort_selected==0){
				 //mergesort
			 }
			 else{
				 //quicksort
				 if(quicksort_top<0){
					 for(int i=0;i<input_array.Count;i++){input_array_completed[i]=-2;}
					 panel1->Controls->Clear();
					 show_array(0,input_array.Count-1);
					 timer1->Enabled=false;
					 timer3->Enabled=false;
					 input_array.Clear();
					 input_array_completed.Clear();
					 buttonresume->Enabled=false;
					 button5->Enabled=false;
					 return;
				 }
				 panel1->Controls->Clear();
				 show_array(0,input_array.Count-1);			
				 partition_h = quicksort_stack[ quicksort_top-- ]; 
				 partition_l = quicksort_stack[ quicksort_top-- ]; 
				 partition_var=partition_l;
				 partition_no=partition_l-1;
				 label11->Text=System::Convert::ToString(input_array[partition_h]);
				 input_array_completed[partition_h]=-1;
				 timer1->Enabled=false;
				 timer3->Enabled=true;
				 // p is obtained from the timer3 which does partition 


			 }

		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //quicksort Partition
			 label10->Text="";
			 label24->Text="";
			 for(int i=0;i<input_array.Count-1;i++){if(input_array_completed[i]==-3)input_array_completed[i]=0;}

			 int l=partition_l;
			 int h=partition_h;
			 int x = input_array[h]; 
			 label20->Text=System::Convert::ToString(input_array[partition_var]);
			 label22->Text=System::Convert::ToString(x);
			 input_array_completed[partition_var]=-3;
			 if(input_array[partition_var]<=x){
				 partition_no++;
				 swap(partition_no,partition_var);

			 }
			 panel1->Controls->Clear();
			 show_array(0,input_array.Count-1);
			 partition_var+=1;

			 if(partition_var > h-1){
				 timer3->Enabled=false;

				 swap(partition_no+1,partition_h);
				 input_array_completed[partition_h]=0;
				 input_array_completed[partition_no+1]=-2;
				 panel1->Controls->Clear();
				 show_array(0,input_array.Count-1);

				 int p=partition_no+1;
				 if ( p-1 > partition_l ) 
				 { 
					 quicksort_stack[ ++quicksort_top ] = partition_l; 
					 quicksort_stack[ ++quicksort_top ] = p - 1; 

				 } 
				 if ( p+1 < partition_h ) 
				 {	 
					 quicksort_stack[ ++quicksort_top ] = p + 1; 
					 quicksort_stack[ ++quicksort_top ] = partition_h; 

				 }

				 timer1->Enabled=true;
				 for(int i=0;i<input_array.Count-1;i++){if(input_array_completed[i]==-3)input_array_completed[i]=0;}

			 }
		 }
};
}
