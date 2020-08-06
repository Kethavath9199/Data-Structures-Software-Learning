#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for Stack_Animations
	/// </summary>
	public ref class Stack_Animations : public System::Windows::Forms::UserControl
	{
	public:
		Stack_Animations(void)
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
		~Stack_Animations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::RadioButton^  Stack_Array;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Stack_Array = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(477, 573);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 30);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(630, 568);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Pop";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Stack_Animations::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(752, 568);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Push";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Stack_Animations::button2_Click);
			// 
			// Stack_Array
			// 
			this->Stack_Array->AutoSize = true;
			this->Stack_Array->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Stack_Array->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Stack_Array->Location = System::Drawing::Point(215, 63);
			this->Stack_Array->Name = L"Stack_Array";
			this->Stack_Array->Size = System::Drawing::Size(69, 24);
			this->Stack_Array->TabIndex = 4;
			this->Stack_Array->TabStop = true;
			this->Stack_Array->Text = L"Array";
			this->Stack_Array->UseVisualStyleBackColor = true;
			this->Stack_Array->CheckedChanged += gcnew System::EventHandler(this, &Stack_Animations::Stack_Array_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(0, 195);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1088, 309);
			this->panel1->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(874, 568);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 40);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Clear Stack";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Stack_Animations::button3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(215, 105);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(111, 24);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Linked List";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Stack_Animations::radioButton1_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(0, 195);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1105, 309);
			this->panel2->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(212, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 35);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Implement Using";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label2->Location = System::Drawing::Point(396, 576);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Input:";
			// 
			// Stack_Animations
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Stack_Array);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Stack_Animations";
			this->Size = System::Drawing::Size(1105, 670);
			this->Load += gcnew System::EventHandler(this, &Stack_Animations::Stack_Animations_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			public: 
			int numInputs;
            int maxInputs;
            int startX;
            int startY;
            int boxWidth;
            int boxHeight;
            System::Collections::Generic::List<String ^> input;
            int searchInput;
            System::Collections::Generic::List<Label ^> labelList;
            //int id;
            PictureBox ^arrow;
            int arrowHeight;
			Label ^TopLabel;

			//int numInputs_linked;
            //int maxInputs_linked;
            //int maxLength;
            int startX_linked;
            int startY_linked;
            int boxWidth_linked;
            int boxHeight_linked;
			PictureBox ^top_linked_list_arrow;
			Label ^Top_Linked_List_Label;
			PictureBox ^right_arrow;
			System::Collections::Generic::List<Label ^> labelList_linked_list;
			System::Collections::Generic::List<PictureBox ^> arrowlabel_linked_list;
            
private: System::Void Stack_Animations_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				numInputs = 0;
				maxInputs = 15;
				boxHeight = 60;
				boxWidth = 60;
				startX = 80;
				startY = (panel1->Size.Height)/2;

				boxHeight_linked = 40;
				boxWidth_linked = 40;
				startX_linked = 80;
				startY_linked = (panel1->Size.Height)/2;
				arrowHeight = 80;

				 Stack_Array->Checked = true;
				 panel1->Visible = true;
				 panel2->Visible = false;

				 if(Stack_Array->Checked)
				 {
					
					  for(int i=0;i<15;i++)
					{
					 Label ^newLabel = gcnew Label();
					 newLabel->Location = Drawing::Point(startX+i*boxWidth, startY);
                     newLabel->Size = Drawing::Size(boxWidth, boxHeight);
                     newLabel->Text = "";
                     newLabel->BackColor = Color::PeachPuff;
                     newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
                     newLabel->TextAlign = ContentAlignment::MiddleCenter;
                     newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
                     labelList.Add(newLabel);
                     panel1->Controls->Add(newLabel);
                     
					 Label ^indexLabel = gcnew Label();
					 indexLabel->Location = Drawing::Point(startX+i*boxWidth, startY+60);
                     indexLabel->Size = Drawing::Size(boxWidth-20, boxHeight-20);
                     indexLabel->Text = i.ToString();
                     indexLabel->BackColor = Color::White;
                     indexLabel->BorderStyle = Windows::Forms::BorderStyle::None;
                     indexLabel->TextAlign = ContentAlignment::MiddleCenter;
                     indexLabel->Font = gcnew Drawing::Font("Comic Sans MS", 8, FontStyle::Regular);
                     panel1->Controls->Add(indexLabel);
                     }
				 }
				
		 }

		 // push function
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if(numInputs==maxInputs){MessageBox::Show("You have reached maximum limit. Pop some elements to push more.");}
			 else 
			 {
				 int input_len=this->textBox1->Text->Length;int count=0,flag=0;
				 for(int i=0;i<input_len;i++)
				 {
					 if(this->textBox1->Text[i]==' '){count++;flag=1;}
				 }
				 if(flag==1){MessageBox::Show("White spaces are not allowed");}
				else if(count==input_len){MessageBox::Show("White spaces are not allowed");}
				else if(textBox1->Text == "" ){MessageBox::Show("Enter some text/number to push.");}
				else if(textBox1->Text->Length>3){MessageBox::Show("Please enter less than 3 characters.");}
				
				else 
				{
					// for array implementation
					numInputs++;
					labelList[numInputs-1]->Text=textBox1->Text;
					labelList[numInputs-1]->BackColor = Color::Blue;
					input.Add(textBox1->Text);
					textBox1->Text="";

					panel1->Controls->Remove(arrow);
					panel1->Controls->Remove(TopLabel);

					 TopLabel = gcnew Label();
					 TopLabel->Location = Drawing::Point(startX+(numInputs-1)*boxWidth, startY-arrowHeight-30);
                     TopLabel->Size = Drawing::Size(boxWidth, boxHeight);
                     TopLabel->Text = "Top";
                     TopLabel->BackColor = Color::White;
                     TopLabel->BorderStyle = Windows::Forms::BorderStyle::None;
                     TopLabel->TextAlign = ContentAlignment::MiddleCenter;
                     TopLabel->Font = gcnew Drawing::Font("Comic Sans MS", 8, FontStyle::Regular);
					  panel1->Controls->Add(TopLabel);
					  
					 arrow = gcnew PictureBox();
					 arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\icons8-down-arrow-100.png";
                     arrow->SizeMode = PictureBoxSizeMode::StretchImage;
                     arrow->Size = Drawing::Size(boxWidth, arrowHeight);
                     arrow->Location = Drawing::Point(startX+(numInputs-1)*boxWidth, startY-arrowHeight);
					 arrow->Tag = "picture";
                     panel1->Controls->Add(arrow);

					 // for linked list implementation
					 // node
					 Label ^linked_list = gcnew Label();
					 linked_list->Location = Drawing::Point(startX_linked+(numInputs-1)*(boxWidth_linked+20), startY_linked);
                     linked_list->Size = Drawing::Size(boxWidth_linked, boxHeight_linked);
                     linked_list->Text = input[numInputs-1];
                     linked_list->BackColor = Color::Blue;
                     linked_list->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
                     linked_list->TextAlign = ContentAlignment::MiddleCenter;
                     linked_list->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 labelList_linked_list.Add(linked_list);
                     panel2->Controls->Add(linked_list);

					 // right arrow for linked list
					 if(numInputs>1)
					 {
						 right_arrow = gcnew PictureBox();
						 right_arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\icons8-right-50.png";
					
						 right_arrow->SizeMode = PictureBoxSizeMode::StretchImage;
						 right_arrow->Size = Drawing::Size(20, 20);
						 right_arrow->Location = Drawing::Point(startX_linked+(numInputs-1)*(40)+(numInputs-2)*20, startY_linked+10);
						 
						 arrowlabel_linked_list.Add(right_arrow);
						 panel2->Controls->Add(right_arrow);
					 }
					 // top label for linked list
					 panel2->Controls->Remove(top_linked_list_arrow);
					 panel2->Controls->Remove(Top_Linked_List_Label);

					 top_linked_list_arrow = gcnew PictureBox();
					 top_linked_list_arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\icons8-down-arrow-100.png";
					 top_linked_list_arrow->SizeMode = PictureBoxSizeMode::StretchImage;
					 top_linked_list_arrow->Size = Drawing::Size(boxWidth_linked, arrowHeight-10);
					 top_linked_list_arrow->Location = Drawing::Point(startX+(numInputs-1)*(60), startY_linked-arrowHeight);
					 panel2->Controls->Add(top_linked_list_arrow);

					 Top_Linked_List_Label = gcnew Label();
					 Top_Linked_List_Label->Location = Drawing::Point(startX_linked+(numInputs-1)*(60), startY_linked-arrowHeight-30);
                     Top_Linked_List_Label->Size = Drawing::Size(boxWidth_linked, boxHeight_linked);
                     Top_Linked_List_Label->Text ="Top";
                     Top_Linked_List_Label->BackColor = Color::White;
                     Top_Linked_List_Label->BorderStyle = Windows::Forms::BorderStyle::None;
                     Top_Linked_List_Label->TextAlign = ContentAlignment::MiddleCenter;
                     Top_Linked_List_Label->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
                     panel2->Controls->Add(Top_Linked_List_Label);

					 
				}
			}			 
		 }

		 // pop function
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
				    if(numInputs==0)
					{
						MessageBox::Show("Stack is Empty");
					}
					else
					{
						if(numInputs==1)
						{
							input.RemoveAt(numInputs-1);
							// for array
							labelList[numInputs-1]->Text = "";
							labelList[numInputs-1]->BackColor = Color::PeachPuff;
							panel1->Controls->Remove(arrow);
							panel1->Controls->Remove(TopLabel);

							
							// for linked list
							panel2->Controls->Remove(labelList_linked_list[numInputs-1]);
							panel2->Controls->Remove(top_linked_list_arrow);
							panel2->Controls->Remove(Top_Linked_List_Label);
							labelList_linked_list.RemoveAt(0);
							numInputs-=1;
							
							
						}

						else
						{
							input.RemoveAt(numInputs-1);
							// for array
							labelList[numInputs-1]->Text = "";
							labelList[numInputs-1]->BackColor = Color::PeachPuff;
							numInputs-=1; // numInputs is reduced
							panel1->Controls->Remove(arrow);
							panel1->Controls->Remove(TopLabel);
							// top label
							TopLabel = gcnew Label();
							TopLabel->Location = Drawing::Point(startX+(numInputs-1)*boxWidth, startY-arrowHeight-30);
							TopLabel->Size = Drawing::Size(boxWidth, boxHeight);
							TopLabel->Text = "Top";
							TopLabel->BackColor = Color::White;
							TopLabel->BorderStyle = Windows::Forms::BorderStyle::None;
							TopLabel->TextAlign = ContentAlignment::MiddleCenter;
							TopLabel->Font = gcnew Drawing::Font("Comic Sans MS", 8, FontStyle::Regular);
							panel1->Controls->Add(TopLabel);
							// top arrow
							arrow = gcnew PictureBox();
							arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\icons8-down-arrow-100.png";
							arrow->SizeMode = PictureBoxSizeMode::StretchImage;
							arrow->Size = Drawing::Size(boxWidth, arrowHeight);
							arrow->Location = Drawing::Point(startX+(numInputs-1)*boxWidth, startY-arrowHeight);
							arrow->Tag = "picture";
							panel1->Controls->Add(arrow);
							

							// for linked list
							panel2->Controls->Remove(labelList_linked_list[numInputs]);
							panel2->Controls->Remove(arrowlabel_linked_list[numInputs-1]);
							arrowlabel_linked_list.RemoveAt(numInputs-1);
							labelList_linked_list.RemoveAt(numInputs);

							panel2->Controls->Remove(top_linked_list_arrow);
							panel2->Controls->Remove(Top_Linked_List_Label);

							// make new arrow
							top_linked_list_arrow = gcnew PictureBox();
							top_linked_list_arrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\icons8-down-arrow-100.png";
							top_linked_list_arrow->SizeMode = PictureBoxSizeMode::StretchImage;
							top_linked_list_arrow->Size = Drawing::Size(boxWidth_linked, arrowHeight-10);
							top_linked_list_arrow->Location = Drawing::Point(startX+(numInputs-1)*(60), startY_linked-arrowHeight);
							panel2->Controls->Add(top_linked_list_arrow);
							// make new label
							Top_Linked_List_Label = gcnew Label();
							Top_Linked_List_Label->Location = Drawing::Point(startX_linked+(numInputs-1)*(60), startY_linked-arrowHeight-30);
							Top_Linked_List_Label->Size = Drawing::Size(boxWidth_linked, boxHeight_linked);
							Top_Linked_List_Label->Text ="Top";
							Top_Linked_List_Label->BackColor = Color::White;
							Top_Linked_List_Label->BorderStyle = Windows::Forms::BorderStyle::None;
							Top_Linked_List_Label->TextAlign = ContentAlignment::MiddleCenter;
							Top_Linked_List_Label->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
							panel2->Controls->Add(Top_Linked_List_Label);
					  
							
						}
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			
			if(numInputs!=0)
			{
				panel1->Controls->Remove(arrow);
				panel1->Controls->Remove(TopLabel);
				panel2->Controls->Remove(top_linked_list_arrow);
				panel2->Controls->Remove(Top_Linked_List_Label);
				for(int i=0;i<numInputs;i++)
				{
					input.RemoveAt(numInputs-i-1);
					// for array
					labelList[i]->Text="";
					labelList[i]->BackColor = Color::PeachPuff;

					// for linked list
					panel2->Controls->Remove(labelList_linked_list[numInputs-i-1]);
					labelList_linked_list.RemoveAt(numInputs-i-1);
					
					
				}
				if(numInputs>1){for(int i=numInputs-2;i>=0;i--){panel2->Controls->Remove(arrowlabel_linked_list[i]);arrowlabel_linked_list.RemoveAt(i);}}
				numInputs=0;	
			}
			
}
			 
		 
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton1->Checked)
			 {
				 panel1->Visible=false;
				 panel2->Visible=true;
			 }
		 }
private: System::Void Stack_Array_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(Stack_Array->Checked)
			 {
				 panel1->Visible=true;
				 panel2->Visible=false;		
			 }
		 }
};
}
