#pragma once

#include <utility> 
#include <vector>
#include <string>
#include <algorithm>
#include <queue>


namespace{

	//************global variables************//
	int ln,lm,laddcounter=0,lpause;
	int lnodes[100];
	int lvis[1000];
	std::vector<int> ladj[1000];
	std::vector<std::pair<int,int> > lstore;
	int lc1=0,lt1=-1,lcheck=0;
	int xcnt1=0,xcnt2=0,xcnt3=0,xcnt4=0,xcnt5=0,xcnt6=0,xcnt7=0,xcnt8=0;
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
	/// Summary for GraphList
	/// </summary>
	public ref class GraphList : public System::Windows::Forms::UserControl
	{
	public:
		GraphList(void)
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
		~GraphList()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnReset;

	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::TextBox^  txtTo;
	private: System::Windows::Forms::TextBox^  txtFrom;
	private: System::Windows::Forms::Label^  r8;
	private: System::Windows::Forms::Label^  r7;
	private: System::Windows::Forms::Label^  r6;
	private: System::Windows::Forms::Label^  r5;
	private: System::Windows::Forms::Label^  r4;
	private: System::Windows::Forms::Label^  r3;
	private: System::Windows::Forms::Label^  r2;
	private: System::Windows::Forms::Label^  r1;
	private: System::Windows::Forms::Label^  t88;
	private: System::Windows::Forms::Label^  t87;
	private: System::Windows::Forms::Label^  t86;
	private: System::Windows::Forms::Label^  t85;
	private: System::Windows::Forms::Label^  t84;
	private: System::Windows::Forms::Label^  t83;
	private: System::Windows::Forms::Label^  t82;
	private: System::Windows::Forms::Label^  t81;
	private: System::Windows::Forms::Label^  t78;
	private: System::Windows::Forms::Label^  t77;
	private: System::Windows::Forms::Label^  t76;
	private: System::Windows::Forms::Label^  t75;
	private: System::Windows::Forms::Label^  t74;
	private: System::Windows::Forms::Label^  t73;
	private: System::Windows::Forms::Label^  t72;
	private: System::Windows::Forms::Label^  t71;
	private: System::Windows::Forms::Label^  t68;
	private: System::Windows::Forms::Label^  t67;
	private: System::Windows::Forms::Label^  t66;
	private: System::Windows::Forms::Label^  t65;
	private: System::Windows::Forms::Label^  t64;
	private: System::Windows::Forms::Label^  t63;
	private: System::Windows::Forms::Label^  t62;
	private: System::Windows::Forms::Label^  t61;
	private: System::Windows::Forms::Label^  t58;
	private: System::Windows::Forms::Label^  t57;
	private: System::Windows::Forms::Label^  t56;
	private: System::Windows::Forms::Label^  t55;
	private: System::Windows::Forms::Label^  t54;
	private: System::Windows::Forms::Label^  t53;
	private: System::Windows::Forms::Label^  t52;
	private: System::Windows::Forms::Label^  t51;
	private: System::Windows::Forms::Label^  t48;
	private: System::Windows::Forms::Label^  t47;
	private: System::Windows::Forms::Label^  t46;
	private: System::Windows::Forms::Label^  t45;
	private: System::Windows::Forms::Label^  t44;
	private: System::Windows::Forms::Label^  t43;
	private: System::Windows::Forms::Label^  t42;
	private: System::Windows::Forms::Label^  t41;
	private: System::Windows::Forms::Label^  t38;
	private: System::Windows::Forms::Label^  t37;
	private: System::Windows::Forms::Label^  t36;
	private: System::Windows::Forms::Label^  t35;
	private: System::Windows::Forms::Label^  t34;
	private: System::Windows::Forms::Label^  t33;
	private: System::Windows::Forms::Label^  t32;
	private: System::Windows::Forms::Label^  t31;
	private: System::Windows::Forms::Label^  t28;
	private: System::Windows::Forms::Label^  t27;
	private: System::Windows::Forms::Label^  t26;
	private: System::Windows::Forms::Label^  t25;
	private: System::Windows::Forms::Label^  t24;
	private: System::Windows::Forms::Label^  t23;
	private: System::Windows::Forms::Label^  t22;
	private: System::Windows::Forms::Label^  t21;
	private: System::Windows::Forms::Label^  t18;
	private: System::Windows::Forms::Label^  t17;
	private: System::Windows::Forms::Label^  t16;
	private: System::Windows::Forms::Label^  t15;
	private: System::Windows::Forms::Label^  t14;
	private: System::Windows::Forms::Label^  t13;
	private: System::Windows::Forms::Label^  t12;
	private: System::Windows::Forms::Label^  t11;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->r8 = (gcnew System::Windows::Forms::Label());
			this->r7 = (gcnew System::Windows::Forms::Label());
			this->r6 = (gcnew System::Windows::Forms::Label());
			this->r5 = (gcnew System::Windows::Forms::Label());
			this->r4 = (gcnew System::Windows::Forms::Label());
			this->r3 = (gcnew System::Windows::Forms::Label());
			this->r2 = (gcnew System::Windows::Forms::Label());
			this->r1 = (gcnew System::Windows::Forms::Label());
			this->t88 = (gcnew System::Windows::Forms::Label());
			this->t87 = (gcnew System::Windows::Forms::Label());
			this->t86 = (gcnew System::Windows::Forms::Label());
			this->t85 = (gcnew System::Windows::Forms::Label());
			this->t84 = (gcnew System::Windows::Forms::Label());
			this->t83 = (gcnew System::Windows::Forms::Label());
			this->t82 = (gcnew System::Windows::Forms::Label());
			this->t81 = (gcnew System::Windows::Forms::Label());
			this->t78 = (gcnew System::Windows::Forms::Label());
			this->t77 = (gcnew System::Windows::Forms::Label());
			this->t76 = (gcnew System::Windows::Forms::Label());
			this->t75 = (gcnew System::Windows::Forms::Label());
			this->t74 = (gcnew System::Windows::Forms::Label());
			this->t73 = (gcnew System::Windows::Forms::Label());
			this->t72 = (gcnew System::Windows::Forms::Label());
			this->t71 = (gcnew System::Windows::Forms::Label());
			this->t68 = (gcnew System::Windows::Forms::Label());
			this->t67 = (gcnew System::Windows::Forms::Label());
			this->t66 = (gcnew System::Windows::Forms::Label());
			this->t65 = (gcnew System::Windows::Forms::Label());
			this->t64 = (gcnew System::Windows::Forms::Label());
			this->t63 = (gcnew System::Windows::Forms::Label());
			this->t62 = (gcnew System::Windows::Forms::Label());
			this->t61 = (gcnew System::Windows::Forms::Label());
			this->t58 = (gcnew System::Windows::Forms::Label());
			this->t57 = (gcnew System::Windows::Forms::Label());
			this->t56 = (gcnew System::Windows::Forms::Label());
			this->t55 = (gcnew System::Windows::Forms::Label());
			this->t54 = (gcnew System::Windows::Forms::Label());
			this->t53 = (gcnew System::Windows::Forms::Label());
			this->t52 = (gcnew System::Windows::Forms::Label());
			this->t51 = (gcnew System::Windows::Forms::Label());
			this->t48 = (gcnew System::Windows::Forms::Label());
			this->t47 = (gcnew System::Windows::Forms::Label());
			this->t46 = (gcnew System::Windows::Forms::Label());
			this->t45 = (gcnew System::Windows::Forms::Label());
			this->t44 = (gcnew System::Windows::Forms::Label());
			this->t43 = (gcnew System::Windows::Forms::Label());
			this->t42 = (gcnew System::Windows::Forms::Label());
			this->t41 = (gcnew System::Windows::Forms::Label());
			this->t38 = (gcnew System::Windows::Forms::Label());
			this->t37 = (gcnew System::Windows::Forms::Label());
			this->t36 = (gcnew System::Windows::Forms::Label());
			this->t35 = (gcnew System::Windows::Forms::Label());
			this->t34 = (gcnew System::Windows::Forms::Label());
			this->t33 = (gcnew System::Windows::Forms::Label());
			this->t32 = (gcnew System::Windows::Forms::Label());
			this->t31 = (gcnew System::Windows::Forms::Label());
			this->t28 = (gcnew System::Windows::Forms::Label());
			this->t27 = (gcnew System::Windows::Forms::Label());
			this->t26 = (gcnew System::Windows::Forms::Label());
			this->t25 = (gcnew System::Windows::Forms::Label());
			this->t24 = (gcnew System::Windows::Forms::Label());
			this->t23 = (gcnew System::Windows::Forms::Label());
			this->t22 = (gcnew System::Windows::Forms::Label());
			this->t21 = (gcnew System::Windows::Forms::Label());
			this->t18 = (gcnew System::Windows::Forms::Label());
			this->t17 = (gcnew System::Windows::Forms::Label());
			this->t16 = (gcnew System::Windows::Forms::Label());
			this->t15 = (gcnew System::Windows::Forms::Label());
			this->t14 = (gcnew System::Windows::Forms::Label());
			this->t13 = (gcnew System::Windows::Forms::Label());
			this->t12 = (gcnew System::Windows::Forms::Label());
			this->t11 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(564, 619);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 25);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Edge Node 2";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(336, 619);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 25);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Edge Node 1";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 565);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 25);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Enter number of Nodes";
			// 
			// btnReset
			// 
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(920, 565);
			this->btnReset->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 50);
			this->btnReset->TabIndex = 31;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &GraphList::btnReset_Click_1);
			// 
			// btnAdd
			// 
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(775, 565);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 50);
			this->btnAdd->TabIndex = 30;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &GraphList::btnAdd_Click);
			// 
			// txtTo
			// 
			this->txtTo->Location = System::Drawing::Point(569, 565);
			this->txtTo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(132, 22);
			this->txtTo->TabIndex = 29;
			this->txtTo->Visible = false;
			// 
			// txtFrom
			// 
			this->txtFrom->Location = System::Drawing::Point(341, 565);
			this->txtFrom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(132, 22);
			this->txtFrom->TabIndex = 28;
			// 
			// r8
			// 
			this->r8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r8->Location = System::Drawing::Point(356, 449);
			this->r8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r8->Name = L"r8";
			this->r8->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r8->Size = System::Drawing::Size(53, 49);
			this->r8->TabIndex = 197;
			this->r8->Text = L"8";
			this->r8->Visible = false;
			// 
			// r7
			// 
			this->r7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r7->Location = System::Drawing::Point(356, 400);
			this->r7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r7->Name = L"r7";
			this->r7->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r7->Size = System::Drawing::Size(53, 49);
			this->r7->TabIndex = 196;
			this->r7->Text = L"7";
			this->r7->Visible = false;
			// 
			// r6
			// 
			this->r6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r6->Location = System::Drawing::Point(356, 351);
			this->r6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r6->Name = L"r6";
			this->r6->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r6->Size = System::Drawing::Size(53, 49);
			this->r6->TabIndex = 195;
			this->r6->Text = L"6";
			this->r6->Visible = false;
			// 
			// r5
			// 
			this->r5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r5->Location = System::Drawing::Point(356, 302);
			this->r5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r5->Name = L"r5";
			this->r5->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r5->Size = System::Drawing::Size(53, 49);
			this->r5->TabIndex = 194;
			this->r5->Text = L"5";
			this->r5->Visible = false;
			// 
			// r4
			// 
			this->r4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r4->Location = System::Drawing::Point(356, 253);
			this->r4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r4->Name = L"r4";
			this->r4->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r4->Size = System::Drawing::Size(53, 49);
			this->r4->TabIndex = 193;
			this->r4->Text = L"4";
			this->r4->Visible = false;
			// 
			// r3
			// 
			this->r3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r3->Location = System::Drawing::Point(356, 204);
			this->r3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r3->Name = L"r3";
			this->r3->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r3->Size = System::Drawing::Size(53, 49);
			this->r3->TabIndex = 192;
			this->r3->Text = L"3";
			this->r3->Visible = false;
			// 
			// r2
			// 
			this->r2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r2->Location = System::Drawing::Point(356, 155);
			this->r2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r2->Name = L"r2";
			this->r2->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r2->Size = System::Drawing::Size(53, 49);
			this->r2->TabIndex = 191;
			this->r2->Text = L"2";
			this->r2->Visible = false;
			// 
			// r1
			// 
			this->r1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->r1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r1->Location = System::Drawing::Point(356, 106);
			this->r1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->r1->Name = L"r1";
			this->r1->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->r1->Size = System::Drawing::Size(53, 49);
			this->r1->TabIndex = 190;
			this->r1->Text = L"1";
			this->r1->Visible = false;
			// 
			// t88
			// 
			this->t88->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t88->Location = System::Drawing::Point(792, 449);
			this->t88->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t88->Name = L"t88";
			this->t88->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t88->Size = System::Drawing::Size(53, 49);
			this->t88->TabIndex = 181;
			this->t88->Text = L"0";
			this->t88->Visible = false;
			// 
			// t87
			// 
			this->t87->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t87->Location = System::Drawing::Point(740, 449);
			this->t87->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t87->Name = L"t87";
			this->t87->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t87->Size = System::Drawing::Size(53, 49);
			this->t87->TabIndex = 180;
			this->t87->Text = L"0";
			this->t87->Visible = false;
			// 
			// t86
			// 
			this->t86->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t86->Location = System::Drawing::Point(688, 449);
			this->t86->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t86->Name = L"t86";
			this->t86->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t86->Size = System::Drawing::Size(53, 49);
			this->t86->TabIndex = 179;
			this->t86->Text = L"0";
			this->t86->Visible = false;
			// 
			// t85
			// 
			this->t85->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t85->Location = System::Drawing::Point(635, 449);
			this->t85->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t85->Name = L"t85";
			this->t85->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t85->Size = System::Drawing::Size(53, 49);
			this->t85->TabIndex = 178;
			this->t85->Text = L"0";
			this->t85->Visible = false;
			// 
			// t84
			// 
			this->t84->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t84->Location = System::Drawing::Point(582, 449);
			this->t84->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t84->Name = L"t84";
			this->t84->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t84->Size = System::Drawing::Size(53, 49);
			this->t84->TabIndex = 177;
			this->t84->Text = L"0";
			this->t84->Visible = false;
			// 
			// t83
			// 
			this->t83->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t83->Location = System::Drawing::Point(529, 449);
			this->t83->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t83->Name = L"t83";
			this->t83->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t83->Size = System::Drawing::Size(53, 49);
			this->t83->TabIndex = 176;
			this->t83->Text = L"0";
			this->t83->Visible = false;
			// 
			// t82
			// 
			this->t82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t82->Location = System::Drawing::Point(476, 449);
			this->t82->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t82->Name = L"t82";
			this->t82->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t82->Size = System::Drawing::Size(53, 49);
			this->t82->TabIndex = 175;
			this->t82->Text = L"0";
			this->t82->Visible = false;
			// 
			// t81
			// 
			this->t81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t81->Location = System::Drawing::Point(423, 449);
			this->t81->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t81->Name = L"t81";
			this->t81->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t81->Size = System::Drawing::Size(53, 49);
			this->t81->TabIndex = 174;
			this->t81->Text = L"0";
			this->t81->Visible = false;
			// 
			// t78
			// 
			this->t78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t78->Location = System::Drawing::Point(792, 400);
			this->t78->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t78->Name = L"t78";
			this->t78->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t78->Size = System::Drawing::Size(53, 49);
			this->t78->TabIndex = 173;
			this->t78->Text = L"0";
			this->t78->Visible = false;
			// 
			// t77
			// 
			this->t77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t77->Location = System::Drawing::Point(740, 400);
			this->t77->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t77->Name = L"t77";
			this->t77->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t77->Size = System::Drawing::Size(53, 49);
			this->t77->TabIndex = 172;
			this->t77->Text = L"0";
			this->t77->Visible = false;
			// 
			// t76
			// 
			this->t76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t76->Location = System::Drawing::Point(688, 400);
			this->t76->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t76->Name = L"t76";
			this->t76->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t76->Size = System::Drawing::Size(53, 49);
			this->t76->TabIndex = 171;
			this->t76->Text = L"0";
			this->t76->Visible = false;
			// 
			// t75
			// 
			this->t75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t75->Location = System::Drawing::Point(635, 400);
			this->t75->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t75->Name = L"t75";
			this->t75->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t75->Size = System::Drawing::Size(53, 49);
			this->t75->TabIndex = 170;
			this->t75->Text = L"0";
			this->t75->Visible = false;
			// 
			// t74
			// 
			this->t74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t74->Location = System::Drawing::Point(582, 400);
			this->t74->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t74->Name = L"t74";
			this->t74->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t74->Size = System::Drawing::Size(53, 49);
			this->t74->TabIndex = 169;
			this->t74->Text = L"0";
			this->t74->Visible = false;
			// 
			// t73
			// 
			this->t73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t73->Location = System::Drawing::Point(529, 400);
			this->t73->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t73->Name = L"t73";
			this->t73->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t73->Size = System::Drawing::Size(53, 49);
			this->t73->TabIndex = 168;
			this->t73->Text = L"0";
			this->t73->Visible = false;
			// 
			// t72
			// 
			this->t72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t72->Location = System::Drawing::Point(476, 400);
			this->t72->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t72->Name = L"t72";
			this->t72->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t72->Size = System::Drawing::Size(53, 49);
			this->t72->TabIndex = 167;
			this->t72->Text = L"0";
			this->t72->Visible = false;
			// 
			// t71
			// 
			this->t71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t71->Location = System::Drawing::Point(423, 400);
			this->t71->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t71->Name = L"t71";
			this->t71->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t71->Size = System::Drawing::Size(53, 49);
			this->t71->TabIndex = 166;
			this->t71->Text = L"0";
			this->t71->Visible = false;
			// 
			// t68
			// 
			this->t68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t68->Location = System::Drawing::Point(792, 351);
			this->t68->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t68->Name = L"t68";
			this->t68->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t68->Size = System::Drawing::Size(53, 49);
			this->t68->TabIndex = 165;
			this->t68->Text = L"0";
			this->t68->Visible = false;
			// 
			// t67
			// 
			this->t67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t67->Location = System::Drawing::Point(740, 351);
			this->t67->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t67->Name = L"t67";
			this->t67->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t67->Size = System::Drawing::Size(53, 49);
			this->t67->TabIndex = 164;
			this->t67->Text = L"0";
			this->t67->Visible = false;
			// 
			// t66
			// 
			this->t66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t66->Location = System::Drawing::Point(688, 351);
			this->t66->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t66->Name = L"t66";
			this->t66->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t66->Size = System::Drawing::Size(53, 49);
			this->t66->TabIndex = 163;
			this->t66->Text = L"0";
			this->t66->Visible = false;
			// 
			// t65
			// 
			this->t65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t65->Location = System::Drawing::Point(635, 351);
			this->t65->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t65->Name = L"t65";
			this->t65->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t65->Size = System::Drawing::Size(53, 49);
			this->t65->TabIndex = 162;
			this->t65->Text = L"0";
			this->t65->Visible = false;
			// 
			// t64
			// 
			this->t64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t64->Location = System::Drawing::Point(582, 351);
			this->t64->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t64->Name = L"t64";
			this->t64->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t64->Size = System::Drawing::Size(53, 49);
			this->t64->TabIndex = 161;
			this->t64->Text = L"0";
			this->t64->Visible = false;
			// 
			// t63
			// 
			this->t63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t63->Location = System::Drawing::Point(529, 351);
			this->t63->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t63->Name = L"t63";
			this->t63->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t63->Size = System::Drawing::Size(53, 49);
			this->t63->TabIndex = 160;
			this->t63->Text = L"0";
			this->t63->Visible = false;
			// 
			// t62
			// 
			this->t62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t62->Location = System::Drawing::Point(476, 351);
			this->t62->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t62->Name = L"t62";
			this->t62->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t62->Size = System::Drawing::Size(53, 49);
			this->t62->TabIndex = 159;
			this->t62->Text = L"0";
			this->t62->Visible = false;
			// 
			// t61
			// 
			this->t61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t61->Location = System::Drawing::Point(423, 351);
			this->t61->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t61->Name = L"t61";
			this->t61->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t61->Size = System::Drawing::Size(53, 49);
			this->t61->TabIndex = 158;
			this->t61->Text = L"0";
			this->t61->Visible = false;
			// 
			// t58
			// 
			this->t58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t58->Location = System::Drawing::Point(792, 302);
			this->t58->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t58->Name = L"t58";
			this->t58->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t58->Size = System::Drawing::Size(53, 49);
			this->t58->TabIndex = 157;
			this->t58->Text = L"0";
			this->t58->Visible = false;
			// 
			// t57
			// 
			this->t57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t57->Location = System::Drawing::Point(740, 302);
			this->t57->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t57->Name = L"t57";
			this->t57->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t57->Size = System::Drawing::Size(53, 49);
			this->t57->TabIndex = 156;
			this->t57->Text = L"0";
			this->t57->Visible = false;
			// 
			// t56
			// 
			this->t56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t56->Location = System::Drawing::Point(688, 302);
			this->t56->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t56->Name = L"t56";
			this->t56->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t56->Size = System::Drawing::Size(53, 49);
			this->t56->TabIndex = 155;
			this->t56->Text = L"0";
			this->t56->Visible = false;
			// 
			// t55
			// 
			this->t55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t55->Location = System::Drawing::Point(635, 302);
			this->t55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t55->Name = L"t55";
			this->t55->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t55->Size = System::Drawing::Size(53, 49);
			this->t55->TabIndex = 154;
			this->t55->Text = L"0";
			this->t55->Visible = false;
			// 
			// t54
			// 
			this->t54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t54->Location = System::Drawing::Point(582, 302);
			this->t54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t54->Name = L"t54";
			this->t54->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t54->Size = System::Drawing::Size(53, 49);
			this->t54->TabIndex = 153;
			this->t54->Text = L"0";
			this->t54->Visible = false;
			// 
			// t53
			// 
			this->t53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t53->Location = System::Drawing::Point(529, 302);
			this->t53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t53->Name = L"t53";
			this->t53->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t53->Size = System::Drawing::Size(53, 49);
			this->t53->TabIndex = 152;
			this->t53->Text = L"0";
			this->t53->Visible = false;
			// 
			// t52
			// 
			this->t52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t52->Location = System::Drawing::Point(476, 302);
			this->t52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t52->Name = L"t52";
			this->t52->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t52->Size = System::Drawing::Size(53, 49);
			this->t52->TabIndex = 151;
			this->t52->Text = L"0";
			this->t52->Visible = false;
			// 
			// t51
			// 
			this->t51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t51->Location = System::Drawing::Point(423, 302);
			this->t51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t51->Name = L"t51";
			this->t51->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t51->Size = System::Drawing::Size(53, 49);
			this->t51->TabIndex = 150;
			this->t51->Text = L"0";
			this->t51->Visible = false;
			// 
			// t48
			// 
			this->t48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t48->Location = System::Drawing::Point(791, 253);
			this->t48->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t48->Name = L"t48";
			this->t48->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t48->Size = System::Drawing::Size(53, 49);
			this->t48->TabIndex = 149;
			this->t48->Text = L"0";
			this->t48->Visible = false;
			// 
			// t47
			// 
			this->t47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t47->Location = System::Drawing::Point(739, 253);
			this->t47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t47->Name = L"t47";
			this->t47->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t47->Size = System::Drawing::Size(53, 49);
			this->t47->TabIndex = 148;
			this->t47->Text = L"0";
			this->t47->Visible = false;
			// 
			// t46
			// 
			this->t46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t46->Location = System::Drawing::Point(687, 253);
			this->t46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t46->Name = L"t46";
			this->t46->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t46->Size = System::Drawing::Size(53, 49);
			this->t46->TabIndex = 147;
			this->t46->Text = L"0";
			this->t46->Visible = false;
			// 
			// t45
			// 
			this->t45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t45->Location = System::Drawing::Point(634, 253);
			this->t45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t45->Name = L"t45";
			this->t45->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t45->Size = System::Drawing::Size(53, 49);
			this->t45->TabIndex = 146;
			this->t45->Text = L"0";
			this->t45->Visible = false;
			// 
			// t44
			// 
			this->t44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t44->Location = System::Drawing::Point(581, 253);
			this->t44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t44->Name = L"t44";
			this->t44->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t44->Size = System::Drawing::Size(53, 49);
			this->t44->TabIndex = 145;
			this->t44->Text = L"0";
			this->t44->Visible = false;
			// 
			// t43
			// 
			this->t43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t43->Location = System::Drawing::Point(528, 253);
			this->t43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t43->Name = L"t43";
			this->t43->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t43->Size = System::Drawing::Size(53, 49);
			this->t43->TabIndex = 144;
			this->t43->Text = L"0";
			this->t43->Visible = false;
			// 
			// t42
			// 
			this->t42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t42->Location = System::Drawing::Point(475, 253);
			this->t42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t42->Name = L"t42";
			this->t42->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t42->Size = System::Drawing::Size(53, 49);
			this->t42->TabIndex = 143;
			this->t42->Text = L"0";
			this->t42->Visible = false;
			// 
			// t41
			// 
			this->t41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t41->Location = System::Drawing::Point(423, 253);
			this->t41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t41->Name = L"t41";
			this->t41->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t41->Size = System::Drawing::Size(53, 49);
			this->t41->TabIndex = 142;
			this->t41->Text = L"0";
			this->t41->Visible = false;
			// 
			// t38
			// 
			this->t38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t38->Location = System::Drawing::Point(791, 204);
			this->t38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t38->Name = L"t38";
			this->t38->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t38->Size = System::Drawing::Size(53, 49);
			this->t38->TabIndex = 141;
			this->t38->Text = L"0";
			this->t38->Visible = false;
			// 
			// t37
			// 
			this->t37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t37->Location = System::Drawing::Point(739, 204);
			this->t37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t37->Name = L"t37";
			this->t37->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t37->Size = System::Drawing::Size(53, 49);
			this->t37->TabIndex = 140;
			this->t37->Text = L"0";
			this->t37->Visible = false;
			// 
			// t36
			// 
			this->t36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t36->Location = System::Drawing::Point(687, 204);
			this->t36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t36->Name = L"t36";
			this->t36->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t36->Size = System::Drawing::Size(53, 49);
			this->t36->TabIndex = 139;
			this->t36->Text = L"0";
			this->t36->Visible = false;
			// 
			// t35
			// 
			this->t35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t35->Location = System::Drawing::Point(634, 204);
			this->t35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t35->Name = L"t35";
			this->t35->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t35->Size = System::Drawing::Size(53, 49);
			this->t35->TabIndex = 138;
			this->t35->Text = L"0";
			this->t35->Visible = false;
			// 
			// t34
			// 
			this->t34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t34->Location = System::Drawing::Point(581, 204);
			this->t34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t34->Name = L"t34";
			this->t34->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t34->Size = System::Drawing::Size(53, 49);
			this->t34->TabIndex = 137;
			this->t34->Text = L"0";
			this->t34->Visible = false;
			// 
			// t33
			// 
			this->t33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t33->Location = System::Drawing::Point(528, 204);
			this->t33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t33->Name = L"t33";
			this->t33->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t33->Size = System::Drawing::Size(53, 49);
			this->t33->TabIndex = 136;
			this->t33->Text = L"0";
			this->t33->Visible = false;
			// 
			// t32
			// 
			this->t32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t32->Location = System::Drawing::Point(475, 204);
			this->t32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t32->Name = L"t32";
			this->t32->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t32->Size = System::Drawing::Size(53, 49);
			this->t32->TabIndex = 135;
			this->t32->Text = L"0";
			this->t32->Visible = false;
			// 
			// t31
			// 
			this->t31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t31->Location = System::Drawing::Point(424, 204);
			this->t31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t31->Name = L"t31";
			this->t31->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t31->Size = System::Drawing::Size(53, 49);
			this->t31->TabIndex = 134;
			this->t31->Text = L"0";
			this->t31->Visible = false;
			// 
			// t28
			// 
			this->t28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t28->Location = System::Drawing::Point(791, 155);
			this->t28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t28->Name = L"t28";
			this->t28->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t28->Size = System::Drawing::Size(53, 49);
			this->t28->TabIndex = 133;
			this->t28->Text = L"0";
			this->t28->Visible = false;
			// 
			// t27
			// 
			this->t27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t27->Location = System::Drawing::Point(739, 155);
			this->t27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t27->Name = L"t27";
			this->t27->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t27->Size = System::Drawing::Size(53, 49);
			this->t27->TabIndex = 132;
			this->t27->Text = L"0";
			this->t27->Visible = false;
			// 
			// t26
			// 
			this->t26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t26->Location = System::Drawing::Point(687, 155);
			this->t26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t26->Name = L"t26";
			this->t26->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t26->Size = System::Drawing::Size(53, 49);
			this->t26->TabIndex = 131;
			this->t26->Text = L"0";
			this->t26->Visible = false;
			// 
			// t25
			// 
			this->t25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t25->Location = System::Drawing::Point(634, 155);
			this->t25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t25->Name = L"t25";
			this->t25->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t25->Size = System::Drawing::Size(53, 49);
			this->t25->TabIndex = 130;
			this->t25->Text = L"0";
			this->t25->Visible = false;
			// 
			// t24
			// 
			this->t24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t24->Location = System::Drawing::Point(581, 155);
			this->t24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t24->Name = L"t24";
			this->t24->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t24->Size = System::Drawing::Size(53, 49);
			this->t24->TabIndex = 129;
			this->t24->Text = L"0";
			this->t24->Visible = false;
			// 
			// t23
			// 
			this->t23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t23->Location = System::Drawing::Point(528, 155);
			this->t23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t23->Name = L"t23";
			this->t23->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t23->Size = System::Drawing::Size(53, 49);
			this->t23->TabIndex = 128;
			this->t23->Text = L"0";
			this->t23->Visible = false;
			// 
			// t22
			// 
			this->t22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t22->Location = System::Drawing::Point(475, 155);
			this->t22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t22->Name = L"t22";
			this->t22->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t22->Size = System::Drawing::Size(53, 49);
			this->t22->TabIndex = 127;
			this->t22->Text = L"0";
			this->t22->Visible = false;
			// 
			// t21
			// 
			this->t21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t21->Location = System::Drawing::Point(424, 155);
			this->t21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t21->Name = L"t21";
			this->t21->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t21->Size = System::Drawing::Size(53, 49);
			this->t21->TabIndex = 126;
			this->t21->Text = L"0";
			this->t21->Visible = false;
			// 
			// t18
			// 
			this->t18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t18->Location = System::Drawing::Point(792, 106);
			this->t18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t18->Name = L"t18";
			this->t18->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t18->Size = System::Drawing::Size(53, 49);
			this->t18->TabIndex = 125;
			this->t18->Text = L"0";
			this->t18->Visible = false;
			// 
			// t17
			// 
			this->t17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t17->Location = System::Drawing::Point(740, 106);
			this->t17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t17->Name = L"t17";
			this->t17->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t17->Size = System::Drawing::Size(53, 49);
			this->t17->TabIndex = 124;
			this->t17->Text = L"0";
			this->t17->Visible = false;
			// 
			// t16
			// 
			this->t16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t16->Location = System::Drawing::Point(688, 106);
			this->t16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t16->Name = L"t16";
			this->t16->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t16->Size = System::Drawing::Size(53, 49);
			this->t16->TabIndex = 123;
			this->t16->Text = L"0";
			this->t16->Visible = false;
			// 
			// t15
			// 
			this->t15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t15->Location = System::Drawing::Point(635, 106);
			this->t15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t15->Name = L"t15";
			this->t15->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t15->Size = System::Drawing::Size(53, 49);
			this->t15->TabIndex = 122;
			this->t15->Text = L"0";
			this->t15->Visible = false;
			// 
			// t14
			// 
			this->t14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t14->Location = System::Drawing::Point(582, 106);
			this->t14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t14->Name = L"t14";
			this->t14->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t14->Size = System::Drawing::Size(53, 49);
			this->t14->TabIndex = 121;
			this->t14->Text = L"0";
			this->t14->Visible = false;
			// 
			// t13
			// 
			this->t13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t13->Location = System::Drawing::Point(529, 106);
			this->t13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t13->Name = L"t13";
			this->t13->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t13->Size = System::Drawing::Size(53, 49);
			this->t13->TabIndex = 120;
			this->t13->Text = L"0";
			this->t13->Visible = false;
			// 
			// t12
			// 
			this->t12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t12->Location = System::Drawing::Point(476, 106);
			this->t12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t12->Name = L"t12";
			this->t12->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t12->Size = System::Drawing::Size(53, 49);
			this->t12->TabIndex = 119;
			this->t12->Text = L"0";
			this->t12->Visible = false;
			// 
			// t11
			// 
			this->t11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t11->Location = System::Drawing::Point(424, 106);
			this->t11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->t11->Name = L"t11";
			this->t11->Padding = System::Windows::Forms::Padding(7, 7, 7, 6);
			this->t11->Size = System::Drawing::Size(53, 49);
			this->t11->TabIndex = 118;
			this->t11->Text = L"0";
			this->t11->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(350, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 25);
			this->label4->TabIndex = 198;
			this->label4->Text = L"Nodes";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(566, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 24);
			this->label5->TabIndex = 199;
			this->label5->Text = L"Adjacency List";
			this->label5->Click += gcnew System::EventHandler(this, &GraphList::label5_Click);
			// 
			// GraphList
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->r8);
			this->Controls->Add(this->r7);
			this->Controls->Add(this->r6);
			this->Controls->Add(this->r5);
			this->Controls->Add(this->r4);
			this->Controls->Add(this->r3);
			this->Controls->Add(this->r2);
			this->Controls->Add(this->r1);
			this->Controls->Add(this->t88);
			this->Controls->Add(this->t87);
			this->Controls->Add(this->t86);
			this->Controls->Add(this->t85);
			this->Controls->Add(this->t84);
			this->Controls->Add(this->t83);
			this->Controls->Add(this->t82);
			this->Controls->Add(this->t81);
			this->Controls->Add(this->t78);
			this->Controls->Add(this->t77);
			this->Controls->Add(this->t76);
			this->Controls->Add(this->t75);
			this->Controls->Add(this->t74);
			this->Controls->Add(this->t73);
			this->Controls->Add(this->t72);
			this->Controls->Add(this->t71);
			this->Controls->Add(this->t68);
			this->Controls->Add(this->t67);
			this->Controls->Add(this->t66);
			this->Controls->Add(this->t65);
			this->Controls->Add(this->t64);
			this->Controls->Add(this->t63);
			this->Controls->Add(this->t62);
			this->Controls->Add(this->t61);
			this->Controls->Add(this->t58);
			this->Controls->Add(this->t57);
			this->Controls->Add(this->t56);
			this->Controls->Add(this->t55);
			this->Controls->Add(this->t54);
			this->Controls->Add(this->t53);
			this->Controls->Add(this->t52);
			this->Controls->Add(this->t51);
			this->Controls->Add(this->t48);
			this->Controls->Add(this->t47);
			this->Controls->Add(this->t46);
			this->Controls->Add(this->t45);
			this->Controls->Add(this->t44);
			this->Controls->Add(this->t43);
			this->Controls->Add(this->t42);
			this->Controls->Add(this->t41);
			this->Controls->Add(this->t38);
			this->Controls->Add(this->t37);
			this->Controls->Add(this->t36);
			this->Controls->Add(this->t35);
			this->Controls->Add(this->t34);
			this->Controls->Add(this->t33);
			this->Controls->Add(this->t32);
			this->Controls->Add(this->t31);
			this->Controls->Add(this->t28);
			this->Controls->Add(this->t27);
			this->Controls->Add(this->t26);
			this->Controls->Add(this->t25);
			this->Controls->Add(this->t24);
			this->Controls->Add(this->t23);
			this->Controls->Add(this->t22);
			this->Controls->Add(this->t21);
			this->Controls->Add(this->t18);
			this->Controls->Add(this->t17);
			this->Controls->Add(this->t16);
			this->Controls->Add(this->t15);
			this->Controls->Add(this->t14);
			this->Controls->Add(this->t13);
			this->Controls->Add(this->t12);
			this->Controls->Add(this->t11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtTo);
			this->Controls->Add(this->txtFrom);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"GraphList";
			this->Size = System::Drawing::Size(1105, 670);
			this->Load += gcnew System::EventHandler(this, &GraphList::GraphList_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//making arrows visible
		void lvisible(int p,int i){
			switch(p){
			case 11:
				if(i==0)t11->Visible=false;
				if(i==1)t11->Visible=true;
				break;
			case 12:
				if(i==0)t12->Visible=false;
				if(i==1)t12->Visible=true;
				break;
			case 13:
				if(i==0)t13->Visible=false;
				if(i==1)t13->Visible=true;
				break;
			case 14:
				if(i==0)t14->Visible=false;
				if(i==1)t14->Visible=true;
				break;
			case 15:
				if(i==0)t15->Visible=false;
				if(i==1)t15->Visible=true;
				break;
			case 16:
				if(i==0)t16->Visible=false;
				if(i==1)t16->Visible=true;
				break;
			case 17:
				if(i==0)t17->Visible=false;
				if(i==1)t17->Visible=true;
				break;
			case 18:
				if(i==0)t18->Visible=false;
				if(i==1)t18->Visible=true;
				break;
			case 21:
				if(i==0)t21->Visible=false;
				if(i==1)t21->Visible=true;
				break;
			case 22:
				if(i==0)t22->Visible=false;
				if(i==1)t22->Visible=true;
				break;
			case 23:
				if(i==0)t23->Visible=false;
				if(i==1)t23->Visible=true;
				break;
			case 24:
				if(i==0)t24->Visible=false;
				if(i==1)t24->Visible=true;
				break;
			case 25:
				if(i==0)t25->Visible=false;
				if(i==1)t25->Visible=true;
				break;
			case 26:
				if(i==0)t26->Visible=false;
				if(i==1)t26->Visible=true;
				break;
			case 27:
				if(i==0)t27->Visible=false;
				if(i==1)t27->Visible=true;
				break;
			case 28:
				if(i==0)t28->Visible=false;
				if(i==1)t28->Visible=true;
				break;
			case 31:
				if(i==0)t31->Visible=false;
				if(i==1)t31->Visible=true;
				break;
			case 32:
				if(i==0)t32->Visible=false;
				if(i==1)t32->Visible=true;
				break;
			case 33:
				if(i==0)t33->Visible=false;
				if(i==1)t33->Visible=true;
				break;
			case 34:
				if(i==0)t34->Visible=false;
				if(i==1)t34->Visible=true;
				break;
			case 35:
				if(i==0)t35->Visible=false;
				if(i==1)t35->Visible=true;
				break;
			case 36:
				if(i==0)t36->Visible=false;
				if(i==1)t36->Visible=true;
				break;
			case 37:
				if(i==0)t37->Visible=false;
				if(i==1)t37->Visible=true;
				break;
			case 38:
				if(i==0)t38->Visible=false;
				if(i==1)t38->Visible=true;
				break;
			case 41:
				if(i==0)t41->Visible=false;
				if(i==1)t41->Visible=true;
				break;
			case 42:
				if(i==0)t42->Visible=false;
				if(i==1)t42->Visible=true;
				break;
			case 43:
				if(i==0)t43->Visible=false;
				if(i==1)t43->Visible=true;
				break;
			case 44:
				if(i==0)t44->Visible=false;
				if(i==1)t44->Visible=true;
				break;
			case 45:
				if(i==0)t45->Visible=false;
				if(i==1)t45->Visible=true;
				break;
			case 46:
				if(i==0)t46->Visible=false;
				if(i==1)t46->Visible=true;
				break;
			case 47:
				if(i==0)t47->Visible=false;
				if(i==1)t47->Visible=true;
				break;
			case 48:
				if(i==0)t48->Visible=false;
				if(i==1)t48->Visible=true;
				break;
			case 51:
				if(i==0)t51->Visible=false;
				if(i==1)t51->Visible=true;
				break;
			case 52:
				if(i==0)t52->Visible=false;
				if(i==1)t52->Visible=true;
				break;
			case 53:
				if(i==0)t53->Visible=false;
				if(i==1)t53->Visible=true;
				break;
			case 54:
				if(i==0)t54->Visible=false;
				if(i==1)t54->Visible=true;
				break;
			case 55:
				if(i==0)t55->Visible=false;
				if(i==1)t55->Visible=true;
				break;
			case 56:
				if(i==0)t56->Visible=false;
				if(i==1)t56->Visible=true;
				break;
			case 57:
				if(i==0)t57->Visible=false;
				if(i==1)t57->Visible=true;
				break;
			case 58:
				if(i==0)t58->Visible=false;
				if(i==1)t58->Visible=true;
				break;
			case 61:
				if(i==0)t61->Visible=false;
				if(i==1)t61->Visible=true;
				break;
			case 62:
				if(i==0)t62->Visible=false;
				if(i==1)t62->Visible=true;
				break;
			case 63:
				if(i==0)t63->Visible=false;
				if(i==1)t63->Visible=true;
				break;
			case 64:
				if(i==0)t64->Visible=false;
				if(i==1)t64->Visible=true;
				break;
			case 65:
				if(i==0)t65->Visible=false;
				if(i==1)t65->Visible=true;
				break;
			case 66:
				if(i==0)t66->Visible=false;
				if(i==1)t66->Visible=true;
				break;
			case 67:
				if(i==0)t67->Visible=false;
				if(i==1)t67->Visible=true;
				break;
			case 68:
				if(i==0)t68->Visible=false;
				if(i==1)t68->Visible=true;
				break;
			case 71:
				if(i==0)t71->Visible=false;
				if(i==1)t71->Visible=true;
				break;
			case 72:
				if(i==0)t72->Visible=false;
				if(i==1)t72->Visible=true;
				break;
			case 73:
				if(i==0)t73->Visible=false;
				if(i==1)t73->Visible=true;
				break;
			case 74:
				if(i==0)t74->Visible=false;
				if(i==1)t74->Visible=true;
				break;
			case 75:
				if(i==0)t75->Visible=false;
				if(i==1)t75->Visible=true;
				break;
			case 76:
				if(i==0)t76->Visible=false;
				if(i==1)t76->Visible=true;
				break;
			case 77:
				if(i==0)t77->Visible=false;
				if(i==1)t77->Visible=true;
				break;
			case 78:
				if(i==0)t78->Visible=false;
				if(i==1)t78->Visible=true;
				break;
			case 81:
				if(i==0)t81->Visible=false;
				if(i==1)t81->Visible=true;
				break;
			case 82:
				if(i==0)t82->Visible=false;
				if(i==1)t82->Visible=true;
				break;
			case 83:
				if(i==0)t83->Visible=false;
				if(i==1)t83->Visible=true;
				break;
			case 84:
				if(i==0)t84->Visible=false;
				if(i==1)t84->Visible=true;
				break;
			case 85:
				if(i==0)t85->Visible=false;
				if(i==1)t85->Visible=true;
				break;
			case 86:
				if(i==0)t86->Visible=false;
				if(i==1)t86->Visible=true;
				break;
			case 87:
				if(i==0)t87->Visible=false;
				if(i==1)t87->Visible=true;
				break;
			case 88:
				if(i==0)t88->Visible=false;
				if(i==1)t88->Visible=true;
				break;
			default:
				break;
			}
		}

		//changing text of labels
		void lText(int p,int i){
			switch(p){
			case 11:
				if(i==0)t11->Text=Convert::ToString(i);
				;t11->Text=Convert::ToString(i);
				break;
			case 12:
				if(i==0)t12->Text=Convert::ToString(i);
				;t12->Text=Convert::ToString(i);
				break;
			case 13:
				if(i==0)t13->Text=Convert::ToString(i);
				;t13->Text=Convert::ToString(i);
				break;
			case 14:
				if(i==0)t14->Text=Convert::ToString(i);
				;t14->Text=Convert::ToString(i);
				break;
			case 15:
				if(i==0)t15->Text=Convert::ToString(i);
				;t15->Text=Convert::ToString(i);
				break;
			case 16:
				if(i==0)t16->Text=Convert::ToString(i);
				;t16->Text=Convert::ToString(i);
				break;
			case 17:
				if(i==0)t17->Text=Convert::ToString(i);
				;t17->Text=Convert::ToString(i);
				break;
			case 18:
				if(i==0)t18->Text=Convert::ToString(i);
				;t18->Text=Convert::ToString(i);
				break;
			case 21:
				if(i==0)t21->Text=Convert::ToString(i);
				;t21->Text=Convert::ToString(i);
				break;
			case 22:
				if(i==0)t22->Text=Convert::ToString(i);
				;t22->Text=Convert::ToString(i);
				break;
			case 23:
				if(i==0)t23->Text=Convert::ToString(i);
				;t23->Text=Convert::ToString(i);
				break;
			case 24:
				if(i==0)t24->Text=Convert::ToString(i);
				;t24->Text=Convert::ToString(i);
				break;
			case 25:
				if(i==0)t25->Text=Convert::ToString(i);
				;t25->Text=Convert::ToString(i);
				break;
			case 26:
				if(i==0)t26->Text=Convert::ToString(i);
				;t26->Text=Convert::ToString(i);
				break;
			case 27:
				if(i==0)t27->Text=Convert::ToString(i);
				;t27->Text=Convert::ToString(i);
				break;
			case 28:
				if(i==0)t28->Text=Convert::ToString(i);
				;t28->Text=Convert::ToString(i);
				break;
			case 31:
				if(i==0)t31->Text=Convert::ToString(i);
				;t31->Text=Convert::ToString(i);
				break;
			case 32:
				if(i==0)t32->Text=Convert::ToString(i);
				;t32->Text=Convert::ToString(i);
				break;
			case 33:
				if(i==0)t33->Text=Convert::ToString(i);
				;t33->Text=Convert::ToString(i);
				break;
			case 34:
				if(i==0)t34->Text=Convert::ToString(i);
				;t34->Text=Convert::ToString(i);
				break;
			case 35:
				if(i==0)t35->Text=Convert::ToString(i);
				;t35->Text=Convert::ToString(i);
				break;
			case 36:
				if(i==0)t36->Text=Convert::ToString(i);
				;t36->Text=Convert::ToString(i);
				break;
			case 37:
				if(i==0)t37->Text=Convert::ToString(i);
				;t37->Text=Convert::ToString(i);
				break;
			case 38:
				if(i==0)t38->Text=Convert::ToString(i);
				;t38->Text=Convert::ToString(i);
				break;
			case 41:
				if(i==0)t41->Text=Convert::ToString(i);
				;t41->Text=Convert::ToString(i);
				break;
			case 42:
				if(i==0)t42->Text=Convert::ToString(i);
				;t42->Text=Convert::ToString(i);
				break;
			case 43:
				if(i==0)t43->Text=Convert::ToString(i);
				;t43->Text=Convert::ToString(i);
				break;
			case 44:
				if(i==0)t44->Text=Convert::ToString(i);
				;t44->Text=Convert::ToString(i);
				break;
			case 45:
				if(i==0)t45->Text=Convert::ToString(i);
				;t45->Text=Convert::ToString(i);
				break;
			case 46:
				if(i==0)t46->Text=Convert::ToString(i);
				;t46->Text=Convert::ToString(i);
				break;
			case 47:
				if(i==0)t47->Text=Convert::ToString(i);
				;t47->Text=Convert::ToString(i);
				break;
			case 48:
				if(i==0)t48->Text=Convert::ToString(i);
				;t48->Text=Convert::ToString(i);
				break;
			case 51:
				if(i==0)t51->Text=Convert::ToString(i);
				;t51->Text=Convert::ToString(i);
				break;
			case 52:
				if(i==0)t52->Text=Convert::ToString(i);
				;t52->Text=Convert::ToString(i);
				break;
			case 53:
				if(i==0)t53->Text=Convert::ToString(i);
				;t53->Text=Convert::ToString(i);
				break;
			case 54:
				if(i==0)t54->Text=Convert::ToString(i);
				;t54->Text=Convert::ToString(i);
				break;
			case 55:
				if(i==0)t55->Text=Convert::ToString(i);
				;t55->Text=Convert::ToString(i);
				break;
			case 56:
				if(i==0)t56->Text=Convert::ToString(i);
				;t56->Text=Convert::ToString(i);
				break;
			case 57:
				if(i==0)t57->Text=Convert::ToString(i);
				;t57->Text=Convert::ToString(i);
				break;
			case 58:
				if(i==0)t58->Text=Convert::ToString(i);
				;t58->Text=Convert::ToString(i);
				break;
			case 61:
				if(i==0)t61->Text=Convert::ToString(i);
				;t61->Text=Convert::ToString(i);
				break;
			case 62:
				if(i==0)t62->Text=Convert::ToString(i);
				;t62->Text=Convert::ToString(i);
				break;
			case 63:
				if(i==0)t63->Text=Convert::ToString(i);
				;t63->Text=Convert::ToString(i);
				break;
			case 64:
				if(i==0)t64->Text=Convert::ToString(i);
				;t64->Text=Convert::ToString(i);
				break;
			case 65:
				if(i==0)t65->Text=Convert::ToString(i);
				;t65->Text=Convert::ToString(i);
				break;
			case 66:
				if(i==0)t66->Text=Convert::ToString(i);
				;t66->Text=Convert::ToString(i);
				break;
			case 67:
				if(i==0)t67->Text=Convert::ToString(i);
				;t67->Text=Convert::ToString(i);
				break;
			case 68:
				if(i==0)t68->Text=Convert::ToString(i);
				;t68->Text=Convert::ToString(i);
				break;
			case 71:
				if(i==0)t71->Text=Convert::ToString(i);
				;t71->Text=Convert::ToString(i);
				break;
			case 72:
				if(i==0)t72->Text=Convert::ToString(i);
				;t72->Text=Convert::ToString(i);
				break;
			case 73:
				if(i==0)t73->Text=Convert::ToString(i);
				;t73->Text=Convert::ToString(i);
				break;
			case 74:
				if(i==0)t74->Text=Convert::ToString(i);
				;t74->Text=Convert::ToString(i);
				break;
			case 75:
				if(i==0)t75->Text=Convert::ToString(i);
				;t75->Text=Convert::ToString(i);
				break;
			case 76:
				if(i==0)t76->Text=Convert::ToString(i);
				;t76->Text=Convert::ToString(i);
				break;
			case 77:
				if(i==0)t77->Text=Convert::ToString(i);
				;t77->Text=Convert::ToString(i);
				break;
			case 78:
				if(i==0)t78->Text=Convert::ToString(i);
				;t78->Text=Convert::ToString(i);
				break;
			case 81:
				if(i==0)t81->Text=Convert::ToString(i);
				;t81->Text=Convert::ToString(i);
				break;
			case 82:
				if(i==0)t82->Text=Convert::ToString(i);
				;t82->Text=Convert::ToString(i);
				break;
			case 83:
				if(i==0)t83->Text=Convert::ToString(i);
				;t83->Text=Convert::ToString(i);
				break;
			case 84:
				if(i==0)t84->Text=Convert::ToString(i);
				;t84->Text=Convert::ToString(i);
				break;
			case 85:
				if(i==0)t85->Text=Convert::ToString(i);
				;t85->Text=Convert::ToString(i);
				break;
			case 86:
				if(i==0)t86->Text=Convert::ToString(i);
				;t86->Text=Convert::ToString(i);
				break;
			case 87:
				if(i==0)t87->Text=Convert::ToString(i);
				;t87->Text=Convert::ToString(i);
				break;
			case 88:
				if(i==0)t88->Text=Convert::ToString(i);
				;t88->Text=Convert::ToString(i);
				break;
			default:
				break;
			}
		}
		void labels(int p,int i){
			switch(p){
			case 1:
				if(i==1){
					r1->Visible=true;					
				}
				if(i==0){
					r1->Visible=false;					
				}
				break;
			case 2:
				if(i==1){
					r2->Visible=true;					
				}
				if(i==0){
					r2->Visible=false;					
				}
				break;
			case 3:
				if(i==1){
					r3->Visible=true;					
				}
				if(i==0){
					r3->Visible=false;					
				}
				break;
			case 4:
				if(i==1){
					r4->Visible=true;					
				}
				if(i==0){
					r4->Visible=false;
				}
				break;
			case 5:
				if(i==1){
					r5->Visible=true;
				}
				if(i==0){
					r5->Visible=false;
				}
				break;
			case 6:
				if(i==1){
					r6->Visible=true;
				}
				if(i==0){
					r6->Visible=false;
				}
				break;
			case 7:
				if(i==1){
					r7->Visible=true;
				}
				if(i==0){
					r7->Visible=false;
				}
				break;
			case 8:
				if(i==1){
					r8->Visible=true;
				}
				if(i==0){
					r8->Visible=false;
				}
				break;
			default:
				break;

			}
		}

		//resetting the graph
		void reset(){
			ln=0;
			lm=0;
			laddcounter=0;
			lcheck=0;
			xcnt1=0;
			xcnt2=0;
			xcnt3=0;
			xcnt4=0;
			xcnt5=0;
			xcnt6=0;
			xcnt7=0;
			xcnt8=0;
			for(int i=0;i<100;i++){
				lvis[i]=0;	
				ladj[i].clear();
			}
			for(int i=1;i<=8;i++){
				for(int j=1;j<=8;j++){
					lvisible(10*i+j,0);
				}
			}
			for(int i=1;i<=8;i++){
				labels(i,0);
			}
			label1->Text="Enter Number of Nodes";
			label2->Visible=false;
			label3->Visible=false;
			txtTo->Visible=false;
			label5->Visible=false;
			label4->Visible=false;

		}

	private: System::Void GraphList_Load(System::Object^  sender, System::EventArgs^  e) {
				 reset();
			 }


			 //adding the labels to adjacency matrix
			 void textVisible(int a,int b){
				 int x=std::min(a,b);
				 int y=std::max(a,b);
				 switch(x){
				 case 1:
					 switch(y){
					 case 2:
						 xcnt1++;
						 xcnt2++;
						 lText(1*10+xcnt1,y);
						 lText(2*10+xcnt2,x);
						 lvisible(1*10+xcnt1,1);
						 lvisible(2*10+xcnt2,1);
						 break;
					 case 3:
						 xcnt1++;
						 xcnt3++;
						 lText(1*10+xcnt1,y);
						 lText(3*10+xcnt3,x);
						 lvisible(1*10+xcnt1,1);
						 lvisible(3*10+xcnt3,1);
						 break;
					 case 4:
						 xcnt1++;
						 xcnt4++;
						 lText(1*10+xcnt1,y);
						 lText(4*10+xcnt4,x);
						 lvisible(1*10+xcnt1,1);
						 lvisible(4*10+xcnt4,1);
						 break;
					 case 5:
						 xcnt1++;
						 xcnt5++;
						 lText(1*10+xcnt1,y);
						 lText(5*10+xcnt5,x);
						 lvisible(1*10+xcnt1,1);
						 lvisible(5*10+xcnt5,1);
						 break;
					 case 6:
						 xcnt1++;
						 xcnt6++;
						 lText(1*10+xcnt1,y);
						 lText(6*10+xcnt6,x);
						 lvisible(1*10+xcnt1,1);
						 lvisible(6*10+xcnt6,1);
						 break;
					 case 7:
						 xcnt1++;
						 xcnt7++;
						 lText(1*10+xcnt1,y);
						 lText(7*10+xcnt7,x);
						 lvisible(1*10+xcnt1,1);
						 lvisible(7*10+xcnt7,1);
						 break;
					 case 8:
						 xcnt1++;
						 xcnt8++;
						 lText(1*10+xcnt1,y);
						 lText(8*10+xcnt8,x);
						 lvisible(1*10+xcnt1,1);
						 lvisible(8*10+xcnt8,1);
						 break;
					 default:
						 break;
					 }
					 break;
				 case 2:
					 switch(y){
					 case 3:
						 xcnt2++;
						 xcnt3++;
						 lText(2*10+xcnt2,y);
						 lText(3*10+xcnt3,x);
						 lvisible(2*10+xcnt2,1);
						 lvisible(3*10+xcnt3,1);
						 break;
					 case 4:
						 xcnt2++;
						 xcnt4++;
						 lText(2*10+xcnt2,y);
						 lText(4*10+xcnt4,x);
						 lvisible(2*10+xcnt2,1);
						 lvisible(4*10+xcnt4,1);
						 break;
					 case 5:
						 xcnt2++;
						 xcnt5++;
						 lText(2*10+xcnt2,y);
						 lText(5*10+xcnt5,x);
						 lvisible(2*10+xcnt2,1);
						 lvisible(5*10+xcnt5,1);
						 break;
					 case 6:
						 xcnt2++;
						 xcnt6++;
						 lText(2*10+xcnt2,y);
						 lText(6*10+xcnt6,x);
						 lvisible(2*10+xcnt2,1);
						 lvisible(6*10+xcnt6,1);
						 break;
					 case 7:
						 xcnt2++;
						 xcnt7++;
						 lText(2*10+xcnt2,y);
						 lText(7*10+xcnt7,x);
						 lvisible(2*10+xcnt2,1);
						 lvisible(7*10+xcnt7,1);
						 break;
					 case 8:
						 xcnt2++;
						 xcnt8++;
						 lText(2*10+xcnt2,y);
						 lText(8*10+xcnt8,x);
						 lvisible(2*10+xcnt2,1);
						 lvisible(8*10+xcnt8,1);
						 break;
					 default:
						 break;
					 }
					 break;
				 case 3:
					 switch(y){
					 case 4:
						 xcnt3++;
						 xcnt4++;
						 lText(3*10+xcnt3,y);
						 lText(4*10+xcnt4,x);
						 lvisible(3*10+xcnt3,1);
						 lvisible(4*10+xcnt4,1);
						 break;
					 case 5:
						 xcnt3++;
						 xcnt5++;
						 lText(3*10+xcnt3,y);
						 lText(5*10+xcnt5,x);
						 lvisible(3*10+xcnt3,1);
						 lvisible(5*10+xcnt5,1);
						 break;
					 case 6:
						 xcnt3++;
						 xcnt6++;
						 lText(3*10+xcnt3,y);
						 lText(6*10+xcnt6,x);
						 lvisible(3*10+xcnt3,1);
						 lvisible(6*10+xcnt6,1);
						 break;
					 case 7:
						 xcnt3++;
						 xcnt7++;
						 lText(3*10+xcnt3,y);
						 lText(7*10+xcnt7,x);
						 lvisible(3*10+xcnt3,1);
						 lvisible(7*10+xcnt7,1);
						 break;
					 case 8:
						 xcnt3++;
						 xcnt8++;
						 lText(3*10+xcnt3,y);
						 lText(8*10+xcnt8,x);
						 lvisible(3*10+xcnt3,1);
						 lvisible(8*10+xcnt8,1);
						 break;
					 default:
						 break;
					 }
					 break;
				 case 4:
					 switch(y){
					 case 5:
						 xcnt4++;
						 xcnt5++;
						 lText(4*10+xcnt4,y);
						 lText(5*10+xcnt5,x);
						 lvisible(4*10+xcnt4,1);
						 lvisible(5*10+xcnt5,1);
						 break;
					 case 6:
						 xcnt4++;
						 xcnt6++;
						 lText(4*10+xcnt4,y);
						 lText(6*10+xcnt6,x);
						 lvisible(4*10+xcnt4,1);
						 lvisible(6*10+xcnt6,1);
						 break;
					 case 7:
						 xcnt4++;
						 xcnt7++;
						 lText(4*10+xcnt4,y);
						 lText(7*10+xcnt7,x);
						 lvisible(4*10+xcnt4,1);
						 lvisible(7*10+xcnt7,1);
						 break;
					 case 8:
						 xcnt4++;
						 xcnt8++;
						 lText(4*10+xcnt4,y);
						 lText(8*10+xcnt8,x);
						 lvisible(4*10+xcnt4,1);
						 lvisible(8*10+xcnt8,1);
						 break;
					 default:
						 break;
					 }
					 break;
				 case 5:
					 switch(y){                             
					 case 6:
						 xcnt5++;
						 xcnt6++;
						 lText(5*10+xcnt5,y);
						 lText(6*10+xcnt6,x);
						 lvisible(5*10+xcnt5,1);
						 lvisible(6*10+xcnt6,1);
						 break;
					 case 7:
						 xcnt5++;
						 xcnt7++;
						 lText(5*10+xcnt5,y);
						 lText(7*10+xcnt7,x);
						 lvisible(5*10+xcnt5,1);
						 lvisible(7*10+xcnt7,1);
						 break;
					 case 8:
						 xcnt5++;
						 xcnt8++;
						 lText(5*10+xcnt5,y);
						 lText(8*10+xcnt8,x);
						 lvisible(5*10+xcnt5,1);
						 lvisible(8*10+xcnt8,1);
						 break;
					 default:
						 break;
					 }
					 break;
				 case 6:
					 switch(y){                                   
					 case 7:
						 xcnt6++;
						 xcnt7++;
						 lText(6*10+xcnt6,y);
						 lText(7*10+xcnt7,x);
						 lvisible(6*10+xcnt6,1);
						 lvisible(7*10+xcnt7,1);
						 break;
					 case 8:
						 xcnt6++;
						 xcnt8++;
						 lText(6*10+xcnt6,y);
						 lText(8*10+xcnt8,x);
						 lvisible(6*10+xcnt6,1);
						 lvisible(8*10+xcnt8,1);
						 break;
					 default:
						 break;
					 }
					 break;
				 case 7:
					 switch(y){
					 case 8:
						 xcnt7++;
						 xcnt8++;
						 lText(7*10+xcnt7,y);
						 lText(8*10+xcnt8,x);
						 lvisible(7*10+xcnt7,1);
						 lvisible(8*10+xcnt8,1);
						 break;
					 default:
						 break;
					 }
					 break;


				 default:
					 break;
				 }
			 }





	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 laddcounter++;
				 if(laddcounter==1){
					 try{
						 ln=Convert::ToInt32(txtFrom->Text);
						 if(ln>8){
							 MessageBox::Show("Maximum 8 nodes allowed::Displaying 8 nodes");
							 ln=8;
						 }
						 if (ln <= 0) {
							 MessageBox::Show("Number of Nodes should be positive");
							 laddcounter--;
						 }
						 else {
							 for (int i = 1; i <= ln; i++) {
								 labels(i, 1);                 //labels of matrix 
							 }

							 label1->Text = "Enter the Number of Edges";
						 }						 
					 }catch(...){
						 MessageBox::Show("Number of nodes should be Interger Only");
						 laddcounter--;
					 }
				 }
				 else if(laddcounter==2){
					 int check=1;
					 try{
						 lm=Convert::ToInt32(txtFrom->Text);
					 }catch(...){
						 MessageBox::Show("Please Enter the Number of Edges as Integer Only");
						 laddcounter--;
						 check=0;
					 }

					 if(check){
						 if(lm>(ln*(ln-1))/2){
							 MessageBox::Show("Number of edges can't be more than that of Complete Graph");
							 laddcounter--;
						 }
						 else if (lm<=0) {
							 MessageBox::Show("Number of edges should be positive");
							 laddcounter--;
						 }
						 else{
							 label1->Text="Enter the Edges";
							 txtFrom->Text="";
							 txtTo->Visible=true;
							 label1->Visible=true;
							 label2->Visible=true;
							 label3->Visible=true;
						 }
					 }

				 }else if(laddcounter>=3 && laddcounter<=lm+2){
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
						 laddcounter--;
					 }
					 else if(p==1 && (a>ln || b>ln)){
						 MessageBox::Show("Node Id's should be less than Number of Nodes");
						 laddcounter--;
					 }else if(p==1 && a==b){
						 MessageBox::Show("No Self Loops Allowed");
						 laddcounter--;
					 }else if(p==1){
						 int ch=1;
						 for(int i=0;i<ladj[a].size();i++){
							 if(ladj[a][i]==b){
								 ch=0;
								 break;
							 }
						 }
						 if(ch==1){
							 ladj[a].push_back(b);
							 ladj[b].push_back(a);
							 textVisible(a,b);
						 }else{
							 MessageBox::Show("Edge Already Added");
							 laddcounter--; 
						 }							

					 }else{
						 laddcounter--;
					 }

					 if(laddcounter==lm+2){
						 label1->Text="Graph entered Successfully";
					 }

				 }else{
					 MessageBox::Show("Graph has been already entered Successfully");

				 }


			 }
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
				 reset();
			 }
	private: System::Void btnReset_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 reset();
			 }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
