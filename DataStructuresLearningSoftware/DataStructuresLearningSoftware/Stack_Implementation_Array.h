#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#include "moduleQuiz.h";

namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for Stack_Implementation_Array
	/// </summary>
	public ref class Stack_Implementation_Array : public System::Windows::Forms::UserControl
	{
	public:
		Stack_Implementation_Array(void)
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
		~Stack_Implementation_Array()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Panel^  quizpanel;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Stack_Implementation_Array::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->quizpanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Bisque;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.1F));
			this->richTextBox1->Location = System::Drawing::Point(52, 68);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(985, 585);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Stack_Implementation_Array::richTextBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(123, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(790, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Following is the code for stack implementation using arrays ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(47, 670);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(482, 27);
			this->label23->TabIndex = 42;
			this->label23->Text = L"Answer the question correctly to pass the module.";
			this->label23->Click += gcnew System::EventHandler(this, &Stack_Implementation_Array::label23_Click);
			// 
			// quizpanel
			// 
			this->quizpanel->Location = System::Drawing::Point(44, 700);
			this->quizpanel->Name = L"quizpanel";
			this->quizpanel->Size = System::Drawing::Size(1027, 464);
			this->quizpanel->TabIndex = 41;
			this->quizpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Stack_Implementation_Array::quizpanel_Paint);
			// 
			// Stack_Implementation_Array
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label23);
			this->Controls->Add(this->quizpanel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Stack_Implementation_Array";
			this->Size = System::Drawing::Size(1105, 1210);
			this->Load += gcnew System::EventHandler(this, &Stack_Implementation_Array::Stack_Implementation_Array_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ username;
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void quizpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Stack_Implementation_Array_Load(System::Object^  sender, System::EventArgs^  e) {
			 moduleQuiz ^newPanel = gcnew moduleQuiz();
			 newPanel->ds_id = 5;
			 newPanel->module_id = 0;
			 newPanel->username = username;
			 newPanel->update_id = 13;
			 newPanel->update_name = "StacksProgress";
			 quizpanel->Controls->Clear();
			 quizpanel->Controls->Add(newPanel);
		 }
};
}
