#pragma once
//#include "Heap.h"
#include "Heap_Deletion.h"
#include "Heap_Insertion.h"
#include "DiscussionForum.h"
#include "Heap_Introduction.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Heap
	/// </summary>
	public ref class Heap : public System::Windows::Forms::Form
	{
	public:
		Heap(void)
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
		~Heap()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  lblWelcome;


	private: System::Windows::Forms::Button^  btnHome;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Heap::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 720);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->button3->Location = System::Drawing::Point(0, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Deletion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Heap::button3_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->button2->Location = System::Drawing::Point(0, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Insertion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Heap::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Introduction";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Heap::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->lblWelcome);
			this->panel2->Controls->Add(this->btnHome);
			this->panel2->Location = System::Drawing::Point(175, 0);
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
			this->button8->TabIndex = 2;
			this->button8->Text = L"Discussion";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Heap::button8_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::Black;
			this->lblWelcome->Location = System::Drawing::Point(242, 15);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(698, 20);
			this->lblWelcome->TabIndex = 15;
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
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 12;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &Heap::btnHome_Click);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(175, 50);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1105, 670);
			this->panel3->TabIndex = 2;
			// 
			// Heap
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Heap";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Heap";
			this->Load += gcnew System::EventHandler(this, &Heap::Heap_Load_1);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			String ^ username;
			String ^fullname;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel3->Controls->Clear();
				 panel3->Controls->Add(gcnew Heap_Introduction);
				 button1->BackColor=Color::PaleTurquoise;
				 button2->BackColor=Color::LightSeaGreen;
				 button3->BackColor=Color::LightSeaGreen;
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel3->Controls->Clear();
			 panel3->Controls->Add(gcnew Heap_Insertion);
			 button1->BackColor=Color::LightSeaGreen;
			 button2->BackColor=Color::PaleTurquoise;
			 button3->BackColor=Color::LightSeaGreen;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel3->Controls->Clear();
			 panel3->Controls->Add(gcnew heap_deletion);
			 button1->BackColor=Color::LightSeaGreen;
			 button2->BackColor=Color::LightSeaGreen;
			 button3->BackColor=Color::PaleTurquoise;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel3->Controls->Clear();
			 DiscussionForum ^ discuss = gcnew DiscussionForum;
			 discuss->username=username;
			 discuss->module="Heap";
			 panel3->Controls->Add(discuss);
		 }
		 private: System::Void Heap_Load(System::Object^  sender, System::EventArgs^  e) {
					  panel3->Controls->Clear();
					  panel3->Controls->Add(gcnew Heap_Introduction);
				  }

private: System::Void Heap_Load_1(System::Object^  sender, System::EventArgs^  e) {
			 panel3->Controls->Clear();
			 panel3->Controls->Add(gcnew Heap_Introduction);

			 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

			 DB_Connection->Open();
			 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
			 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
			 OleDbDataReader ^ reader = cmd->ExecuteReader();
			 if(reader->Read()){
				 fullname = reader->GetString(2);
			 }
			 lblWelcome->Text = "Welcome, "+fullname;

			 DB_Connection->Close();
		 }
private: System::Void btnHome_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		 }
};
}
