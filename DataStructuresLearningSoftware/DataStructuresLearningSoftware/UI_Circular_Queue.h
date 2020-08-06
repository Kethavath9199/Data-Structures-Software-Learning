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
	/// Summary for UI_Circular_Queue
	/// </summary>
	public ref class UI_Circular_Queue : public System::Windows::Forms::UserControl
	{
	public:
		UI_Circular_Queue(void)
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
		~UI_Circular_Queue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Heading;
	protected: 
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Panel^  quizpanel;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UI_Circular_Queue::typeid));
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->quizpanel = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->Heading->Location = System::Drawing::Point(431, 34);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(214, 36);
			this->Heading->TabIndex = 0;
			this->Heading->Text = L"Circular Queue";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->richTextBox1->Location = System::Drawing::Point(77, 87);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(882, 83);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &UI_Circular_Queue::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->richTextBox2->Location = System::Drawing::Point(77, 250);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(592, 248);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.5F));
			this->label1->Location = System::Drawing::Point(71, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(392, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Operations on Circular Queue";
			this->label1->Click += gcnew System::EventHandler(this, &UI_Circular_Queue::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(693, 221);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 303);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UI_Circular_Queue::pictureBox1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(44, 1121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(784, 24);
			this->label6->TabIndex = 40;
			this->label6->Text = L"NOTE: You have Access to all the sub modules , feel free to explore before answer" 
				L"ing the quiz.\r\n";
			this->label6->Click += gcnew System::EventHandler(this, &UI_Circular_Queue::label6_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(52, 625);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(482, 27);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Answer the question correctly to pass the module.";
			this->label23->Click += gcnew System::EventHandler(this, &UI_Circular_Queue::label23_Click);
			// 
			// quizpanel
			// 
			this->quizpanel->Location = System::Drawing::Point(49, 655);
			this->quizpanel->Name = L"quizpanel";
			this->quizpanel->Size = System::Drawing::Size(1027, 464);
			this->quizpanel->TabIndex = 38;
			this->quizpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UI_Circular_Queue::quizpanel_Paint);
			// 
			// UI_Circular_Queue
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->quizpanel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->Heading);
			this->Name = L"UI_Circular_Queue";
			this->Size = System::Drawing::Size(1105, 1145);
			this->Load += gcnew System::EventHandler(this, &UI_Circular_Queue::UI_Circular_Queue_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				public: String^ username;
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void UI_Circular_Queue_Load(System::Object^  sender, System::EventArgs^  e) {
			 moduleQuiz ^newPanel = gcnew moduleQuiz();
			 newPanel->ds_id = 6;
			 newPanel->module_id = 1;
			 newPanel->username = username;
			 newPanel->update_id = 14;
			 newPanel->update_name = "QueuesProgress";
			 quizpanel->Controls->Clear();
			 quizpanel->Controls->Add(newPanel);
		 }
private: System::Void quizpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
