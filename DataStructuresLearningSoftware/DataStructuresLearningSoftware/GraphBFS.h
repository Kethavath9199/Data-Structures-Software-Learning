#pragma once

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>
#include <queue>


namespace{

	//************global variables************//
	int bn,bm,baddcounter=0,bpause;
	int bnodes[100];
	int bvis[1000];
	std::vector<int> badj[1000];
	std::vector<std::pair<int,int> > bstore;
	int bc1=0,bt1=-1,bcheck=0;
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
	/// Summary for GraphBFS
	/// </summary>
	public ref class GraphBFS : public System::Windows::Forms::UserControl
	{
	public:
		GraphBFS(void)
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
		~GraphBFS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnIncrease;
	protected: 
	private: System::Windows::Forms::Button^  btnDecrease;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBFS;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::TextBox^  txtTo;




	private: System::Windows::Forms::TextBox^  txtFrom;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls26;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls12;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls78;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls68;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls67;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls58;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls57;

	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls56;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls48;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls47;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls46;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls45;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls38;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls37;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls36;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls35;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls34;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls27;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls28;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls24;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls23;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls25;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls14;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls18;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls16;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls15;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls17;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  ls13;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

























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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GraphBFS::typeid));
			this->btnIncrease = (gcnew System::Windows::Forms::Button());
			this->btnDecrease = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBFS = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ls78 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls68 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls67 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls58 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls57 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls56 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls48 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls47 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls46 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls45 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls38 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls37 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls36 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls35 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls34 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls27 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls28 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls24 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls23 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls25 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls14 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls18 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls16 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls15 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls17 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls13 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls12 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->ls26 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// btnIncrease
			// 
			this->btnIncrease->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnIncrease->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIncrease->Location = System::Drawing::Point(997, 518);
			this->btnIncrease->Margin = System::Windows::Forms::Padding(4);
			this->btnIncrease->Name = L"btnIncrease";
			this->btnIncrease->Size = System::Drawing::Size(100, 50);
			this->btnIncrease->TabIndex = 27;
			this->btnIncrease->Text = L"Increase Speed";
			this->btnIncrease->UseVisualStyleBackColor = false;
			this->btnIncrease->Visible = false;
			this->btnIncrease->Click += gcnew System::EventHandler(this, &GraphBFS::btnIncrease_Click);
			// 
			// btnDecrease
			// 
			this->btnDecrease->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnDecrease->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDecrease->Location = System::Drawing::Point(889, 518);
			this->btnDecrease->Margin = System::Windows::Forms::Padding(4);
			this->btnDecrease->Name = L"btnDecrease";
			this->btnDecrease->Size = System::Drawing::Size(100, 50);
			this->btnDecrease->TabIndex = 26;
			this->btnDecrease->Text = L"Decrease Speed";
			this->btnDecrease->UseVisualStyleBackColor = false;
			this->btnDecrease->Visible = false;
			this->btnDecrease->Click += gcnew System::EventHandler(this, &GraphBFS::btnDecrease_Click);
			// 
			// btnPause
			// 
			this->btnPause->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnPause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPause->Location = System::Drawing::Point(781, 517);
			this->btnPause->Margin = System::Windows::Forms::Padding(4);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(100, 50);
			this->btnPause->TabIndex = 25;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = false;
			this->btnPause->Visible = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &GraphBFS::btnPause_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(390, 552);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 25);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Edge Node 2";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(239, 552);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 25);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Edge Node 1";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 518);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 19);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Enter number of Nodes";
			// 
			// btnBFS
			// 
			this->btnBFS->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnBFS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBFS->Location = System::Drawing::Point(661, 517);
			this->btnBFS->Margin = System::Windows::Forms::Padding(4);
			this->btnBFS->Name = L"btnBFS";
			this->btnBFS->Size = System::Drawing::Size(100, 50);
			this->btnBFS->TabIndex = 21;
			this->btnBFS->Text = L"BFS";
			this->btnBFS->UseVisualStyleBackColor = false;
			this->btnBFS->Visible = false;
			this->btnBFS->Click += gcnew System::EventHandler(this, &GraphBFS::btnBFS_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->Location = System::Drawing::Point(552, 518);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 50);
			this->btnAdd->TabIndex = 20;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &GraphBFS::btnAdd_Click);
			// 
			// txtTo
			// 
			this->txtTo->Location = System::Drawing::Point(394, 517);
			this->txtTo->Margin = System::Windows::Forms::Padding(4);
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(132, 20);
			this->txtTo->TabIndex = 19;
			this->txtTo->Visible = false;
			// 
			// txtFrom
			// 
			this->txtFrom->Location = System::Drawing::Point(243, 517);
			this->txtFrom->Margin = System::Windows::Forms::Padding(4);
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(132, 20);
			this->txtFrom->TabIndex = 14;
			// 
			// timer1
			// 
			this->timer1->Interval = 2501;
			this->timer1->Tick += gcnew System::EventHandler(this, &GraphBFS::timer1_Tick);
			// 
			// l8
			// 
			this->l8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->Location = System::Drawing::Point(222, 77);
			this->l8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(40, 37);
			this->l8->TabIndex = 35;
			this->l8->Text = L"8";
			this->l8->Visible = false;
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->Location = System::Drawing::Point(841, 154);
			this->l7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(40, 37);
			this->l7->TabIndex = 34;
			this->l7->Text = L"7";
			this->l7->Visible = false;
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(466, 315);
			this->l6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(40, 37);
			this->l6->TabIndex = 33;
			this->l6->Text = L"6";
			this->l6->Visible = false;
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->Location = System::Drawing::Point(745, 283);
			this->l5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(40, 37);
			this->l5->TabIndex = 32;
			this->l5->Text = L"5";
			this->l5->Visible = false;
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->Location = System::Drawing::Point(204, 273);
			this->l4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(40, 37);
			this->l4->TabIndex = 31;
			this->l4->Text = L"4";
			this->l4->Visible = false;
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(401, 194);
			this->l3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(40, 37);
			this->l3->TabIndex = 30;
			this->l3->Text = L"3";
			this->l3->Visible = false;
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(599, 165);
			this->l2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(40, 37);
			this->l2->TabIndex = 29;
			this->l2->Text = L"2";
			this->l2->Visible = false;
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->Location = System::Drawing::Point(520, 31);
			this->l1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(40, 37);
			this->l1->TabIndex = 28;
			this->l1->Text = L"1";
			this->l1->Visible = false;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(28) {this->ls78, this->ls68, 
				this->ls67, this->ls58, this->ls57, this->ls56, this->ls48, this->ls47, this->ls46, this->ls45, this->ls38, this->ls37, this->ls36, 
				this->ls35, this->ls34, this->ls27, this->ls28, this->ls24, this->ls23, this->ls25, this->ls14, this->ls18, this->ls16, this->ls15, 
				this->ls17, this->ls13, this->ls12, this->ls26});
			this->shapeContainer1->Size = System::Drawing::Size(1105, 2000);
			this->shapeContainer1->TabIndex = 36;
			this->shapeContainer1->TabStop = false;
			// 
			// ls78
			// 
			this->ls78->BorderWidth = 3;
			this->ls78->Name = L"ls78";
			this->ls78->Visible = false;
			this->ls78->X1 = 262;
			this->ls78->X2 = 843;
			this->ls78->Y1 = 86;
			this->ls78->Y2 = 160;
			// 
			// ls68
			// 
			this->ls68->BorderWidth = 3;
			this->ls68->Name = L"ls68";
			this->ls68->Visible = false;
			this->ls68->X1 = 469;
			this->ls68->X2 = 251;
			this->ls68->Y1 = 323;
			this->ls68->Y2 = 110;
			// 
			// ls67
			// 
			this->ls67->BorderWidth = 3;
			this->ls67->Name = L"ls67";
			this->ls67->Visible = false;
			this->ls67->X1 = 508;
			this->ls67->X2 = 852;
			this->ls67->Y1 = 319;
			this->ls67->Y2 = 183;
			// 
			// ls58
			// 
			this->ls58->BorderWidth = 3;
			this->ls58->Name = L"ls58";
			this->ls58->Visible = false;
			this->ls58->X1 = 263;
			this->ls58->X2 = 742;
			this->ls58->Y1 = 102;
			this->ls58->Y2 = 289;
			// 
			// ls57
			// 
			this->ls57->BorderWidth = 3;
			this->ls57->Name = L"ls57";
			this->ls57->Visible = false;
			this->ls57->X1 = 782;
			this->ls57->X2 = 862;
			this->ls57->Y1 = 287;
			this->ls57->Y2 = 185;
			// 
			// ls56
			// 
			this->ls56->BorderWidth = 3;
			this->ls56->Name = L"ls56";
			this->ls56->Visible = false;
			this->ls56->X1 = 507;
			this->ls56->X2 = 745;
			this->ls56->Y1 = 336;
			this->ls56->Y2 = 306;
			// 
			// ls48
			// 
			this->ls48->BorderWidth = 3;
			this->ls48->Name = L"ls48";
			this->ls48->Visible = false;
			this->ls48->X1 = 226;
			this->ls48->X2 = 243;
			this->ls48->Y1 = 271;
			this->ls48->Y2 = 108;
			// 
			// ls47
			// 
			this->ls47->BorderWidth = 3;
			this->ls47->Name = L"ls47";
			this->ls47->Visible = false;
			this->ls47->X1 = 248;
			this->ls47->X2 = 842;
			this->ls47->Y1 = 288;
			this->ls47->Y2 = 172;
			// 
			// ls46
			// 
			this->ls46->BorderWidth = 3;
			this->ls46->Name = L"ls46";
			this->ls46->Visible = false;
			this->ls46->X1 = 470;
			this->ls46->X2 = 244;
			this->ls46->Y1 = 336;
			this->ls46->Y2 = 298;
			// 
			// ls45
			// 
			this->ls45->BorderWidth = 3;
			this->ls45->Name = L"ls45";
			this->ls45->Visible = false;
			this->ls45->X1 = 745;
			this->ls45->X2 = 245;
			this->ls45->Y1 = 298;
			this->ls45->Y2 = 290;
			// 
			// ls38
			// 
			this->ls38->BorderWidth = 3;
			this->ls38->Name = L"ls38";
			this->ls38->Visible = false;
			this->ls38->X1 = 260;
			this->ls38->X2 = 398;
			this->ls38->Y1 = 109;
			this->ls38->Y2 = 201;
			// 
			// ls37
			// 
			this->ls37->BorderWidth = 3;
			this->ls37->Name = L"ls37";
			this->ls37->Visible = false;
			this->ls37->X1 = 843;
			this->ls37->X2 = 435;
			this->ls37->Y1 = 181;
			this->ls37->Y2 = 210;
			// 
			// ls36
			// 
			this->ls36->BorderWidth = 3;
			this->ls36->Name = L"ls36";
			this->ls36->Visible = false;
			this->ls36->X1 = 474;
			this->ls36->X2 = 421;
			this->ls36->Y1 = 309;
			this->ls36->Y2 = 222;
			// 
			// ls35
			// 
			this->ls35->BorderWidth = 3;
			this->ls35->Name = L"ls35";
			this->ls35->Visible = false;
			this->ls35->X1 = 745;
			this->ls35->X2 = 434;
			this->ls35->Y1 = 293;
			this->ls35->Y2 = 215;
			// 
			// ls34
			// 
			this->ls34->BorderWidth = 3;
			this->ls34->Name = L"ls34";
			this->ls34->Visible = false;
			this->ls34->X1 = 245;
			this->ls34->X2 = 398;
			this->ls34->Y1 = 280;
			this->ls34->Y2 = 216;
			// 
			// ls27
			// 
			this->ls27->BorderWidth = 3;
			this->ls27->Name = L"ls27";
			this->ls27->Visible = false;
			this->ls27->X1 = 843;
			this->ls27->X2 = 636;
			this->ls27->Y1 = 165;
			this->ls27->Y2 = 174;
			// 
			// ls28
			// 
			this->ls28->BorderWidth = 3;
			this->ls28->Name = L"ls28";
			this->ls28->Visible = false;
			this->ls28->X1 = 261;
			this->ls28->X2 = 602;
			this->ls28->Y1 = 94;
			this->ls28->Y2 = 172;
			// 
			// ls24
			// 
			this->ls24->BorderWidth = 3;
			this->ls24->Name = L"ls24";
			this->ls24->Visible = false;
			this->ls24->X1 = 246;
			this->ls24->X2 = 600;
			this->ls24->Y1 = 284;
			this->ls24->Y2 = 186;
			// 
			// ls23
			// 
			this->ls23->BorderWidth = 3;
			this->ls23->Name = L"ls23";
			this->ls23->Visible = false;
			this->ls23->X1 = 433;
			this->ls23->X2 = 603;
			this->ls23->Y1 = 203;
			this->ls23->Y2 = 178;
			// 
			// ls25
			// 
			this->ls25->BorderWidth = 3;
			this->ls25->Name = L"ls25";
			this->ls25->Visible = false;
			this->ls25->X1 = 745;
			this->ls25->X2 = 618;
			this->ls25->Y1 = 288;
			this->ls25->Y2 = 194;
			// 
			// ls14
			// 
			this->ls14->BorderWidth = 3;
			this->ls14->Name = L"ls14";
			this->ls14->Visible = false;
			this->ls14->X1 = 244;
			this->ls14->X2 = 517;
			this->ls14->Y1 = 273;
			this->ls14->Y2 = 56;
			// 
			// ls18
			// 
			this->ls18->BorderWidth = 3;
			this->ls18->Name = L"ls18";
			this->ls18->Visible = false;
			this->ls18->X1 = 259;
			this->ls18->X2 = 524;
			this->ls18->Y1 = 78;
			this->ls18->Y2 = 44;
			// 
			// ls16
			// 
			this->ls16->BorderWidth = 3;
			this->ls16->Name = L"ls16";
			this->ls16->Visible = false;
			this->ls16->X1 = 489;
			this->ls16->X2 = 535;
			this->ls16->Y1 = 309;
			this->ls16->Y2 = 65;
			// 
			// ls15
			// 
			this->ls15->BorderWidth = 3;
			this->ls15->Name = L"ls15";
			this->ls15->Visible = false;
			this->ls15->X1 = 748;
			this->ls15->X2 = 558;
			this->ls15->Y1 = 277;
			this->ls15->Y2 = 57;
			// 
			// ls17
			// 
			this->ls17->BorderWidth = 3;
			this->ls17->Name = L"ls17";
			this->ls17->Visible = false;
			this->ls17->X1 = 841;
			this->ls17->X2 = 559;
			this->ls17->Y1 = 153;
			this->ls17->Y2 = 49;
			// 
			// ls13
			// 
			this->ls13->BorderWidth = 3;
			this->ls13->Name = L"ls13";
			this->ls13->Visible = false;
			this->ls13->X1 = 433;
			this->ls13->X2 = 525;
			this->ls13->Y1 = 190;
			this->ls13->Y2 = 65;
			// 
			// ls12
			// 
			this->ls12->BorderWidth = 3;
			this->ls12->Name = L"ls12";
			this->ls12->Visible = false;
			this->ls12->X1 = 603;
			this->ls12->X2 = 552;
			this->ls12->Y1 = 163;
			this->ls12->Y2 = 65;
			// 
			// ls26
			// 
			this->ls26->BorderWidth = 3;
			this->ls26->Name = L"ls26";
			this->ls26->Visible = false;
			this->ls26->X1 = 504;
			this->ls26->X2 = 602;
			this->ls26->Y1 = 310;
			this->ls26->Y2 = 194;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkKhaki;
			this->button1->Location = System::Drawing::Point(552, 601);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 50);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GraphBFS::button1_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(84, 703);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(924, 81);
			this->label4->TabIndex = 38;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::PeachPuff;
			this->richTextBox1->Location = System::Drawing::Point(88, 774);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(920, 1400);
			this->richTextBox1->TabIndex = 39;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// GraphBFS
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->l8);
			this->Controls->Add(this->l7);
			this->Controls->Add(this->l6);
			this->Controls->Add(this->l5);
			this->Controls->Add(this->l4);
			this->Controls->Add(this->l3);
			this->Controls->Add(this->l2);
			this->Controls->Add(this->l1);
			this->Controls->Add(this->btnIncrease);
			this->Controls->Add(this->btnDecrease);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBFS);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtTo);
			this->Controls->Add(this->txtFrom);
			this->Controls->Add(this->shapeContainer1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GraphBFS";
			this->Size = System::Drawing::Size(1105, 2000);
			this->Load += gcnew System::EventHandler(this, &GraphBFS::GraphBFS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//assign a colour to a label
		//0->white,1->red,2->yellow,3->skyblue
		void colour(int l,int c){
			switch(l){
			case 1:
				if(c==0)l1->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l1->BackColor=System::Drawing::Color::Pink;
				if(c==2)l1->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l1->BackColor=System::Drawing::Color::White;
				break;
			case 2:
				if(c==0)l2->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l2->BackColor=System::Drawing::Color::Pink;
				if(c==2)l2->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l2->BackColor=System::Drawing::Color::White;
				break;
			case 3:
				if(c==0)l3->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l3->BackColor=System::Drawing::Color::Pink;
				if(c==2)l3->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l3->BackColor=System::Drawing::Color::White;
				break;
			case 4:
				if(c==0)l4->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l4->BackColor=System::Drawing::Color::Pink;
				if(c==2)l4->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l4->BackColor=System::Drawing::Color::White;
				break;
			case 5:
				if(c==0)l5->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l5->BackColor=System::Drawing::Color::Pink;
				if(c==2)l5->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l5->BackColor=System::Drawing::Color::White;
				break;
			case 6:
				if(c==0)l6->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l6->BackColor=System::Drawing::Color::Pink;
				if(c==2)l6->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l6->BackColor=System::Drawing::Color::White;
				break;
			case 7:
				if(c==0)l7->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l7->BackColor=System::Drawing::Color::Pink;
				if(c==2)l7->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l7->BackColor=System::Drawing::Color::White;
				break;
			case 8:
				if(c==0)l8->BackColor=System::Drawing::Color::FromArgb(192,255,192);
				if(c==1)l8->BackColor=System::Drawing::Color::Pink;
				if(c==2)l8->BackColor=System::Drawing::Color::Yellow;
				if(c==3)l8->BackColor=System::Drawing::Color::White;
				break;
			default:
				break;

			}
		}

		//making arrows visible
		void lvisible(int p,int i){
			switch(p){
			case 1:
				if(i==0)l1->Visible=false;
				if(i==1)l1->Visible=true;
				break;
			case 2:
				if(i==0)l2->Visible=false;
				if(i==1)l2->Visible=true;
				break;
			case 3:
				if(i==0)l3->Visible=false;
				if(i==1)l3->Visible=true;
				break;
			case 4:
				if(i==0)l4->Visible=false;
				if(i==1)l4->Visible=true;
				break;
			case 5:
				if(i==0)l5->Visible=false;
				if(i==1)l5->Visible=true;
				break;
			case 6:
				if(i==0)l6->Visible=false;
				if(i==1)l6->Visible=true;
				break;
			case 7:
				if(i==0)l7->Visible=false;
				if(i==1)l7->Visible=true;
				break;
			case 8:
				if(i==0)l8->Visible=false;
				if(i==1)l8->Visible=true;
				break;
			default:
				break;
			}
		}


		//making edges visible
		void edge(int a,int b,int i){
			int x=std::min(a,b);
			int y=std::max(a,b);
			switch(x){
			case 1:
				switch(y){
				case 2:
					if(i==1)ls12->Visible=true;
					if(i==0)ls12->Visible=false;
					break;
				case 3:
					if(i==1)ls13->Visible=true;
					if(i==0)ls13->Visible=false;
					break;
				case 4:
					if(i==1)ls14->Visible=true;
					if(i==0)ls14->Visible=false;
					break;
				case 5:
					if(i==1)ls15->Visible=true;
					if(i==0)ls15->Visible=false;
					break;
				case 6:
					if(i==1)ls16->Visible=true;
					if(i==0)ls16->Visible=false;
					break;
				case 7:
					if(i==1)ls17->Visible=true;
					if(i==0)ls17->Visible=false;
					break;
				case 8:
					if(i==1)ls18->Visible=true;
					if(i==0)ls18->Visible=false;
					break;
				default:
					break;
				}
				break;
			case 2:
				switch(y){
				case 3:
					if(i==1)ls23->Visible=true;
					if(i==0)ls23->Visible=false;
					break;
				case 4:
					if(i==1)ls24->Visible=true;
					if(i==0)ls24->Visible=false;
					break;
				case 5:
					if(i==1)ls25->Visible=true;
					if(i==0)ls25->Visible=false;;
					break;
				case 6:
					if(i==1)ls26->Visible=true;
					if(i==0)ls26->Visible=false;
					break;
				case 7:
					if(i==1)ls27->Visible=true;
					if(i==0)ls27->Visible=false;
					break;
				case 8:
					if(i==1)ls28->Visible=true;
					if(i==0)ls28->Visible=false;
					break;
				default:
					break;
				}
				break;
			case 3:
				switch(y){
				case 4:
					if(i==1)ls34->Visible=true;
					if(i==0)ls34->Visible=false;
					break;
				case 5:
					if(i==1)ls35->Visible=true;
					if(i==0)ls35->Visible=false;
					break;
				case 6:
					if(i==1)ls36->Visible=true;
					if(i==0)ls36->Visible=false;
					break;
				case 7:
					if(i==1)ls37->Visible=true;
					if(i==0)ls37->Visible=false;
					break;
				case 8:
					if(i==1)ls38->Visible=true;
					if(i==0)ls38->Visible=false;
					break;
				default:
					break;
				}
				break;
			case 4:
				switch(y){
				case 5:
					if(i==1)ls45->Visible=true;
					if(i==0)ls45->Visible=false;
					break;
				case 6:
					if(i==1)ls46->Visible=true;
					if(i==0)ls47->Visible=false;
					break;
				case 7:
					if(i==1)ls47->Visible=true;
					if(i==0)ls47->Visible=false;
					break;
				case 8:
					if(i==1)ls48->Visible=true;
					if(i==0)ls48->Visible=false;
					break;
				default:
					break;
				}
				break;
			case 5:
				switch(y){
				case 6:
					if(i==1)ls56->Visible=true;
					if(i==0)ls56->Visible=false;
					break;
				case 7:
					if(i==1)ls57->Visible=true;
					if(i==0)ls57->Visible=false;
					break;
				case 8:
					if(i==1)ls58->Visible=true;
					if(i==0)ls58->Visible=false;
					break;
				default:
					break;
				}
				break;
			case 6:
				switch(y){
				case 7:
					if(i==1)ls67->Visible=true;
					if(i==0)ls67->Visible=false;
					break;
				case 8:
					if(i==1)ls68->Visible=true;
					if(i==0)ls68->Visible=false;
					break;
				default:
					break;
				}
				break;
			case 7:
				switch(y){
				case 8:
					if(i==1)ls78->Visible=true;
					if(i==0)ls78->Visible=false;
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}
		}




		//bfs of the graph
		void bfsUtil(int s){
			std::queue<int> q;
			q.push(s);
			while(q.empty()!=1){
				int p=q.front();
				bvis[p]=1;
				q.pop();
				for(int i=0;i<badj[p].size();i++){
					if(bvis[badj[p][i]]==0){
						q.push(badj[p][i]);
					}
				}
				bstore.push_back(std::make_pair(p,1));

			}
		}

		void bfs(){
			for(int i=1;i<=bn;i++){
				if(bvis[i]==0){
					bfsUtil(i);
				}
			}

		}


		//resetting the graph
		void reset(){
			bn=0;
			bm=0;
			baddcounter=0;
			bcheck=0;
			for(int i=0;i<100;i++){
				bvis[i]=0;	
				badj[i].clear();
			}
			for(int i=1;i<=8;i++){
				for(int j=i+1;j<=8;j++){
					edge(i,j,0);
				}
			}
			for(int i=0;i<=8;i++){
				lvisible(i,0);
			}
			txtTo->Visible=false;
			label1->Text="Enter Number of Nodes";
			label2->Visible=false;
			label3->Visible=false;

		}




	private: System::Void GraphBFS_Load(System::Object^  sender, System::EventArgs^  e) {
				 reset();
			 }
	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 bpause++;
				 if(bpause%2==1){
					 timer1->Enabled=false;
				 }else{
					 timer1->Enabled=true;
				 }
			 }
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 baddcounter++;
				 if(baddcounter==1){
					 try{
						 bn=Convert::ToInt32(txtFrom->Text);
						 if(bn>8){
							 MessageBox::Show("Maximum 8 nodes allowed::Displaying 8 nodes");
							 bn=8;
						 }
						 if (bn <= 0) {
							 MessageBox::Show("Number of Nodes should be positive");
							 baddcounter--;
						 }
						 else {
							 for (int i = 1; i <= bn; i++) {
								 lvisible(i, 1);
							 }
							 label1->Text = "Enter the Number of Edges";
						 }
					 }catch(...){
						 MessageBox::Show("Number of nodes should be Interger Only");
						 baddcounter--;
					 }
				 }
				 else if(baddcounter==2){
					 int check=1;
					 try{
						 bm=Convert::ToInt32(txtFrom->Text);
					 }catch(...){
						 MessageBox::Show("Please Enter the Number of Edges as Integer Only");
						 baddcounter--;
						 check=0;
					 }

					 if(check){
						 if(bm>(bn*(bn-1))/2){
							 MessageBox::Show("Number of Edges can't be more than Complete graph with same number of nodes");
							 baddcounter--;
						 }
						 else if (bm <= 0) {
							 MessageBox::Show("Number of Edges should be positive");
							 baddcounter--;
						 }
						 else{
							 label1->Text="Enter the Edges";
							 txtTo->Visible=true;
							 label1->Visible=true;
							 label2->Visible=true;
							 label3->Visible=true;
						 }
					 }



				 }else if(baddcounter>=3 && baddcounter<=bm+2){
					 int a,b;
					 int p=1;
					 try{
						 a=Convert::ToInt32(txtFrom->Text);
					 }catch(...){
						 MessageBox::Show("Node1::Please enter an Integer only");
						 p=0;
					 }
					 if(p==1){
						 try{
							 b=Convert::ToInt32(txtTo->Text);
						 }catch(...){
							 MessageBox::Show("Node2::Please enter an Integer only");
							 p=0;
						 }
					 }

					 if (p == 1 && (a <= 0 || b <= 0)) {
						 MessageBox::Show("Node Id's should be between 1 to Number of Nodes");
						 baddcounter--;
					 }
					 else if(p==1 && (a>bn || b>bn)){
						 MessageBox::Show("Node Id's should be less than number of Nodes");
						 baddcounter--;
					 }else if(p==1 && a==b){
						 MessageBox::Show("No Self Loop Allowed");
						 baddcounter--;

					 }else if(p==1){
						 badj[a].push_back(b);
						 badj[b].push_back(a);
						 edge(a,b,1);
					 }else{
						 baddcounter--;
					 }

					 if(baddcounter==bm+2){
						 label1->Text="Graph entered Successfully";
						 txtFrom->Visible=false;
						 txtTo->Visible=false;
						 btnAdd->Visible=false;
						 btnBFS->Visible=true;
						 label2->Visible=false;
						 label3->Visible=false;
						 btnDecrease->Visible=true;
						 btnIncrease->Visible=true;
						 btnPause->Visible=true;
						 bcheck=1;
					 }

				 }else{
					 MessageBox::Show("Graph has been already entered Successfully");

				 }

			 }
	private: System::Void btnBFS_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(bcheck==0){
					 MessageBox::Show("Enter the Graph First");
				 }else{
					 for(int i=1;i<=bn;i++){
						 colour(i,0);
						 bvis[i]=0;
					 }
					 bstore.clear();
					 bt1=-1;
					 bfs();
					 timer1->Enabled=true;
				 }
			 }
	private: System::Void btnDecrease_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Interval+=500;
			 }
	private: System::Void btnIncrease_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(timer1->Interval>=500)timer1->Interval-=500;
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 bt1++;
				 if(bt1==bstore.size()){
					 timer1->Enabled=false;
				 }else{
					 int x=bstore[bt1].first;
					 int y=bstore[bt1].second;
					 colour(x,y);
				 }

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 reset();
			 }
};
}
