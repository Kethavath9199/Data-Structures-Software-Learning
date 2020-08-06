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
	/// Summary for BST_introduction
	/// </summary>
	public ref class BST_introduction : public System::Windows::Forms::UserControl
	{
	public:
		BST_introduction(void)
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
		~BST_introduction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  quizPanel;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BST_introduction::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(314, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(746, 220);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(259, 223);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(834, 373);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(127, 630);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(482, 27);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Answer the question correctly to pass the module.";
			// 
			// quizPanel
			// 
			this->quizPanel->AutoScroll = true;
			this->quizPanel->Location = System::Drawing::Point(132, 660);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 28;
			// 
			// BST_introduction
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"BST_introduction";
			this->Size = System::Drawing::Size(1277, 1150);
			this->Load += gcnew System::EventHandler(this, &BST_introduction::BST_introduction_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			String ^ username;
	private: System::Void BST_introduction_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Question Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 newPanel->ds_id = 7;
				 newPanel->module_id = 0;
				 newPanel->username = username;
				 newPanel->update_id = 18;
				 newPanel->update_name = "BSTProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
	};
}
