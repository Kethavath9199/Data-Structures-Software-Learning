#pragma once

using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for UI_Circular_Queue_Animation
	/// </summary>
	public ref class UI_Circular_Queue_Animation : public System::Windows::Forms::UserControl
	{
	public:
		UI_Circular_Queue_Animation(void)
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
		~UI_Circular_Queue_Animation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  dqbtn;
	protected: 
	private: System::Windows::Forms::Button^  enqbtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  enqtext;
	private: System::Windows::Forms::Panel^  arrayAnimationPanel;


	private: System::Windows::Forms::Label^  lblErrorMessage;


	private: System::Windows::Forms::Label^  dqelemlbl;
	private: System::Windows::Forms::RadioButton^  arraybtn;

	private: System::Windows::Forms::RadioButton^  llbtn;
	private: System::Windows::Forms::Panel^  llAnimationPanel;




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
			this->dqbtn = (gcnew System::Windows::Forms::Button());
			this->enqbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->enqtext = (gcnew System::Windows::Forms::TextBox());
			this->arrayAnimationPanel = (gcnew System::Windows::Forms::Panel());
			this->llAnimationPanel = (gcnew System::Windows::Forms::Panel());
			this->lblErrorMessage = (gcnew System::Windows::Forms::Label());
			this->dqelemlbl = (gcnew System::Windows::Forms::Label());
			this->arraybtn = (gcnew System::Windows::Forms::RadioButton());
			this->llbtn = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// dqbtn
			// 
			this->dqbtn->BackColor = System::Drawing::Color::Black;
			this->dqbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dqbtn->ForeColor = System::Drawing::Color::White;
			this->dqbtn->Location = System::Drawing::Point(556, 469);
			this->dqbtn->Name = L"dqbtn";
			this->dqbtn->Size = System::Drawing::Size(90, 35);
			this->dqbtn->TabIndex = 9;
			this->dqbtn->Text = L"Dequeue";
			this->dqbtn->UseVisualStyleBackColor = false;
			this->dqbtn->Click += gcnew System::EventHandler(this, &UI_Circular_Queue_Animation::dqbtn_Click);
			// 
			// enqbtn
			// 
			this->enqbtn->BackColor = System::Drawing::Color::Black;
			this->enqbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->enqbtn->ForeColor = System::Drawing::Color::White;
			this->enqbtn->Location = System::Drawing::Point(435, 469);
			this->enqbtn->Name = L"enqbtn";
			this->enqbtn->Size = System::Drawing::Size(90, 35);
			this->enqbtn->TabIndex = 8;
			this->enqbtn->Text = L"Enqueue";
			this->enqbtn->UseVisualStyleBackColor = false;
			this->enqbtn->Click += gcnew System::EventHandler(this, &UI_Circular_Queue_Animation::enqbtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(128, 472);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 34);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Enter Element to \r\nbe Enqueued";
			// 
			// enqtext
			// 
			this->enqtext->Location = System::Drawing::Point(281, 472);
			this->enqtext->Name = L"enqtext";
			this->enqtext->Size = System::Drawing::Size(108, 22);
			this->enqtext->TabIndex = 6;
			// 
			// arrayAnimationPanel
			// 
			this->arrayAnimationPanel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->arrayAnimationPanel->Location = System::Drawing::Point(16, 78);
			this->arrayAnimationPanel->Name = L"arrayAnimationPanel";
			this->arrayAnimationPanel->Size = System::Drawing::Size(1001, 365);
			this->arrayAnimationPanel->TabIndex = 5;
			this->arrayAnimationPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UI_Circular_Queue_Animation::arrayAnimationPanel_Paint);
			// 
			// llAnimationPanel
			// 
			this->llAnimationPanel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->llAnimationPanel->Location = System::Drawing::Point(13, 81);
			this->llAnimationPanel->Name = L"llAnimationPanel";
			this->llAnimationPanel->Size = System::Drawing::Size(1001, 365);
			this->llAnimationPanel->TabIndex = 16;
			// 
			// lblErrorMessage
			// 
			this->lblErrorMessage->AutoSize = true;
			this->lblErrorMessage->BackColor = System::Drawing::Color::Transparent;
			this->lblErrorMessage->Location = System::Drawing::Point(766, 475);
			this->lblErrorMessage->Name = L"lblErrorMessage";
			this->lblErrorMessage->Size = System::Drawing::Size(0, 17);
			this->lblErrorMessage->TabIndex = 10;
			// 
			// dqelemlbl
			// 
			this->dqelemlbl->AutoSize = true;
			this->dqelemlbl->BackColor = System::Drawing::Color::Transparent;
			this->dqelemlbl->Location = System::Drawing::Point(128, 556);
			this->dqelemlbl->Name = L"dqelemlbl";
			this->dqelemlbl->Size = System::Drawing::Size(0, 17);
			this->dqelemlbl->TabIndex = 13;
			// 
			// arraybtn
			// 
			this->arraybtn->AutoSize = true;
			this->arraybtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->arraybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->arraybtn->Location = System::Drawing::Point(174, 40);
			this->arraybtn->Name = L"arraybtn";
			this->arraybtn->Size = System::Drawing::Size(62, 22);
			this->arraybtn->TabIndex = 14;
			this->arraybtn->TabStop = true;
			this->arraybtn->Text = L"Array";
			this->arraybtn->UseVisualStyleBackColor = true;
			this->arraybtn->CheckedChanged += gcnew System::EventHandler(this, &UI_Circular_Queue_Animation::arraybtn_CheckedChanged);
			// 
			// llbtn
			// 
			this->llbtn->AutoSize = true;
			this->llbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->llbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->llbtn->Location = System::Drawing::Point(545, 40);
			this->llbtn->Name = L"llbtn";
			this->llbtn->Size = System::Drawing::Size(98, 22);
			this->llbtn->TabIndex = 15;
			this->llbtn->TabStop = true;
			this->llbtn->Text = L"Linked List";
			this->llbtn->UseVisualStyleBackColor = true;
			this->llbtn->CheckedChanged += gcnew System::EventHandler(this, &UI_Circular_Queue_Animation::llbtn_CheckedChanged);
			// 
			// UI_Circular_Queue_Animation
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->arrayAnimationPanel);
			this->Controls->Add(this->llAnimationPanel);
			this->Controls->Add(this->llbtn);
			this->Controls->Add(this->arraybtn);
			this->Controls->Add(this->dqelemlbl);
			this->Controls->Add(this->lblErrorMessage);
			this->Controls->Add(this->dqbtn);
			this->Controls->Add(this->enqbtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->enqtext);
			this->Name = L"UI_Circular_Queue_Animation";
			this->Size = System::Drawing::Size(1105, 670);
			this->Load += gcnew System::EventHandler(this, &UI_Circular_Queue_Animation::UI_Circular_Queue_Animation_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		int maxInputs;
		int maxLength;
		int startX;
		int startY;
		int boxWidth;
		int boxHeight;
		int front;
		int rear;
		int smallarrowh ; 
		int smallarroww;
		System::Collections::Generic::List<System::String ^> input;
		int searchInput;
		System::Collections::Generic::List<Label ^> labelList;
		System::Collections::Generic::List<PictureBox ^> arrowList;
		int id;
		PictureBox ^frontarrow;
		PictureBox ^reararrow;
		int arrowHeight;
		Label ^RearLabel;
		Label ^FrontLabel;
		Label ^Head;
		PictureBox ^nullarrow;
		bool ll;


		bool inputValidate(System::String ^textinput){
			lblErrorMessage->Text = "";
			if(input.Count >= maxInputs){
				lblErrorMessage->Text = "You have reached end of Queue";
				return false;
			}
			if(textinput->Length > maxLength){
				lblErrorMessage->Text = "Max number of elements in queue reached";
				return false;
			}

			if(textinput == ""){
				lblErrorMessage->Text = "Enter an input value first.";
				return false;
			}
			else if(textinput->Length > maxLength){
				lblErrorMessage->Text = "Limit exceeded. Please enter a smaller number";
				return false;
			}

			for(int i = 0; i < textinput->Length; i++){
				if(textinput[i] < '0' || textinput[i] > '9'){
					lblErrorMessage->Text = "Invalid input. Please enter an integer.";
					return false;
				}
			}

			return true;
		}

	private: System::Void LinearSearch_Load(System::Object^  sender, System::EventArgs^  e) {


			 }
			 void EnqueueArray()
			 {
				 labelList[rear]->Text = enqtext->Text;
				 labelList[rear]->BackColor = Color::PeachPuff;
			 }
			 void EnqueueLL()
			 {		
				 int last = labelList.Count;
				 Label ^newLabel = gcnew Label();
				 newLabel->Location = Drawing::Point(startX+(last+1)*(boxWidth+smallarroww*1.5), startY);
				 newLabel->Size = Drawing::Size(boxWidth, boxHeight);
				 newLabel->Text = enqtext->Text;
				 newLabel->BackColor = Color::PeachPuff;
				 newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
				 newLabel->TextAlign = ContentAlignment::MiddleCenter;
				 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				 labelList.Add(newLabel);
				 llAnimationPanel->Controls->Add(newLabel);

				 PictureBox ^newarrow = gcnew PictureBox();
				 newarrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowright.png";
				 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowright.png");
				 newarrow->SizeMode = PictureBoxSizeMode::StretchImage;
				 newarrow->Size = Drawing::Size(smallarrowh,smallarroww);
				 newarrow->Location = Drawing::Point(startX+(last+2)*(boxWidth+smallarroww*1.5)-smallarroww*1.5, startY+3*boxWidth/8);
				 arrowList.Add(newarrow);
				 llAnimationPanel->Controls->Add(newarrow);
				 nullarrow->Location= Drawing::Point(startX + (last+2)*(boxWidth+smallarroww*1.5)-smallarroww*1.5,startY) ;
				 llAnimationPanel->Controls->Add(nullarrow); 

			 }


	private: System::Void enqbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 dqelemlbl->Text ="";
				 // Data Validation
				 bool check = inputValidate(enqtext->Text);

				 if(check){
					 // Enter input into animation
					 if(ll == true)
					 {
						 EnqueueLL();
						 input.Add(enqtext->Text);
						 enqtext->Text = "";
					 }
					 else
					 {
						 if((rear +1)%maxInputs == front)
						 {
							 lblErrorMessage->Text = "You have reached end of Queue";
						 }
						 else
						 {
							 EnqueueArray();	
							 rear++;
							 rear= rear%maxInputs;
							 input.Add(enqtext->Text);
							 enqtext->Text = "";
						 }

					 }
				 }

				 setpointers();
			 }

			 void initializeArray(){
				 for (int i = 0 ;i < maxInputs;i++)
				 {
					 Label ^newLabel = gcnew Label();
					 newLabel->Location = Drawing::Point(startX+i*boxWidth, startY);
					 newLabel->Size = Drawing::Size(boxWidth, boxHeight);
					 newLabel->Text = "";
					 newLabel->BackColor = Color::LightSkyBlue;
					 newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
					 newLabel->TextAlign = ContentAlignment::MiddleCenter;
					 newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 labelList.Add(newLabel);
					 arrayAnimationPanel->Controls->Add(newLabel);

					 Label ^newLabel2 = gcnew Label();
					 newLabel2->Location = Drawing::Point(startX+i*boxWidth, startY + boxHeight);
					 newLabel2->Size = Drawing::Size(boxWidth, boxHeight/2);
					 newLabel2->Text = i.ToString();
					 newLabel2->BackColor = Color::Transparent;
					 newLabel2->BorderStyle = Windows::Forms::BorderStyle::None;
					 newLabel2->TextAlign = ContentAlignment::MiddleCenter;
					 newLabel2->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					 arrayAnimationPanel->Controls->Add(newLabel2);
				 }

			 }

			 void setArray()
			 {
				 frontarrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png";
				 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png");
				 frontarrow->SizeMode = PictureBoxSizeMode::StretchImage;
				 frontarrow->Size = Drawing::Size(boxWidth, arrowHeight);
				 frontarrow->Location = Drawing::Point(startX+front*boxWidth, startY-arrowHeight);
				 arrayAnimationPanel->Controls->Add(frontarrow);

				 reararrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png";
				 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png");
				 reararrow->SizeMode = PictureBoxSizeMode::StretchImage;
				 reararrow->Size = Drawing::Size(boxWidth, arrowHeight);
				 reararrow->Location = Drawing::Point(startX+rear*boxWidth, startY-arrowHeight);
				 arrayAnimationPanel->Controls->Add(reararrow);

				 System::String ^st = "Front";
				 System::String ^st2 = "Rear";

				 if(front== rear)
				 {
					 st = "Front/Rear";
					 st2 = "Front/Rear";
				 }

				 FrontLabel->Location = Drawing::Point(startX+front*boxWidth, 0);
				 FrontLabel->Size = Drawing::Size(boxWidth, boxHeight);
				 FrontLabel->Text = st;
				 FrontLabel->BackColor = Color::Transparent;
				 FrontLabel->BorderStyle = Windows::Forms::BorderStyle::None;
				 FrontLabel->TextAlign = ContentAlignment::MiddleCenter;
				 FrontLabel->Font = gcnew Drawing::Font("Comic Sans MS", 10, FontStyle::Regular);
				 arrayAnimationPanel->Controls->Add(FrontLabel);

				 RearLabel->Location = Drawing::Point(startX+rear*boxWidth, 0);
				 RearLabel->Size = Drawing::Size(boxWidth, boxHeight);
				 RearLabel->Text = st2;
				 RearLabel->BackColor = Color::Transparent;
				 RearLabel->BorderStyle = Windows::Forms::BorderStyle::None;
				 RearLabel->TextAlign = ContentAlignment::MiddleCenter;
				 RearLabel->Font = gcnew Drawing::Font("Comic Sans MS", 10, FontStyle::Regular);
				 arrayAnimationPanel->Controls->Add(RearLabel);

			 }

			 void setLL()
			 {
				 int last= labelList.Count;
				 if(last != 0)
				 {
					 frontarrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png";
					 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png");
					 frontarrow->SizeMode = PictureBoxSizeMode::StretchImage;
					 frontarrow->Size = Drawing::Size(boxWidth, arrowHeight);
					 frontarrow->Location = Drawing::Point(startX+boxWidth + smallarroww*1.5, startY-arrowHeight);
					 llAnimationPanel->Controls->Add(frontarrow);

					 reararrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png";
					 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowqueue.png");
					 reararrow->SizeMode = PictureBoxSizeMode::StretchImage;
					 reararrow->Size = Drawing::Size(boxWidth, arrowHeight);
					 reararrow->Location = Drawing::Point(startX+last*(boxWidth + 1.5*smallarroww), startY-arrowHeight);
					 llAnimationPanel->Controls->Add(reararrow);

					 System::String ^st = "Front";
					 System::String ^st2 = "Rear";

					 if(last== 1)
					 {
						 st = "Front/Rear";
						 st2 = "Front/Rear";
					 }

					 FrontLabel->Location = Drawing::Point(startX+boxWidth + smallarroww*1.5, 0);
					 FrontLabel->Size = Drawing::Size(boxWidth, boxHeight);
					 FrontLabel->Text = st;
					 FrontLabel->BackColor = Color::Transparent;
					 FrontLabel->BorderStyle = Windows::Forms::BorderStyle::None;
					 FrontLabel->TextAlign = ContentAlignment::MiddleCenter;
					 FrontLabel->Font = gcnew Drawing::Font("Comic Sans MS", 10, FontStyle::Regular);
					 llAnimationPanel->Controls->Add(FrontLabel);

					 RearLabel->Location = Drawing::Point(startX+last*(boxWidth + 1.5*smallarroww), 0);
					 RearLabel->Size = Drawing::Size(boxWidth, boxHeight);
					 RearLabel->Text = st2;
					 RearLabel->BackColor = Color::Transparent;
					 RearLabel->BorderStyle = Windows::Forms::BorderStyle::None;
					 RearLabel->TextAlign = ContentAlignment::MiddleCenter;
					 RearLabel->Font = gcnew Drawing::Font("Comic Sans MS", 10, FontStyle::Regular);
					 llAnimationPanel->Controls->Add(RearLabel);
				 }
				 else
				 {
					 llAnimationPanel->Controls->Remove(RearLabel);
					 llAnimationPanel->Controls->Remove(FrontLabel);
					 llAnimationPanel->Controls->Remove(reararrow);
					 llAnimationPanel->Controls->Remove(frontarrow);
				 }
			 }
			 void setpointers(){
				 if(ll == true)
				 {
					 setLL();

				 }
				 else
				 {
					 setArray();	
				 }
			 }
			 void DequeueArray()
			 {
				 labelList[front]->Text = "";
				 labelList[front]->BackColor = Color::LightSkyBlue;

			 }

			 void DequeueLL()
			 {
				 llAnimationPanel->Controls->Remove(labelList[0]);
				 llAnimationPanel->Controls->Remove(arrowList[0]);
				 labelList.RemoveAt(0);
				 arrowList.RemoveAt(0);
				 int i ;
				 for( i = 0 ; i < labelList.Count ; i++)
				 {
					 labelList[i]->Location = Drawing::Point(startX+(i+1)*(boxWidth+smallarroww*1.5), startY);
				 }
				 nullarrow->Location = Drawing::Point(startX+(i+1)*(boxWidth+smallarroww*1.5)-smallarroww*1.5, startY);
				 for( i = 0 ; i < arrowList.Count ; i++)
				 {
					 arrowList[i]->Location = Drawing::Point(startX+(i+2)*(boxWidth+smallarroww*1.5)-smallarroww*1.5, startY+3*boxWidth/8);;
				 }

			 }

	private: System::Void dqbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblErrorMessage->Text = "";
				 if(input.Count<=0)
				 {	
					 lblErrorMessage->Text = "Queue is empty!";
				 }
				 else{
					 dqelemlbl->Text = "Dequeued Element: " + input[0];
					 if(ll == true)
					 {
						 DequeueLL();

					 }
					 else
					 {
						 DequeueArray();	
						 front++;
						 front=front%maxInputs;
					 }
					 input[0] = "";
					 input.RemoveAt(0);

				 }
				 setpointers();
			 }
			 void ArrayBase()
			 {	
				 arrayAnimationPanel->Controls->Clear();
				 rear = 0;
				 front = 0;
				 boxHeight = 60;
				 boxWidth = 60;
				 labelList.Clear();
				 startX = 10;
				 startY = 2*boxHeight;
				 searchInput = -1;
				 id = -1;
				 arrowHeight = 75;
				 frontarrow = gcnew PictureBox();
				 reararrow = gcnew PictureBox();
				 initializeArray();
				 FrontLabel = gcnew Label();
				 RearLabel = gcnew Label();
				 setpointers();
				 lblErrorMessage->Text= input.Count.ToString();
				 for(int i=0;i<input.Count;i++ )
				 {
					 lblErrorMessage->Text= i.ToString();
					 enqtext->Text=input[i];
					 EnqueueArray();
					 rear++;
				 }
				 enqtext->Text="";
				 setpointers();
			 }

			 void LLBase()
			 {
				 llAnimationPanel->Controls->Clear();
				 arrowList.Clear();
				 boxHeight = 60;
				 boxWidth = 60;
				 smallarroww= boxWidth/4;
				 smallarrowh = boxHeight/3;
				 labelList.Clear();
				 startX = 10;
				 startY = 2*boxHeight;
				 searchInput = -1;
				 id = -1;
				 arrowHeight = 75;
				 frontarrow = gcnew PictureBox();
				 reararrow = gcnew PictureBox();
				 FrontLabel = gcnew Label();
				 RearLabel = gcnew Label();
				 Head =gcnew Label();
				 nullarrow = gcnew PictureBox();

				 Head->Location = Drawing::Point(startX, startY);
				 Head->Size = Drawing::Size(boxWidth, boxHeight);
				 Head->Text = "Head";
				 Head->BackColor = Color::Transparent;
				 Head->BorderStyle = Windows::Forms::BorderStyle::None;
				 Head->TextAlign = ContentAlignment::MiddleCenter;
				 Head->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				 llAnimationPanel->Controls->Add(Head);

				 PictureBox ^newarrow = gcnew PictureBox();
				 newarrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowright.png";
				 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\arrowright.png");
				 newarrow->SizeMode = PictureBoxSizeMode::StretchImage;
				 newarrow->Size = Drawing::Size(smallarrowh,smallarroww);
				 newarrow->Location = Drawing::Point(startX+boxWidth, startY+3*boxWidth/8);
				 llAnimationPanel->Controls->Add(newarrow);

				 nullarrow = gcnew PictureBox();
				 nullarrow->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\null.png";
				 Debug::WriteLine(IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\null.png");
				 nullarrow->SizeMode = PictureBoxSizeMode::StretchImage;
				 nullarrow->Size = Drawing::Size(boxHeight,boxWidth);
				 nullarrow->Location = Drawing::Point(startX+boxWidth, startY);
				 llAnimationPanel->Controls->Add(nullarrow);
				 enqtext->Text= input.Count.ToString();

				 for(int i=0;i<input.Count;i++ )
				 {
					 enqtext->Text=input[i];
					 EnqueueLL();
				 }
				 enqtext->Text="";
				 setpointers();
			 }

	private: System::Void UI_Circular_Queue_Animation_Load(System::Object^  sender, System::EventArgs^  e) {

				 maxInputs =9;
				 maxLength = 5;
				 arraybtn->Checked = true;

			 }



	private: System::Void arraybtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 dqelemlbl->Text ="";
				 if(arraybtn->Checked ==true)
				 {
					 arrayAnimationPanel->Show();
					 llAnimationPanel->Hide();
					 ll=false;
					 ArrayBase();

				 }
				 else
				 {
					 llAnimationPanel->Show();
					 arrayAnimationPanel->Hide();
					 ll = true;
					 LLBase();

				 }

			 }
	private: System::Void llbtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void arrayAnimationPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	};
}