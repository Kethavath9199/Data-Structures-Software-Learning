#pragma once

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			
		}
	private: System::Windows::Forms::Button^  button1;
	public: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  arrays;

	private: System::Windows::Forms::RichTextBox^  Topic;
	private: System::Windows::Forms::RichTextBox^  Topic_arr;
	private: System::Windows::Forms::Panel^  intro_pan_ar;

	private: System::Windows::Forms::Button^  intro_ar;
	private: System::Windows::Forms::Button^  search_ar;

	private: System::Windows::Forms::Button^  insert_ar;
	private: System::Windows::Forms::Button^  traverse_ar;
	private: System::Windows::Forms::Panel^  insert_pan_ar;

	private: System::Windows::Forms::Panel^  search_pan_ar;

	private: System::Windows::Forms::Label^  insert_lab_ar;
	private: System::Windows::Forms::Label^  intro_lab_ar;


	private: System::Windows::Forms::Label^  search_lab_ar;

	private: System::Windows::Forms::Panel^  insert_animation;
	private: System::Windows::Forms::Button^  insertarray;

	private: System::Windows::Forms::TextBox^  insertindex;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  insertvalue;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l1;




	private: System::Windows::Forms::Label^  l2;

	private: System::Windows::Forms::Label^  l3;

	private: System::Windows::Forms::Label^  l4;

	private: System::Windows::Forms::Label^  l5;

	private: System::Windows::Forms::Label^  l6;

	private: System::Windows::Forms::Label^  l7;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Timer^  insertimer;




	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label_rec_7;
	private: System::Windows::Forms::Label^  label_rec_6;
	private: System::Windows::Forms::Label^  label_rec_5;
	private: System::Windows::Forms::Label^  label_rec_4;
	private: System::Windows::Forms::Label^  label_rec_3;
	private: System::Windows::Forms::Label^  label_rec_2;
	private: System::Windows::Forms::Label^  label_rec_1;
	private: System::Windows::Forms::PictureBox^  arrow;










	private: System::Windows::Forms::Label^  search_q;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  Reset_Button;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  linked_list;
	private: System::Windows::Forms::Button^  intro_ll;
private: System::Windows::Forms::Panel^  intro_pan_ll;



private: System::Windows::Forms::Button^  insert_ll;
private: System::Windows::Forms::Panel^  insert_pan_ll;
private: System::Windows::Forms::Panel^  insert_animation_ll;
private: System::Windows::Forms::Label^  head_ll;


private: System::Windows::Forms::Label^  ll1;
private: System::Windows::Forms::Label^  insert_ll_label;

private: System::Windows::Forms::Label^  ll7;

private: System::Windows::Forms::Label^  ll6;

private: System::Windows::Forms::Label^  ll5;

private: System::Windows::Forms::Label^  ll4;

private: System::Windows::Forms::Label^  ll3;

private: System::Windows::Forms::Label^  ll2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  insert_but_ll;


private: System::Windows::Forms::TextBox^  insert_ll_tf;
private: System::Windows::Forms::Timer^  insertimerll;
private: System::Windows::Forms::Label^  tail_ll;
private: System::Windows::Forms::Timer^  tailtimer;
private: System::Windows::Forms::Button^  delete_ll;
private: System::Windows::Forms::Panel^  delete_pan_ll;





















private: System::Windows::Forms::Timer^  timerTraversal;


private: System::Windows::Forms::Button^  delete_ll_but;

private: System::Windows::Forms::TextBox^  deletevalue;

private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Panel^  panel2;


private: System::Windows::Forms::Label^  f1;
private: System::Windows::Forms::Label^  f7;

private: System::Windows::Forms::Label^  f6;

private: System::Windows::Forms::Label^  f5;

private: System::Windows::Forms::Label^  f4;

private: System::Windows::Forms::Label^  f3;

private: System::Windows::Forms::Label^  f2;

private: System::Windows::Forms::Label^  del_tail;
private: System::Windows::Forms::Label^  del_head;
private: System::Windows::Forms::Label^  del_pointer;
private: System::Windows::Forms::Timer^  deletetimer;
private: System::Windows::Forms::Timer^  deletefixtimer;
private: System::Windows::Forms::Timer^  tailfixtimer;

