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
	/// Summary for LinkedList
	/// </summary>
	public ref class LinkedList : public System::Windows::Forms::UserControl
	{
	public:
		LinkedList(void)
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
		~LinkedList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Panel^  quizPanel;

	private: System::Windows::Forms::Label^  label17;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinkedList::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(280, 723);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 30);
			this->textBox1->TabIndex = 25;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LinkedList::textBox1_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightCoral;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(968, 723);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 30);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &LinkedList::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightCoral;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(760, 723);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 30);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Resume";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &LinkedList::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightCoral;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(864, 723);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 30);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Pause";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &LinkedList::button5_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(20, 433);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(824, 286);
			this->panel1->TabIndex = 21;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LinkedList::panel1_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightCoral;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(384, 723);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 30);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &LinkedList::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCoral;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(124, 723);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 30);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LinkedList::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(20, 723);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(100, 30);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &LinkedList::richTextBox1_TextChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &LinkedList::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(335, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(418, 39);
			this->label1->TabIndex = 26;
			this->label1->Text = L"LINEAR SEARCH IN LINKED LIST";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1048, 29);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Write a function that searches a given key ‘x’ in a given singly linked list. The" 
				L" function should return true if x is present in linked list and false otherwise." 
				L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MistyRose;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(226, 20);
			this->label3->TabIndex = 28;
			this->label3->Text = L"bool search(Node *head, int x) ";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1048, 45);
			this->label4->TabIndex = 29;
			this->label4->Text = L"For example, if the key to be searched is 15 and linked list is 14->21->11->30->1" 
				L"0, then function should return false. If key to be searched is 14, then the func" 
				L"tion should return true.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 21);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Iterative Solution";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::MistyRose;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1048, 107);
			this->label6->TabIndex = 31;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 405);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(184, 26);
			this->label7->TabIndex = 32;
			this->label7->Text = L"LEARN WITH FUN";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::MistyRose;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(16, 799);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1048, 1256);
			this->label8->TabIndex = 33;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(16, 2075);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 21);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Output:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::MistyRose;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(86, 2076);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 20);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Yes";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 2131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 21);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Recursive Solution";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::MistyRose;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(16, 2152);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(1052, 85);
			this->label12->TabIndex = 37;
			this->label12->Text = L"bool search(head, x)\r\n1) If head is NULL, return false.\r\n2) If head\'s key is same" 
				L" as x, return true;\r\n2) Else return search(head->next, x)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(16, 2257);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(549, 20);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Following is recursive implementation of above algorithm to search a given key.";
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::MistyRose;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(16, 2277);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(1052, 1275);
			this->label14->TabIndex = 39;
			this->label14->Text = resources->GetString(L"label14.Text");
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(16, 3571);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 21);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Output:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::MistyRose;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(86, 3572);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 20);
			this->label16->TabIndex = 41;
			this->label16->Text = L"Yes";
			// 
			// quizPanel
			// 
			this->quizPanel->Location = System::Drawing::Point(20, 3703);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 42;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(24, 3675);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(382, 21);
			this->label17->TabIndex = 43;
			this->label17->Text = L"Answer the question correctly to pass the module.";
			// 
			// LinkedList
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Snow;
			this->Controls->Add(this->label17);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LinkedList";
			this->Size = System::Drawing::Size(1088, 4200);
			this->Load += gcnew System::EventHandler(this, &LinkedList::LinkedList_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	String ^username;
	int ele_search;
	int box_length;
	int box_width;
	int linked_list_arrow_length;
	int start_x;
	int start_y;
	int ele_selected;
	PictureBox ^arrow_select;
	System::Collections::Generic::List<int> input_array;

	void show_array(int start,int length){
		//To Show The Array
		for(int i=start;i<=length;i++){

			Label ^newLabel = gcnew Label();
			newLabel->Location = Drawing::Point(start_x+(i)*(box_length+linked_list_arrow_length), start_y);
			newLabel->Size = Drawing::Size(box_length, box_width);
			newLabel->Text = System::Convert::ToString(input_array[i]);
			newLabel->BackColor = Color::LightSkyBlue;
			newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
			newLabel->TextAlign = ContentAlignment::MiddleCenter;
			newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
			panel1->Controls->Add(newLabel);

			PictureBox ^arrow = gcnew PictureBox();

			arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow.jpg";		
			arrow->SizeMode = PictureBoxSizeMode::StretchImage;
			arrow->Size = Drawing::Size(linked_list_arrow_length, 25);
			arrow->Location = Drawing::Point(start_x+(i)*(box_length+linked_list_arrow_length)+box_length, start_y+15);
			panel1->Controls->Add(arrow);
		}	
	}

	void calculate_size(){
		//start position is: 315,85
		//size of panel is : 1100,700
		//For initialising input array
		box_length=60;
		box_width= 50;

		start_x=50;
		start_y=150;
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

//---------------------------------------------------Windows Form Code---------------------------------------------------------------
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 //reset
				 timer1->Enabled = false;
				 panel1->Controls->Clear();
				 input_array.Clear();

			 }
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 //resume
				 timer1->Enabled = true;
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 //pause
				 timer1->Enabled = false;
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^s=textBox1->Text;
				 bool check=inputValidate(s);
				 textBox1->Text="";
				 if(check){
					 ele_search=int ::Parse(s);
					 button5->Enabled=true;
					 button6->Enabled=true;
					 timer1->Enabled=true;
					 start_y=100;

					 button3->Enabled=false;

					 ele_selected=0;

				 }
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^s=richTextBox1->Text;
				 bool check=inputValidate(s);
				 richTextBox1->Text="";
				 if(check){
					 panel1->Controls->Remove(arrow_select);
					 int input = int::Parse(s);
					 input_array.Add(input);
					 show_array(input_array.Count-1,input_array.Count-1);
				 }
			 }
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void LinkedList_Load(System::Object^  sender, System::EventArgs^  e) {
				 button5->Enabled=false;
				 button6->Enabled=false;
				 linked_list_arrow_length=60;
				 arrow_select = gcnew PictureBox();

				 // Quiz Panel Code
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 3;
				 newPanel->module_id = 2;
				 newPanel->username = username;
				 newPanel->update_id = 11;
				 newPanel->update_name = "SearchingProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 arrow_select->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrow_select.png";		
				 arrow_select->SizeMode = PictureBoxSizeMode::StretchImage;
				 arrow_select->Size = Drawing::Size(60, 50);
				 arrow_select->Location = Drawing::Point(start_x+(ele_selected)*(box_length+linked_list_arrow_length), start_y);
				 panel1->Controls->Add(arrow_select);

				 ele_selected+=1;


				 if(input_array[ele_selected-1]==ele_search){button3->Enabled=true;timer1->Enabled=false;MessageBox::Show("Element Found");button5->Enabled=false;button6->Enabled=false;return;}
				 if(ele_selected>=input_array.Count){button3->Enabled=true;timer1->Enabled=false;button5->Enabled=false;button6->Enabled=false;MessageBox::Show("Element Not Present in Linked List");return;}

			 }
	};
}
