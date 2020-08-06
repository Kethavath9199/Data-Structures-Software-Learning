#pragma once

#include "moduleQuiz.h"

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>

namespace{

	//************global variables************//
	int icnt=0,icntt=0,icntp;
	int itcnt=-2,itcnt2=0;  //timer_tick counters
	int ia,ib=1;
	int iarr[20];  //store the input form
	int ibrr[20];   //in the sorting functions
	int icrr[20];  //in the timer1_tick
	int ialgo=0;   //to decide in timer1_tick which sorting algo it is
	std::vector<std::pair<int,int> > isvpp;
	std::vector<std::pair<std::pair<int,int> ,int> > isivpp;
	//***********global variables************//

}

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for InsertionSort
	/// </summary>
	public ref class InsertionSort : public System::Windows::Forms::UserControl
	{
	public:
		InsertionSort(void)
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
		~InsertionSort()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnDecreaseSpeed;
	protected: 
	private: System::Windows::Forms::Button^  btnIncreaseSpeed;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  p15;
	private: System::Windows::Forms::PictureBox^  p14;
	private: System::Windows::Forms::PictureBox^  p13;
	private: System::Windows::Forms::PictureBox^  p12;
	private: System::Windows::Forms::PictureBox^  p11;
	private: System::Windows::Forms::PictureBox^  p10;
	private: System::Windows::Forms::PictureBox^  p9;
	private: System::Windows::Forms::PictureBox^  p8;
	private: System::Windows::Forms::PictureBox^  p7;
	private: System::Windows::Forms::PictureBox^  p6;
	private: System::Windows::Forms::PictureBox^  p5;
	private: System::Windows::Forms::PictureBox^  p4;
	private: System::Windows::Forms::PictureBox^  p3;
	private: System::Windows::Forms::PictureBox^  p2;
	private: System::Windows::Forms::PictureBox^  p1;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l14;
	private: System::Windows::Forms::Label^  l15;
	private: System::Windows::Forms::Label^  l13;
	private: System::Windows::Forms::Label^  l12;
	private: System::Windows::Forms::Label^  l11;
	private: System::Windows::Forms::Label^  l9;
	private: System::Windows::Forms::Label^  l10;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Button^  btnIS;
	private: System::Windows::Forms::Timer^  timer1;
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

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;


	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;

	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Panel^  quizPanel;

	private: System::Windows::Forms::Label^  label34;







	private: System::ComponentModel::IContainer^  components;

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(InsertionSort::typeid));
			this->btnDecreaseSpeed = (gcnew System::Windows::Forms::Button());
			this->btnIncreaseSpeed = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->p15 = (gcnew System::Windows::Forms::PictureBox());
			this->p14 = (gcnew System::Windows::Forms::PictureBox());
			this->p13 = (gcnew System::Windows::Forms::PictureBox());
			this->p12 = (gcnew System::Windows::Forms::PictureBox());
			this->p11 = (gcnew System::Windows::Forms::PictureBox());
			this->p10 = (gcnew System::Windows::Forms::PictureBox());
			this->p9 = (gcnew System::Windows::Forms::PictureBox());
			this->p8 = (gcnew System::Windows::Forms::PictureBox());
			this->p7 = (gcnew System::Windows::Forms::PictureBox());
			this->p6 = (gcnew System::Windows::Forms::PictureBox());
			this->p5 = (gcnew System::Windows::Forms::PictureBox());
			this->p4 = (gcnew System::Windows::Forms::PictureBox());
			this->p3 = (gcnew System::Windows::Forms::PictureBox());
			this->p2 = (gcnew System::Windows::Forms::PictureBox());
			this->p1 = (gcnew System::Windows::Forms::PictureBox());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l14 = (gcnew System::Windows::Forms::Label());
			this->l15 = (gcnew System::Windows::Forms::Label());
			this->l13 = (gcnew System::Windows::Forms::Label());
			this->l12 = (gcnew System::Windows::Forms::Label());
			this->l11 = (gcnew System::Windows::Forms::Label());
			this->l9 = (gcnew System::Windows::Forms::Label());
			this->l10 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->btnIS = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDecreaseSpeed
			// 
			this->btnDecreaseSpeed->BackColor = System::Drawing::Color::Bisque;
			this->btnDecreaseSpeed->FlatAppearance->BorderSize = 0;
			this->btnDecreaseSpeed->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDecreaseSpeed->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDecreaseSpeed->Location = System::Drawing::Point(726, 1440);
			this->btnDecreaseSpeed->Name = L"btnDecreaseSpeed";
			this->btnDecreaseSpeed->Size = System::Drawing::Size(130, 30);
			this->btnDecreaseSpeed->TabIndex = 43;
			this->btnDecreaseSpeed->Text = L"Decrease Speed";
			this->btnDecreaseSpeed->UseVisualStyleBackColor = false;
			this->btnDecreaseSpeed->Click += gcnew System::EventHandler(this, &InsertionSort::btnDecreaseSpeed_Click);
			// 
			// btnIncreaseSpeed
			// 
			this->btnIncreaseSpeed->BackColor = System::Drawing::Color::Bisque;
			this->btnIncreaseSpeed->FlatAppearance->BorderSize = 0;
			this->btnIncreaseSpeed->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIncreaseSpeed->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIncreaseSpeed->Location = System::Drawing::Point(590, 1440);
			this->btnIncreaseSpeed->Name = L"btnIncreaseSpeed";
			this->btnIncreaseSpeed->Size = System::Drawing::Size(130, 30);
			this->btnIncreaseSpeed->TabIndex = 42;
			this->btnIncreaseSpeed->Text = L"Increase Speed";
			this->btnIncreaseSpeed->UseVisualStyleBackColor = false;
			this->btnIncreaseSpeed->Click += gcnew System::EventHandler(this, &InsertionSort::btnIncreaseSpeed_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Bisque;
			this->btnReset->FlatAppearance->BorderSize = 0;
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(968, 1440);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 41;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &InsertionSort::btnReset_Click);
			// 
			// btnPause
			// 
			this->btnPause->BackColor = System::Drawing::Color::Bisque;
			this->btnPause->FlatAppearance->BorderSize = 0;
			this->btnPause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPause->Location = System::Drawing::Point(862, 1440);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(100, 30);
			this->btnPause->TabIndex = 40;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &InsertionSort::btnPause_Click);
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(20, 1440);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(100, 28);
			this->txt1->TabIndex = 38;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Bisque;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(126, 1440);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 37;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &InsertionSort::btnAdd_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->p15);
			this->panel1->Controls->Add(this->p14);
			this->panel1->Controls->Add(this->p13);
			this->panel1->Controls->Add(this->p12);
			this->panel1->Controls->Add(this->p11);
			this->panel1->Controls->Add(this->p10);
			this->panel1->Controls->Add(this->p9);
			this->panel1->Controls->Add(this->p8);
			this->panel1->Controls->Add(this->p7);
			this->panel1->Controls->Add(this->p6);
			this->panel1->Controls->Add(this->p5);
			this->panel1->Controls->Add(this->p4);
			this->panel1->Controls->Add(this->p3);
			this->panel1->Controls->Add(this->p2);
			this->panel1->Controls->Add(this->p1);
			this->panel1->Controls->Add(this->l1);
			this->panel1->Controls->Add(this->l14);
			this->panel1->Controls->Add(this->l15);
			this->panel1->Controls->Add(this->l13);
			this->panel1->Controls->Add(this->l12);
			this->panel1->Controls->Add(this->l11);
			this->panel1->Controls->Add(this->l9);
			this->panel1->Controls->Add(this->l10);
			this->panel1->Controls->Add(this->l8);
			this->panel1->Controls->Add(this->l7);
			this->panel1->Controls->Add(this->l6);
			this->panel1->Controls->Add(this->l4);
			this->panel1->Controls->Add(this->l5);
			this->panel1->Controls->Add(this->l3);
			this->panel1->Controls->Add(this->l2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->panel1->Location = System::Drawing::Point(20, 1234);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1048, 200);
			this->panel1->TabIndex = 36;
			// 
			// p15
			// 
			this->p15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p15.Image")));
			this->p15->Location = System::Drawing::Point(961, 43);
			this->p15->Name = L"p15";
			this->p15->Size = System::Drawing::Size(31, 38);
			this->p15->TabIndex = 50;
			this->p15->TabStop = false;
			this->p15->Visible = false;
			// 
			// p14
			// 
			this->p14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p14.Image")));
			this->p14->Location = System::Drawing::Point(894, 43);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(31, 38);
			this->p14->TabIndex = 49;
			this->p14->TabStop = false;
			this->p14->Visible = false;
			// 
			// p13
			// 
			this->p13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p13.Image")));
			this->p13->Location = System::Drawing::Point(827, 43);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(31, 38);
			this->p13->TabIndex = 48;
			this->p13->TabStop = false;
			this->p13->Visible = false;
			// 
			// p12
			// 
			this->p12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p12.Image")));
			this->p12->Location = System::Drawing::Point(760, 43);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(31, 38);
			this->p12->TabIndex = 47;
			this->p12->TabStop = false;
			this->p12->Visible = false;
			// 
			// p11
			// 
			this->p11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p11.Image")));
			this->p11->Location = System::Drawing::Point(693, 43);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(31, 38);
			this->p11->TabIndex = 46;
			this->p11->TabStop = false;
			this->p11->Visible = false;
			// 
			// p10
			// 
			this->p10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p10.Image")));
			this->p10->Location = System::Drawing::Point(626, 43);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(31, 38);
			this->p10->TabIndex = 45;
			this->p10->TabStop = false;
			this->p10->Visible = false;
			// 
			// p9
			// 
			this->p9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p9.Image")));
			this->p9->Location = System::Drawing::Point(559, 43);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(31, 38);
			this->p9->TabIndex = 44;
			this->p9->TabStop = false;
			this->p9->Visible = false;
			// 
			// p8
			// 
			this->p8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p8.Image")));
			this->p8->Location = System::Drawing::Point(492, 43);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(31, 38);
			this->p8->TabIndex = 43;
			this->p8->TabStop = false;
			this->p8->Visible = false;
			// 
			// p7
			// 
			this->p7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p7.Image")));
			this->p7->Location = System::Drawing::Point(425, 43);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(31, 38);
			this->p7->TabIndex = 42;
			this->p7->TabStop = false;
			this->p7->Visible = false;
			// 
			// p6
			// 
			this->p6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p6.Image")));
			this->p6->Location = System::Drawing::Point(358, 43);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(31, 38);
			this->p6->TabIndex = 41;
			this->p6->TabStop = false;
			this->p6->Visible = false;
			// 
			// p5
			// 
			this->p5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p5.Image")));
			this->p5->Location = System::Drawing::Point(291, 43);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(31, 38);
			this->p5->TabIndex = 40;
			this->p5->TabStop = false;
			this->p5->Visible = false;
			// 
			// p4
			// 
			this->p4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p4.Image")));
			this->p4->Location = System::Drawing::Point(224, 43);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(31, 38);
			this->p4->TabIndex = 39;
			this->p4->TabStop = false;
			this->p4->Visible = false;
			// 
			// p3
			// 
			this->p3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p3.Image")));
			this->p3->Location = System::Drawing::Point(157, 43);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(31, 38);
			this->p3->TabIndex = 38;
			this->p3->TabStop = false;
			this->p3->Visible = false;
			// 
			// p2
			// 
			this->p2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p2.Image")));
			this->p2->Location = System::Drawing::Point(90, 43);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(31, 38);
			this->p2->TabIndex = 37;
			this->p2->TabStop = false;
			this->p2->Visible = false;
			// 
			// p1
			// 
			this->p1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1.Image")));
			this->p1->Location = System::Drawing::Point(23, 43);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(31, 38);
			this->p1->TabIndex = 36;
			this->p1->TabStop = false;
			this->p1->Visible = false;
			// 
			// l1
			// 
			this->l1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->Location = System::Drawing::Point(20, 84);
			this->l1->Name = L"l1";
			this->l1->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l1->Size = System::Drawing::Size(61, 60);
			this->l1->TabIndex = 23;
			this->l1->Text = L"2";
			// 
			// l14
			// 
			this->l14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l14->Location = System::Drawing::Point(891, 84);
			this->l14->Name = L"l14";
			this->l14->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l14->Size = System::Drawing::Size(61, 60);
			this->l14->TabIndex = 35;
			this->l14->Text = L"14";
			// 
			// l15
			// 
			this->l15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l15->Location = System::Drawing::Point(958, 84);
			this->l15->Name = L"l15";
			this->l15->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l15->Size = System::Drawing::Size(61, 60);
			this->l15->TabIndex = 34;
			this->l15->Text = L"15";
			// 
			// l13
			// 
			this->l13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l13->Location = System::Drawing::Point(824, 84);
			this->l13->Name = L"l13";
			this->l13->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l13->Size = System::Drawing::Size(61, 60);
			this->l13->TabIndex = 33;
			this->l13->Text = L"13";
			// 
			// l12
			// 
			this->l12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l12->Location = System::Drawing::Point(757, 84);
			this->l12->Name = L"l12";
			this->l12->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l12->Size = System::Drawing::Size(61, 60);
			this->l12->TabIndex = 32;
			this->l12->Text = L"12278";
			// 
			// l11
			// 
			this->l11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l11->Location = System::Drawing::Point(690, 84);
			this->l11->Name = L"l11";
			this->l11->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l11->Size = System::Drawing::Size(61, 60);
			this->l11->TabIndex = 31;
			this->l11->Text = L"11455";
			// 
			// l9
			// 
			this->l9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l9->Location = System::Drawing::Point(556, 84);
			this->l9->Name = L"l9";
			this->l9->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l9->Size = System::Drawing::Size(61, 60);
			this->l9->TabIndex = 30;
			this->l9->Text = L"9";
			// 
			// l10
			// 
			this->l10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l10->Location = System::Drawing::Point(623, 84);
			this->l10->Name = L"l10";
			this->l10->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l10->Size = System::Drawing::Size(61, 60);
			this->l10->TabIndex = 29;
			this->l10->Text = L"10";
			// 
			// l8
			// 
			this->l8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->Location = System::Drawing::Point(489, 84);
			this->l8->Name = L"l8";
			this->l8->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l8->Size = System::Drawing::Size(61, 60);
			this->l8->TabIndex = 28;
			this->l8->Text = L"8";
			// 
			// l7
			// 
			this->l7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->Location = System::Drawing::Point(422, 84);
			this->l7->Name = L"l7";
			this->l7->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l7->Size = System::Drawing::Size(61, 60);
			this->l7->TabIndex = 27;
			this->l7->Text = L"7";
			// 
			// l6
			// 
			this->l6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(355, 84);
			this->l6->Name = L"l6";
			this->l6->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l6->Size = System::Drawing::Size(61, 60);
			this->l6->TabIndex = 26;
			this->l6->Text = L"6";
			// 
			// l4
			// 
			this->l4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->Location = System::Drawing::Point(221, 84);
			this->l4->Name = L"l4";
			this->l4->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l4->Size = System::Drawing::Size(61, 60);
			this->l4->TabIndex = 25;
			this->l4->Text = L"4";
			// 
			// l5
			// 
			this->l5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->Location = System::Drawing::Point(288, 84);
			this->l5->Name = L"l5";
			this->l5->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l5->Size = System::Drawing::Size(61, 60);
			this->l5->TabIndex = 24;
			this->l5->Text = L"5";
			// 
			// l3
			// 
			this->l3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(154, 84);
			this->l3->Name = L"l3";
			this->l3->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l3->Size = System::Drawing::Size(61, 60);
			this->l3->TabIndex = 23;
			this->l3->Text = L"3";
			// 
			// l2
			// 
			this->l2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(87, 84);
			this->l2->Name = L"l2";
			this->l2->Padding = System::Windows::Forms::Padding(10, 15, 0, 0);
			this->l2->Size = System::Drawing::Size(61, 60);
			this->l2->TabIndex = 22;
			this->l2->Text = L"2";
			// 
			// btnIS
			// 
			this->btnIS->BackColor = System::Drawing::Color::Bisque;
			this->btnIS->FlatAppearance->BorderSize = 0;
			this->btnIS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIS->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIS->Location = System::Drawing::Point(464, 1440);
			this->btnIS->Name = L"btnIS";
			this->btnIS->Size = System::Drawing::Size(120, 30);
			this->btnIS->TabIndex = 44;
			this->btnIS->Text = L"Insertion Sort";
			this->btnIS->UseVisualStyleBackColor = false;
			this->btnIS->Click += gcnew System::EventHandler(this, &InsertionSort::btnIS_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 2501;
			this->timer1->Tick += gcnew System::EventHandler(this, &InsertionSort::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(425, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 39);
			this->label1->TabIndex = 45;
			this->label1->Text = L"INSERTION SORT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(681, 20);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Insertion sort is a simple sorting algorithm that works the way we sort playing c" 
				L"ards in our hands.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 21);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Algorithm";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1052, 88);
			this->label4->TabIndex = 48;
			this->label4->Text = L"// Sort an arr[] of size n\r\ninsertionSort(arr, n)\r\nLoop from i = 1 to n-1.\r\n……a) " 
				L"Pick element arr[i] and insert it into sorted sequence arr[0…i-1]";
			this->label4->Click += gcnew System::EventHandler(this, &InsertionSort::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(263, 263);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(562, 569);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 49;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(16, 848);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 21);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Another Example: ";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 869);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1052, 304);
			this->label6->TabIndex = 51;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 1205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(184, 26);
			this->label7->TabIndex = 52;
			this->label7->Text = L"LEARN WITH FUN";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Bisque;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(16, 1505);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1052, 870);
			this->label8->TabIndex = 53;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(16, 2407);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 21);
			this->label9->TabIndex = 54;
			this->label9->Text = L"Output:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Bisque;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(79, 2408);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 20);
			this->label10->TabIndex = 55;
			this->label10->Text = L"5 6 11 12 13";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 2437);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(135, 21);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Time Complexity:";
			this->label11->Click += gcnew System::EventHandler(this, &InsertionSort::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(149, 2438);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 20);
			this->label12->TabIndex = 57;
			this->label12->Text = L"O(n*2)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(16, 2458);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 21);
			this->label13->TabIndex = 58;
			this->label13->Text = L"Auxiliary Space:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(139, 2459);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 20);
			this->label15->TabIndex = 59;
			this->label15->Text = L"O(1)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(16, 2479);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(128, 21);
			this->label14->TabIndex = 60;
			this->label14->Text = L"Boundary Cases:";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(135, 2480);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(933, 47);
			this->label16->TabIndex = 61;
			this->label16->Text = L"Insertion sort takes maximum time to sort if elements are sorted in reverse order" 
				L". And it takes minimum time (Order of n) when elements are already sorted.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(16, 2527);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(170, 21);
			this->label17->TabIndex = 62;
			this->label17->Text = L"Algorithmic Paradigm:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(178, 2528);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(164, 20);
			this->label18->TabIndex = 63;
			this->label18->Text = L"Incremental Approach";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(16, 2548);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(135, 21);
			this->label19->TabIndex = 64;
			this->label19->Text = L"Sorting In Place:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(149, 2549);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(34, 20);
			this->label20->TabIndex = 65;
			this->label20->Text = L"Yes";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(16, 2569);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(63, 21);
			this->label21->TabIndex = 66;
			this->label21->Text = L"Stable:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(79, 2570);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(34, 20);
			this->label24->TabIndex = 69;
			this->label24->Text = L"Yes";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(16, 2590);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(61, 21);
			this->label25->TabIndex = 70;
			this->label25->Text = L"Online:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(79, 2591);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(34, 20);
			this->label26->TabIndex = 71;
			this->label26->Text = L"Yes";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(16, 2611);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 21);
			this->label27->TabIndex = 72;
			this->label27->Text = L"Uses:";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(63, 2612);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(1005, 41);
			this->label28->TabIndex = 73;
			this->label28->Text = L" Insertion sort is used when number of elements is small. It can also be useful w" 
				L"hen input array is almost sorted, only few elements are misplaced in complete bi" 
				L"g array.";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(16, 2670);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(238, 21);
			this->label30->TabIndex = 74;
			this->label30->Text = L"What is Binary Insertion Sort\?";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(16, 2691);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(1041, 85);
			this->label29->TabIndex = 75;
			this->label29->Text = resources->GetString(L"label29.Text");
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(16, 2785);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(374, 21);
			this->label31->TabIndex = 76;
			this->label31->Text = L"How to implement Insertion Sort for Linked List\?";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(16, 2806);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(379, 20);
			this->label32->TabIndex = 77;
			this->label32->Text = L"Below is simple insertion sort algorithm for linked list.";
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::Color::Bisque;
			this->label33->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(16, 2826);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(1052, 86);
			this->label33->TabIndex = 78;
			this->label33->Text = resources->GetString(L"label33.Text");
			// 
			// quizPanel
			// 
			this->quizPanel->BackColor = System::Drawing::Color::White;
			this->quizPanel->Location = System::Drawing::Point(20, 2991);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1065, 450);
			this->quizPanel->TabIndex = 79;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(23, 2967);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(382, 21);
			this->label34->TabIndex = 80;
			this->label34->Text = L"Answer the question correctly to pass the module.";
			// 
			// InsertionSort
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::OldLace;
			this->Controls->Add(this->label34);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
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
			this->Controls->Add(this->btnIS);
			this->Controls->Add(this->btnDecreaseSpeed);
			this->Controls->Add(this->btnIncreaseSpeed);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->panel1);
			this->Name = L"InsertionSort";
			this->Size = System::Drawing::Size(1105, 3500);
			this->Load += gcnew System::EventHandler(this, &InsertionSort::InsertionSort_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: String ^username;

		//assign a colour to a label
	  //0->white,1->red,2->yellow,3->skyblue
	  void colour(int l,int c){
		switch(l){
			case 1:
				if(c==0)l1->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l1->BackColor=System::Drawing::Color::Pink;
				if(c==2)l1->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l1->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 2:
				if(c==0)l2->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l2->BackColor=System::Drawing::Color::Pink;
				if(c==2)l2->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l2->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 3:
				if(c==0)l3->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l3->BackColor=System::Drawing::Color::Pink;
				if(c==2)l3->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l3->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 4:
				if(c==0)l4->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l4->BackColor=System::Drawing::Color::Pink;
				if(c==2)l4->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l4->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 5:
				if(c==0)l5->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l5->BackColor=System::Drawing::Color::Pink;
				if(c==2)l5->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l5->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 6:
				if(c==0)l6->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l6->BackColor=System::Drawing::Color::Pink;
				if(c==2)l6->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l6->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 7:
				if(c==0)l7->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l7->BackColor=System::Drawing::Color::Pink;
				if(c==2)l7->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l7->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 8:
				if(c==0)l8->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l8->BackColor=System::Drawing::Color::Pink;
				if(c==2)l8->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l8->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 9:
				if(c==0)l9->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l9->BackColor=System::Drawing::Color::Pink;
				if(c==2)l9->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l9->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 10:
				if(c==0)l10->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l10->BackColor=System::Drawing::Color::Pink;
				if(c==2)l10->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l10->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 11:
				if(c==0)l11->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l11->BackColor=System::Drawing::Color::Pink;
				if(c==2)l11->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l11->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 12:
				if(c==0)l12->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l12->BackColor=System::Drawing::Color::Pink;
				if(c==2)l12->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l12->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 13:
				if(c==0)l13->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l13->BackColor=System::Drawing::Color::Pink;
				if(c==2)l13->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l13->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 14:
				if(c==0)l14->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l14->BackColor=System::Drawing::Color::Pink;
				if(c==2)l14->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l14->BackColor=System::Drawing::Color::SkyBlue;
				break;
			case 15:
				if(c==0)l15->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l15->BackColor=System::Drawing::Color::Pink;
				if(c==2)l15->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l15->BackColor=System::Drawing::Color::SkyBlue;
				break;
			default:
				break;
			
		  }
	  }

		//assign a value to a label
		void value(int l,int v){
			switch(l){
			case 1:
				l1->Text = Convert::ToString(v);
				break;
			case 2:
				l2->Text = Convert::ToString(v);
				break;
			case 3:
				l3->Text = Convert::ToString(v);
				break;
			case 4:
				l4->Text = Convert::ToString(v);
				break;
			case 5:
				l5->Text = Convert::ToString(v);
				break;
			case 6:
				l6->Text = Convert::ToString(v);
				break;
			case 7:
				l7->Text = Convert::ToString(v);
				break;
			case 8:
				l8->Text = Convert::ToString(v);
				break;
			case 9:
				l9->Text = Convert::ToString(v);
				break;
			case 10:
				l10->Text = Convert::ToString(v);
				break;
			case 11:
				l11->Text = Convert::ToString(v);
				break;
			case 12:
				l12->Text = Convert::ToString(v);
				break;
			case 13:
				l13->Text = Convert::ToString(v);
				break;
			case 14:
				l14->Text = Convert::ToString(v);
				break;
			case 15:
				l15->Text = Convert::ToString(v);
				break;
			default:
				break;
			}
		}

		//making arrows visible
		void arrow(int p,int i){
			switch(p){
			case 1:
				if(i==0)p1->Visible=false;
				if(i==1)p1->Visible=true;
				break;
			case 2:
				if(i==0)p2->Visible=false;
				if(i==1)p2->Visible=true;
				break;
			case 3:
				if(i==0)p3->Visible=false;
				if(i==1)p3->Visible=true;
				break;
			case 4:
				if(i==0)p4->Visible=false;
				if(i==1)p4->Visible=true;
				break;
			case 5:
				if(i==0)p5->Visible=false;
				if(i==1)p5->Visible=true;
				break;
			case 6:
				if(i==0)p6->Visible=false;
				if(i==1)p6->Visible=true;
				break;
			case 7:
				if(i==0)p7->Visible=false;
				if(i==1)p7->Visible=true;
				break;
			case 8:
				if(i==0)p8->Visible=false;
				if(i==1)p8->Visible=true;
				break;
			case 9:
				if(i==0)p9->Visible=false;
				if(i==1)p9->Visible=true;
				break;
			case 10:
				if(i==0)p10->Visible=false;
				if(i==1)p10->Visible=true;
				break;
			case 11:
				if(i==0)p11->Visible=false;
				if(i==1)p11->Visible=true;
				break;
			case 12:
				if(i==0)p12->Visible=false;
				if(i==1)p12->Visible=true;
				break;
			case 13:
				if(i==0)p13->Visible=false;
				if(i==1)p13->Visible=true;
				break;
			case 14:
				if(i==0)p14->Visible=false;
				if(i==1)p14->Visible=true;
				break;
			case 15:
				if(i==0)p15->Visible=false;
				if(i==1)p15->Visible=true;
				break;
			default:
				break;
			}
		}

		//hiding the labels
		void hideLabels(){
			l1->Visible=false;
			l2->Visible=false;
			l3->Visible=false;
			l4->Visible=false;
			l5->Visible=false;
			l6->Visible=false;
			l7->Visible=false;
			l8->Visible=false;
			l9->Visible=false;
			l10->Visible=false;
			l11->Visible=false;
			l12->Visible=false;
			l13->Visible=false;
			l14->Visible=false;
			l15->Visible=false;
		}

		//Insertion Sort
		void insertionSort(){
			ialgo=3;
			isivpp.clear();
			for(int i=1;i<=icnt;i++){
				value(i,iarr[i]);
				colour(i,0);
			}
			for(int i=1;i<=icnt;i++){
				ibrr[i]=iarr[i];
				icrr[i]=iarr[i];
			}

			int i, j; 
			for (i = 2; i <= icnt; i++) { 
				j = i - 1; 
				while (ibrr[j]>ibrr[j+1] && j>=1) { 
					std::swap(ibrr[j],ibrr[j+1]);
					isivpp.push_back(std::make_pair(std::make_pair(j,j+1),i));
					j = j - 1; 
				} 
			} 
		}

	private: System::Void InsertionSort_Load(System::Object^  sender, System::EventArgs^  e) {
				 hideLabels();
				 icnt=0;

				 // Quiz Panel Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 4;
				 newPanel->module_id = 2;
				 newPanel->username = username;
				 newPanel->update_id = 12;
				 newPanel->update_name = "SortingProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
	private: System::Void btnIS_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Interval=2501;
				 if(icnt==0){
					 MessageBox::Show("Please Enter Some Input");
				 }else{
					 insertionSort();
					 itcnt=-2;
					 timer1->Enabled=true;

				 }
			 }
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {

				 icnt++;
				 icntt=0;
				 int p=1;
				 try{
					 ia=Convert::ToInt32(txt1->Text);
				 }catch(...){
					 MessageBox::Show("Please enter an Integer only");
					 icnt--;
					 p=0;
				 }


				 if(p)switch (icnt){
				 case 1:
					 try{
						 l1->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l1->Visible=true;
						 l1->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 2:
					 try{
						 l2->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l2->Visible=true;
						 l2->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 3:
					 try{
						 l3->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l3->Visible=true;
						 l3->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 4:
					 try{
						 l4->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l4->Visible=true;
						 l4->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 5:
					 try{
						 l5->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l5->Visible=true;
						 l5->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 6:
					 try{
						 l6->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l6->Visible=true;
						 l6->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 7:
					 try{
						 l7->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l7->Visible=true;
						 l7->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 8:
					 try{
						 l8->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l8->Visible=true;
						 l8->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 9:
					 try{
						 l9->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l9->Visible=true;
						 l9->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 10:
					 try{
						 l10->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l10->Visible=true;
						 l10->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 11:
					 try{
						 l11->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l11->Visible=true;
						 l11->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 12:
					 try{
						 l12->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l12->Visible=true;
						 l12->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 13:
					 try{
						 l13->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l13->Visible=true;
						 l13->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 14:
					 try{
						 l14->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l14->Visible=true;
						 l14->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 case 15:
					 try{
						 l15->Text=txt1->Text;
						 iarr[icnt]=ia;
						 l15->Visible=true;
						 l15->BackColor=System::Drawing::Color::White;
					 }catch(...){
						 MessageBox::Show("Please enter an Integer only");
						 icnt--;
					 }
					 break;
				 default:
					 MessageBox::Show("Maximum Size Reached");
					 icnt--;
					 break;
				 }
				 for(int i=1;i<=icnt;i++){
					 colour(i,0);
					 arrow(i,0);
				 }
				 timer1->Enabled=false;
			 }
	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 icntp++;
				 if(icntp%2==1){
					 timer1->Enabled=false;
				 }else{
					 timer1->Enabled=true;
				 }
			 }
	private: System::Void btnIncreaseSpeed_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(timer1->Interval>=500)timer1->Interval-=500;
			 }
	private: System::Void btnDecreaseSpeed_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Interval+=500;
			 }
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
				 icnt=0;
				 hideLabels();
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 int n=isivpp.size();
				 int a,b,c;
				 itcnt++;

				 if(itcnt>=0 && itcnt<=n-1){
					 a=isivpp[itcnt].first.first;
					 b=isivpp[itcnt].first.second;
					 value(a,icrr[b]);
					 value(b,icrr[a]);
					 std::swap(icrr[a],icrr[b]);
				 }   


				 if(itcnt<=n-2){
					 int a,b;
					 a=isivpp[itcnt+1].first.first;
					 b=isivpp[itcnt+1].first.second;
					 c=isivpp[itcnt+1].second;
					 for(int i=1;i<=c-1;i++){
						 colour(i,1);
						 arrow(i,0);
					 }
					 colour(c,1);
					 colour(b,2);
					 arrow(b,1);
					 arrow(c,1);
					 if(b<c){
						 arrow(c,0);
					 }
				 }

				 if(itcnt==n-1){
					 timer1->Enabled=false;
					 for(int i=1;i<=15;i++){
						 colour(i,1);
						 arrow(i,0);
					 }

				 }
			 }
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
