#pragma once

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for heap_deletion
	/// </summary>
	public ref class heap_deletion : public System::Windows::Forms::UserControl
	{
	public:
		heap_deletion(void)
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
		~heap_deletion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button7;
	protected: 
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(963, 586);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 41);
			this->button7->TabIndex = 30;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &heap_deletion::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(826, 586);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 41);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Resume";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &heap_deletion::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(708, 586);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 41);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Pause";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &heap_deletion::button5_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::Cornsilk;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(54, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1015, 509);
			this->panel1->TabIndex = 27;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(120, 586);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 38);
			this->button3->TabIndex = 26;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &heap_deletion::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(5, 586);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(89, 38);
			this->richTextBox1->TabIndex = 25;
			this->richTextBox1->Text = L"";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &heap_deletion::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(458, 581);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 38);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &heap_deletion::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(343, 581);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(89, 38);
			this->richTextBox2->TabIndex = 31;
			this->richTextBox2->Text = L"";
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &heap_deletion::timer2_Tick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(50, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1019, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Note: Input Cannot Be Added Once Deletion Starts.Using Reset Or Deleting All Elem" 
				L"ents,Input Can be Given Again\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &heap_deletion::label1_Click);
			// 
			// heap_deletion
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1105, 670);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->ForeColor = System::Drawing::Color::Transparent;
//			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"heap_deletion";
			this->Text = L"heap_deletion";
			this->Load += gcnew System::EventHandler(this, &heap_deletion::heap_deletion_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:

		int box_length;
		int box_width;
		int start_x;
		int start_y;
		int heapsize;
		int x;
		int id;
		int input;
		int timer_variable;
		int timer2_variable;
		int timer2_id;
		int timer2_min;
		int heap_del_size;

		System::Collections::Generic::List<int> input_array;
		System::Collections::Generic::List<int> input_id;



		void print(int a,int y){

			//987654321 is the value for not showing
			if(input_array[a]==987654321)return;

			Label ^newLabel = gcnew Label();
			newLabel->Location = Drawing::Point(x,y);
			newLabel->Size = Drawing::Size(box_length, box_width);
			newLabel->Text = System::Convert::ToString(input_array[a]);
			if(input_id[a]==0){newLabel->BackColor = Color::LightSkyBlue;}
			else if(input_id[a]==1){
				newLabel->BackColor = Color::Orange;
			}
			else{
				newLabel->BackColor = Color::Green;
			}
			newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
			newLabel->TextAlign = ContentAlignment::MiddleCenter;
			newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
			panel1->Controls->Add(newLabel);
		}



		void calculate_size(){
			box_length=50;
			box_width= 50;

			start_x=50;
			start_y=100;
			//start position is: 315,85
			//size of panel is : 1100,700
			//For initialising input array

		}

		bool inputValidate(System::String ^input){
			try{
				int input_ele = int::Parse(input);
				calculate_size();
				return true;
			}
			catch(...){
				MessageBox::Show("Input Entered is not correct");

			}
			return false;
		}

		int min(int a,int b){
			if(a>input_array.Count-1)return b;
			else if (b>input_array.Count-1)return a;
			else if(input_array[a]>input_array[b])return b;
			else return a;
		}

		int parent(int i){
			return ((i+1)/2)-1;
		}

		int left(int i){
			return 2*i+1;
		}

		int right(int i){
			return 2*i+2;
		}


		void print_array(int root, int space)  
		{  
			// Base case  
			if (root >=input_array.Count)  return;  
			int y=50;
			// Increase distance between levels  
			space += 1;  

			// Process right child first  
			print_array(right(root), space);  

			// Print current node after space  
			// count	
			x=x+50; 
			for (int i = 1; i < space; i++){y=y+50;} 
			print(root,y);

			// Process left child  
			print_array(left(root), space);  
		}  



	private: System::Void heap_deletion_Load(System::Object^  sender, System::EventArgs^  e) {
				 button5->Enabled=false;
				 button6->Enabled=false;
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^s=richTextBox1->Text;
				 bool check=inputValidate(s);
				 richTextBox1->Text="";
				 if(check){
					 input = int::Parse(s);
					 heap_del_size++;
					 panel1->Controls->Clear();
					 x=start_x;
					 print_array(0,0);
					 button3->Enabled=false;
					 button1->Enabled=false;	
					 timer_variable = input_array.Count;
					 timer1->Enabled=true;
					 id=0;
				 }
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(id==0){
					 id=1;
					 input_array.Add(input);
					 input_id.Add(0);

					 panel1->Controls->Clear();
					 x=start_x;
					 print_array(0,0);
				 }
				 else if(id==1){
					 panel1->Controls->Clear();
					 x=start_x;
					 print_array(0,0);

					 if(timer_variable == 0 || input_array[parent(timer_variable)] <= input_array[timer_variable]){
						 timer1->Enabled=false;
						 button5->Enabled=false;
						 button3->Enabled=true;
						 button6->Enabled=false;
						 button1->Enabled=true;
						 return;
					 }

					 input_id[parent(timer_variable)]=1;
					 input_id[timer_variable]=1;
					 id=2;
				 }
				 else{
					 panel1->Controls->Clear();
					 x=start_x;
					 print_array(0,0);

					 int temp=input_array[parent(timer_variable)];
					 input_array[parent(timer_variable)]=input_array[timer_variable];
					 input_array[timer_variable]=temp;

					 input_id[parent(timer_variable)]=0;
					 input_id[timer_variable]=0;

					 timer_variable=parent(timer_variable);
					 id=1;
				 }
			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer2->Enabled = false;
				 panel1->Controls->Clear();
				 input_array.Clear();
				 input_id.Clear();
				 button3->Enabled=true;
				 heap_del_size=0;
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer2->Enabled=true;
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer2->Enabled=false;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 button3->Enabled=false;
				 if(heap_del_size==0){
					 richTextBox2->Text="";
					 MessageBox::Show("The array is Empty.Add Something");
					 button3->Enabled=true;
					 return;
				 }


				 String ^s=richTextBox2->Text;
				 bool check=inputValidate(s);
				 richTextBox2->Text="";
				 if(check){
					 input = int::Parse(s);
					 for(int i=0;i<input_array.Count;i++){
						 if(input_array[i]==input){

							 if(heap_del_size==1){	
								 timer2->Enabled=false;
								 timer1->Enabled=false;
								 input_array.Clear();
								 input_id.Clear();
								 panel1->Controls->Clear();
								 heap_del_size=0;
								 button3->Enabled=true;
								 return;
							 }

							 heap_del_size--;
							 input_id[i]=2;
							 timer2->Enabled=true;
							 panel1->Controls->Clear();
							 x=start_x;
							 print_array(0,0);	
							 timer2_id=0;
							 timer2_variable=i;

							 button5->Enabled=true;
							 button6->Enabled=true;
							 button3->Enabled=false;
							 button1->Enabled=false;
							 timer2->Enabled=true;
							 return;
						 }
					 }
					 MessageBox::Show("Entered Element is not present in the heap,Try Again");
				 }

			 }
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(timer2_id==0){
					 panel1->Controls->Clear();
					 x=start_x;
					 print_array(0,0);

					 if ( (left(timer2_variable) > input_array.Count-1) && (right(timer2_variable) > input_array.Count-1)){
						 timer2->Enabled=false;
						 button5->Enabled=false;
						 button6->Enabled=false;
						 button1->Enabled=true;
						 input_array[timer2_variable]=987654321;
						 panel1->Controls->Clear();
						 x=start_x;
						 print_array(0,0);
						 return;
					 }

					 if((left(timer2_variable)<=input_array.Count-1) && (right(timer2_variable) > input_array.Count-1)){
						 if(input_array[left(timer2_variable)]==987654321){
							 timer2->Enabled=false;
							 button5->Enabled=false;
							 button6->Enabled=false;
							 button1->Enabled=true;
							 input_array[timer2_variable]=987654321;
							 panel1->Controls->Clear();
							 x=start_x;
							 print_array(0,0);
							 return;
						 }
					 }

					 if((left(timer2_variable)>input_array.Count-1) && (right(timer2_variable) <= input_array.Count-1)){
						 if(input_array[right(timer2_variable)]==987654321){
							 timer2->Enabled=false;
							 button5->Enabled=false;
							 button6->Enabled=false;
							 button1->Enabled=true;
							 input_array[timer2_variable]=987654321;
							 panel1->Controls->Clear();
							 x=start_x;
							 print_array(0,0);
							 return;
						 }
					 }

					 if((left(timer2_variable)<=input_array.Count-1) && (right(timer2_variable) <= input_array.Count-1)){
						 if((input_array[left(timer2_variable)]==987654321) && (input_array[right(timer2_variable)]==987654321)){
							 timer2->Enabled=false;
							 button5->Enabled=false;
							 button6->Enabled=false;
							 button1->Enabled=true;
							 input_array[timer2_variable]=987654321;
							 panel1->Controls->Clear();
							 x=start_x;
							 print_array(0,0);
							 return;
						 }
					 }

					 timer2_min =min(left(timer2_variable),right(timer2_variable));


					 input_id[timer2_min]=1;
					 input_id[timer2_variable]=1;
					 timer2_id=1;
				 }
				 else if(timer2_id==1){
					 panel1->Controls->Clear();
					 x=start_x;
					 print_array(0,0);

					 int temp=input_array[timer2_variable];
					 input_array[timer2_variable]=input_array[timer2_min];
					 input_array[timer2_min]=temp;

					 input_id[timer2_min]=0;
					 input_id[timer2_variable]=0;

					 timer2_variable=timer2_min;
					 timer2_id=0;
				 }


			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
