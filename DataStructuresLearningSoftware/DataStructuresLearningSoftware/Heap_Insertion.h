#pragma once

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Heap_Insertion : public System::Windows::Forms::UserControl
	{
	public:
		Heap_Insertion(void)
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
		~Heap_Insertion()
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
			this->button7->Location = System::Drawing::Point(957, 572);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 41);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Heap_Insertion::button7_Click);
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
			this->button6->Location = System::Drawing::Point(820, 572);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 41);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Resume";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Heap_Insertion::button6_Click);
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
			this->button5->Location = System::Drawing::Point(702, 572);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 41);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Pause";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Heap_Insertion::button5_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::Cornsilk;
			this->panel1->Location = System::Drawing::Point(54, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1015, 509);
			this->panel1->TabIndex = 21;
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
			this->button3->Location = System::Drawing::Point(145, 579);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 38);
			this->button3->TabIndex = 19;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Heap_Insertion::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(30, 579);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(89, 38);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Heap_Insertion::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1105, 670);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
//			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Heap_Insertion::Heap_Insertion_Load);
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

		System::Collections::Generic::List<int> input_array;
		System::Collections::Generic::List<int> input_id;



		void print(int a,int y){
			Label ^newLabel = gcnew Label();
			newLabel->Location = Drawing::Point(x,y);
			newLabel->Size = Drawing::Size(box_length, box_width);
			newLabel->Text = System::Convert::ToString(input_array[a]);
			if(input_id[a]==0){newLabel->BackColor = Color::LightSkyBlue;}
			else{
				newLabel->BackColor = Color::Orange;
			}
			newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
			newLabel->TextAlign = ContentAlignment::MiddleCenter;
			newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
			panel1->Controls->Add(newLabel);
		}


		void show_array(int start,int length){
			//To Show The heap
			//each level diff is 100

			//cal size,coordinates
			int n=input_array.Count;
			int level=0;
			int l=n;

			while(l!=0){
				level++;
				l=l/2;
			}
			level=level-1;
			int max=1;
			for(int i=0;i<level;i++){max=max*2;}




			//printing the heap
			int x,y,start_level;
			for(int i=start;i<=length;i++){

				l=i+1;
				level=0;
				max=1;
				while(l!=0){
					level++;
					l=l/2;
				}
				level=level-1;
				y=start_y+(level*50);
				for(int k=0;k<level;k++){max=max*2;}

				if(i==0){x=start_x;y=start_y;}
				else {
					x=start_x-(max-1)*box_length+(i+1-max)*(box_length+50);
				}

				Label ^newLabel = gcnew Label();
				newLabel->Location = Drawing::Point(x,y);
				newLabel->Size = Drawing::Size(box_length, box_width);
				newLabel->Text = System::Convert::ToString(input_array[i]);
				newLabel->BackColor = Color::LightSkyBlue;
				newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
				newLabel->TextAlign = ContentAlignment::MiddleCenter;
				newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				panel1->Controls->Add(newLabel);

			}	
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


		void insertKey(int k)		
		{ 

			// First insert the new key at the end
			input_array.Add(k);
			heapsize++;	
			int i = heapsize - 1;		

			// Fix the min heap property if it is violated 
			while (i != 0 && input_array[parent(i)] > input_array[i]) 
			{ 
				int temp=input_array[parent(i)];
				input_array[parent(i)]=input_array[i];
				input_array[i]=temp;
				i = parent(i); 
			}		 
		} 			


	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^s=richTextBox1->Text;
				 bool check=inputValidate(s);
				 richTextBox1->Text="";
				 if(check){
					 input = int::Parse(s);

					 panel1->Controls->Clear();
					 x=start_x;
					 print_array(0,0);
					 button5->Enabled=true;
					 button6->Enabled=true;
					 button3->Enabled=false;
					 heapsize=input_array.Count;
					 timer_variable = heapsize;
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
				 timer1->Enabled = false;
				 panel1->Controls->Clear();
				 input_array.Clear();
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled=true;
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Enabled=false;
			 }
	private: System::Void Heap_Insertion_Load(System::Object^  sender, System::EventArgs^  e) {
				 button5->Enabled=false;
				 button6->Enabled=false;
			 }
	};
}