private: System::Windows::Forms::RichTextBox^  intro_tbox_ar1;
private: System::Windows::Forms::Panel^  traverse_pan_ar;
private: System::Windows::Forms::Label^  trav_lab_ar;
private: System::Windows::Forms::Button^  btnPause;
private: System::Windows::Forms::Button^  btnPlay;
private: System::Windows::Forms::Button^  btnStart;
private: System::Windows::Forms::Panel^  panelForTraversal;
private: System::Windows::Forms::Label^  Llabel;
private: System::Windows::Forms::Label^  lbel7;
private: System::Windows::Forms::Label^  lbel6;
private: System::Windows::Forms::Label^  lbel5;
private: System::Windows::Forms::Label^  lbel4;
private: System::Windows::Forms::Label^  lbel3;
private: System::Windows::Forms::Label^  lbel2;
private: System::Windows::Forms::Label^  lbel1;
private: System::Windows::Forms::Label^  LB5;
private: System::Windows::Forms::Label^  LB3;
private: System::Windows::Forms::Label^  LB7;
private: System::Windows::Forms::Label^  LB6;
private: System::Windows::Forms::Label^  LB4;
private: System::Windows::Forms::Label^  LB2;
private: System::Windows::Forms::Label^  LB1;
private: System::Windows::Forms::TextBox^  input;











			 static int locx = 10;

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->arrays = (gcnew System::Windows::Forms::Panel());
			this->traverse_ar = (gcnew System::Windows::Forms::Button());
			this->search_ar = (gcnew System::Windows::Forms::Button());
			this->insert_ar = (gcnew System::Windows::Forms::Button());
			this->intro_ar = (gcnew System::Windows::Forms::Button());
			this->Topic_arr = (gcnew System::Windows::Forms::RichTextBox());
			this->traverse_pan_ar = (gcnew System::Windows::Forms::Panel());
			this->trav_lab_ar = (gcnew System::Windows::Forms::Label());
			this->panelForTraversal = (gcnew System::Windows::Forms::Panel());
			this->Llabel = (gcnew System::Windows::Forms::Label());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->lbel7 = (gcnew System::Windows::Forms::Label());
			this->lbel6 = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->lbel5 = (gcnew System::Windows::Forms::Label());
			this->lbel4 = (gcnew System::Windows::Forms::Label());
			this->lbel3 = (gcnew System::Windows::Forms::Label());
			this->lbel2 = (gcnew System::Windows::Forms::Label());
			this->lbel1 = (gcnew System::Windows::Forms::Label());
			this->LB5 = (gcnew System::Windows::Forms::Label());
			this->LB3 = (gcnew System::Windows::Forms::Label());
			this->LB7 = (gcnew System::Windows::Forms::Label());
			this->LB6 = (gcnew System::Windows::Forms::Label());
			this->LB4 = (gcnew System::Windows::Forms::Label());
			this->LB2 = (gcnew System::Windows::Forms::Label());
			this->LB1 = (gcnew System::Windows::Forms::Label());
			this->search_pan_ar = (gcnew System::Windows::Forms::Panel());
			this->Reset_Button = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_rec_7 = (gcnew System::Windows::Forms::Label());
			this->label_rec_6 = (gcnew System::Windows::Forms::Label());
			this->label_rec_5 = (gcnew System::Windows::Forms::Label());
			this->label_rec_4 = (gcnew System::Windows::Forms::Label());
			this->label_rec_3 = (gcnew System::Windows::Forms::Label());
			this->label_rec_2 = (gcnew System::Windows::Forms::Label());
			this->label_rec_1 = (gcnew System::Windows::Forms::Label());
			this->arrow = (gcnew System::Windows::Forms::PictureBox());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->search_q = (gcnew System::Windows::Forms::Label());
			this->search_lab_ar = (gcnew System::Windows::Forms::Label());
			this->insert_pan_ar = (gcnew System::Windows::Forms::Panel());
			this->insertarray = (gcnew System::Windows::Forms::Button());
			this->insertindex = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->insertvalue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->insert_animation = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->insert_lab_ar = (gcnew System::Windows::Forms::Label());
			this->intro_pan_ar = (gcnew System::Windows::Forms::Panel());
			this->intro_lab_ar = (gcnew System::Windows::Forms::Label());
			this->intro_tbox_ar1 = (gcnew System::Windows::Forms::RichTextBox());
			this->linked_list = (gcnew System::Windows::Forms::Panel());
			this->delete_ll = (gcnew System::Windows::Forms::Button());
			this->insert_ll = (gcnew System::Windows::Forms::Button());
			this->intro_ll = (gcnew System::Windows::Forms::Button());
			this->insert_pan_ll = (gcnew System::Windows::Forms::Panel());
			this->insert_but_ll = (gcnew System::Windows::Forms::Button());
			this->insert_ll_tf = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->insert_animation_ll = (gcnew System::Windows::Forms::Panel());
			this->tail_ll = (gcnew System::Windows::Forms::Label());
			this->insert_ll_label = (gcnew System::Windows::Forms::Label());
			this->ll7 = (gcnew System::Windows::Forms::Label());
			this->ll6 = (gcnew System::Windows::Forms::Label());
			this->ll5 = (gcnew System::Windows::Forms::Label());
			this->ll4 = (gcnew System::Windows::Forms::Label());
			this->ll3 = (gcnew System::Windows::Forms::Label());
			this->ll2 = (gcnew System::Windows::Forms::Label());
			this->head_ll = (gcnew System::Windows::Forms::Label());
			this->ll1 = (gcnew System::Windows::Forms::Label());
			this->intro_pan_ll = (gcnew System::Windows::Forms::Panel());
			this->delete_pan_ll = (gcnew System::Windows::Forms::Panel());
			this->delete_ll_but = (gcnew System::Windows::Forms::Button());
			this->deletevalue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->del_pointer = (gcnew System::Windows::Forms::Label());
			this->del_tail = (gcnew System::Windows::Forms::Label());
			this->del_head = (gcnew System::Windows::Forms::Label());
			this->f7 = (gcnew System::Windows::Forms::Label());
			this->f6 = (gcnew System::Windows::Forms::Label());
			this->f5 = (gcnew System::Windows::Forms::Label());
			this->f4 = (gcnew System::Windows::Forms::Label());
			this->f3 = (gcnew System::Windows::Forms::Label());
			this->f2 = (gcnew System::Windows::Forms::Label());
			this->f1 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->Topic = (gcnew System::Windows::Forms::RichTextBox());
			this->insertimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->insertimerll = (gcnew System::Windows::Forms::Timer(this->components));
			this->tailtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerTraversal = (gcnew System::Windows::Forms::Timer(this->components));
			this->deletetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->deletefixtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->tailfixtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->arrays->SuspendLayout();
			this->traverse_pan_ar->SuspendLayout();
			this->panelForTraversal->SuspendLayout();
			this->search_pan_ar->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->arrow))->BeginInit();
			this->insert_pan_ar->SuspendLayout();
			this->insert_animation->SuspendLayout();
			this->intro_pan_ar->SuspendLayout();
			this->linked_list->SuspendLayout();
			this->insert_pan_ll->SuspendLayout();
			this->insert_animation_ll->SuspendLayout();
			this->delete_pan_ll->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(188, 171);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ARRAYS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(600, 171);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"LINKED LIST";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// arrays
			// 
			this->arrays->Controls->Add(this->traverse_ar);
			this->arrays->Controls->Add(this->search_ar);
			this->arrays->Controls->Add(this->insert_ar);
			this->arrays->Controls->Add(this->intro_ar);
			this->arrays->Controls->Add(this->Topic_arr);
			this->arrays->Controls->Add(this->traverse_pan_ar);
			this->arrays->Controls->Add(this->search_pan_ar);
			this->arrays->Controls->Add(this->insert_pan_ar);
			this->arrays->Controls->Add(this->intro_pan_ar);
			this->arrays->Location = System::Drawing::Point(0, 0);
			this->arrays->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->arrays->Name = L"arrays";
			this->arrays->Size = System::Drawing::Size(946, 546);
			this->arrays->TabIndex = 2;
			this->arrays->Visible = false;
			// 
			// traverse_ar
			// 
			this->traverse_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->traverse_ar->Location = System::Drawing::Point(3, 171);
			this->traverse_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->traverse_ar->Name = L"traverse_ar";
			this->traverse_ar->Size = System::Drawing::Size(104, 28);
			this->traverse_ar->TabIndex = 7;
			this->traverse_ar->Text = L"Traversal";
			this->traverse_ar->UseVisualStyleBackColor = true;
			this->traverse_ar->Click += gcnew System::EventHandler(this, &Form1::traverse_ar_Click);
			// 
			// search_ar
			// 
			this->search_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search_ar->Location = System::Drawing::Point(2, 140);
			this->search_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->search_ar->Name = L"search_ar";
			this->search_ar->Size = System::Drawing::Size(104, 28);
			this->search_ar->TabIndex = 6;
			this->search_ar->Text = L"Search";
			this->search_ar->UseVisualStyleBackColor = true;
			this->search_ar->Click += gcnew System::EventHandler(this, &Form1::search_ar_Click);
			// 
			// insert_ar
			// 
			this->insert_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_ar->Location = System::Drawing::Point(3, 103);
			this->insert_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_ar->Name = L"insert_ar";
			this->insert_ar->Size = System::Drawing::Size(104, 28);
			this->insert_ar->TabIndex = 4;
			this->insert_ar->Text = L"Insertion";
			this->insert_ar->UseVisualStyleBackColor = true;
			this->insert_ar->Click += gcnew System::EventHandler(this, &Form1::insert_ar_Click);
			// 
			// intro_ar
			// 
			this->intro_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->intro_ar->Location = System::Drawing::Point(2, 71);
			this->intro_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->intro_ar->Name = L"intro_ar";
			this->intro_ar->Size = System::Drawing::Size(105, 28);
			this->intro_ar->TabIndex = 1;
			this->intro_ar->Text = L"Introduction";
			this->intro_ar->UseVisualStyleBackColor = true;
			this->intro_ar->Click += gcnew System::EventHandler(this, &Form1::intro_ar_Click);
			// 
			// Topic_arr
			// 
			this->Topic_arr->BackColor = System::Drawing::SystemColors::Menu;
			this->Topic_arr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Topic_arr->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Topic_arr->Location = System::Drawing::Point(412, 17);
			this->Topic_arr->Margin = System::Windows::Forms::Padding(0);
			this->Topic_arr->Name = L"Topic_arr";
			this->Topic_arr->Size = System::Drawing::Size(178, 39);
			this->Topic_arr->TabIndex = 0;
			this->Topic_arr->Text = L"ARRAYS";
			// 
			// traverse_pan_ar
			// 
			this->traverse_pan_ar->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->traverse_pan_ar->Controls->Add(this->trav_lab_ar);
			this->traverse_pan_ar->Controls->Add(this->panelForTraversal);
			this->traverse_pan_ar->Location = System::Drawing::Point(106, 71);
			this->traverse_pan_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->traverse_pan_ar->Name = L"traverse_pan_ar";
			this->traverse_pan_ar->Size = System::Drawing::Size(838, 473);
			this->traverse_pan_ar->TabIndex = 3;
			this->traverse_pan_ar->Visible = false;
			// 
			// trav_lab_ar
			// 
			this->trav_lab_ar->AutoSize = true;
			this->trav_lab_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->trav_lab_ar->Location = System::Drawing::Point(30, 4);
			this->trav_lab_ar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->trav_lab_ar->Name = L"trav_lab_ar";
			this->trav_lab_ar->Size = System::Drawing::Size(92, 23);
			this->trav_lab_ar->TabIndex = 6;
			this->trav_lab_ar->Text = L"Traversal";
			// 
			// panelForTraversal
			// 
			this->panelForTraversal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panelForTraversal->Controls->Add(this->Llabel);
			this->panelForTraversal->Controls->Add(this->btnPlay);
			this->panelForTraversal->Controls->Add(this->btnPause);
			this->panelForTraversal->Controls->Add(this->lbel7);
			this->panelForTraversal->Controls->Add(this->lbel6);
			this->panelForTraversal->Controls->Add(this->btnStart);
			this->panelForTraversal->Controls->Add(this->lbel5);
			this->panelForTraversal->Controls->Add(this->lbel4);
			this->panelForTraversal->Controls->Add(this->lbel3);
			this->panelForTraversal->Controls->Add(this->lbel2);
			this->panelForTraversal->Controls->Add(this->lbel1);
			this->panelForTraversal->Controls->Add(this->LB5);
			this->panelForTraversal->Controls->Add(this->LB3);
			this->panelForTraversal->Controls->Add(this->LB7);
			this->panelForTraversal->Controls->Add(this->LB6);
			this->panelForTraversal->Controls->Add(this->LB4);
			this->panelForTraversal->Controls->Add(this->LB2);
			this->panelForTraversal->Controls->Add(this->LB1);
			this->panelForTraversal->Location = System::Drawing::Point(49, 217);
			this->panelForTraversal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelForTraversal->Name = L"panelForTraversal";
			this->panelForTraversal->Size = System::Drawing::Size(752, 249);
			this->panelForTraversal->TabIndex = 2;
			// 
			// Llabel
			// 
			this->Llabel->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Llabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Llabel->Location = System::Drawing::Point(8, 43);
			this->Llabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Llabel->Name = L"Llabel";
			this->Llabel->Size = System::Drawing::Size(76, 41);
			this->Llabel->TabIndex = 15;
			this->Llabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnPlay
			// 
			this->btnPlay->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPlay->Location = System::Drawing::Point(658, 9);
			this->btnPlay->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(77, 25);
			this->btnPlay->TabIndex = 4;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &Form1::btnPlay_Click);
			// 
			// btnPause
			// 
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPause->Location = System::Drawing::Point(578, 9);
			this->btnPause->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 25);
			this->btnPause->TabIndex = 5;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &Form1::btnPause_Click);
			// 
			// lbel7
			// 
			this->lbel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel7->Location = System::Drawing::Point(604, 184);
			this->lbel7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbel7->Name = L"lbel7";
			this->lbel7->Size = System::Drawing::Size(75, 41);
			this->lbel7->TabIndex = 14;
			this->lbel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel6
			// 
			this->lbel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel6->Location = System::Drawing::Point(514, 184);
			this->lbel6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbel6->Name = L"lbel6";
			this->lbel6->Size = System::Drawing::Size(75, 41);
			this->lbel6->TabIndex = 13;
			this->lbel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnStart->Location = System::Drawing::Point(499, 9);
			this->btnStart->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 25);
			this->btnStart->TabIndex = 3;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Form1::btnStart_Click);
			// 
			// lbel5
			// 
			this->lbel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel5->Location = System::Drawing::Point(424, 184);
			this->lbel5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbel5->Name = L"lbel5";
			this->lbel5->Size = System::Drawing::Size(75, 41);
			this->lbel5->TabIndex = 12;
			this->lbel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel4
			// 
			this->lbel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel4->Location = System::Drawing::Point(334, 184);
			this->lbel4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbel4->Name = L"lbel4";
			this->lbel4->Size = System::Drawing::Size(75, 41);
			this->lbel4->TabIndex = 11;
			this->lbel4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel3
			// 
			this->lbel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel3->Location = System::Drawing::Point(244, 184);
			this->lbel3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbel3->Name = L"lbel3";
			this->lbel3->Size = System::Drawing::Size(75, 41);
			this->lbel3->TabIndex = 10;
			this->lbel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel2
			// 
			this->lbel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel2->Location = System::Drawing::Point(154, 184);
			this->lbel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbel2->Name = L"lbel2";
			this->lbel2->Size = System::Drawing::Size(75, 41);
			this->lbel2->TabIndex = 9;
			this->lbel2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbel1
			// 
			this->lbel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbel1->Location = System::Drawing::Point(64, 184);
			this->lbel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbel1->Name = L"lbel1";
			this->lbel1->Size = System::Drawing::Size(75, 41);
			this->lbel1->TabIndex = 8;
			this->lbel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB5
			// 
			this->LB5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB5->Location = System::Drawing::Point(424, 92);
			this->LB5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LB5->Name = L"LB5";
			this->LB5->Size = System::Drawing::Size(76, 82);
			this->LB5->TabIndex = 6;
			this->LB5->Text = L"45";
			this->LB5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB3
			// 
			this->LB3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB3->Location = System::Drawing::Point(244, 92);
			this->LB3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LB3->Name = L"LB3";
			this->LB3->Size = System::Drawing::Size(76, 82);
			this->LB3->TabIndex = 5;
			this->LB3->Text = L"897";
			this->LB3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB7
			// 
			this->LB7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB7->Location = System::Drawing::Point(604, 92);
			this->LB7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LB7->Name = L"LB7";
			this->LB7->Size = System::Drawing::Size(76, 82);
			this->LB7->TabIndex = 4;
			this->LB7->Text = L"245";
			this->LB7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB6
			// 
			this->LB6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB6->Location = System::Drawing::Point(514, 92);
			this->LB6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LB6->Name = L"LB6";
			this->LB6->Size = System::Drawing::Size(76, 82);
			this->LB6->TabIndex = 3;
			this->LB6->Text = L"64";
			this->LB6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB4
			// 
			this->LB4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB4->Location = System::Drawing::Point(334, 92);
			this->LB4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LB4->Name = L"LB4";
			this->LB4->Size = System::Drawing::Size(76, 82);
			this->LB4->TabIndex = 2;
			this->LB4->Text = L"23";
			this->LB4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB2
			// 
			this->LB2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB2->Location = System::Drawing::Point(154, 92);
			this->LB2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LB2->Name = L"LB2";
			this->LB2->Size = System::Drawing::Size(76, 82);
			this->LB2->TabIndex = 1;
			this->LB2->Text = L"244";
			this->LB2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB1
			// 
			this->LB1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LB1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LB1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LB1->Location = System::Drawing::Point(64, 92);
			this->LB1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LB1->Name = L"LB1";
			this->LB1->Size = System::Drawing::Size(76, 82);
			this->LB1->TabIndex = 0;
			this->LB1->Text = L"10";
			this->LB1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// search_pan_ar
			// 
			this->search_pan_ar->AutoScroll = true;
			this->search_pan_ar->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->search_pan_ar->Controls->Add(this->Reset_Button);
			this->search_pan_ar->Controls->Add(this->button3);
			this->search_pan_ar->Controls->Add(this->panel1);
			this->search_pan_ar->Controls->Add(this->input);
			this->search_pan_ar->Controls->Add(this->search_q);
			this->search_pan_ar->Controls->Add(this->search_lab_ar);
			this->search_pan_ar->Location = System::Drawing::Point(106, 71);
			this->search_pan_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->search_pan_ar->Name = L"search_pan_ar";
			this->search_pan_ar->Size = System::Drawing::Size(838, 473);
			this->search_pan_ar->TabIndex = 3;
			this->search_pan_ar->Visible = false;
			this->search_pan_ar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::search_pan_ar_Paint);
			// 
			// Reset_Button
			// 
			this->Reset_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Reset_Button->Location = System::Drawing::Point(503, 208);
			this->Reset_Button->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Reset_Button->Name = L"Reset_Button";
			this->Reset_Button->Size = System::Drawing::Size(56, 28);
			this->Reset_Button->TabIndex = 8;
			this->Reset_Button->Text = L"Reset";
			this->Reset_Button->UseVisualStyleBackColor = true;
			this->Reset_Button->Click += gcnew System::EventHandler(this, &Form1::Reset_Button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(427, 208);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 28);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Start";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->label_rec_7);
			this->panel1->Controls->Add(this->label_rec_6);
			this->panel1->Controls->Add(this->label_rec_5);
			this->panel1->Controls->Add(this->label_rec_4);
			this->panel1->Controls->Add(this->label_rec_3);
			this->panel1->Controls->Add(this->label_rec_2);
			this->panel1->Controls->Add(this->label_rec_1);
			this->panel1->Controls->Add(this->arrow);
			this->panel1->Location = System::Drawing::Point(18, 256);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(734, 186);
			this->panel1->TabIndex = 6;
			// 
			// label_rec_7
			// 
			this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_7->Location = System::Drawing::Point(596, 68);
			this->label_rec_7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_7->Name = L"label_rec_7";
			this->label_rec_7->Size = System::Drawing::Size(76, 82);
			this->label_rec_7->TabIndex = 8;
			this->label_rec_7->Text = L"245";
			this->label_rec_7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_6
			// 
			this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_6->Location = System::Drawing::Point(506, 68);
			this->label_rec_6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_6->Name = L"label_rec_6";
			this->label_rec_6->Size = System::Drawing::Size(76, 82);
			this->label_rec_6->TabIndex = 7;
			this->label_rec_6->Text = L"64";
			this->label_rec_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_5
			// 
			this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_5->Location = System::Drawing::Point(416, 68);
			this->label_rec_5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_5->Name = L"label_rec_5";
			this->label_rec_5->Size = System::Drawing::Size(76, 82);
			this->label_rec_5->TabIndex = 6;
			this->label_rec_5->Text = L"45";
			this->label_rec_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_4
			// 
			this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_4->Location = System::Drawing::Point(326, 68);
			this->label_rec_4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_4->Name = L"label_rec_4";
			this->label_rec_4->Size = System::Drawing::Size(76, 82);
			this->label_rec_4->TabIndex = 5;
			this->label_rec_4->Text = L"23";
			this->label_rec_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_3
			// 
			this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_3->Location = System::Drawing::Point(236, 68);
			this->label_rec_3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_3->Name = L"label_rec_3";
			this->label_rec_3->Size = System::Drawing::Size(76, 82);
			this->label_rec_3->TabIndex = 4;
			this->label_rec_3->Text = L"897";
			this->label_rec_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_2
			// 
			this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label_rec_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_2->Location = System::Drawing::Point(146, 68);
			this->label_rec_2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_2->Name = L"label_rec_2";
			this->label_rec_2->Size = System::Drawing::Size(76, 82);
			this->label_rec_2->TabIndex = 3;
			this->label_rec_2->Text = L"244";
			this->label_rec_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_rec_1
			// 
			this->label_rec_1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_rec_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_rec_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_rec_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rec_1->Location = System::Drawing::Point(56, 68);
			this->label_rec_1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_rec_1->Name = L"label_rec_1";
			this->label_rec_1->Size = System::Drawing::Size(76, 82);
			this->label_rec_1->TabIndex = 2;
			this->label_rec_1->Text = L"10";
			this->label_rec_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// arrow
			// 
			this->arrow->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->arrow->Location = System::Drawing::Point(7, 13);
			this->arrow->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->arrow->Name = L"arrow";
			this->arrow->Size = System::Drawing::Size(75, 41);
			this->arrow->TabIndex = 1;
			this->arrow->TabStop = false;
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::Color::Silver;
			this->input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->input->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->input->Location = System::Drawing::Point(284, 217);
			this->input->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(124, 17);
			this->input->TabIndex = 5;
			// 
			// search_q
			// 
			this->search_q->AutoSize = true;
			this->search_q->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search_q->Location = System::Drawing::Point(141, 216);
			this->search_q->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->search_q->Name = L"search_q";
			this->search_q->Size = System::Drawing::Size(127, 20);
			this->search_q->TabIndex = 4;
			this->search_q->Text = L"search element ";
			// 
			// search_lab_ar
			// 
			this->search_lab_ar->AutoSize = true;
			this->search_lab_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search_lab_ar->Location = System::Drawing::Point(46, 6);
			this->search_lab_ar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->search_lab_ar->Name = L"search_lab_ar";
			this->search_lab_ar->Size = System::Drawing::Size(74, 23);
			this->search_lab_ar->TabIndex = 0;
			this->search_lab_ar->Text = L"Search";
			// 
			// insert_pan_ar
			// 
			this->insert_pan_ar->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->insert_pan_ar->Controls->Add(this->insertarray);
			this->insert_pan_ar->Controls->Add(this->insertindex);
			this->insert_pan_ar->Controls->Add(this->label2);
			this->insert_pan_ar->Controls->Add(this->insertvalue);
			this->insert_pan_ar->Controls->Add(this->label1);
			this->insert_pan_ar->Controls->Add(this->insert_animation);
			this->insert_pan_ar->Controls->Add(this->insert_lab_ar);
			this->insert_pan_ar->Location = System::Drawing::Point(106, 71);
			this->insert_pan_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_pan_ar->Name = L"insert_pan_ar";
			this->insert_pan_ar->Size = System::Drawing::Size(838, 473);
			this->insert_pan_ar->TabIndex = 3;
			this->insert_pan_ar->Visible = false;
			// 
			// insertarray
			// 
			this->insertarray->Location = System::Drawing::Point(548, 232);
			this->insertarray->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insertarray->Name = L"insertarray";
			this->insertarray->Size = System::Drawing::Size(71, 19);
			this->insertarray->TabIndex = 6;
			this->insertarray->Text = L"INSERT";
			this->insertarray->UseVisualStyleBackColor = true;
			this->insertarray->Click += gcnew System::EventHandler(this, &Form1::insertarray_Click);
			// 
			// insertindex
			// 
			this->insertindex->Location = System::Drawing::Point(372, 233);
			this->insertindex->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insertindex->Name = L"insertindex";
			this->insertindex->Size = System::Drawing::Size(90, 20);
			this->insertindex->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(281, 237);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Insert At Index";
			// 
			// insertvalue
			// 
			this->insertvalue->Location = System::Drawing::Point(128, 237);
			this->insertvalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insertvalue->Name = L"insertvalue";
			this->insertvalue->Size = System::Drawing::Size(90, 20);
			this->insertvalue->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 237);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Insert Value";
			// 
			// insert_animation
			// 
			this->insert_animation->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->insert_animation->Controls->Add(this->label19);
			this->insert_animation->Controls->Add(this->label18);
			this->insert_animation->Controls->Add(this->label17);
			this->insert_animation->Controls->Add(this->label16);
			this->insert_animation->Controls->Add(this->label15);
			this->insert_animation->Controls->Add(this->label14);
			this->insert_animation->Controls->Add(this->label13);
			this->insert_animation->Controls->Add(this->label12);
			this->insert_animation->Controls->Add(this->label11);
			this->insert_animation->Controls->Add(this->l1);
			this->insert_animation->Controls->Add(this->l2);
			this->insert_animation->Controls->Add(this->l3);
			this->insert_animation->Controls->Add(this->l4);
			this->insert_animation->Controls->Add(this->l5);
			this->insert_animation->Controls->Add(this->l6);
			this->insert_animation->Controls->Add(this->l7);
			this->insert_animation->Controls->Add(this->l8);
			this->insert_animation->Location = System::Drawing::Point(18, 260);
			this->insert_animation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_animation->Name = L"insert_animation";
			this->insert_animation->Size = System::Drawing::Size(814, 206);
			this->insert_animation->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(7, 118);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 82);
			this->label19->TabIndex = 16;
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(714, 6);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 15;
			this->label18->Text = L"8";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(625, 6);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 14;
			this->label17->Text = L"7";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(536, 6);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 13;
			this->label16->Text = L"6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(448, 6);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L"5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(360, 6);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 11;
			this->label14->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(272, 6);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(185, 6);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(94, 6);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"1";
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::SystemColors::Desktop;
			this->l1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l1->Location = System::Drawing::Point(97, 29);
			this->l1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(76, 82);
			this->l1->TabIndex = 7;
			this->l1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::SystemColors::Desktop;
			this->l2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l2->Location = System::Drawing::Point(184, 29);
			this->l2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(76, 82);
			this->l2->TabIndex = 6;
			this->l2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::SystemColors::Desktop;
			this->l3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l3->Location = System::Drawing::Point(274, 29);
			this->l3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(76, 82);
			this->l3->TabIndex = 5;
			this->l3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::SystemColors::Desktop;
			this->l4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l4->Location = System::Drawing::Point(362, 29);
			this->l4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(76, 82);
			this->l4->TabIndex = 4;
			this->l4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::SystemColors::Desktop;
			this->l5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l5->Location = System::Drawing::Point(450, 29);
			this->l5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(76, 82);
			this->l5->TabIndex = 3;
			this->l5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::SystemColors::Desktop;
			this->l6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l6->Location = System::Drawing::Point(538, 29);
			this->l6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(76, 82);
			this->l6->TabIndex = 2;
			this->l6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::SystemColors::Desktop;
			this->l7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l7->Location = System::Drawing::Point(627, 29);
			this->l7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(76, 82);
			this->l7->TabIndex = 1;
			this->l7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l8
			// 
			this->l8->BackColor = System::Drawing::SystemColors::Desktop;
			this->l8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l8->Location = System::Drawing::Point(716, 29);
			this->l8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(76, 82);
			this->l8->TabIndex = 0;
			this->l8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// insert_lab_ar
			// 
			this->insert_lab_ar->AutoSize = true;
			this->insert_lab_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_lab_ar->Location = System::Drawing::Point(32, 6);
			this->insert_lab_ar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->insert_lab_ar->Name = L"insert_lab_ar";
			this->insert_lab_ar->Size = System::Drawing::Size(58, 23);
			this->insert_lab_ar->TabIndex = 0;
			this->insert_lab_ar->Text = L"Insert";
			// 
			// intro_pan_ar
			// 
			this->intro_pan_ar->AutoScroll = true;
			this->intro_pan_ar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->intro_pan_ar->Controls->Add(this->intro_lab_ar);
			this->intro_pan_ar->Controls->Add(this->intro_tbox_ar1);
			this->intro_pan_ar->Location = System::Drawing::Point(106, 71);
			this->intro_pan_ar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->intro_pan_ar->Name = L"intro_pan_ar";
			this->intro_pan_ar->Size = System::Drawing::Size(838, 473);
			this->intro_pan_ar->TabIndex = 2;
			this->intro_pan_ar->Visible = false;
			// 
			// intro_lab_ar
			// 
			this->intro_lab_ar->AutoSize = true;
			this->intro_lab_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->intro_lab_ar->Location = System::Drawing::Point(22, 6);
			this->intro_lab_ar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->intro_lab_ar->Name = L"intro_lab_ar";
			this->intro_lab_ar->Size = System::Drawing::Size(206, 23);
			this->intro_lab_ar->TabIndex = 0;
			this->intro_lab_ar->Text = L"Introduction to Arrays";
			// 
			// intro_tbox_ar1
			// 
			this->intro_tbox_ar1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->intro_tbox_ar1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->intro_tbox_ar1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->intro_tbox_ar1->Location = System::Drawing::Point(8, 32);
			this->intro_tbox_ar1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->intro_tbox_ar1->Name = L"intro_tbox_ar1";
			this->intro_tbox_ar1->ReadOnly = true;
			this->intro_tbox_ar1->Size = System::Drawing::Size(824, 59);
			this->intro_tbox_ar1->TabIndex = 1;
			this->intro_tbox_ar1->Text = L"An array is collection of items stored at contiguous memory locations. The idea i" 
				L"s to store multiple items of same type together.";
			// 
			// linked_list
			// 
			this->linked_list->Controls->Add(this->delete_ll);
			this->linked_list->Controls->Add(this->insert_ll);
			this->linked_list->Controls->Add(this->intro_ll);
			this->linked_list->Controls->Add(this->insert_pan_ll);
			this->linked_list->Controls->Add(this->intro_pan_ll);
			this->linked_list->Controls->Add(this->delete_pan_ll);
			this->linked_list->Location = System::Drawing::Point(0, 0);
			this->linked_list->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->linked_list->Name = L"linked_list";
			this->linked_list->Size = System::Drawing::Size(944, 546);
			this->linked_list->TabIndex = 9;
			this->linked_list->Visible = false;
			// 
			// delete_ll
			// 
			this->delete_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->delete_ll->Location = System::Drawing::Point(0, 127);
			this->delete_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->delete_ll->Name = L"delete_ll";
			this->delete_ll->Size = System::Drawing::Size(114, 28);
			this->delete_ll->TabIndex = 2;
			this->delete_ll->Text = L"Deletion";
			this->delete_ll->UseVisualStyleBackColor = true;
			this->delete_ll->Click += gcnew System::EventHandler(this, &Form1::delete_ll_Click);
			// 
			// insert_ll
			// 
			this->insert_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_ll->Location = System::Drawing::Point(0, 94);
			this->insert_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_ll->Name = L"insert_ll";
			this->insert_ll->Size = System::Drawing::Size(114, 28);
			this->insert_ll->TabIndex = 0;
			this->insert_ll->Text = L"Insertion";
			this->insert_ll->UseVisualStyleBackColor = true;
			this->insert_ll->Click += gcnew System::EventHandler(this, &Form1::insert_ll_Click);
			// 
			// intro_ll
			// 
			this->intro_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->intro_ll->Location = System::Drawing::Point(0, 63);
			this->intro_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->intro_ll->Name = L"intro_ll";
			this->intro_ll->Size = System::Drawing::Size(114, 26);
			this->intro_ll->TabIndex = 0;
			this->intro_ll->Text = L"Introduction";
			this->intro_ll->UseVisualStyleBackColor = true;
			this->intro_ll->Click += gcnew System::EventHandler(this, &Form1::intro_ll_Click);
			// 
			// insert_pan_ll
			// 
			this->insert_pan_ll->Controls->Add(this->insert_but_ll);
			this->insert_pan_ll->Controls->Add(this->insert_ll_tf);
			this->insert_pan_ll->Controls->Add(this->label3);
			this->insert_pan_ll->Controls->Add(this->insert_animation_ll);
			this->insert_pan_ll->Location = System::Drawing::Point(112, 63);
			this->insert_pan_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_pan_ll->Name = L"insert_pan_ll";
			this->insert_pan_ll->Size = System::Drawing::Size(834, 483);
			this->insert_pan_ll->TabIndex = 0;
			this->insert_pan_ll->Visible = false;
			// 
			// insert_but_ll
			// 
			this->insert_but_ll->Location = System::Drawing::Point(385, 215);
			this->insert_but_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_but_ll->Name = L"insert_but_ll";
			this->insert_but_ll->Size = System::Drawing::Size(77, 28);
			this->insert_but_ll->TabIndex = 3;
			this->insert_but_ll->Text = L"Insert";
			this->insert_but_ll->UseVisualStyleBackColor = true;
			this->insert_but_ll->Click += gcnew System::EventHandler(this, &Form1::insert_but_ll_Click);
			// 
			// insert_ll_tf
			// 
			this->insert_ll_tf->Location = System::Drawing::Point(208, 225);
			this->insert_ll_tf->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_ll_tf->Name = L"insert_ll_tf";
			this->insert_ll_tf->Size = System::Drawing::Size(140, 20);
			this->insert_ll_tf->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 229);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Insert In Linked List";
			// 
			// insert_animation_ll
			// 
			this->insert_animation_ll->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->insert_animation_ll->Controls->Add(this->tail_ll);
			this->insert_animation_ll->Controls->Add(this->insert_ll_label);
			this->insert_animation_ll->Controls->Add(this->ll7);
			this->insert_animation_ll->Controls->Add(this->ll6);
			this->insert_animation_ll->Controls->Add(this->ll5);
			this->insert_animation_ll->Controls->Add(this->ll4);
			this->insert_animation_ll->Controls->Add(this->ll3);
			this->insert_animation_ll->Controls->Add(this->ll2);
			this->insert_animation_ll->Controls->Add(this->head_ll);
			this->insert_animation_ll->Controls->Add(this->ll1);
			this->insert_animation_ll->Location = System::Drawing::Point(20, 256);
			this->insert_animation_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insert_animation_ll->Name = L"insert_animation_ll";
			this->insert_animation_ll->Size = System::Drawing::Size(796, 210);
			this->insert_animation_ll->TabIndex = 0;
			// 
			// tail_ll
			// 
			this->tail_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tail_ll->Location = System::Drawing::Point(706, 170);
			this->tail_ll->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->tail_ll->Name = L"tail_ll";
			this->tail_ll->Size = System::Drawing::Size(75, 24);
			this->tail_ll->TabIndex = 9;
			this->tail_ll->Text = L"TAIL";
			this->tail_ll->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tail_ll->Visible = false;
			// 
			// insert_ll_label
			// 
			this->insert_ll_label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->insert_ll_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_ll_label->Location = System::Drawing::Point(32, 76);
			this->insert_ll_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->insert_ll_label->Name = L"insert_ll_label";
			this->insert_ll_label->Size = System::Drawing::Size(76, 82);
			this->insert_ll_label->TabIndex = 8;
			this->insert_ll_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->insert_ll_label->Visible = false;
			// 
			// ll7
			// 
			this->ll7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll7->Location = System::Drawing::Point(178, 76);
			this->ll7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll7->Name = L"ll7";
			this->ll7->Size = System::Drawing::Size(76, 82);
			this->ll7->TabIndex = 7;
			this->ll7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll7->Visible = false;
			// 
			// ll6
			// 
			this->ll6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll6->Location = System::Drawing::Point(266, 76);
			this->ll6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll6->Name = L"ll6";
			this->ll6->Size = System::Drawing::Size(76, 82);
			this->ll6->TabIndex = 6;
			this->ll6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll6->Visible = false;
			// 
			// ll5
			// 
			this->ll5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll5->Location = System::Drawing::Point(355, 76);
			this->ll5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll5->Name = L"ll5";
			this->ll5->Size = System::Drawing::Size(76, 82);
			this->ll5->TabIndex = 5;
			this->ll5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll5->Visible = false;
			// 
			// ll4
			// 
			this->ll4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll4->Location = System::Drawing::Point(442, 76);
			this->ll4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll4->Name = L"ll4";
			this->ll4->Size = System::Drawing::Size(76, 82);
			this->ll4->TabIndex = 4;
			this->ll4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll4->Visible = false;
			// 
			// ll3
			// 
			this->ll3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll3->Location = System::Drawing::Point(530, 76);
			this->ll3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll3->Name = L"ll3";
			this->ll3->Size = System::Drawing::Size(76, 82);
			this->ll3->TabIndex = 3;
			this->ll3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll3->Visible = false;
			// 
			// ll2
			// 
			this->ll2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll2->Location = System::Drawing::Point(620, 76);
			this->ll2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll2->Name = L"ll2";
			this->ll2->Size = System::Drawing::Size(76, 82);
			this->ll2->TabIndex = 2;
			this->ll2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll2->Visible = false;
			// 
			// head_ll
			// 
			this->head_ll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->head_ll->Location = System::Drawing::Point(706, 42);
			this->head_ll->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->head_ll->Name = L"head_ll";
			this->head_ll->Size = System::Drawing::Size(75, 24);
			this->head_ll->TabIndex = 1;
			this->head_ll->Text = L"HEAD";
			this->head_ll->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->head_ll->Visible = false;
			// 
			// ll1
			// 
			this->ll1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ll1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ll1->Location = System::Drawing::Point(706, 76);
			this->ll1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ll1->Name = L"ll1";
			this->ll1->Size = System::Drawing::Size(76, 82);
			this->ll1->TabIndex = 0;
			this->ll1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ll1->Visible = false;
			// 
			// intro_pan_ll
			// 
			this->intro_pan_ll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->intro_pan_ll->Location = System::Drawing::Point(112, 63);
			this->intro_pan_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->intro_pan_ll->Name = L"intro_pan_ll";
			this->intro_pan_ll->Size = System::Drawing::Size(834, 483);
			this->intro_pan_ll->TabIndex = 1;
			this->intro_pan_ll->Visible = false;
			// 
			// delete_pan_ll
			// 
			this->delete_pan_ll->Controls->Add(this->delete_ll_but);
			this->delete_pan_ll->Controls->Add(this->deletevalue);
			this->delete_pan_ll->Controls->Add(this->label4);
			this->delete_pan_ll->Controls->Add(this->panel2);
			this->delete_pan_ll->Location = System::Drawing::Point(112, 63);
			this->delete_pan_ll->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->delete_pan_ll->Name = L"delete_pan_ll";
			this->delete_pan_ll->Size = System::Drawing::Size(834, 483);
			this->delete_pan_ll->TabIndex = 4;
			this->delete_pan_ll->Visible = false;
			// 
			// delete_ll_but
			// 
			this->delete_ll_but->Location = System::Drawing::Point(378, 232);
			this->delete_ll_but->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->delete_ll_but->Name = L"delete_ll_but";
			this->delete_ll_but->Size = System::Drawing::Size(56, 24);
			this->delete_ll_but->TabIndex = 3;
			this->delete_ll_but->Text = L"Delete";
			this->delete_ll_but->UseVisualStyleBackColor = true;
			this->delete_ll_but->Click += gcnew System::EventHandler(this, &Form1::delete_ll_but_Click_1);
			// 
			// deletevalue
			// 
			this->deletevalue->Location = System::Drawing::Point(248, 234);
			this->deletevalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->deletevalue->Name = L"deletevalue";
			this->deletevalue->Size = System::Drawing::Size(98, 20);
			this->deletevalue->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(164, 236);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Delete Value";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel2->Controls->Add(this->del_pointer);
			this->panel2->Controls->Add(this->del_tail);
			this->panel2->Controls->Add(this->del_head);
			this->panel2->Controls->Add(this->f7);
			this->panel2->Controls->Add(this->f6);
			this->panel2->Controls->Add(this->f5);
			this->panel2->Controls->Add(this->f4);
			this->panel2->Controls->Add(this->f3);
			this->panel2->Controls->Add(this->f2);
			this->panel2->Controls->Add(this->f1);
			this->panel2->Location = System::Drawing::Point(23, 263);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(790, 208);
			this->panel2->TabIndex = 0;
			// 
			// del_pointer
			// 
			this->del_pointer->BackColor = System::Drawing::SystemColors::Highlight;
			this->del_pointer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_pointer->Location = System::Drawing::Point(2, 17);
			this->del_pointer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->del_pointer->Name = L"del_pointer";
			this->del_pointer->Size = System::Drawing::Size(75, 19);
			this->del_pointer->TabIndex = 9;
			this->del_pointer->Text = L"POINTER";
			this->del_pointer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// del_tail
			// 
			this->del_tail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_tail->Location = System::Drawing::Point(640, 171);
			this->del_tail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->del_tail->Name = L"del_tail";
			this->del_tail->Size = System::Drawing::Size(75, 19);
			this->del_tail->TabIndex = 8;
			this->del_tail->Text = L"TAIL";
			this->del_tail->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// del_head
			// 
			this->del_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del_head->Location = System::Drawing::Point(94, 45);
			this->del_head->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->del_head->Name = L"del_head";
			this->del_head->Size = System::Drawing::Size(75, 19);
			this->del_head->TabIndex = 7;
			this->del_head->Text = L"HEAD";
			this->del_head->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f7
			// 
			this->f7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f7->Location = System::Drawing::Point(640, 76);
			this->f7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(76, 82);
			this->f7->TabIndex = 6;
			this->f7->Text = L"86";
			this->f7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f6
			// 
			this->f6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f6->Location = System::Drawing::Point(550, 76);
			this->f6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(76, 82);
			this->f6->TabIndex = 5;
			this->f6->Text = L"37";
			this->f6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f5
			// 
			this->f5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f5->Location = System::Drawing::Point(460, 76);
			this->f5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(76, 82);
			this->f5->TabIndex = 4;
			this->f5->Text = L"11";
			this->f5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f4
			// 
			this->f4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f4->Location = System::Drawing::Point(370, 76);
			this->f4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(76, 82);
			this->f4->TabIndex = 3;
			this->f4->Text = L"-90";
			this->f4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f3
			// 
			this->f3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f3->Location = System::Drawing::Point(278, 76);
			this->f3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(76, 82);
			this->f3->TabIndex = 2;
			this->f3->Text = L"109";
			this->f3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f2
			// 
			this->f2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f2->Location = System::Drawing::Point(187, 76);
			this->f2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(76, 82);
			this->f2->TabIndex = 1;
			this->f2->Text = L"-2";
			this->f2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f1
			// 
			this->f1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->f1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f1->Location = System::Drawing::Point(94, 76);
			this->f1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(76, 82);
			this->f1->TabIndex = 0;
			this->f1->Text = L"23";
			this->f1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(376, 214);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(168, 17);
			this->lbl1->TabIndex = 3;
			this->lbl1->Text = L"10,244,897,23,45,64,245";
			// 
			// Topic
			// 
			this->Topic->BackColor = System::Drawing::SystemColors::Menu;
			this->Topic->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Topic->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Topic->Location = System::Drawing::Point(262, 18);
			this->Topic->Margin = System::Windows::Forms::Padding(0);
			this->Topic->Name = L"Topic";
			this->Topic->ReadOnly = true;
			this->Topic->Size = System::Drawing::Size(403, 39);
			this->Topic->TabIndex = 0;
			this->Topic->Text = L"Introduction To Arrays and Linked List";
			// 
			// insertimer
			// 
			this->insertimer->Interval = 1;
			this->insertimer->Tick += gcnew System::EventHandler(this, &Form1::insertimer_Tick);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// insertimerll
			// 
			this->insertimerll->Interval = 1;
			this->insertimerll->Tick += gcnew System::EventHandler(this, &Form1::insertimerll_Tick);
			// 
			// tailtimer
			// 
			this->tailtimer->Interval = 1;
			this->tailtimer->Tick += gcnew System::EventHandler(this, &Form1::tailtimer_Tick);
			// 
			// timerTraversal
			// 
			this->timerTraversal->Interval = 1;
			this->timerTraversal->Tick += gcnew System::EventHandler(this, &Form1::timerTraversal_Tick);
			// 
			// deletetimer
			// 
			this->deletetimer->Interval = 1;
			this->deletetimer->Tick += gcnew System::EventHandler(this, &Form1::deletetimer_Tick);
			// 
			// deletefixtimer
			// 
			this->deletefixtimer->Interval = 1;
			this->deletefixtimer->Tick += gcnew System::EventHandler(this, &Form1::deletefixtimer_Tick);
			// 
			// tailfixtimer
			// 
			this->tailfixtimer->Interval = 1;
			this->tailfixtimer->Tick += gcnew System::EventHandler(this, &Form1::tailfixtimer_Tick);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(946, 547);
			this->Controls->Add(this->Topic);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->arrays);
			this->Controls->Add(this->linked_list);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->arrays->ResumeLayout(false);
			this->traverse_pan_ar->ResumeLayout(false);
			this->traverse_pan_ar->PerformLayout();
			this->panelForTraversal->ResumeLayout(false);
			this->search_pan_ar->ResumeLayout(false);
			this->search_pan_ar->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->arrow))->EndInit();
			this->insert_pan_ar->ResumeLayout(false);
			this->insert_pan_ar->PerformLayout();
			this->insert_animation->ResumeLayout(false);
			this->insert_animation->PerformLayout();
			this->intro_pan_ar->ResumeLayout(false);
			this->intro_pan_ar->PerformLayout();
			this->linked_list->ResumeLayout(false);
			this->insert_pan_ll->ResumeLayout(false);
			this->insert_pan_ll->PerformLayout();
			this->insert_animation_ll->ResumeLayout(false);
			this->delete_pan_ll->ResumeLayout(false);
			this->delete_pan_ll->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 arrays->BringToFront();
				 arrays->Visible = true;
				 intro_pan_ar->Visible = true;
				 intro_pan_ar->BringToFront();
			 }
	private: System::Void intro_ar_Click(System::Object^  sender, System::EventArgs^  e) {
				 intro_pan_ar->Visible = true;
				 intro_pan_ar->BringToFront();
			 }
	private: System::Void insert_ar_Click(System::Object^  sender, System::EventArgs^  e) {
				 insert_pan_ar->Visible = true;
				 insert_pan_ar->BringToFront();
			}
	private: System::Void search_ar_Click(System::Object^  sender, System::EventArgs^  e) {
				 search_pan_ar->Visible = true;
				 search_pan_ar->BringToFront();
			 }
	private: System::Void traverse_ar_Click(System::Object^  sender, System::EventArgs^  e) {
				 traverse_pan_ar->Visible = true;
				 traverse_pan_ar->BringToFront();
			 }
