#pragma once

#include "Array_Insertion.h"
#include "Array_Traversal.h"
#include "Array_Introduction.h"
#include "Array_Search.h"
#include "Quiz.h"
#include "DiscussionForum.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Diagnostics;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Arrays
	/// </summary>
	public ref class Arrays : public System::Windows::Forms::Form
	{
	public:
		Arrays(void)
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
		~Arrays()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  MainPanel;

	private: System::Windows::Forms::Button^  btnTraversal;

	private: System::Windows::Forms::Button^  btnInsertion;

	private: System::Windows::Forms::Button^  btnIntroduction;
	private: System::Windows::Forms::Button^  btnSearch;


	private: System::Windows::Forms::Button^  btnHome;

	private: System::Windows::Forms::Button^  btnNext;

	private: System::Windows::Forms::Button^  btnBack;

	private: System::Windows::Forms::Button^  btnQuiz;
	private: System::Windows::Forms::Label^  lblWelcome;
	private: System::Windows::Forms::Button^  button8;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Arrays::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnQuiz = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnTraversal = (gcnew System::Windows::Forms::Button());
			this->btnInsertion = (gcnew System::Windows::Forms::Button());
			this->btnIntroduction = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Honeydew;
			this->panel1->Controls->Add(this->btnQuiz);
			this->panel1->Controls->Add(this->btnSearch);
			this->panel1->Controls->Add(this->btnTraversal);
			this->panel1->Controls->Add(this->btnInsertion);
			this->panel1->Controls->Add(this->btnIntroduction);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 720);
			this->panel1->TabIndex = 0;
			// 
			// btnQuiz
			// 
			this->btnQuiz->FlatAppearance->BorderSize = 0;
			this->btnQuiz->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuiz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuiz->Location = System::Drawing::Point(0, 258);
			this->btnQuiz->Margin = System::Windows::Forms::Padding(4);
			this->btnQuiz->Name = L"btnQuiz";
			this->btnQuiz->Size = System::Drawing::Size(175, 50);
			this->btnQuiz->TabIndex = 4;
			this->btnQuiz->Text = L"Quiz Time";
			this->btnQuiz->UseVisualStyleBackColor = true;
			this->btnQuiz->Click += gcnew System::EventHandler(this, &Arrays::btnQuiz_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSearch->FlatAppearance->BorderSize = 0;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(0, 209);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(175, 50);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Arrays::btnSearch_Click);
			// 
			// btnTraversal
			// 
			this->btnTraversal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTraversal->FlatAppearance->BorderSize = 0;
			this->btnTraversal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTraversal->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTraversal->Location = System::Drawing::Point(0, 160);
			this->btnTraversal->Margin = System::Windows::Forms::Padding(4);
			this->btnTraversal->Name = L"btnTraversal";
			this->btnTraversal->Size = System::Drawing::Size(175, 50);
			this->btnTraversal->TabIndex = 2;
			this->btnTraversal->Text = L"Traversal";
			this->btnTraversal->UseVisualStyleBackColor = true;
			this->btnTraversal->Click += gcnew System::EventHandler(this, &Arrays::btnTraversal_Click);
			// 
			// btnInsertion
			// 
			this->btnInsertion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInsertion->FlatAppearance->BorderSize = 0;
			this->btnInsertion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInsertion->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnInsertion->Location = System::Drawing::Point(0, 111);
			this->btnInsertion->Margin = System::Windows::Forms::Padding(4);
			this->btnInsertion->Name = L"btnInsertion";
			this->btnInsertion->Size = System::Drawing::Size(175, 50);
			this->btnInsertion->TabIndex = 1;
			this->btnInsertion->Text = L"Insertion";
			this->btnInsertion->UseVisualStyleBackColor = true;
			this->btnInsertion->Click += gcnew System::EventHandler(this, &Arrays::btnInsertion_Click);
			// 
			// btnIntroduction
			// 
			this->btnIntroduction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIntroduction->FlatAppearance->BorderSize = 0;
			this->btnIntroduction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIntroduction->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIntroduction->Location = System::Drawing::Point(0, 62);
			this->btnIntroduction->Margin = System::Windows::Forms::Padding(4);
			this->btnIntroduction->Name = L"btnIntroduction";
			this->btnIntroduction->Size = System::Drawing::Size(175, 50);
			this->btnIntroduction->TabIndex = 0;
			this->btnIntroduction->Text = L"Introduction";
			this->btnIntroduction->UseVisualStyleBackColor = true;
			this->btnIntroduction->Click += gcnew System::EventHandler(this, &Arrays::btnIntroduction_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Honeydew;
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->lblWelcome);
			this->panel2->Controls->Add(this->btnHome);
			this->panel2->Controls->Add(this->btnNext);
			this->panel2->Controls->Add(this->btnBack);
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1104, 50);
			this->panel2->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(58, 0);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 50);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Discussion";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Arrays::button8_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::Firebrick;
			this->lblWelcome->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWelcome->Location = System::Drawing::Point(242, 15);
			this->lblWelcome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(698, 20);
			this->lblWelcome->TabIndex = 4;
			this->lblWelcome->Text = L"label1";
			this->lblWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnHome
			// 
			this->btnHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(1046, 0);
			this->btnHome->Margin = System::Windows::Forms::Padding(4);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 2;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &Arrays::btnHome_Click);
			// 
			// btnNext
			// 
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(996, 0);
			this->btnNext->Margin = System::Windows::Forms::Padding(4);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(50, 50);
			this->btnNext->TabIndex = 1;
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Arrays::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(50, 50);
			this->btnBack->TabIndex = 0;
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Arrays::btnBack_Click);
			// 
			// MainPanel
			// 
			this->MainPanel->AutoScroll = true;
			this->MainPanel->Location = System::Drawing::Point(175, 50);
			this->MainPanel->Margin = System::Windows::Forms::Padding(4);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1105, 670);
			this->MainPanel->TabIndex = 2;
			// 
			// Arrays
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Arrays";
			this->Text = L"Arrays";
			this->Load += gcnew System::EventHandler(this, &Arrays::Arrays_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: String ^username;
			int moduleId;
			String ^fullname;
			int modulesCompleted;


	private: System::Void btnIntroduction_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 0){	// 0 is module ID of Introduction
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 0;
					 display();
				 }
			 }

	private: System::Void btnInsertion_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 1){	// 1 is module ID of Insertion
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 1;
					 display();
				 }
			 }

	private: System::Void btnTraversal_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 2){	// 2 is module ID of Traversal
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 2;
					 display();
				 }
			}


	private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 3){	// 3 is module ID of Search
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 3;
					 display();
				 }		 
			}
	
	private: System::Void btnQuiz_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 4){	// 4 is module ID of Quiz
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 4;
					 display();
				 }		 
			}
	
	private: System::Void Arrays_Load(System::Object^  sender, System::EventArgs^  e) {
				 moduleId = 0;

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 fullname = reader->GetString(2);
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 lblWelcome->Text = "Welcome, "+fullname;

				 // MessageBox::Show(Convert::ToString(modulesCompleted));

				 display();		 
			}

	public: void display(){
				if(modulesCompleted == 0){
					btnIntroduction->BackColor = Color::IndianRed;
					btnInsertion->BackColor = Color::IndianRed;
					btnTraversal->BackColor = Color::IndianRed;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 1){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::IndianRed;
					btnTraversal->BackColor = Color::IndianRed;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 2){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::IndianRed;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 3){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::MediumSeaGreen;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 4){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::MediumSeaGreen;
					btnSearch->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 5){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::MediumSeaGreen;
					btnSearch->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::MediumSeaGreen;
				}

				if(moduleId == 0){
					btnIntroduction->BackColor = Color::CornflowerBlue;
					btnBack->Hide();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Introduction ^newUserControl = gcnew Array_Introduction();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 1){
					btnInsertion->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Insertion ^newUserControl = gcnew Array_Insertion();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 2){
					btnTraversal->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Traversal ^newUserControl = gcnew Array_Traversal();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 3){
					btnSearch->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Search ^newUserControl = gcnew Array_Search();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 4){
					btnQuiz->BackColor = Color::CornflowerBlue;
					btnNext->Hide();
					btnBack->Show();
					MainPanel->Controls->Clear();
					Quiz ^newUserControl = gcnew Quiz();
					newUserControl->username = username;
					newUserControl->ds_id = 1;
					MainPanel->Controls->Add(newUserControl);
				}
			}
	
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 if(moduleId-1 > modulesCompleted){
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId--;
					 display();
				 }
			}


	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 if(moduleId+1 > modulesCompleted){
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId++;
					 display();
				 }		 
			}

	private: System::Void btnHome_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(9);
				 }

				 DB_Connection->Close();

				 this->Close();
			}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

			 DB_Connection->Open();
			 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
			 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
			 OleDbDataReader ^ reader = cmd->ExecuteReader();
			 if(reader->Read()){
				 modulesCompleted = reader->GetInt32(9);
			 }

			 DB_Connection->Close();

			 MainPanel->Controls->Clear();
			 DiscussionForum ^ discuss = gcnew DiscussionForum;
			 discuss->username=username;
			 discuss->module="Array";
			 MainPanel->Controls->Add(discuss);
		 }
};
}
