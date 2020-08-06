#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for TopPanel
	/// </summary>
	public ref class TopPanel : public System::Windows::Forms::UserControl
	{
	public:
		TopPanel(void)
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
		~TopPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnLogout;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnBack;

	protected: 

	protected: 


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TopPanel::typeid));
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnLogout
			// 
			this->btnLogout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLogout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnLogout.Image")));
			this->btnLogout->Location = System::Drawing::Point(1038, 0);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(50, 50);
			this->btnLogout->TabIndex = 0;
			this->btnLogout->UseVisualStyleBackColor = true;
			// 
			// btnNext
			// 
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(938, 0);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(50, 50);
			this->btnNext->TabIndex = 1;
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &TopPanel::btnNext_Click);
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
			this->btnBack->TabIndex = 2;
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// btnHome
			// 
			this->btnHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(988, 0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 3;
			this->btnHome->UseVisualStyleBackColor = true;
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
			// TopPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->lblWelcome);
			this->Controls->Add(this->btnHome);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnLogout);
			this->Name = L"TopPanel";
			this->Size = System::Drawing::Size(1088, 50);
			this->Load += gcnew System::EventHandler(this, &TopPanel::TopPanel_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String ^username;
			String ^fullname;
			int modulesCompleted;


	private: System::Void TopPanel_Load(System::Object^  sender, System::EventArgs^  e) {
				 
			 }

	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
};
}