private: System::Void insertarray_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->insertvalue->Text=="" || this->insertindex->Text==""){
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				MessageBox::Show("Please Enter Values In The Text Boxes");
			 }
			 else{
				 if(int::Parse(this->insertvalue->Text)<= 1000 && int::Parse(this->insertvalue->Text)>= -1000 && int::Parse(this->insertindex->Text)>= 1 && int::Parse(this->insertindex->Text)<= 8){
					this->label19->Text = this->insertvalue->Text;
					insertimer->Enabled = true;
				 }
				 else{
					this->insertindex->Text = "";
					this->insertvalue->Text = "";
					MessageBox::Show("Please Enter Value Between -1000 to 1000 And Index Between 1 To 8");
				 }
			 }
		 }
private: System::Void insertimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(int::Parse(this->insertindex->Text)==1 && this->label19->Location.X == this->l1->Location.X){
				this->l1->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else if(int::Parse(this->insertindex->Text)==2 && this->label19->Location.X == this->l2->Location.X){
				this->l2->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else if(int::Parse(this->insertindex->Text)==3 && this->label19->Location.X == this->l3->Location.X){
				this->l3->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else if(int::Parse(this->insertindex->Text)==4 && this->label19->Location.X == this->l4->Location.X){
				this->l4->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else if(int::Parse(this->insertindex->Text)==5 && this->label19->Location.X == this->l5->Location.X){
				this->l5->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else if(int::Parse(this->insertindex->Text)==6 && this->label19->Location.X == this->l6->Location.X){
				this->l6->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else if(int::Parse(this->insertindex->Text)==7 && this->label19->Location.X == this->l7->Location.X){
				this->l7->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else if(int::Parse(this->insertindex->Text)==8 && this->label19->Location.X == this->l8->Location.X){
				this->l8->Text = this->insertvalue->Text;
				this->label19->Location = System::Drawing::Point(9,120);
				this->label19->Text = "";
				this->insertindex->Text = "";
				this->insertvalue->Text = "";
				insertimer->Enabled = false;
			 }
			 else{
				 int x = this->label19->Location.X + 1;
				 this->label19->Location = System::Drawing::Point(x,this->label19->Location.Y);
			 }
		 }
private: System::Void search_pan_ar_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				
			 }
				static int posx = 0;
				static int index = 0;
			 

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int var = this->arrow->Location.X;
			 if(var<=this->label_rec_7->Location.X + 73){
				 if(var==this->label_rec_1->Location.X && this->label_rec_1->Text==this->input->Text)
				 {
					timer1->Enabled = false;
					this->label_rec_1->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->label_rec_1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				 }
				else if(var==this->label_rec_2->Location.X && this->label_rec_2->Text==this->input->Text)
				{
					timer1->Enabled = false;
					this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->label_rec_2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				}
				else if(var==this->label_rec_3->Location.X && this->label_rec_3->Text==this->input->Text)
				{
					timer1->Enabled = false;
					this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->label_rec_3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				}
				else if(var==this->label_rec_4->Location.X && this->label_rec_4->Text==this->input->Text)
				{
					timer1->Enabled = false;
					this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->label_rec_4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				}
				else if(var==this->label_rec_5->Location.X && this->label_rec_5->Text==this->input->Text)
				{
					timer1->Enabled = false;
					this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->label_rec_5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				}
				else if(var==this->label_rec_6->Location.X && this->label_rec_6->Text==this->input->Text)
				{
					timer1->Enabled = false;
					this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->label_rec_6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				}
				else if(var==this->label_rec_7->Location.X && this->label_rec_7->Text==this->input->Text)
				{
					timer1->Enabled = false;

					this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->label_rec_7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				}
				else{
					this->posx = this->arrow->Location.X + 1;
					this->arrow->Location = System::Drawing::Point(this->posx , this->arrow->Location.Y);
				}
			}
			else
			{
				timer1->Enabled = false;
				MessageBox::Show("Element Not Found !!");
				this->arrow->Location = System::Drawing::Point( 9, this->arrow->Location.Y);
				this->input->Text = "";
			}
		 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->arrow->Location = System::Drawing::Point( 9, this->arrow->Location.Y);
			 this->label_rec_1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			if(this->input->Text!="")
			{
				timer1->Enabled = true;
			}
			else
			{
				MessageBox::Show("Enter number first!!");
			}

		 }
private: System::Void Reset_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->label_rec_1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			 this->label_rec_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label_rec_7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->arrow->Location = System::Drawing::Point( 9, this->arrow->Location.Y);
			 this->input->Text = "";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			linked_list->BringToFront();
			linked_list->Visible = true;
			intro_pan_ll->Visible = true;
			intro_pan_ll->BringToFront();
		 }
private: System::Void intro_ll_Click(System::Object^  sender, System::EventArgs^  e) {
			intro_pan_ll->Visible = true;
			intro_pan_ll->BringToFront();
		 }
private: System::Void insert_ll_Click(System::Object^  sender, System::EventArgs^  e) {
			insert_pan_ll->Visible = true;
			insert_pan_ll->BringToFront();
		 }
private: System::Void insert_but_ll_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->insert_ll_tf->Text==""){
				this->insert_ll_tf->Text = "";
				MessageBox::Show("Please Enter Values In The Text Box!");
			 }
			 else if(this->ll7->Visible == true){
				this->insert_ll_tf->Text = "";
				MessageBox::Show("Linked List Is Full !");
			 }
			 else{
				 if(int::Parse(this->insert_ll_tf->Text)< 1000 && int::Parse(this->insert_ll_tf->Text)> -1000){
					this->insert_ll_label->Text = this->insert_ll_tf->Text;
					this->insert_ll_label->Visible = true;
					this->insert_but_ll->Enabled = false;
					insertimerll->Enabled = true;
				 }
				 else{
					this->insert_ll_tf->Text = "";
					MessageBox::Show("Please Enter Value Between -1000 to 1000");
				 }
			 }
		 }
private: System::Void insertimerll_Tick(System::Object^  sender, System::EventArgs^  e) {
			if(this->ll1->Visible == false){
				if(this->ll1->Location.X == this->insert_ll_label->Location.X){
					this->ll1->Visible = true;
					this->head_ll->Visible = true;
					this->tail_ll->Visible = true;
					this->ll1->Text = this->insert_ll_label->Text;
					this->insert_ll_tf->Text = "";
					this->insert_ll_label->Text = "";
					this->insert_ll_label->Visible = false;
					this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
					this->insert_but_ll->Enabled = true;
					insertimerll->Enabled = false;
				}
				int x = this->insert_ll_label->Location.X + 1;
				this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
			}
			else if(this->ll2->Visible == false){
				if(this->ll2->Location.X == this->insert_ll_label->Location.X){
					this->ll2->Visible = true;
					this->head_ll->Visible = true;
					this->ll2->Text = this->insert_ll_label->Text;
					this->insert_ll_tf->Text = "";
					this->insert_ll_label->Text = "";
					this->insert_ll_label->Visible = false;
					this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
					insertimerll->Enabled = false;
					tailtimer->Enabled = true;
				}
				int x = this->insert_ll_label->Location.X + 1;
				this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
			}
			else if(this->ll3->Visible == false){
				if(this->ll3->Location.X == this->insert_ll_label->Location.X){
					this->ll3->Visible = true;
					this->head_ll->Visible = true;
					this->ll3->Text = this->insert_ll_label->Text;
					this->insert_ll_tf->Text = "";
					this->insert_ll_label->Text = "";
					this->insert_ll_label->Visible = false;
					this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
					insertimerll->Enabled = false;
					tailtimer->Enabled = true;
				}
				int x = this->insert_ll_label->Location.X + 1;
				this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
			}
			else if(this->ll4->Visible == false){
				if(this->ll4->Location.X == this->insert_ll_label->Location.X){
					this->ll4->Visible = true;
					this->head_ll->Visible = true;
					this->ll4->Text = this->insert_ll_label->Text;
					this->insert_ll_tf->Text = "";
					this->insert_ll_label->Text = "";
					this->insert_ll_label->Visible = false;
					this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
					insertimerll->Enabled = false;
					tailtimer->Enabled = true;
				}
				int x = this->insert_ll_label->Location.X + 1;
				this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
			}
			else if(this->ll5->Visible == false){
				if(this->ll5->Location.X == this->insert_ll_label->Location.X){
					this->ll5->Visible = true;
					this->head_ll->Visible = true;
					this->ll5->Text = this->insert_ll_label->Text;
					this->insert_ll_tf->Text = "";
					this->insert_ll_label->Text = "";
					this->insert_ll_label->Visible = false;
					this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
					insertimerll->Enabled = false;
					tailtimer->Enabled = true;
				}
				int x = this->insert_ll_label->Location.X + 1;
				this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
			}
			else if(this->ll6->Visible == false){
				if(this->ll6->Location.X == this->insert_ll_label->Location.X){
					this->ll6->Visible = true;
					this->head_ll->Visible = true;
					this->ll6->Text = this->insert_ll_label->Text;
					this->insert_ll_tf->Text = "";
					this->insert_ll_label->Text = "";
					this->insert_ll_label->Visible = false;
					this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
					insertimerll->Enabled = false;
					tailtimer->Enabled = true;
				}
				int x = this->insert_ll_label->Location.X + 1;
				this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
			}
			else if(this->ll7->Visible == false){
				if(this->ll7->Location.X == this->insert_ll_label->Location.X){
					this->ll7->Visible = true;
					this->head_ll->Visible = true;
					this->ll7->Text = this->insert_ll_label->Text;
					this->insert_ll_tf->Text = "";
					this->insert_ll_label->Text = "";
					this->insert_ll_label->Visible = false;
					this->insert_ll_label->Location = System::Drawing::Point(42,this->ll1->Location.Y);
					insertimerll->Enabled = false;
					tailtimer->Enabled = true;
				}
				int x = this->insert_ll_label->Location.X + 1;
				this->insert_ll_label->Location = System::Drawing::Point(x,this->insert_ll_label->Location.Y);
			}
         }
private: System::Void tailtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->ll2->Visible == false){
				if(this->ll1->Location.X == this->tail_ll->Location.X){
					this->insert_but_ll->Enabled = true;
					tailtimer->Enabled = false;
				}
				else{
					int x = this->tail_ll->Location.X - 1;
					this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
				}
			 }
			 else if(this->ll3->Visible == false){
				if(this->ll2->Location.X == this->tail_ll->Location.X){
					this->insert_but_ll->Enabled = true;
					tailtimer->Enabled = false;
				}
				else{
					int x = this->tail_ll->Location.X - 1;
					this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
				}
			 }
			 else if(this->ll4->Visible == false){
				if(this->ll3->Location.X == this->tail_ll->Location.X){
					this->insert_but_ll->Enabled = true;
					tailtimer->Enabled = false;
				}
				else{
					int x = this->tail_ll->Location.X - 1;
					this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
				}
			 }
			 else if(this->ll5->Visible == false){
				if(this->ll4->Location.X == this->tail_ll->Location.X){
					this->insert_but_ll->Enabled = true;
					tailtimer->Enabled = false;
				}
				else{
					int x = this->tail_ll->Location.X - 1;
					this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
				}
			 }
			 else if(this->ll6->Visible == false){
				if(this->ll5->Location.X == this->tail_ll->Location.X){
					this->insert_but_ll->Enabled = true;
					tailtimer->Enabled = false;
				}
				else{
					int x = this->tail_ll->Location.X - 1;
					this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
				}
			 }
			 else if(this->ll7->Visible == false){
				if(this->ll6->Location.X == this->tail_ll->Location.X){
					this->insert_but_ll->Enabled = true;
					tailtimer->Enabled = false;
				}
				else{
					int x = this->tail_ll->Location.X - 1;
					this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
				}
			 }
			 else if(this->ll7->Visible == true){
				if(this->ll7->Location.X == this->tail_ll->Location.X){
					this->insert_but_ll->Enabled = true;
					tailtimer->Enabled = false;
				}
				else{
					int x = this->tail_ll->Location.X - 1;
					this->tail_ll->Location = System::Drawing::Point(x,this->tail_ll->Location.Y);
				}
			 }
		 }
