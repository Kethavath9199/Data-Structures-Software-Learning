#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for UI_Linear_Queue_LL
	/// </summary>
	public ref class UI_Linear_Queue_LL : public System::Windows::Forms::UserControl
	{
	public:
		UI_Linear_Queue_LL(void)
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
		~UI_Linear_Queue_LL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UI_Linear_Queue_LL::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(82, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Linked List Implementation";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Bisque;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.1F));
			this->richTextBox1->Location = System::Drawing::Point(88, 95);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(883, 605);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// UI_Linear_Queue_LL
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"UI_Linear_Queue_LL";
			this->Size = System::Drawing::Size(1105, 670);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
