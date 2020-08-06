#pragma once

#include "DiscussionForum.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DiscussionForum_Main
	/// </summary>
	public ref class DiscussionForum_Main : public System::Windows::Forms::Form
	{
	public:
		DiscussionForum_Main(void)
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
		~DiscussionForum_Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1105, 670);
			this->panel1->TabIndex = 0;
			// 
			// DiscussionForum_Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1121, 673);
			this->Controls->Add(this->panel1);
			this->Name = L"DiscussionForum_Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DiscussionForum_Main";
			this->Load += gcnew System::EventHandler(this, &DiscussionForum_Main::DiscussionForum_Main_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String ^username;
			String ^module;
	private: System::Void DiscussionForum_Main_Load(System::Object^  sender, System::EventArgs^  e) {
				 DiscussionForum ^newPanel = gcnew DiscussionForum();
				 newPanel->username = username;
				 newPanel->module=module;
				 panel1->Controls->Clear();
				 panel1->Controls->Add(newPanel);
			 }
	};
}
