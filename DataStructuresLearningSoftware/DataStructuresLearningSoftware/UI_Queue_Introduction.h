#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for UI_Queue_Introduction
	/// </summary>
	public ref class UI_Queue_Introduction : public System::Windows::Forms::UserControl
	{
	public:
		UI_Queue_Introduction(void)
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
		~UI_Queue_Introduction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Heading;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UI_Queue_Introduction::typeid));
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->Heading->Location = System::Drawing::Point(457, 25);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(103, 36);
			this->Heading->TabIndex = 2;
			this->Heading->Text = L"Queue";
			this->Heading->Click += gcnew System::EventHandler(this, &UI_Queue_Introduction::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(570, 308);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(431, 258);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->richTextBox1->Location = System::Drawing::Point(71, 78);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(930, 164);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->richTextBox1->WordWrap = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(66, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Basic Operations";
			this->label1->Click += gcnew System::EventHandler(this, &UI_Queue_Introduction::label1_Click_1);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::White;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->richTextBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->richTextBox2->Location = System::Drawing::Point(71, 308);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(489, 129);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"Enqueue: add (store) an item to the queue.\nDequeue: remove (access) an item from " 
				L"the queue. \nFront: Get the front element from queue\nRear: Get the last element f" 
				L"rom queue\n";
			this->richTextBox2->WordWrap = false;
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &UI_Queue_Introduction::richTextBox2_TextChanged);
			// 
			// UI_Queue_Introduction
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Heading);
			this->Name = L"UI_Queue_Introduction";
			this->Size = System::Drawing::Size(1105, 670);
			this->Load += gcnew System::EventHandler(this, &UI_Queue_Introduction::UI_Queue_Introduction_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			}
	private: System::Void UI_Queue_Introduction_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
