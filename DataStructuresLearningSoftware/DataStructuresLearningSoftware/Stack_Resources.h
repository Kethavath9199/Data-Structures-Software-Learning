#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for Stack_Resources
	/// </summary>
	public ref class Stack_Resources : public System::Windows::Forms::UserControl
	{
	public:
		Stack_Resources(void)
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
		~Stack_Resources()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  heading;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	//public: System::Diagnostics::Process p = gcnew System::Diagnostics::Process();  
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Stack_Resources::typeid));
			this->heading = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// heading
			// 
			this->heading->AutoSize = true;
			this->heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->heading->Location = System::Drawing::Point(373, 27);
			this->heading->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->heading->Name = L"heading";
			this->heading->Size = System::Drawing::Size(294, 31);
			this->heading->TabIndex = 1;
			this->heading->Text = L"Resources for Stacks";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(59, 79);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(1015, 555);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// Stack_Resources
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->heading);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Stack_Resources";
			this->Size = System::Drawing::Size(1105, 670);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	

	private: void richTextBox1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkClickedEventArgs^  e)  
		{  
			// Call Process.Start method to open a browser  
			// with link text as URL.  
			System::Diagnostics::Process::Start("IExplore.exe", e->LinkText);
			
			
		}
	
	/*public: void StopWebProcess()  
		{  
			p.Kill();  
		}*/
#pragma endregion

	};
}
