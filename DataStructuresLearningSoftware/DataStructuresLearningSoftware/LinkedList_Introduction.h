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
	/// Summary for LinkedList_Introduction
	/// </summary>
	public ref class LinkedList_Introduction : public System::Windows::Forms::UserControl
	{
	public:
		LinkedList_Introduction(void)
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
		~LinkedList_Introduction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  quizPanel;

	private: System::Windows::Forms::Label^  label12;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinkedList_Introduction::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(357, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LINKED LIST: INTRODUCTION";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1065, 43);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Like arrays, Linked List is a linear data structure. Unlike arrays, linked list e" 
				L"lements are not stored at contiguous location; the elements are linked using poi" 
				L"nters.";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(173, 158);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(759, 169);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 359);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Why Linked List\?";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1065, 262);
			this->label4->TabIndex = 4;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 662);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 21);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Advantages over arrays";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 683);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(209, 40);
			this->label6->TabIndex = 6;
			this->label6->Text = L"1) Dynamic size\r\n2) Ease of insertion/deletion";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 742);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 21);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Drawbacks:";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 763);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1064, 86);
			this->label8->TabIndex = 8;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(20, 859);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 21);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Representation:";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(21, 880);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(1065, 145);
			this->label10->TabIndex = 10;
			this->label10->Text = resources->GetString(L"label10.Text");
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::LightBlue;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(21, 1039);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(1064, 127);
			this->label11->TabIndex = 11;
			this->label11->Text = L"// A linked list node \r\nstruct Node \r\n{ \r\n  int data; \r\n  struct Node *next; \r\n};" 
				L"";
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(36, 1274);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(42, 1250);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(382, 21);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Answer the question correctly to pass the module.";
			// 
			// LinkedList_Introduction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->Controls->Add(this->label12);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LinkedList_Introduction";
			this->Size = System::Drawing::Size(1105, 1800);
			this->Load += gcnew System::EventHandler(this, &LinkedList_Introduction::LinkedList_Introduction_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: String ^username;
	private: System::Void LinkedList_Introduction_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Quiz Panel Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 2;
				 newPanel->module_id = 0;
				 newPanel->username = username;
				 newPanel->update_id = 10;
				 newPanel->update_name = "LinkedListProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
};
}