private: System::Void delete_ll_Click(System::Object^  sender, System::EventArgs^  e) {
			 delete_pan_ll->Visible = true;
			 delete_pan_ll->BringToFront();
		 }
private: System::Void timerTraversal_Tick(System::Object^  sender, System::EventArgs^  e) {

			 int var = this->Llabel->Location.X;
			 if(var<=this->LB7->Location.X + 73){
				 if(var==this->LB1->Location.X )
				 {
					this->LB1->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel1->Text = this->LB1->Text;
				 }
				else if(var==this->LB2->Location.X )
				{
					this->LB2->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel2->Text = this->LB2->Text;
				}
				else if(var==this->LB3->Location.X )
				{
					this->LB3->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel3->Text = this->LB3->Text;
				}
				else if(var==this->LB4->Location.X )
				{
					this->LB4->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel4->Text = this->LB4->Text;
				}
				else if(var==this->LB5->Location.X )
				{
					this->LB5->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel5->Text = this->LB5->Text;
				}
				else if(var==this->LB6->Location.X)
				{
					this->LB6->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel6->Text = this->LB6->Text;
				}
				else if(var==this->LB7->Location.X)
				{

					this->LB7->BackColor = System::Drawing::SystemColors::InactiveBorder;
					this->LB7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
					this->lbel7->Text = this->LB7->Text;
				}
				/*else{
					this->Llabel->Location = System::Drawing::Point(this->Llabel->Location.X + 1 , this->Llabel->Location.Y);
					MessageBox::Show("T");
				}*/
				this->Llabel->Location = System::Drawing::Point(this->Llabel->Location.X + 1 , this->Llabel->Location.Y);
			}
			else
			{
				timerTraversal->Enabled = false;
				MessageBox::Show("Traversal Done");
				this->lbel1->Text = "";
				this->lbel2->Text = "";
				this->lbel3->Text = "";
				this->lbel4->Text = "";
				this->lbel5->Text = "";
				this->lbel6->Text = "";
				this->lbel7->Text = "";
				this->Llabel->Location = System::Drawing::Point( 9, this->Llabel->Location.Y);
			}
			
		 
		 }
