#pragma once

#include "bubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "Quiz.h"
#include "mergesort.h"
#include "QuickSort.h"
#include "DiscussionForum.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sorting
	/// </summary>
	public ref class Sorting : public System::Windows::Forms::Form
	{
	public:
		Sorting(void)
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
		~Sorting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  MainPanel;

	private: System::Windows::Forms::Button^  btnBubbleSort;
	private: System::Windows::Forms::Button^  btnSelectionSort;
	private: System::Windows::Forms::Button^  btnInsertionSort;
	private: System::Windows::Forms::Button^  btnMergeSort;
	private: System::Windows::Forms::Button^  btnQuickSort;
	private: System::Windows::Forms::Button^  btnBack;

	private: System::Windows::Forms::Button^  btnHome;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnQuiz;
	private: System::Windows::Forms::Label^  lblWelcome;
	private: System::Windows::Forms::Button^  button1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Sorting::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnQuiz = (gcnew System::Windows::Forms::Button());
			this->btnQuickSort = (gcnew System::Windows::Forms::Button());
			this->btnMergeSort = (gcnew System::Windows::Forms::Button());
			this->btnInsertionSort = (gcnew System::Windows::Forms::Button());
			this->btnSelectionSort = (gcnew System::Windows::Forms::Button());
			this->btnBubbleSort = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::OldLace;
			this->panel1->Controls->Add(this->btnQuiz);
			this->panel1->Controls->Add(this->btnQuickSort);
			this->panel1->Controls->Add(this->btnMergeSort);
			this->panel1->Controls->Add(this->btnInsertionSort);
			this->panel1->Controls->Add(this->btnSelectionSort);
			this->panel1->Controls->Add(this->btnBubbleSort);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 720);
			this->panel1->TabIndex = 0;
			// 
			// btnQuiz
			// 
			this->btnQuiz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQuiz->FlatAppearance->BorderSize = 0;
			this->btnQuiz->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuiz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuiz->Location = System::Drawing::Point(0, 250);
			this->btnQuiz->Name = L"btnQuiz";
			this->btnQuiz->Size = System::Drawing::Size(175, 40);
			this->btnQuiz->TabIndex = 5;
			this->btnQuiz->Text = L"Quiz Time";
			this->btnQuiz->UseVisualStyleBackColor = true;
			this->btnQuiz->Click += gcnew System::EventHandler(this, &Sorting::btnQuiz_Click);
			// 
			// btnQuickSort
			// 
			this->btnQuickSort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQuickSort->FlatAppearance->BorderSize = 0;
			this->btnQuickSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuickSort->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuickSort->Location = System::Drawing::Point(0, 210);
			this->btnQuickSort->Name = L"btnQuickSort";
			this->btnQuickSort->Size = System::Drawing::Size(175, 40);
			this->btnQuickSort->TabIndex = 4;
			this->btnQuickSort->Text = L"Quick Sort";
			this->btnQuickSort->UseVisualStyleBackColor = true;
			this->btnQuickSort->Click += gcnew System::EventHandler(this, &Sorting::btnQuickSort_Click);
			// 
			// btnMergeSort
			// 
			this->btnMergeSort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMergeSort->FlatAppearance->BorderSize = 0;
			this->btnMergeSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMergeSort->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMergeSort->Location = System::Drawing::Point(0, 170);
			this->btnMergeSort->Name = L"btnMergeSort";
			this->btnMergeSort->Size = System::Drawing::Size(175, 40);
			this->btnMergeSort->TabIndex = 3;
			this->btnMergeSort->Text = L"Merge Sort";
			this->btnMergeSort->UseVisualStyleBackColor = true;
			this->btnMergeSort->Click += gcnew System::EventHandler(this, &Sorting::btnMergeSort_Click);
			// 
			// btnInsertionSort
			// 
			this->btnInsertionSort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInsertionSort->FlatAppearance->BorderSize = 0;
			this->btnInsertionSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInsertionSort->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnInsertionSort->Location = System::Drawing::Point(0, 130);
			this->btnInsertionSort->Name = L"btnInsertionSort";
			this->btnInsertionSort->Size = System::Drawing::Size(175, 40);
			this->btnInsertionSort->TabIndex = 2;
			this->btnInsertionSort->Text = L"Insertion Sort";
			this->btnInsertionSort->UseVisualStyleBackColor = true;
			this->btnInsertionSort->Click += gcnew System::EventHandler(this, &Sorting::btnInsertionSort_Click);
			// 
			// btnSelectionSort
			// 
			this->btnSelectionSort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSelectionSort->FlatAppearance->BorderSize = 0;
			this->btnSelectionSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSelectionSort->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSelectionSort->Location = System::Drawing::Point(0, 90);
			this->btnSelectionSort->Name = L"btnSelectionSort";
			this->btnSelectionSort->Size = System::Drawing::Size(175, 40);
			this->btnSelectionSort->TabIndex = 1;
			this->btnSelectionSort->Text = L"Selection Sort";
			this->btnSelectionSort->UseVisualStyleBackColor = true;
			this->btnSelectionSort->Click += gcnew System::EventHandler(this, &Sorting::btnSelectionSort_Click);
			// 
			// btnBubbleSort
			// 
			this->btnBubbleSort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBubbleSort->FlatAppearance->BorderSize = 0;
			this->btnBubbleSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBubbleSort->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnBubbleSort->Location = System::Drawing::Point(0, 50);
			this->btnBubbleSort->Name = L"btnBubbleSort";
			this->btnBubbleSort->Size = System::Drawing::Size(175, 40);
			this->btnBubbleSort->TabIndex = 0;
			this->btnBubbleSort->Text = L"Bubble Sort";
			this->btnBubbleSort->UseVisualStyleBackColor = true;
			this->btnBubbleSort->Click += gcnew System::EventHandler(this, &Sorting::btnBubbleSort_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::OldLace;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->lblWelcome);
			this->panel2->Controls->Add(this->btnNext);
			this->panel2->Controls->Add(this->btnHome);
			this->panel2->Controls->Add(this->btnBack);
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1105, 50);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PeachPuff;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(50, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 30);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Discussion Forum";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Sorting::button1_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::Firebrick;
			this->lblWelcome->Location = System::Drawing::Point(242, 15);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(713, 20);
			this->lblWelcome->TabIndex = 4;
			this->lblWelcome->Text = L"label1";
			this->lblWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnNext
			// 
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(1005, 0);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(50, 50);
			this->btnNext->TabIndex = 3;
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Sorting::btnNext_Click);
			// 
			// btnHome
			// 
			this->btnHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(1055, 0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 2;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &Sorting::btnHome_Click);
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
			this->btnBack->TabIndex = 0;
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Sorting::btnBack_Click);
			// 
			// MainPanel
			// 
			this->MainPanel->AutoScroll = true;
			this->MainPanel->Location = System::Drawing::Point(175, 50);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1105, 670);
			this->MainPanel->TabIndex = 2;
			// 
			// Sorting
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Sorting";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sorting";
			this->Load += gcnew System::EventHandler(this, &Sorting::Sorting_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:	String ^username;
			int moduleId;
			String ^fullname;
			int modulesCompleted;


	private: System::Void btnBubbleSort_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(12);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 0){	// 0 is module ID of Bubble Sort
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 0;
					 display();
				 }
			 }
	private: System::Void btnSelectionSort_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(12);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 1){	// 1 is module ID of Selection Sort
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 1;
					 display();
				 }
			 }

	private: System::Void btnInsertionSort_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(12);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 2){	// 2 is module ID of Insertion Sort
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 2;
					 display();
				 }
			}
	
	private: System::Void btnMergeSort_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(12);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 3){	// 3 is module ID of Merge Sort
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 3;
					 display();
				 }
			}

	private: System::Void btnQuickSort_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 modulesCompleted = reader->GetInt32(12);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 4){	// 4 is module ID of Quick Sort
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 4;
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
					 modulesCompleted = reader->GetInt32(12);
				 }

				 DB_Connection->Close();

				 if(modulesCompleted < 5){	// 5 is module ID of Quiz
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 5;
					 display();
				 }
			}
	
	private: System::Void Sorting_Load(System::Object^  sender, System::EventArgs^  e) {

				 moduleId = 0;

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 fullname = reader->GetString(2);
					 modulesCompleted = reader->GetInt32(12);
				 }

				 DB_Connection->Close();

				 lblWelcome->Text = "Welcome, "+fullname;

				 display();
			}

	public: void display(){
				if(modulesCompleted == 0){
					btnBubbleSort->BackColor = Color::IndianRed;
					btnSelectionSort->BackColor = Color::IndianRed;
					btnInsertionSort->BackColor = Color::IndianRed;
					btnMergeSort->BackColor = Color::IndianRed;
					btnQuickSort->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 1){
					btnBubbleSort->BackColor = Color::MediumSeaGreen;
					btnSelectionSort->BackColor = Color::IndianRed;
					btnInsertionSort->BackColor = Color::IndianRed;
					btnMergeSort->BackColor = Color::IndianRed;
					btnQuickSort->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 2){
					btnBubbleSort->BackColor = Color::MediumSeaGreen;
					btnSelectionSort->BackColor = Color::MediumSeaGreen;
					btnInsertionSort->BackColor = Color::IndianRed;
					btnMergeSort->BackColor = Color::IndianRed;
					btnQuickSort->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 3){
					btnBubbleSort->BackColor = Color::MediumSeaGreen;
					btnSelectionSort->BackColor = Color::MediumSeaGreen;
					btnInsertionSort->BackColor = Color::MediumSeaGreen;
					btnMergeSort->BackColor = Color::IndianRed;
					btnQuickSort->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 4){
					btnBubbleSort->BackColor = Color::MediumSeaGreen;
					btnSelectionSort->BackColor = Color::MediumSeaGreen;
					btnInsertionSort->BackColor = Color::MediumSeaGreen;
					btnMergeSort->BackColor = Color::MediumSeaGreen;
					btnQuickSort->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 5){
					btnBubbleSort->BackColor = Color::MediumSeaGreen;
					btnSelectionSort->BackColor = Color::MediumSeaGreen;
					btnInsertionSort->BackColor = Color::MediumSeaGreen;
					btnMergeSort->BackColor = Color::MediumSeaGreen;
					btnQuickSort->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 6){
					btnBubbleSort->BackColor = Color::MediumSeaGreen;
					btnSelectionSort->BackColor = Color::MediumSeaGreen;
					btnInsertionSort->BackColor = Color::MediumSeaGreen;
					btnMergeSort->BackColor = Color::MediumSeaGreen;
					btnQuickSort->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::MediumSeaGreen;
				}

				if(moduleId == 0){
					btnBubbleSort->BackColor = Color::CornflowerBlue;
					btnBack->Hide();
					btnNext->Show();
					MainPanel->Controls->Clear();
					bubbleSort ^newUserControl = gcnew bubbleSort();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 1){
					btnSelectionSort->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					SelectionSort ^newUserControl = gcnew SelectionSort();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 2){
					btnInsertionSort->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					InsertionSort ^newUserControl = gcnew InsertionSort();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 3){
					btnMergeSort->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					mergesort ^newUserControl = gcnew mergesort();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 4){
					btnQuickSort->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					quicksort ^newUserControl = gcnew quicksort();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 5){
					btnQuiz->BackColor = Color::CornflowerBlue;
					btnNext->Hide();
					btnBack->Show();
					MainPanel->Controls->Clear();
					Quiz ^newUserControl = gcnew Quiz();
					newUserControl->username = username;
					newUserControl->ds_id = 4;
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
					 modulesCompleted = reader->GetInt32(12);
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
					 modulesCompleted = reader->GetInt32(12);
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
			 this->Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MainPanel->Controls->Clear();
			 DiscussionForum ^ discuss = gcnew DiscussionForum;
			 discuss->username=username;
			 discuss->module="Sorting";
			 MainPanel->Controls->Add(discuss);
		 }
};
}
