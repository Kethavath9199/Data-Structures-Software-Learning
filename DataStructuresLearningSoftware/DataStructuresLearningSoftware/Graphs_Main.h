#pragma once

#include "Graph.h"
#include "GraphBFS.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Searching
	/// </summary>
	public ref class Searching : public System::Windows::Forms::Form
	{
	public:
		Searching(void)
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
		~Searching()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Button^  btnBinarySearch;
	private: System::Windows::Forms::Button^  btnLinearSearch;
	private: System::Windows::Forms::Panel^  topPanel;

	private: System::Windows::Forms::Panel^  MainPanel;
	private: System::Windows::Forms::Button^  btnQuiz;
	private: System::Windows::Forms::Button^  btnLinearSearchLL;


	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnNext;


	private: System::Windows::Forms::Button^  btnHome;


	private: System::Windows::Forms::Label^  lblWelcome;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Searching::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnLinearSearchLL = (gcnew System::Windows::Forms::Button());
			this->btnQuiz = (gcnew System::Windows::Forms::Button());
			this->btnBinarySearch = (gcnew System::Windows::Forms::Button());
			this->btnLinearSearch = (gcnew System::Windows::Forms::Button());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->topPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Snow;
			this->panel1->Controls->Add(this->btnLinearSearchLL);
			this->panel1->Controls->Add(this->btnQuiz);
			this->panel1->Controls->Add(this->btnBinarySearch);
			this->panel1->Controls->Add(this->btnLinearSearch);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 681);
			this->panel1->TabIndex = 0;
			// 
			// btnLinearSearchLL
			// 
			this->btnLinearSearchLL->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnLinearSearchLL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLinearSearchLL->FlatAppearance->BorderSize = 0;
			this->btnLinearSearchLL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLinearSearchLL->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLinearSearchLL->ForeColor = System::Drawing::Color::White;
			this->btnLinearSearchLL->Location = System::Drawing::Point(0, 130);
			this->btnLinearSearchLL->Name = L"btnLinearSearchLL";
			this->btnLinearSearchLL->Size = System::Drawing::Size(175, 50);
			this->btnLinearSearchLL->TabIndex = 3;
			this->btnLinearSearchLL->Text = L"Linear Search in Linked List";
			this->btnLinearSearchLL->UseVisualStyleBackColor = false;
			this->btnLinearSearchLL->Click += gcnew System::EventHandler(this, &Searching::btnLinearSearchLL_Click);
			// 
			// btnQuiz
			// 
			this->btnQuiz->BackColor = System::Drawing::Color::Black;
			this->btnQuiz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQuiz->FlatAppearance->BorderSize = 0;
			this->btnQuiz->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuiz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuiz->ForeColor = System::Drawing::Color::White;
			this->btnQuiz->Location = System::Drawing::Point(0, 180);
			this->btnQuiz->Name = L"btnQuiz";
			this->btnQuiz->Size = System::Drawing::Size(175, 40);
			this->btnQuiz->TabIndex = 2;
			this->btnQuiz->Text = L"Quiz Time";
			this->btnQuiz->UseVisualStyleBackColor = false;
			this->btnQuiz->Click += gcnew System::EventHandler(this, &Searching::btnQuiz_Click);
			// 
			// btnBinarySearch
			// 
			this->btnBinarySearch->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnBinarySearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBinarySearch->FlatAppearance->BorderSize = 0;
			this->btnBinarySearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBinarySearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnBinarySearch->ForeColor = System::Drawing::Color::Transparent;
			this->btnBinarySearch->Location = System::Drawing::Point(0, 90);
			this->btnBinarySearch->Name = L"btnBinarySearch";
			this->btnBinarySearch->Size = System::Drawing::Size(175, 40);
			this->btnBinarySearch->TabIndex = 1;
			this->btnBinarySearch->Text = L"Binary Search";
			this->btnBinarySearch->UseVisualStyleBackColor = false;
			this->btnBinarySearch->Click += gcnew System::EventHandler(this, &Searching::btnBinarySearch_Click);
			// 
			// btnLinearSearch
			// 
			this->btnLinearSearch->BackColor = System::Drawing::Color::IndianRed;
			this->btnLinearSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLinearSearch->FlatAppearance->BorderSize = 0;
			this->btnLinearSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLinearSearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLinearSearch->ForeColor = System::Drawing::Color::White;
			this->btnLinearSearch->Location = System::Drawing::Point(0, 50);
			this->btnLinearSearch->Name = L"btnLinearSearch";
			this->btnLinearSearch->Size = System::Drawing::Size(175, 40);
			this->btnLinearSearch->TabIndex = 0;
			this->btnLinearSearch->Text = L"Linear Search";
			this->btnLinearSearch->UseVisualStyleBackColor = false;
			this->btnLinearSearch->Click += gcnew System::EventHandler(this, &Searching::btnLinearSearch_Click);
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::Snow;
			this->topPanel->Controls->Add(this->lblWelcome);
			this->topPanel->Controls->Add(this->btnBack);
			this->topPanel->Controls->Add(this->btnNext);
			this->topPanel->Controls->Add(this->btnHome);
			this->topPanel->Location = System::Drawing::Point(175, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1088, 50);
			this->topPanel->TabIndex = 1;
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::Firebrick;
			this->lblWelcome->Location = System::Drawing::Point(50, 15);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(878, 20);
			this->lblWelcome->TabIndex = 4;
			this->lblWelcome->Text = L"label1";
			this->lblWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnBack
			// 
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(50, 50);
			this->btnBack->TabIndex = 3;
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Searching::btnBack_Click);
			// 
			// btnNext
			// 
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(988, 0);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(50, 50);
			this->btnNext->TabIndex = 2;
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Searching::btnNext_Click);
			// 
			// btnHome
			// 
			this->btnHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(1038, 0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 1;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &Searching::btnHome_Click);
			// 
			// MainPanel
			// 
			this->MainPanel->AutoScroll = true;
			this->MainPanel->Location = System::Drawing::Point(175, 50);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1088, 631);
			this->MainPanel->TabIndex = 2;
			// 
			// Searching
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Searching";
			this->Text = L"Searching";
			this->Load += gcnew System::EventHandler(this, &Searching::Searching_Load);
			this->panel1->ResumeLayout(false);
			this->topPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String ^username;
			int moduleId;
			String ^fullname;
			int modulesCompleted;

	private: System::Void btnLinearSearch_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(11);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 0){	// 0 is module ID of Linear Search
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 0;
					 display();
				 }
			 }

	private: System::Void btnBinarySearch_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(11);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 1){	// 1 is module ID of Binary Search
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 1;
					 display();
				 }
			 }

	private: System::Void btnLinearSearchLL_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(11);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 2){	// 2 is module ID of Linear Search in Linked List
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 2;
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
					 modulesCompleted = reader->GetInt32(11);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 3){	// 3 is module ID of Quiz
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 3;
					 display();
				 }
			 }

	private: System::Void Searching_Load(System::Object^  sender, System::EventArgs^  e) {

				 moduleId = 0;

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 fullname = reader->GetString(2);
					 modulesCompleted = reader->GetInt32(11);
				 }

				 DB_Connection->Close();

				 lblWelcome->Text = "Welcome, "+fullname;

				 display();
			 }

	public: void display(){
				if(modulesCompleted == 0){
					btnLinearSearch->BackColor = Color::IndianRed;
					btnBinarySearch->BackColor = Color::IndianRed;
					btnLinearSearchLL->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 1){
					btnLinearSearch->BackColor = Color::MediumSeaGreen;
					btnBinarySearch->BackColor = Color::IndianRed;
					btnLinearSearchLL->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 2){
					btnLinearSearch->BackColor = Color::MediumSeaGreen;
					btnBinarySearch->BackColor = Color::MediumSeaGreen;
					btnLinearSearchLL->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 3){
					btnLinearSearch->BackColor = Color::MediumSeaGreen;
					btnBinarySearch->BackColor = Color::MediumSeaGreen;
					btnLinearSearchLL->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 4){
					btnLinearSearch->BackColor = Color::MediumSeaGreen;
					btnBinarySearch->BackColor = Color::MediumSeaGreen;
					btnLinearSearchLL->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::MediumSeaGreen;
				}

				if(moduleId == 0){
					btnLinearSearch->BackColor = Color::CornflowerBlue;
					btnBack->Hide();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Graph ^newUserControl = gcnew Graph();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 1){
					btnBinarySearch->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					GraphBFS ^newUserControl = gcnew GraphBFS();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				/*else if(moduleId == 2){
					btnLinearSearchLL->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					LinkedList ^newUserControl = gcnew LinkedList();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 3){
					btnQuiz->BackColor = Color::CornflowerBlue;
					btnNext->Hide();
					btnBack->Show();
					MainPanel->Controls->Clear();
					Quiz ^newUserControl = gcnew Quiz();
					newUserControl->username = username;
					newUserControl->ds_id = 3;
					MainPanel->Controls->Add(newUserControl);
				}*/
			}

	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(11);
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
					 modulesCompleted = reader->GetInt32(11);
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
				 if(this->Owner != nullptr){
					 this->Close();
					 this->Owner->Show();
				 }
			 }
	};

}
