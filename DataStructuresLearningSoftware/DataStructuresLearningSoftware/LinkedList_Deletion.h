#pragma once

#include "moduleQuiz.h"
#include <string.h>
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
	/// Summary for LinkedList_Deletion
	/// </summary>
	public ref class LinkedList_Deletion : public System::Windows::Forms::UserControl
	{
	public:
		LinkedList_Deletion(void)
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
		~LinkedList_Deletion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  delete_ll_but;
	protected: 
	private: System::Windows::Forms::TextBox^  deletevalue;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  del_pointer;
	private: System::Windows::Forms::Label^  del_tail;
	private: System::Windows::Forms::Label^  del_head;
	private: System::Windows::Forms::Label^  f7;
	private: System::Windows::Forms::Label^  f6;
	private: System::Windows::Forms::Label^  f5;
	private: System::Windows::Forms::Label^  f4;
	private: System::Windows::Forms::Label^  f3;
	private: System::Windows::Forms::Label^  f2;
	private: System::Windows::Forms::Label^  f1;

	private: System::Windows::Forms::Timer^  tailfixtimer;
	private: System::Windows::Forms::Timer^  deletefixtimer;
	private: System::Windows::Forms::Timer^  deletetimer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinkedList_Deletion::typeid));
			this->delete_ll_but = (gcnew System::Windows::Forms::Button());
			this->deletevalue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->del_pointer = (gcnew System::Windows::Forms::Label());
			this->del_tail = (gcnew System::Windows::Forms::Label());
			this->del_head = (gcnew System::Windows::Forms::Label());
			this->f7 = (gcnew System::Windows::Forms::Label());
			this->f6 = (gcnew System::Windows::Forms::Label());
			this->f5 = (gcnew System::Windows::Forms::Label());
			this->f4 = (gcnew System::Windows::Forms::Label());
			this->f3 = (gcnew System::Windows::Forms::Label());
			this->f2 = (gcnew System::Windows::Forms::Label());
			this->f1 = (gcnew System::Windows::Forms::Label());
			this->tailfixtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->deletefixtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->deletetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// delete_ll_but
			// 
			this->delete_ll_but->BackColor = System::Drawing::Color::CornflowerBlue;
			this->delete_ll_but->FlatAppearance->BorderSize = 0;
			this->delete_ll_but->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delete_ll_but->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->delete_ll_but->Location = System::Drawing::Point(847, 772);
			this->delete_ll_but->Margin = System::Windows::Forms::Padding(2);
			this->delete_ll_but->Name = L"delete_ll_but";
			this->delete_ll_but->Size = System::Drawing::Size(100, 30);
			this->delete_ll_but->TabIndex = 7;
			this->delete_ll_but->Text = L"Delete";
			this->delete_ll_but->UseVisualStyleBackColor = false;
			this->delete_ll_but->Click += gcnew System::EventHandler(this, &LinkedList_Deletion::delete_ll_but_Click);
			// 
			// deletevalue
			// 
			this->deletevalue->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->deletevalue->Location = System::Drawing::Point(254, 774);
			this->deletevalue->Margin = System::Windows::Forms::Padding(2);
			this->deletevalue->Name = L"deletevalue";
			this->deletevalue->Size = System::Drawing::Size(100, 28);
			this->deletevalue->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(153, 777);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Delete Value";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel2->Controls->Add(this->del_pointer);
			this->panel2->Controls->Add(this->del_tail);
			this->panel2->Controls->Add(this->del_head);
			this->panel2->Controls->Add(this->f7);
			this->panel2->Controls->Add(this->f6);
			this->panel2->Controls->Add(this->f5);
			this->panel2->Controls->Add(this->f4);
			this->panel2->Controls->Add(this->f3);
			this->panel2->Controls->Add(this->f2);
			this->panel2->Controls->Add(this->f1);
			this->panel2->Location = System::Drawing::Point(157, 562);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(790, 208);
			this->panel2->TabIndex = 4;
			// 
			// del_pointer
			// 
			this->del_pointer->BackColor = System::Drawing::SystemColors::Highlight;
			this->del_pointer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_pointer->Location = System::Drawing::Point(2, 17);
			this->del_pointer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->del_pointer->Name = L"del_pointer";
			this->del_pointer->Size = System::Drawing::Size(75, 19);
			this->del_pointer->TabIndex = 9;
			this->del_pointer->Text = L"POINTER";
			this->del_pointer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// del_tail
			// 
			this->del_tail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_tail->Location = System::Drawing::Point(640, 171);
			this->del_tail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->del_tail->Name = L"del_tail";
			this->del_tail->Size = System::Drawing::Size(75, 19);
			this->del_tail->TabIndex = 8;
			this->del_tail->Text = L"TAIL";
			this->del_tail->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// del_head
			// 
			this->del_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_head->Location = System::Drawing::Point(94, 45);
			this->del_head->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->del_head->Name = L"del_head";
			this->del_head->Size = System::Drawing::Size(75, 19);
			this->del_head->TabIndex = 7;
			this->del_head->Text = L"HEAD";
			this->del_head->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f7
			// 
			this->f7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f7->Location = System::Drawing::Point(640, 76);
			this->f7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(76, 82);
			this->f7->TabIndex = 6;
			this->f7->Text = L"86";
			this->f7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f6
			// 
			this->f6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f6->Location = System::Drawing::Point(550, 76);
			this->f6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(76, 82);
			this->f6->TabIndex = 5;
			this->f6->Text = L"37";
			this->f6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f5
			// 
			this->f5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f5->Location = System::Drawing::Point(460, 76);
			this->f5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(76, 82);
			this->f5->TabIndex = 4;
			this->f5->Text = L"11";
			this->f5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f4
			// 
			this->f4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f4->Location = System::Drawing::Point(370, 76);
			this->f4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(76, 82);
			this->f4->TabIndex = 3;
			this->f4->Text = L"-90";
			this->f4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f3
			// 
			this->f3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f3->Location = System::Drawing::Point(278, 76);
			this->f3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(76, 82);
			this->f3->TabIndex = 2;
			this->f3->Text = L"109";
			this->f3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f2
			// 
			this->f2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f2->Location = System::Drawing::Point(187, 76);
			this->f2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(76, 82);
			this->f2->TabIndex = 1;
			this->f2->Text = L"-2";
			this->f2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f1
			// 
			this->f1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f1->Location = System::Drawing::Point(94, 76);
			this->f1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(76, 82);
			this->f1->TabIndex = 0;
			this->f1->Text = L"23";
			this->f1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tailfixtimer
			// 
			this->tailfixtimer->Interval = 1;
			this->tailfixtimer->Tick += gcnew System::EventHandler(this, &LinkedList_Deletion::tailfixtimer_Tick);
			// 
			// deletefixtimer
			// 
			this->deletefixtimer->Interval = 1;
			this->deletefixtimer->Tick += gcnew System::EventHandler(this, &LinkedList_Deletion::deletefixtimer_Tick);
			// 
			// deletetimer
			// 
			this->deletetimer->Interval = 1;
			this->deletetimer->Tick += gcnew System::EventHandler(this, &LinkedList_Deletion::deletetimer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(430, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 39);
			this->label1->TabIndex = 8;
			this->label1->Text = L"DELETING A NODE";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1065, 104);
			this->label2->TabIndex = 9;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(173, 211);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(759, 243);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(157, 534);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 26);
			this->label3->TabIndex = 11;
			this->label3->Text = L"LEARN WITH FUN";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 858);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1065, 41);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Since every node of linked list is dynamically allocated using malloc() in C, we " 
				L"need to call free() for freeing memory allocated for the node to be deleted.";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::LightBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 908);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1065, 1664);
			this->label6->TabIndex = 13;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 2595);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 21);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Output:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::LightBlue;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(20, 2616);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1065, 78);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Created Linked List:\r\n 2  3  1  7\r\nLinked List after Deletion of 1:\r\n 2  3  7";
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(37, 2799);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(38, 2775);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(382, 21);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Answer the question correctly to pass the module.";
			// 
			// LinkedList_Deletion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->Controls->Add(this->label9);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->delete_ll_but);
			this->Controls->Add(this->deletevalue);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LinkedList_Deletion";
			this->Size = System::Drawing::Size(1105, 3300);
			this->Load += gcnew System::EventHandler(this, &LinkedList_Deletion::LinkedList_Deletion_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String ^username;

	private: System::Void delete_ll_but_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->deletevalue->Text==""){
					 this->deletevalue->Text = "";
					 MessageBox::Show("Please Enter Values In The Text Box!");
					 return;
				 }
				 else if(this->f1->Visible==false && this->f2->Visible==false && this->f3->Visible==false && this->f4->Visible==false && this->f5->Visible==false && this->f6->Visible==false &&this->f7->Visible==false){
					 this->deletevalue->Text = "";
					 MessageBox::Show("Linked List Is Empty!");
					 return;
				 }
				 else if((this->deletevalue->Text=="23" && this->f1->Visible==true )||(this->deletevalue->Text=="-2" && this->f2->Visible==true )|| (this->deletevalue->Text=="109" && this->f3->Visible==true) || (this->deletevalue->Text=="-90" && this->f4->Visible==true) ||(this->deletevalue->Text=="11" && this->f5->Visible==true) ||(this->deletevalue->Text=="37" && this->f6->Visible==true) ||(this->deletevalue->Text=="86" && this->f7->Visible==true)){
					this->deletevalue->Enabled = false;
					this->delete_ll_but->Enabled = false;
					deletetimer->Enabled = true;
				 }
				 else{
					this->deletevalue->Text = "";
					MessageBox::Show("Value Not Present In The Linked List");
				 }
				 /*int len1=this->deletevalue->Text->Length;int num1=0;
				 for(int i=0;i<len1;i++){if(isalpha(this->deletevalue->Text[i]) || this->deletevalue->Text[i]=='.'|| this->deletevalue->Text[i]==' '){num1=1;}}
				 if(num1==0 && int::Parse(this->deletevalue->Text)<=999 && int::Parse(this->deletevalue->Text)>=-999){
					 this->deletevalue->Enabled = false;
					 this->delete_ll_but->Enabled = false;
					 deletetimer->Enabled = true;
				 }
				 else{
					 int len2=this->deletevalue->Text->Length;int num2=0;
				     for(int i=0;i<len2;i++){if(this->deletevalue->Text[i]==' '){num2=1;}}
					 if(num2==1){
						this->deletevalue->Text = "";
						MessageBox::Show("Please Enter Values In The Text Box!");
						return;
					 }
					 this->deletevalue->Text = "";
					 MessageBox::Show("Value Not Present In The Linked List");
				 }*/
			 }
	private: System::Void deletetimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->del_tail->Location.X==this->del_pointer->Location.X && this->del_head->Location.X==this->del_pointer->Location.X && ((this->f1->Location.X==this->del_pointer->Location.X && this->f1->Text==this->deletevalue->Text && this->f1->Visible==true)||(this->f2->Location.X==this->del_pointer->Location.X && this->f2->Text==this->deletevalue->Text && this->f2->Visible==true)||(this->f3->Location.X==this->del_pointer->Location.X && this->f3->Text==this->deletevalue->Text && this->f3->Visible==true)||(this->f4->Location.X==this->del_pointer->Location.X && this->f4->Text==this->deletevalue->Text && this->f4->Visible==true)||(this->f5->Location.X==this->del_pointer->Location.X && this->f5->Text==this->deletevalue->Text && this->f5->Visible==true)||(this->f6->Location.X==this->del_pointer->Location.X && this->f6->Text==this->deletevalue->Text && this->f6->Visible==true)||(this->f7->Location.X==this->del_pointer->Location.X && this->f7->Text==this->deletevalue->Text && this->f7->Visible==true))){
					 this->f1->Visible = false;
					 this->f2->Visible = false;
					 this->f3->Visible = false;
					 this->f4->Visible = false;
					 this->f5->Visible = false;
					 this->f6->Visible = false;
					 this->f7->Visible = false;
					 deletetimer->Enabled = false;
					 this->del_head->Visible = false;
					 this->del_tail->Visible = false;
					 this->del_pointer->Visible = false;
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f1->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f1->Text){
					 deletetimer->Enabled = false;
					 this->f1->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f2->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f2->Text){
					 deletetimer->Enabled = false;
					 this->f2->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f3->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f3->Text){
					 deletetimer->Enabled = false;
					 this->f3->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f4->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f4->Text){
					 deletetimer->Enabled = false;
					 this->f4->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f5->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f5->Text){
					 deletetimer->Enabled = false;
					 this->f5->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f6->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f6->Text){
					 deletetimer->Enabled = false;
					 this->f6->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->f7->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f7->Text){
					 deletetimer->Enabled = false;
					 this->f7->Visible = false;
					 deletefixtimer->Enabled = true;
				 }
				 else if(this->del_tail->Location.X+100 < this->del_pointer->Location.X){
					 this->deletevalue->Enabled = true;
					 this->deletevalue->Text = "";
					 this->delete_ll_but->Enabled = true;
					 deletetimer->Enabled = false;
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 MessageBox::Show("Value Is Not Present In The Linked List");
				 }
				 else{
					 int x = this->del_pointer->Location.X + 1;
					 this->del_pointer->Location = System::Drawing::Point(x,this->del_pointer->Location.Y);
				 }
			 }
	private: System::Void deletefixtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 int check = 0;
				 if(this->del_pointer->Location.X == this->del_tail->Location.X){
					 deletefixtimer->Enabled = false;
					 tailfixtimer->Enabled = true;
				 }
				 else{
					 if(this->f1->Visible == true && this->f1->Location.X>=this->del_pointer->Location.X){
						 if(this->f1->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f1->Location = System::Drawing::Point(this->f1->Location.X-1,this->f1->Location.Y);
						 }
					 }
					 if(this->f2->Visible == true && this->f2->Location.X>=this->del_pointer->Location.X){
						 if(this->f2->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f2->Location = System::Drawing::Point(this->f2->Location.X-1,this->f2->Location.Y);
						 }
					 }
					 if(this->f3->Visible == true && this->f3->Location.X>=this->del_pointer->Location.X){
						 if(this->f3->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f3->Location = System::Drawing::Point(this->f3->Location.X-1,this->f3->Location.Y);
						 }
					 }
					 if(this->f4->Visible == true && this->f4->Location.X>=this->del_pointer->Location.X){
						 if(this->f4->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f4->Location = System::Drawing::Point(this->f4->Location.X-1,this->f4->Location.Y);
						 }
					 }
					 if(this->f5->Visible == true && this->f5->Location.X>=this->del_pointer->Location.X){
						 if(this->f5->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f5->Location = System::Drawing::Point(this->f5->Location.X-1,this->f5->Location.Y);
						 }
					 }
					 if(this->f6->Visible == true && this->f6->Location.X>=this->del_pointer->Location.X){
						 if(this->f6->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f6->Location = System::Drawing::Point(this->f6->Location.X-1,this->f6->Location.Y);
						 }
					 }
					 if(this->f7->Visible == true && this->f7->Location.X>=this->del_pointer->Location.X){
						 if(this->f7->Location.X==this->del_pointer->Location.X){
							 check = 1;
							 goto here;
						 }
						 else{
							 this->f7->Location = System::Drawing::Point(this->f7->Location.X-1,this->f7->Location.Y);
						 }
					 }
here :
					 if(check == 1){
						 check = 0;
						 deletefixtimer->Enabled = false;
						 tailfixtimer->Enabled = true;
					 }
				 }
			 }
	private: System::Void tailfixtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->f1->Visible == true && this->f1->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;

				 }
				 else if(this->f2->Visible == true && this->f2->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f3->Visible == true && this->f3->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f4->Visible == true && this->f4->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f5->Visible == true && this->f5->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f6->Visible == true && this->f6->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else if(this->f7->Visible == true && this->f7->Location.X==this->del_tail->Location.X){
					 this->del_pointer->Location = System::Drawing::Point(3,21);
					 tailfixtimer->Enabled = false;
					 this->deletevalue->Text = "";
					 this->deletevalue->Enabled = true;
					 this->delete_ll_but->Enabled = true;
				 }
				 else{
					 this->del_tail->Location = System::Drawing::Point(this->del_tail->Location.X-1,this->del_tail->Location.Y);
				 }
			 }
	private: System::Void LinkedList_Deletion_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Quiz Panel Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 2;
				 newPanel->module_id = 2;
				 newPanel->username = username;
				 newPanel->update_id = 10;
				 newPanel->update_name = "LinkedListProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
};
}
