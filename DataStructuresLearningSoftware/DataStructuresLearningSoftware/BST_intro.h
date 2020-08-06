#pragma once
#include "moduleQuiz.h"
#include "BST_introduction.h"
#include "BST_insertion.h"
#include "BST_deletion.h"
#include "BST_search.h"
#include "Quiz.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for BST_intro
	/// </summary>
	public ref class BST_intro : public System::Windows::Forms::UserControl
	{
	public:
		BST_intro(void)
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
		~BST_intro()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  BST_intro_btn;
	private: System::Windows::Forms::Button^  BST_insert_btn;
	private: System::Windows::Forms::Button^  BST_deletion_btn;
	private: System::Windows::Forms::Button^  BST_traversal_btn;
	private: System::Windows::Forms::Button^  button1;



	protected: 

	protected: 

	protected: 

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BST_intro_btn = (gcnew System::Windows::Forms::Button());
			this->BST_insert_btn = (gcnew System::Windows::Forms::Button());
			this->BST_deletion_btn = (gcnew System::Windows::Forms::Button());
			this->BST_traversal_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Location = System::Drawing::Point(0, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1277, 660);
			this->panel1->TabIndex = 1;
			// 
			// BST_intro_btn
			// 
			this->BST_intro_btn->BackColor = System::Drawing::Color::Salmon;
			this->BST_intro_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BST_intro_btn->FlatAppearance->BorderSize = 0;
			this->BST_intro_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BST_intro_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_intro_btn->Location = System::Drawing::Point(38, 11);
			this->BST_intro_btn->Name = L"BST_intro_btn";
			this->BST_intro_btn->Size = System::Drawing::Size(170, 40);
			this->BST_intro_btn->TabIndex = 2;
			this->BST_intro_btn->Text = L"Introduction";
			this->BST_intro_btn->UseVisualStyleBackColor = false;
			this->BST_intro_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_intro_btn_Click);
			// 
			// BST_insert_btn
			// 
			this->BST_insert_btn->BackColor = System::Drawing::Color::Salmon;
			this->BST_insert_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BST_insert_btn->FlatAppearance->BorderSize = 0;
			this->BST_insert_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BST_insert_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_insert_btn->Location = System::Drawing::Point(289, 11);
			this->BST_insert_btn->Name = L"BST_insert_btn";
			this->BST_insert_btn->Size = System::Drawing::Size(170, 40);
			this->BST_insert_btn->TabIndex = 3;
			this->BST_insert_btn->Text = L"Insertion";
			this->BST_insert_btn->UseVisualStyleBackColor = false;
			this->BST_insert_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_insert_btn_Click);
			// 
			// BST_deletion_btn
			// 
			this->BST_deletion_btn->BackColor = System::Drawing::Color::Salmon;
			this->BST_deletion_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BST_deletion_btn->FlatAppearance->BorderSize = 0;
			this->BST_deletion_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BST_deletion_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_deletion_btn->Location = System::Drawing::Point(537, 11);
			this->BST_deletion_btn->Name = L"BST_deletion_btn";
			this->BST_deletion_btn->Size = System::Drawing::Size(170, 40);
			this->BST_deletion_btn->TabIndex = 4;
			this->BST_deletion_btn->Text = L"Deletion";
			this->BST_deletion_btn->UseVisualStyleBackColor = false;
			this->BST_deletion_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_deletion_btn_Click);
			// 
			// BST_traversal_btn
			// 
			this->BST_traversal_btn->BackColor = System::Drawing::Color::Salmon;
			this->BST_traversal_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BST_traversal_btn->FlatAppearance->BorderSize = 0;
			this->BST_traversal_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BST_traversal_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_traversal_btn->Location = System::Drawing::Point(786, 11);
			this->BST_traversal_btn->Name = L"BST_traversal_btn";
			this->BST_traversal_btn->Size = System::Drawing::Size(170, 40);
			this->BST_traversal_btn->TabIndex = 5;
			this->BST_traversal_btn->Text = L"Traversal";
			this->BST_traversal_btn->UseVisualStyleBackColor = false;
			this->BST_traversal_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_traversal_btn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1063, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Quiz";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BST_intro::button1_Click);
			// 
			// BST_intro
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Bisque;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BST_traversal_btn);
			this->Controls->Add(this->BST_deletion_btn);
			this->Controls->Add(this->BST_insert_btn);
			this->Controls->Add(this->BST_intro_btn);
			this->Controls->Add(this->panel1);
			this->Name = L"BST_intro";
			this->Size = System::Drawing::Size(1280, 720);
			this->Load += gcnew System::EventHandler(this, &BST_intro::BST_intro_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			String ^ username;
	private: System::Void BST_intro_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size.Width = this->Size.Width;
				 panel1->Location.X = 0;
				 this->panel1->Controls->Clear();
				 this->panel1->Controls->Add(gcnew BST_introduction);
				 //this->panel1->BST_introduction->Location = System::Drawing::Point(0, 0);
				 //this->bsT_insertion1->Name = L"bsT_insertion1";
				 //this->bsT_insertion1->Size = System::Drawing::Size(1264, 546);
				 //this->bsT_insertion1->TabIndex = 2;
			 }
	private: System::Void BST_insert_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size.Width = this->Size.Width;
				 panel1->Location.X = 0;
				 this->panel1->Controls->Clear();
				 this->panel1->Controls->Add(gcnew BST_insertion);
			 }
	private: System::Void BST_intro_Load(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size.Width = this->Size.Width;
				 panel1->Location.X = 0;
				 this->panel1->Controls->Clear();
				 this->panel1->Controls->Add(gcnew BST_introduction);
			 }
	private: System::Void BST_deletion_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size.Width = this->Size.Width;
				 panel1->Location.X = 0;
				 this->panel1->Controls->Clear();
				 this->panel1->Controls->Add(gcnew BST_deletion);
			 }
	private: System::Void BST_traversal_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size.Width = this->Size.Width;
				 panel1->Location.X = 0;
				 this->panel1->Controls->Clear();
				 this->panel1->Controls->Add(gcnew BST_search);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 Quiz ^newUserControl = gcnew Quiz();
				 panel1->Size.Width = 1030;
				 panel1->Location.X = (1280-1030)/2;
				 newUserControl->username = username;
				 newUserControl->ds_id = 7;
				 panel1->Controls->Add(newUserControl);
			 }
private: System::Void btnHome_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*if(this->Owner != nullptr){
				 this->Hide();
				 this->Owner->Show();}*/
		 }
};
}
