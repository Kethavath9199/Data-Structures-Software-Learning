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
	/// Summary for UI_Linear_Queue
	/// </summary>
	public ref class UI_Linear_Queue : public System::Windows::Forms::UserControl
	{
	public:
		UI_Linear_Queue(void)
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
		~UI_Linear_Queue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::Panel^  quizpanel;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label6;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->quizpanel = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(420, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Linear Queue";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->richTextBox1->Location = System::Drawing::Point(98, 92);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(610, 26);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Elements are always added to the back and removed from the front";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(106, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enqueue";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(106, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Dequeue";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(106, 378);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Front";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(106, 491);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Rear";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Bisque;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.1F));
			this->richTextBox2->Location = System::Drawing::Point(451, 355);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(476, 90);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"begin procedure front\n   return queue[front]\nend procedure\n";
			this->richTextBox2->WordWrap = false;
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &UI_Linear_Queue::richTextBox2_TextChanged);
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::Bisque;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.1F));
			this->richTextBox3->Location = System::Drawing::Point(451, 240);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(476, 90);
			this->richTextBox3->TabIndex = 7;
			this->richTextBox3->Text = L"procedure dequeue\n   if queue is empty\n      return underflow\n   end if\n   data =" 
				L" queue[front]\n   front ← (front + 1)%(queue_size)\n   return true\nend procedure";
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::Color::Bisque;
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.1F));
			this->richTextBox4->Location = System::Drawing::Point(451, 132);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->Size = System::Drawing::Size(476, 90);
			this->richTextBox4->TabIndex = 8;
			this->richTextBox4->Text = L"procedure enqueue(data)      \n   if queue is full\n      return overflow\n   endif\n" 
				L"   rear ← (rear + 1)%(queue_size)\n   queue[rear] ← data\n   return true\nend proce" 
				L"dure";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::Color::Bisque;
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.1F));
			this->richTextBox5->Location = System::Drawing::Point(451, 465);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->Size = System::Drawing::Size(476, 90);
			this->richTextBox5->TabIndex = 9;
			this->richTextBox5->Text = L"begin procedure rear\n   return queue[rear]\nend procedure\n";
			// 
			// quizpanel
			// 
			this->quizpanel->Location = System::Drawing::Point(29, 606);
			this->quizpanel->Name = L"quizpanel";
			this->quizpanel->Size = System::Drawing::Size(1027, 464);
			this->quizpanel->TabIndex = 10;
			this->quizpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UI_Linear_Queue::quizpanel_Paint);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(32, 576);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(482, 27);
			this->label23->TabIndex = 36;
			this->label23->Text = L"Answer the question correctly to pass the module.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 1072);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(784, 24);
			this->label6->TabIndex = 37;
			this->label6->Text = L"NOTE: You have Access to all the sub modules , feel free to explore before answer" 
				L"ing the quiz.\r\n";
			// 
			// UI_Linear_Queue
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->quizpanel);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"UI_Linear_Queue";
			this->Size = System::Drawing::Size(1088, 1127);
			this->Load += gcnew System::EventHandler(this, &UI_Linear_Queue::UI_Linear_Queue_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ username;
	private: System::Void UI_Linear_Queue_Load(System::Object^  sender, System::EventArgs^  e) {
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 6;
				 newPanel->module_id = 0;
				 newPanel->username = username;
				 newPanel->update_id = 14;
				 newPanel->update_name = "QueuesProgress";
				 quizpanel->Controls->Clear();
				 quizpanel->Controls->Add(newPanel);
			 }
	private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void quizpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
