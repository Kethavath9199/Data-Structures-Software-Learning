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
	/// Summary for LinkedList_Insertion
	/// </summary>
	public ref class LinkedList_Insertion : public System::Windows::Forms::UserControl
	{
	public:
		LinkedList_Insertion(void)
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
		~LinkedList_Insertion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  insert_but_ll;
	protected: 
	private: System::Windows::Forms::TextBox^  insert_ll_tf;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  insert_animation_ll;
	private: System::Windows::Forms::Label^  tail_ll;
	private: System::Windows::Forms::Label^  insert_ll_label;
	private: System::Windows::Forms::Label^  ll7;
	private: System::Windows::Forms::Label^  ll6;
	private: System::Windows::Forms::Label^  ll5;
	private: System::Windows::Forms::Label^  ll4;
	private: System::Windows::Forms::Label^  ll3;
	private: System::Windows::Forms::Label^  ll2;
	private: System::Windows::Forms::Label^  head_ll;
	private: System::Windows::Forms::Label^  ll1;

	private: System::Windows::Forms::Timer^  insertimerll;
	private: System::Windows::Forms::Timer^  tailtimer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Panel^  quizPanel;
	private: System::Windows::Forms::Label^  label19;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinkedList_Insertion::typeid));
			this->insert_but_ll = (gcnew System::Windows::Forms::Button());
			this->insert_ll_tf = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->insert_animation_ll = (gcnew System::Windows::Forms::Panel());
			this->tail_ll = (gcnew System::Windows::Forms::Label());
			this->insert_ll_label = (gcnew System::Windows::Forms::Label());
			this->ll7 = (gcnew System::Windows::Forms::Label());
			this->ll6 = (gcnew System::Windows::Forms::Label());
			this->ll5 = (gcnew System::Windows::Forms::Label());
			this->ll4 = (gcnew System::Windows::Forms::Label());
			this->ll3 = (gcnew System::Windows::Forms::Label());
			this->ll2 = (gcnew System::Windows::Forms::Label());
			this->head_ll = (gcnew System::Windows::Forms::Label());
			this->ll1 = (gcnew System::Windows::Forms::Label());
			this->insertimerll = (gcnew System::Windows::Forms::Timer(this->components));
			this->tailtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->insert_animation_ll->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// insert_but_ll
			// 
			this->insert_but_ll->BackColor = System::Drawing::Color::CornflowerBlue;
			this->insert_but_ll->FlatAppearance->BorderSize = 0;
			this->insert_but_ll->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->insert_but_ll->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_but_ll->Location = System::Drawing::Point(849, 886);
			this->insert_but_ll->Margin = System::Windows::Forms::Padding(2);
			this->insert_but_ll->Name = L"insert_but_ll";
			this->insert_but_ll->Size = System::Drawing::Size(100, 30);
			this->insert_but_ll->TabIndex = 7;
			this->insert_but_ll->Text = L"Insert";
			this->insert_but_ll->UseVisualStyleBackColor = false;
			this->insert_but_ll->Click += gcnew System::EventHandler(this, &LinkedList_Insertion::insert_but_ll_Click);
			// 
			// insert_ll_tf
			// 
			this->insert_ll_tf->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_ll_tf->Location = System::Drawing::Point(309, 886);
			this->insert_ll_tf->Margin = System::Windows::Forms::Padding(2);
			this->insert_ll_tf->Name = L"insert_ll_tf";
			this->insert_ll_tf->Size = System::Drawing::Size(100, 28);
			this->insert_ll_tf->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(151, 894);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Insert In Linked List";
			// 
			// insert_animation_ll
			// 
			this->insert_animation_ll->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->insert_animation_ll->Controls->Add(this->tail_ll);
			this->insert_animation_ll->Controls->Add(this->insert_ll_label);
			this->insert_animation_ll->Controls->Add(this->ll7);
			this->insert_animation_ll->Controls->Add(this->ll6);
			this->insert_animation_ll->Controls->Add(this->ll5);
			this->insert_animation_ll->Controls->Add(this->ll4);
			this->insert_animation_ll->Controls->Add(this->ll3);
			this->insert_animation_ll->Controls->Add(this->ll2);
			this->insert_animation_ll->Controls->Add(this->head_ll);
			this->insert_animation_ll->Controls->Add(this->ll1);
			this->insert_animation_ll->Location = System::Drawing::Point(155, 672);
			this->insert_animation_ll->Margin = System::Windows::Forms::Padding(2);
			this->insert_animation_ll->Name = L"insert_animation_ll";
			this->insert_animation_ll->Size = System::Drawing::Size(794, 210);
			this->insert_animation_ll->TabIndex = 4;
			// 
			// tail_ll
			// 
			this->tail_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tail_ll->Location = System::Drawing::Point(706, 170);
			this->tail_ll->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->tail_ll->Name = L"tail_ll";
			this->tail_ll->Size = System::Drawing::Size(75, 24);
			this->tail_ll->TabIndex = 9;
			this->tail_ll->Text = L"TAIL";
			this->tail_ll->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tail_ll->Visible = false;
			// 
			// insert_ll_label
			// 
			this->insert_ll_label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->insert_ll_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_ll_label->Location = System::Drawing::Point(32, 76);
			this->insert_ll_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->insert_ll_label->Name = L"insert_ll_label";
			this->insert_ll_label->Size = System::Drawing::Size(76, 82);
			this->insert_ll_label->TabIndex = 8;
			this->insert_ll_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->insert_ll_label->Visible = false;
			// 
			// ll7
			// 
			this->ll7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll7->Location = System::Drawing::Point(178, 76);
			this->ll7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll7->Name = L"ll7";
			this->ll7->Size = System::Drawing::Size(76, 82);
			this->ll7->TabIndex = 7;
			this->ll7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll7->Visible = false;
			// 
			// ll6
			// 
			this->ll6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll6->Location = System::Drawing::Point(266, 76);
			this->ll6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll6->Name = L"ll6";
			this->ll6->Size = System::Drawing::Size(76, 82);
			this->ll6->TabIndex = 6;
			this->ll6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll6->Visible = false;
			// 
			// ll5
			// 
			this->ll5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll5->Location = System::Drawing::Point(355, 76);
			this->ll5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll5->Name = L"ll5";
			this->ll5->Size = System::Drawing::Size(76, 82);
			this->ll5->TabIndex = 5;
			this->ll5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll5->Visible = false;
			// 
			// ll4
			// 
			this->ll4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll4->Location = System::Drawing::Point(442, 76);
			this->ll4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll4->Name = L"ll4";
			this->ll4->Size = System::Drawing::Size(76, 82);
			this->ll4->TabIndex = 4;
			this->ll4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll4->Visible = false;
			// 
			// ll3
			// 
			this->ll3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll3->Location = System::Drawing::Point(530, 76);
			this->ll3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll3->Name = L"ll3";
			this->ll3->Size = System::Drawing::Size(76, 82);
			this->ll3->TabIndex = 3;
			this->ll3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll3->Visible = false;
			// 
			// ll2
			// 
			this->ll2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll2->Location = System::Drawing::Point(620, 76);
			this->ll2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll2->Name = L"ll2";
			this->ll2->Size = System::Drawing::Size(76, 82);
			this->ll2->TabIndex = 2;
			this->ll2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll2->Visible = false;
			// 
			// head_ll
			// 
			this->head_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->head_ll->Location = System::Drawing::Point(706, 42);
			this->head_ll->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->head_ll->Name = L"head_ll";
			this->head_ll->Size = System::Drawing::Size(75, 24);
			this->head_ll->TabIndex = 1;
			this->head_ll->Text = L"HEAD";
			this->head_ll->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->head_ll->Visible = false;
			// 
			// ll1
			// 
			this->ll1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll1->Location = System::Drawing::Point(706, 76);
			this->ll1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll1->Name = L"ll1";
			this->ll1->Size = System::Drawing::Size(76, 82);
			this->ll1->TabIndex = 0;
			this->ll1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll1->Visible = false;
			// 
			// insertimerll
			// 
			this->insertimerll->Interval = 1;
			this->insertimerll->Tick += gcnew System::EventHandler(this, &LinkedList_Insertion::insertimerll_Tick);
			// 
			// tailtimer
			// 
			this->tailtimer->Interval = 1;
			this->tailtimer->Tick += gcnew System::EventHandler(this, &LinkedList_Insertion::tailtimer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(474, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 39);
			this->label1->TabIndex = 8;
			this->label1->Text = L"INSERTION";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1065, 82);
			this->label2->TabIndex = 9;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(349, 21);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Add a node at the front: (A 4 steps process)";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1065, 82);
			this->label5->TabIndex = 11;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(173, 313);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(759, 255);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(164, 644);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 26);
			this->label6->TabIndex = 13;
			this->label6->Text = L"FUN WITH LEARN";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 952);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(394, 21);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Following are the 4 steps to add node at the front.";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::LightBlue;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(20, 973);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1065, 329);
			this->label8->TabIndex = 15;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(20, 1314);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(489, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Time complexity of push() is O(1) as it does constant amount of work.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(20, 1358);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(375, 21);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Add a node after a given node: (5 steps process)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(20, 1379);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(573, 20);
			this->label11->TabIndex = 18;
			this->label11->Text = L"We are given pointer to a node, and the new node is inserted after the given node" 
				L".";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(173, 1427);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(759, 273);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::LightBlue;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(20, 1720);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(1065, 471);
			this->label12->TabIndex = 20;
			this->label12->Text = resources->GetString(L"label12.Text");
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(20, 2202);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(540, 20);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Time complexity of insertAfter() is O(1) as it does constant amount of work.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(20, 2251);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(318, 21);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Add a node at the end: (6 steps process)";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(20, 2272);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1065, 65);
			this->label15->TabIndex = 23;
			this->label15->Text = resources->GetString(L"label15.Text");
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(173, 2363);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(759, 245);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(20, 2627);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(345, 20);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Following are the 6 steps to add node at the end.";
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::LightBlue;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(20, 2647);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(1065, 623);
			this->label17->TabIndex = 26;
			this->label17->Text = resources->GetString(L"label17.Text");
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(20, 3293);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(1065, 45);
			this->label18->TabIndex = 27;
			this->label18->Text = resources->GetString(L"label18.Text");
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(37, 3438);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 28;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(40, 3414);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(382, 21);
			this->label19->TabIndex = 29;
			this->label19->Text = L"Answer the question correctly to pass the module.";
			// 
			// LinkedList_Insertion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->Controls->Add(this->label19);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->insert_but_ll);
			this->Controls->Add(this->insert_ll_tf);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->insert_animation_ll);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LinkedList_Insertion";
			this->Size = System::Drawing::Size(1105, 3900);
			this->Load += gcnew System::EventHandler(this, &LinkedList_Insertion::LinkedList_Insertion_Load);
			this->insert_animation_ll->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String ^username;

	private: System::Void insert_but_ll_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->insert_ll_tf->Text==""){
					 this->insert_ll_tf->Text = "";
					 MessageBox::Show("Please Enter Values In The Text Box!");
				 }
				 else if(this->ll7->Visible == true){
					 this->insert_ll_tf->Text = "";
					 MessageBox::Show("Linked List Is Full !");
				 }
				 else{
					 int len1=this->insert_ll_tf->Text->Length;int num1=0;
					 for(int i=0;i<len1;i++){if(!isdigit(this->insert_ll_tf->Text[i])){num1=1;}}
					 if(num1==0 && int::Parse(this->insert_ll_tf->Text)< 100 && int::Parse(this->insert_ll_tf->Text)>= 0){
						 this->insert_ll_label->Text = this->insert_ll_tf->Text;
						 this->insert_ll_label->Visible = true;
						 this->insert_ll_tf->Enabled = false;
						 this->insert_but_ll->Enabled = false;
						 insertimerll->Enabled = true;
					 }
					 else{
						 this->insert_ll_tf->Text = "";
						 MessageBox::Show("Please Enter Value Between 0 to 100");
					 }
				 }
			 }
	private: System::Void insertimerll_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->ll1->Visible == false){
					 if(this->ll1->Location.X == this->insert_ll_label->Location.X){
						 this->ll1->Visible = true;
						 this->head_ll->Visible = true;
						 this->tail_ll->Visible = true;
						 this->ll1->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 insertimerll->Enabled = false;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll2->Visible == false){
					 if(this->ll2->Location.X == this->insert_ll_label->Location.X){
						 this->ll2->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll2->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll3->Visible == false){
					 if(this->ll3->Location.X == this->insert_ll_label->Location.X){
						 this->ll3->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll3->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll4->Visible == false){
					 if(this->ll4->Location.X == this->insert_ll_label->Location.X){
						 this->ll4->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll4->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll5->Visible == false){
					 if(this->ll5->Location.X == this->insert_ll_label->Location.X){
						 this->ll5->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll5->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll6->Visible == false){
					 if(this->ll6->Location.X == this->insert_ll_label->Location.X){
						 this->ll6->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll6->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
				 else if(this->ll7->Visible == false){
					 if(this->ll7->Location.X == this->insert_ll_label->Location.X){
						 this->ll7->Visible = true;
						 this->head_ll->Visible = true;
						 this->ll7->Text = this->insert_ll_label->Text;
						 this->insert_ll_tf->Text = "";
						 this->insert_ll_label->Text = "";
						 this->insert_ll_label->Visible = false;
						 this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
						 insertimerll->Enabled = false;
						 tailtimer->Enabled = true;
					 }
					 int x = this->insert_ll_label->Location.X + 2;
					 this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
				 }
			 }
	private: System::Void tailtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->ll2->Visible == false){
					 if(this->ll1->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll3->Visible == false){
					 if(this->ll2->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll4->Visible == false){
					 if(this->ll3->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll5->Visible == false){
					 if(this->ll4->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll6->Visible == false){
					 if(this->ll5->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll7->Visible == false){
					 if(this->ll6->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
				 else if(this->ll7->Visible == true){
					 if(this->ll7->Location.X == this->tail_ll->Location.X){
						 this->insert_but_ll->Enabled = true;
						 this->insert_ll_tf->Enabled = true;
						 tailtimer->Enabled = false;
					 }
					 else{
						 int x = this->tail_ll->Location.X - 1;
						 this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
					 }
				 }
			 }
	private: System::Void LinkedList_Insertion_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Quiz Panel Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 2;
				 newPanel->module_id = 1;
				 newPanel->username = username;
				 newPanel->update_id = 10;
				 newPanel->update_name = "LinkedListProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
};
}