private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerTraversal->Enabled = true;
		 }
private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerTraversal->Enabled = true;
		 }
private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
			 timerTraversal->Enabled = false;
		 }
private: System::Void delete_ll_but_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if(this->deletevalue->Text==""){
				this->deletevalue->Text = "";
				MessageBox::Show("Please Enter Values In The Text Box!");
			 }
			 else if(this->f1->Visible==false && this->f2->Visible==false && this->f3->Visible==false && this->f4->Visible==false && this->f5->Visible==false && this->f6->Visible==false &&this->f7->Visible==false){
				this->deletevalue->Text = "";
				MessageBox::Show("Linked List Is Empty!");
			 }
			 else if(int::Parse(this->deletevalue->Text)<=999 && int::Parse(this->deletevalue->Text)>=-999){
				this->deletevalue->Enabled = false;
				this->delete_ll_but->Enabled = false;
				deletetimer->Enabled = true;
			 }
			 else{
				this->deletevalue->Text = "";
				MessageBox::Show("Value Not Present In The Linked List");
			}
		 }
private: System::Void deletetimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->del_tail->Location.X==this->del_pointer->Location.X && this->del_head->Location.X==this->del_pointer->Location.X && ((this->f1->Location.X==this->del_pointer->Location.X && this->f1->Text==this->deletevalue->Text && this->f1->Visible==true)||(this->f2->Location.X==this->del_pointer->Location.X && this->f2->Text==this->deletevalue->Text && this->f2->Visible==true)||(this->f3->Location.X==this->del_pointer->Location.X && this->f3->Text==this->deletevalue->Text && this->f3->Visible==true)||(this->f4->Location.X==this->del_pointer->Location.X && this->f4->Text==this->deletevalue->Text && this->f4->Visible==true)||(this->f5->Location.X==this->del_pointer->Location.X && this->f5->Text==this->deletevalue->Text && this->f5->Visible==true)||(this->f6->Location.X==this->del_pointer->Location.X && this->f6->Text==this->deletevalue->Text && this->f6->Visible==true)||(this->f7->Location.X==this->del_pointer->Location.X && this->f7->Text==this->deletevalue->Text && this->f7->Visible==true))){
				this->f1->Visible = false;
				this->f2->Visible = false;
				this->f3->Visible = false;
				this->f4->Visible = false;
				this->f5->Visible = false;
				this->f6->Visible = false;
				this->f7->Visible = false;
				deletetimer->Enabled = false;
				this->del_head->Visible = false;
				this->del_tail->Visible = false;
				this->del_pointer->Visible = false;
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
			 }
			 else if(this->f1->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f1->Text){
				deletetimer->Enabled = false;
				this->f1->Visible = false;
				deletefixtimer->Enabled = true;
			 }
			 else if(this->f2->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f2->Text){
				deletetimer->Enabled = false;
				this->f2->Visible = false;
				deletefixtimer->Enabled = true;
			 }
			 else if(this->f3->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f3->Text){
				deletetimer->Enabled = false;
				this->f3->Visible = false;
				deletefixtimer->Enabled = true;
			 }
			 else if(this->f4->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f4->Text){
				deletetimer->Enabled = false;
				this->f4->Visible = false;
				deletefixtimer->Enabled = true;
			 }
			 else if(this->f5->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f5->Text){
				deletetimer->Enabled = false;
				this->f5->Visible = false;
				deletefixtimer->Enabled = true;
			 }
			 else if(this->f6->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f6->Text){
				deletetimer->Enabled = false;
				this->f6->Visible = false;
				deletefixtimer->Enabled = true;
			 }
			 else if(this->f7->Location.X==this->del_pointer->Location.X && this->deletevalue->Text == this->f7->Text){
				deletetimer->Enabled = false;
				this->f7->Visible = false;
				deletefixtimer->Enabled = true;
			 }
			 else if(this->del_tail->Location.X+100 < this->del_pointer->Location.X){
				this->deletevalue->Enabled = true;
				this->deletevalue->Text = "";
				this->delete_ll_but->Enabled = true;
				deletetimer->Enabled = false;
				this->del_pointer->Location = System::Drawing::Point(3,21);
				MessageBox::Show("Value Is Not Present In The Linked List");
			 }
			 else{
				int x = this->del_pointer->Location.X + 1;
				this->del_pointer->Location = System::Drawing::Point(x,this->del_pointer->Location.Y);
			 }
		 }
