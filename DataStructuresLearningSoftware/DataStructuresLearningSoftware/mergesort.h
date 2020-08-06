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
	/// Summary for mergesort
	/// </summary>
	public ref class mergesort : public System::Windows::Forms::UserControl
	{
	public:
		mergesort(void)
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
		~mergesort()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button7;
	protected: 
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mergesort::typeid));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Bisque;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(985, 1392);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 30);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &mergesort::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Bisque;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(777, 1392);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 30);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Resume";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &mergesort::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Bisque;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(881, 1392);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 30);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Pause";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &mergesort::button5_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(20, 1138);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1065, 239);
			this->panel1->TabIndex = 13;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mergesort::panel1_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Bisque;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(228, 1392);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 30);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Sort";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &mergesort::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Bisque;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(124, 1392);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 30);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mergesort::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(20, 1392);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(100, 30);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &mergesort::timer1_Tick_1);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &mergesort::timer2_Tick_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(458, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 39);
			this->label1->TabIndex = 17;
			this->label1->Text = L"MERGE SORT";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1065, 67);
			this->label2->TabIndex = 18;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Bisque;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1065, 206);
			this->label3->TabIndex = 19;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 388);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1068, 67);
			this->label4->TabIndex = 20;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(243, 475);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(618, 595);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 1110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 26);
			this->label5->TabIndex = 22;
			this->label5->Text = L"LEARN WITH FUN";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Bisque;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 1638);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1069, 2072);
			this->label6->TabIndex = 23;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 3731);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 21);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Output:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Bisque;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(16, 3752);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1069, 109);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Given array is\r\n12 11 13 5 6 7\r\n\r\nSorted array is\r\n5 6 7 11 12 13";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(16, 3883);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 21);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Time Complexity:";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(17, 3904);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(1068, 128);
			this->label10->TabIndex = 27;
			this->label10->Text = resources->GetString(L"label10.Text");
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 4046);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 21);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Auxiliary Space:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(151, 4047);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 20);
			this->label12->TabIndex = 29;
			this->label12->Text = L"O(n)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(16, 4076);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(170, 21);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Algorithmic Paradigm:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(187, 4077);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(141, 20);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Divide and Conquer";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(17, 4107);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(135, 21);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Sorting In Place:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(151, 4108);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(216, 20);
			this->label16->TabIndex = 33;
			this->label16->Text = L"No in a typical implementation";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(20, 4137);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 21);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Stable:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(86, 4138);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 20);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Yes";
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(20, 4252);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1065, 450);
			this->quizPanel->TabIndex = 36;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(31, 4228);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(382, 21);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Answer the question correctly to pass the module.";
			// 
			// mergesort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->Controls->Add(this->label19);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
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
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"mergesort";
			this->Size = System::Drawing::Size(1105, 4800);
			this->Load += gcnew System::EventHandler(this, &mergesort::mergesort_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:	
		String ^username;

		int num_elements;
		int box_length;
		int box_width;
		int start_x;
		float curr_size;
		int left_start;
		int start_y;
		int number_size;
		int sort_selected;

		int timer2_set;
		int timer1_set;
		int* quicksort_stack;
		int quicksort_top;

		int partition_l;
		int partition_h;
		int partition_var;
		int partition_no;
		int id;
		int mergesort_id;
		int mid,right_end;

		System::Collections::Generic::List<int> input_array;
		System::Collections::Generic::List<int> input_array_completed;
		System::Collections::Generic::List<Label ^> LabelList;

		//----------------------------------------------------TAKING INPUT CODE -----------------------------------------------------------------//
		void show_array(int start,int length){
			//To Show The Array

			for(int i=start;i<=length;i++){

				Label ^newLabel = gcnew Label();
				newLabel->Location = Drawing::Point(start_x+(i)*box_length, start_y);
				newLabel->Size = Drawing::Size(box_length, box_width);
				newLabel->Text = System::Convert::ToString(input_array[i]);

				if(input_array_completed[i]==0){
					newLabel->BackColor = Color::LightSkyBlue;
				}
				else if(input_array_completed[i]==-1){
					newLabel->BackColor = Color::PaleGreen;
				}
				else if(input_array_completed[i]==-3){
					newLabel->BackColor = Color::Red;
				}
				else if(input_array_completed[i]==1){
					newLabel->BackColor= Color::Yellow;	
				}
				else{
					newLabel->BackColor = Color::Orange;
				}

				newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
				newLabel->TextAlign = ContentAlignment::MiddleCenter;
				newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				panel1->Controls->Add(newLabel);
			}	
		}

		void calculate_size(){
			//start position is: 315,85
			//size of panel is : 1100,700
			//For initialising input array
			int i;
		
			box_length=60;
			box_width= 50;

			start_x=50;
			start_y=50;
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
		//------------------------------------------------------MERGE SORT CODE -----------------------------------------------------------------//
		int min(int x, int y){return (x<y)? x : y;}

		void DoMerge( int low, int high, int mid){

			if(high>input_array.Count-1||mid>input_array.Count-1)return;

			// We have low to mid and mid+1 to high already sorted.
			int i, j, k, temp[100];
			i = low;
			k = 0;
			j = mid + 1;
			// Merge the two parts into temp[].
			while (i <= mid && j <= high)
			{
				if (input_array[i] < input_array[j])
				{
					temp[k] = input_array[i];
					k++;
					i++;
				}
				else
				{
					temp[k] = input_array[j];
					k++;
					j++;
				}
			}
			// Insert all the remaining values from i to mid into temp[].
			while (i <= mid)
			{
				temp[k] = input_array[i];
				k++;
				i=i+1;
			}
			// Insert all the remaining values from j to high into temp[].
			while (j <= high)
			{	
				temp[k] = input_array[j];
				k++;
				j++;
			}
			// Assign sorted data stored in temp[] to a[].
			for (i = low; i <= high; i++)
			{
				input_array[i] = temp[i-low];
			}

		}

		//------------------------------------------------Windows Form Code----------------------------------------------------------------------------
	private: System::Void mergesort_Load(System::Object^  sender, System::EventArgs^  e) {
				 timer2_set=0;
				 sort_selected=0;
				 button5->Enabled=false;
				 button6->Enabled=false;
				 // Quiz Panel Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 4;
				 newPanel->module_id = 3;
				 newPanel->username = username;
				 newPanel->update_id = 12;
				 newPanel->update_name = "SortingProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 //add
				 String ^s=richTextBox1->Text;
				 bool check=inputValidate(s);
				 richTextBox1->Text="";
				 if(check){
					 int input = int::Parse(s);
					 num_elements++;
					 input_array.Add(input);
					 input_array_completed.Add(0);
					 panel1->Controls->Clear();
					 show_array(0,input_array.Count-1);
				 }
			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 //reset	 
				 timer1->Enabled = false;
				 timer2->Enabled= false;
				 panel1->Controls->Clear();
				 button5->Enabled=false;
				 button6->Enabled=false;
				 button3->Enabled=true;
				 input_array_completed.Clear();
				 num_elements = 0;
				 input_array.Clear();
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 //pause
				 if(timer1->Enabled == true){
					 timer1_set=1;
					 timer1->Enabled=false;
				 }
				 if(timer2->Enabled == true){
					 timer2_set=1;
					 timer2->Enabled=false;
				 }
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 //resume
				 if(timer1_set==1){timer1_set=0;timer1->Enabled=true;}
				 if(timer2_set==1){timer2_set=0;timer2->Enabled=true;}
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 //sort
				 if(sort_selected==-1){
					 MessageBox::Show("Sort Type Is Not Selected");
					 return;
				 }

				 //if sort_selected==0 then mergesort,otherwise quicksort 
				 if(sort_selected==0){
					 //mergesort
					 if(input_array.Count==0){MessageBox::Show("The input array is null,add something");}
					 curr_size=0.5;
					 button5->Enabled=true;
					 button3->Enabled=false;
					 button6->Enabled=true;
					 timer1->Enabled=true;
				 } 
				 else{
					 //quicksort
					 if(input_array.Count==0){MessageBox::Show("The input array is null,add something");}
					 quicksort_top=-1;
					 quicksort_stack[++quicksort_top]=0;
					 quicksort_stack[++quicksort_top]=input_array.Count-1;
					 timer1->Enabled=true;
				 }
			 }

			 //-------------------------------------------------------------Timer Code--------------------------------------------------------------------


	private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
				 //timer
				 int n=input_array.Count;


				 if(sort_selected==0){
					 //mergesort
					 left_start=0;
					 timer2->Enabled=true;

					 timer1->Enabled=false;
					 curr_size=curr_size*2;
					 if(curr_size>n-1){timer1->Enabled=false;timer2->Enabled=false;input_array.Clear();button3->Enabled=true;button5->Enabled=false;button6->Enabled=false;input_array_completed.Clear();}
				 }
				 else{
					 //quicksort
				 }
			 }
	private: System::Void timer2_Tick_1(System::Object^  sender, System::EventArgs^  e) {
				 //mergesort	
				 int n= input_array.Count;

				 if(mergesort_id==0){

					 mid=left_start + curr_size-1;
					 right_end= min(left_start + 2* curr_size -1 , n-1);	

					 for(int i=left_start;i<=right_end;i++)input_array_completed[i]=1;
					 panel1->Controls->Clear();
					 show_array(0,input_array.Count-1);
					 mergesort_id=1;

				 }
				 else{

					 DoMerge(left_start,right_end,mid);

					 for(int i=0;i<=input_array.Count-1;i++)input_array_completed[i]=0;
					 panel1->Controls->Clear();
					 show_array(0,input_array.Count-1);
					 left_start+= 2*curr_size;

					 if(left_start>n-1){
						 show_array(right_end,n-1);
						 timer1->Enabled=true;
						 timer2->Enabled=false;
					 }
					 mergesort_id=0;


				 }
			 }
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
};
}
