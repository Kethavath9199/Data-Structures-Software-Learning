#pragma once
#include "moduleQuiz.h"
#include<string.h>
#include <string>
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for Array_Insertion
	/// </summary>
	public ref class Array_Insertion : public System::Windows::Forms::UserControl
	{
	public:
		Array_Insertion(void)
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
		~Array_Insertion()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  insertarray;
	private: System::Windows::Forms::TextBox^  insertindex;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  insertvalue;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  insert_animation;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Timer^  insertimer;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  quizPanel;

	private: System::Windows::Forms::Label^  label9;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Array_Insertion::typeid));
			this->insertarray = (gcnew System::Windows::Forms::Button());
			this->insertindex = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->insertvalue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->insert_animation = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->insertimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->insert_animation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// insertarray
			// 
			this->insertarray->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->insertarray->FlatAppearance->BorderSize = 0;
			this->insertarray->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->insertarray->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insertarray->Location = System::Drawing::Point(849, 908);
			this->insertarray->Margin = System::Windows::Forms::Padding(2);
			this->insertarray->Name = L"insertarray";
			this->insertarray->Size = System::Drawing::Size(100, 30);
			this->insertarray->TabIndex = 12;
			this->insertarray->Text = L"INSERT";
			this->insertarray->UseVisualStyleBackColor = false;
			this->insertarray->Click += gcnew System::EventHandler(this, &Array_Insertion::insertarray_Click);
			// 
			// insertindex
			// 
			this->insertindex->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insertindex->Location = System::Drawing::Point(526, 908);
			this->insertindex->Margin = System::Windows::Forms::Padding(2);
			this->insertindex->Name = L"insertindex";
			this->insertindex->Size = System::Drawing::Size(90, 28);
			this->insertindex->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(400, 911);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Insert At Index";
			// 
			// insertvalue
			// 
			this->insertvalue->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insertvalue->Location = System::Drawing::Point(251, 908);
			this->insertvalue->Margin = System::Windows::Forms::Padding(2);
			this->insertvalue->Name = L"insertvalue";
			this->insertvalue->Size = System::Drawing::Size(100, 28);
			this->insertvalue->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 911);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Insert Value";
			// 
			// insert_animation
			// 
			this->insert_animation->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->insert_animation->Controls->Add(this->label19);
			this->insert_animation->Controls->Add(this->label18);
			this->insert_animation->Controls->Add(this->label17);
			this->insert_animation->Controls->Add(this->label16);
			this->insert_animation->Controls->Add(this->label15);
			this->insert_animation->Controls->Add(this->label14);
			this->insert_animation->Controls->Add(this->label13);
			this->insert_animation->Controls->Add(this->label12);
			this->insert_animation->Controls->Add(this->label11);
			this->insert_animation->Controls->Add(this->l1);
			this->insert_animation->Controls->Add(this->l2);
			this->insert_animation->Controls->Add(this->l3);
			this->insert_animation->Controls->Add(this->l4);
			this->insert_animation->Controls->Add(this->l5);
			this->insert_animation->Controls->Add(this->l6);
			this->insert_animation->Controls->Add(this->l7);
			this->insert_animation->Controls->Add(this->l8);
			this->insert_animation->Location = System::Drawing::Point(155, 698);
			this->insert_animation->Margin = System::Windows::Forms::Padding(2);
			this->insert_animation->Name = L"insert_animation";
			this->insert_animation->Size = System::Drawing::Size(794, 206);
			this->insert_animation->TabIndex = 7;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(7, 118);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 82);
			this->label19->TabIndex = 16;
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(714, 6);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 15;
			this->label18->Text = L"8";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(625, 6);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 14;
			this->label17->Text = L"7";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(536, 6);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 13;
			this->label16->Text = L"6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(448, 6);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L"5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(360, 6);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 11;
			this->label14->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(272, 6);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(185, 6);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(107, 6);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"1";
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::SystemColors::Desktop;
			this->l1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l1->Location = System::Drawing::Point(110, 29);
			this->l1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(63, 65);
			this->l1->TabIndex = 7;
			this->l1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::SystemColors::Desktop;
			this->l2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l2->Location = System::Drawing::Point(188, 29);
			this->l2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(72, 65);
			this->l2->TabIndex = 6;
			this->l2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::SystemColors::Desktop;
			this->l3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l3->Location = System::Drawing::Point(274, 29);
			this->l3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(76, 65);
			this->l3->TabIndex = 5;
			this->l3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::SystemColors::Desktop;
			this->l4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l4->Location = System::Drawing::Point(362, 29);
			this->l4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(76, 65);
			this->l4->TabIndex = 4;
			this->l4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::SystemColors::Desktop;
			this->l5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l5->Location = System::Drawing::Point(450, 29);
			this->l5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(76, 65);
			this->l5->TabIndex = 3;
			this->l5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::SystemColors::Desktop;
			this->l6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l6->Location = System::Drawing::Point(538, 29);
			this->l6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(76, 65);
			this->l6->TabIndex = 2;
			this->l6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::SystemColors::Desktop;
			this->l7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l7->Location = System::Drawing::Point(627, 29);
			this->l7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(76, 65);
			this->l7->TabIndex = 1;
			this->l7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l8
			// 
			this->l8->BackColor = System::Drawing::SystemColors::Desktop;
			this->l8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l8->Location = System::Drawing::Point(729, 29);
			this->l8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(63, 65);
			this->l8->TabIndex = 0;
			this->l8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// insertimer
			// 
			this->insertimer->Interval = 1;
			this->insertimer->Tick += gcnew System::EventHandler(this, &Array_Insertion::insertimer_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(401, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(302, 39);
			this->label3->TabIndex = 13;
			this->label3->Text = L"INSERTION IN ARRAYS";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1065, 44);
			this->label4->TabIndex = 14;
			this->label4->Text = L"In an unsorted array, the insert operation is faster as compared to sorted array " 
				L"because we don’t have to care about the position at which the element is to be p" 
				L"laced.";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(152, 168);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 437);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(157, 670);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 26);
			this->label5->TabIndex = 16;
			this->label5->Text = L"LEARN WITH FUN";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 972);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1065, 888);
			this->label6->TabIndex = 17;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 1896);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 21);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Output:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(20, 1917);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1065, 46);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Before Insertion: 12 16 20 40 50 70 \r\nAfter Insertion: 12 16 20 40 50 70 26 ";
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(37, 2072);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(40, 2048);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(382, 21);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Answer the question correctly to pass the module.";
			// 
			// Array_Insertion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->Controls->Add(this->label9);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->insertarray);
			this->Controls->Add(this->insertindex);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->insertvalue);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->insert_animation);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Array_Insertion";
			this->Size = System::Drawing::Size(1105, 2600);
			this->Load += gcnew System::EventHandler(this, &Array_Insertion::Array_Insertion_Load);
			this->insert_animation->ResumeLayout(false);
			this->insert_animation->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String ^username;

	
	private: System::Void insertarray_Click(System::Object^  sender, System::EventArgs^  e) { // This function is called upon clicking the insert button 
				 if(this->insertvalue->Text=="" || this->insertindex->Text==""){ // This checks if the textbox is empty or not
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 MessageBox::Show("Please Enter Values In The Text Boxes");
				 }
				 else{
					 int len1=this->insertvalue->Text->Length;int num1=0;
					 for(int i=0;i<len1;i++){if(!isdigit(this->insertvalue->Text[i])){num1=1;}}
					 int len2=this->insertindex->Text->Length;int num2=0;
					 for(int i=0;i<len2;i++){if(!isdigit(this->insertindex->Text[i])){num2=1;}}
					 if(num1==1 || num2==1){
						 this->insertindex->Text = "";
						 this->insertvalue->Text = "";
						 MessageBox::Show("Please Enter Value Between 0 to 100 And Index Between 1 To 8");
					 }
					 else if(int::Parse(this->insertvalue->Text)<= 100 && int::Parse(this->insertvalue->Text)>= 0 && int::Parse(this->insertindex->Text)>= 1 && int::Parse(this->insertindex->Text)<= 8){
						 this->insertvalue->Enabled = false;
						 this->insertindex->Enabled = false;
						 this->insertarray->Enabled = false;
						 this->label19->Text = this->insertvalue->Text;
						 insertimer->Enabled = true; // If the input is valid then enable the timer
					 }
					 else{
						 this->insertindex->Text = "";
						 this->insertvalue->Text = "";
						 MessageBox::Show("Please Enter Value Between 0 to 100 And Index Between 1 To 8");
					 }
				 }
			 }
			 
	private: System::Void insertimer_Tick(System::Object^  sender, System::EventArgs^  e) { // This function is called upon every tick of the clock
				 if(int::Parse(this->insertindex->Text)==1 && this->label19->Location.X == this->l1->Location.X){
					 this->l1->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==2 && this->label19->Location.X == this->l2->Location.X){
					 this->l2->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==3 && this->label19->Location.X == this->l3->Location.X){
					 this->l3->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==4 && this->label19->Location.X == this->l4->Location.X){
					 this->l4->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==5 && this->label19->Location.X == this->l5->Location.X){
					 this->l5->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==6 && this->label19->Location.X == this->l6->Location.X){
					 this->l6->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==7 && this->label19->Location.X == this->l7->Location.X){
					 this->l7->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==8 && this->label19->Location.X == this->l8->Location.X){
					 this->l8->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 this->insertvalue->Enabled = true;
					 this->insertindex->Enabled = true;
					 this->insertarray->Enabled = true;
					 insertimer->Enabled = false;
				 }
				 else{
					 int x = this->label19->Location.X + 1;
					 this->label19->Location = System::Drawing::Point(x,this->label19->Location.Y);
				 }
			 }
	private: System::Void Array_Insertion_Load(System::Object^  sender, System::EventArgs^  e) { // This loads the module quiz when the form is loaded
				 // Quiz Panel
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 1;
				 newPanel->module_id = 1;
				 newPanel->username = username;	
				 newPanel->update_id = 9;
				 newPanel->update_name = "ArraysProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
};
}