private: System::Void deletefixtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			int check = 0;
			if(this->del_pointer->Location.X == this->del_tail->Location.X){
				deletefixtimer->Enabled = false;
				tailfixtimer->Enabled = true;
			}
			else{
				if(this->f1->Visible == true && this->f1->Location.X>=this->del_pointer->Location.X){
					if(this->f1->Location.X==this->del_pointer->Location.X){
						check = 1;
						goto here;
					}
					else{
						this->f1->Location = System::Drawing::Point(this->f1->Location.X-1,this->f1->Location.Y);
					}
				}
				if(this->f2->Visible == true && this->f2->Location.X>=this->del_pointer->Location.X){
					if(this->f2->Location.X==this->del_pointer->Location.X){
						check = 1;
						goto here;
					}
					else{
						this->f2->Location = System::Drawing::Point(this->f2->Location.X-1,this->f2->Location.Y);
					}
				}
				if(this->f3->Visible == true && this->f3->Location.X>=this->del_pointer->Location.X){
					if(this->f3->Location.X==this->del_pointer->Location.X){
						check = 1;
						goto here;
					}
					else{
						this->f3->Location = System::Drawing::Point(this->f3->Location.X-1,this->f3->Location.Y);
					}
				}
				if(this->f4->Visible == true && this->f4->Location.X>=this->del_pointer->Location.X){
					if(this->f4->Location.X==this->del_pointer->Location.X){
						check = 1;
						goto here;
					}
					else{
						this->f4->Location = System::Drawing::Point(this->f4->Location.X-1,this->f4->Location.Y);
					}
				}
				if(this->f5->Visible == true && this->f5->Location.X>=this->del_pointer->Location.X){
					if(this->f5->Location.X==this->del_pointer->Location.X){
						check = 1;
						goto here;
					}
					else{
						this->f5->Location = System::Drawing::Point(this->f5->Location.X-1,this->f5->Location.Y);
					}
				}
				if(this->f6->Visible == true && this->f6->Location.X>=this->del_pointer->Location.X){
					if(this->f6->Location.X==this->del_pointer->Location.X){
						check = 1;
						goto here;
					}
					else{
						this->f6->Location = System::Drawing::Point(this->f6->Location.X-1,this->f6->Location.Y);
					}
				}
				if(this->f7->Visible == true && this->f7->Location.X>=this->del_pointer->Location.X){
					if(this->f7->Location.X==this->del_pointer->Location.X){
						check = 1;
						goto here;
					}
					else{
						this->f7->Location = System::Drawing::Point(this->f7->Location.X-1,this->f7->Location.Y);
					}
				}
				here :
				if(check == 1){
					check = 0;
					deletefixtimer->Enabled = false;
					tailfixtimer->Enabled = true;
				}
			}
		 }
private: System::Void tailfixtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->f1->Visible == true && this->f1->Location.X==this->del_tail->Location.X){
				this->del_pointer->Location = System::Drawing::Point(3,21);
				tailfixtimer->Enabled = false;
				this->deletevalue->Text = "";
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
				
			}
			else if(this->f2->Visible == true && this->f2->Location.X==this->del_tail->Location.X){
				this->del_pointer->Location = System::Drawing::Point(3,21);
				tailfixtimer->Enabled = false;
				this->deletevalue->Text = "";
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
			}
			else if(this->f3->Visible == true && this->f3->Location.X==this->del_tail->Location.X){
				this->del_pointer->Location = System::Drawing::Point(3,21);
				tailfixtimer->Enabled = false;
				this->deletevalue->Text = "";
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
			}
			else if(this->f4->Visible == true && this->f4->Location.X==this->del_tail->Location.X){
				this->del_pointer->Location = System::Drawing::Point(3,21);
				tailfixtimer->Enabled = false;
				this->deletevalue->Text = "";
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
			}
			else if(this->f5->Visible == true && this->f5->Location.X==this->del_tail->Location.X){
				this->del_pointer->Location = System::Drawing::Point(3,21);
				tailfixtimer->Enabled = false;
				this->deletevalue->Text = "";
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
			}
			else if(this->f6->Visible == true && this->f6->Location.X==this->del_tail->Location.X){
				this->del_pointer->Location = System::Drawing::Point(3,21);
				tailfixtimer->Enabled = false;
				this->deletevalue->Text = "";
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
			}
			else if(this->f7->Visible == true && this->f7->Location.X==this->del_tail->Location.X){
				this->del_pointer->Location = System::Drawing::Point(3,21);
				tailfixtimer->Enabled = false;
				this->deletevalue->Text = "";
				this->deletevalue->Enabled = true;
				this->delete_ll_but->Enabled = true;
			}
			else{
				this->del_tail->Location = System::Drawing::Point(this->del_tail->Location.X-1,this->del_tail->Location.Y);
			}
		 }

private: System::Void lbl_input_q_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}