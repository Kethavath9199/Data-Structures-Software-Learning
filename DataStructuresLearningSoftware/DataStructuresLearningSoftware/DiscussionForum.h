#pragma once
#include<math.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Globalization;

namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for DiscussionForum
	/// </summary>
	public ref class DiscussionForum : public System::Windows::Forms::UserControl
	{
	public:
		DiscussionForum(void)
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
		~DiscussionForum()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  toppanel;
	protected: 






	private: System::Windows::Forms::Panel^  msgpanel;
	private: System::Windows::Forms::Panel^  replypanel;
	private: System::Windows::Forms::ComboBox^  tagcombo;
	private: System::Windows::Forms::Button^  replybtn;
	private: System::Windows::Forms::RichTextBox^  replytxt;
	private: System::Windows::Forms::Panel^  message_detail;

	private: System::Windows::Forms::Button^  filterbtn;
	private: System::Windows::Forms::CheckBox^  stackcheck;
	private: System::Windows::Forms::CheckBox^  queuecheck;
	private: System::Windows::Forms::CheckBox^  sortcheck;
	private: System::Windows::Forms::CheckBox^  searchcheck;
	private: System::Windows::Forms::CheckBox^  llcheck;
	private: System::Windows::Forms::CheckBox^  arrycheck;
	private: System::Windows::Forms::CheckBox^  heapcheck;

	private: System::Windows::Forms::CheckBox^  graphcheck;
	private: System::Windows::Forms::CheckBox^  bstcheck;






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
			this->toppanel = (gcnew System::Windows::Forms::Panel());
			this->heapcheck = (gcnew System::Windows::Forms::CheckBox());
			this->graphcheck = (gcnew System::Windows::Forms::CheckBox());
			this->bstcheck = (gcnew System::Windows::Forms::CheckBox());
			this->stackcheck = (gcnew System::Windows::Forms::CheckBox());
			this->queuecheck = (gcnew System::Windows::Forms::CheckBox());
			this->sortcheck = (gcnew System::Windows::Forms::CheckBox());
			this->searchcheck = (gcnew System::Windows::Forms::CheckBox());
			this->llcheck = (gcnew System::Windows::Forms::CheckBox());
			this->arrycheck = (gcnew System::Windows::Forms::CheckBox());
			this->filterbtn = (gcnew System::Windows::Forms::Button());
			this->message_detail = (gcnew System::Windows::Forms::Panel());
			this->msgpanel = (gcnew System::Windows::Forms::Panel());
			this->replypanel = (gcnew System::Windows::Forms::Panel());
			this->tagcombo = (gcnew System::Windows::Forms::ComboBox());
			this->replybtn = (gcnew System::Windows::Forms::Button());
			this->replytxt = (gcnew System::Windows::Forms::RichTextBox());
			this->toppanel->SuspendLayout();
			this->replypanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// toppanel
			// 
			this->toppanel->BackColor = System::Drawing::Color::White;
			this->toppanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->toppanel->Controls->Add(this->heapcheck);
			this->toppanel->Controls->Add(this->graphcheck);
			this->toppanel->Controls->Add(this->bstcheck);
			this->toppanel->Controls->Add(this->stackcheck);
			this->toppanel->Controls->Add(this->queuecheck);
			this->toppanel->Controls->Add(this->sortcheck);
			this->toppanel->Controls->Add(this->searchcheck);
			this->toppanel->Controls->Add(this->llcheck);
			this->toppanel->Controls->Add(this->arrycheck);
			this->toppanel->Controls->Add(this->filterbtn);
			this->toppanel->Location = System::Drawing::Point(0, 0);
			this->toppanel->Name = L"toppanel";
			this->toppanel->Size = System::Drawing::Size(1104, 31);
			this->toppanel->TabIndex = 0;
			// 
			// heapcheck
			// 
			this->heapcheck->AutoSize = true;
			this->heapcheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->heapcheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->heapcheck->ForeColor = System::Drawing::Color::Black;
			this->heapcheck->Location = System::Drawing::Point(846, 2);
			this->heapcheck->Name = L"heapcheck";
			this->heapcheck->Size = System::Drawing::Size(68, 24);
			this->heapcheck->TabIndex = 10;
			this->heapcheck->Text = L"Heap";
			this->heapcheck->UseVisualStyleBackColor = true;
			// 
			// graphcheck
			// 
			this->graphcheck->AutoSize = true;
			this->graphcheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->graphcheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->graphcheck->ForeColor = System::Drawing::Color::Black;
			this->graphcheck->Location = System::Drawing::Point(766, 2);
			this->graphcheck->Name = L"graphcheck";
			this->graphcheck->Size = System::Drawing::Size(74, 24);
			this->graphcheck->TabIndex = 9;
			this->graphcheck->Text = L"Graph";
			this->graphcheck->UseVisualStyleBackColor = true;
			// 
			// bstcheck
			// 
			this->bstcheck->AutoSize = true;
			this->bstcheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bstcheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bstcheck->ForeColor = System::Drawing::Color::Black;
			this->bstcheck->Location = System::Drawing::Point(685, 2);
			this->bstcheck->Name = L"bstcheck";
			this->bstcheck->Size = System::Drawing::Size(61, 24);
			this->bstcheck->TabIndex = 8;
			this->bstcheck->Text = L"BST";
			this->bstcheck->UseVisualStyleBackColor = true;
			// 
			// stackcheck
			// 
			this->stackcheck->AutoSize = true;
			this->stackcheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->stackcheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->stackcheck->ForeColor = System::Drawing::Color::Black;
			this->stackcheck->Location = System::Drawing::Point(596, 2);
			this->stackcheck->Name = L"stackcheck";
			this->stackcheck->Size = System::Drawing::Size(70, 24);
			this->stackcheck->TabIndex = 7;
			this->stackcheck->Text = L"Stack";
			this->stackcheck->UseVisualStyleBackColor = true;
			// 
			// queuecheck
			// 
			this->queuecheck->AutoSize = true;
			this->queuecheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->queuecheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->queuecheck->ForeColor = System::Drawing::Color::Black;
			this->queuecheck->Location = System::Drawing::Point(489, 3);
			this->queuecheck->Name = L"queuecheck";
			this->queuecheck->Size = System::Drawing::Size(77, 24);
			this->queuecheck->TabIndex = 6;
			this->queuecheck->Text = L"Queue";
			this->queuecheck->UseVisualStyleBackColor = true;
			this->queuecheck->CheckedChanged += gcnew System::EventHandler(this, &DiscussionForum::queuecheck_CheckedChanged);
			// 
			// sortcheck
			// 
			this->sortcheck->AutoSize = true;
			this->sortcheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sortcheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sortcheck->ForeColor = System::Drawing::Color::Black;
			this->sortcheck->Location = System::Drawing::Point(380, 3);
			this->sortcheck->Name = L"sortcheck";
			this->sortcheck->Size = System::Drawing::Size(81, 24);
			this->sortcheck->TabIndex = 5;
			this->sortcheck->Text = L"Sorting";
			this->sortcheck->UseVisualStyleBackColor = true;
			// 
			// searchcheck
			// 
			this->searchcheck->AutoSize = true;
			this->searchcheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->searchcheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchcheck->ForeColor = System::Drawing::Color::Black;
			this->searchcheck->Location = System::Drawing::Point(252, 2);
			this->searchcheck->Name = L"searchcheck";
			this->searchcheck->Size = System::Drawing::Size(103, 24);
			this->searchcheck->TabIndex = 4;
			this->searchcheck->Text = L"Searching";
			this->searchcheck->UseVisualStyleBackColor = true;
			// 
			// llcheck
			// 
			this->llcheck->AutoSize = true;
			this->llcheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->llcheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->llcheck->ForeColor = System::Drawing::Color::Black;
			this->llcheck->Location = System::Drawing::Point(122, 3);
			this->llcheck->Name = L"llcheck";
			this->llcheck->Size = System::Drawing::Size(110, 24);
			this->llcheck->TabIndex = 3;
			this->llcheck->Text = L"Linked List";
			this->llcheck->UseVisualStyleBackColor = true;
			// 
			// arrycheck
			// 
			this->arrycheck->AutoSize = true;
			this->arrycheck->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->arrycheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->arrycheck->ForeColor = System::Drawing::Color::Black;
			this->arrycheck->Location = System::Drawing::Point(35, 3);
			this->arrycheck->Name = L"arrycheck";
			this->arrycheck->Size = System::Drawing::Size(68, 24);
			this->arrycheck->TabIndex = 2;
			this->arrycheck->Text = L"Array";
			this->arrycheck->UseVisualStyleBackColor = true;
			this->arrycheck->CheckedChanged += gcnew System::EventHandler(this, &DiscussionForum::arrycheck_CheckedChanged);
			// 
			// filterbtn
			// 
			this->filterbtn->BackColor = System::Drawing::Color::Black;
			this->filterbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->filterbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->filterbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->filterbtn->ForeColor = System::Drawing::Color::White;
			this->filterbtn->Location = System::Drawing::Point(941, -1);
			this->filterbtn->Name = L"filterbtn";
			this->filterbtn->Size = System::Drawing::Size(114, 31);
			this->filterbtn->TabIndex = 1;
			this->filterbtn->Text = L"Filter";
			this->filterbtn->UseVisualStyleBackColor = false;
			this->filterbtn->Click += gcnew System::EventHandler(this, &DiscussionForum::filterbtn_Click);
			// 
			// message_detail
			// 
			this->message_detail->AutoScroll = true;
			this->message_detail->BackColor = System::Drawing::Color::White;
			this->message_detail->Location = System::Drawing::Point(0, 0);
			this->message_detail->Name = L"message_detail";
			this->message_detail->Size = System::Drawing::Size(1105, 557);
			this->message_detail->TabIndex = 2;
			this->message_detail->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DiscussionForum::message_detail_Paint);
			// 
			// msgpanel
			// 
			this->msgpanel->AutoScroll = true;
			this->msgpanel->BackColor = System::Drawing::Color::White;
			this->msgpanel->Location = System::Drawing::Point(3, 37);
			this->msgpanel->Name = L"msgpanel";
			this->msgpanel->Size = System::Drawing::Size(1105, 527);
			this->msgpanel->TabIndex = 1;
			// 
			// replypanel
			// 
			this->replypanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->replypanel->Controls->Add(this->tagcombo);
			this->replypanel->Controls->Add(this->replybtn);
			this->replypanel->Controls->Add(this->replytxt);
			this->replypanel->Location = System::Drawing::Point(0, 555);
			this->replypanel->Name = L"replypanel";
			this->replypanel->Size = System::Drawing::Size(1104, 110);
			this->replypanel->TabIndex = 1;
			// 
			// tagcombo
			// 
			this->tagcombo->BackColor = System::Drawing::Color::White;
			this->tagcombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->tagcombo->ForeColor = System::Drawing::Color::Black;
			this->tagcombo->FormattingEnabled = true;
			this->tagcombo->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"General", L"Array", L"Linked List", L"Searching", 
				L"Sorting", L"Stack", L"Queue", L"BST", L"Graph", L"Heap"});
			this->tagcombo->Location = System::Drawing::Point(882, 57);
			this->tagcombo->Name = L"tagcombo";
			this->tagcombo->Size = System::Drawing::Size(155, 24);
			this->tagcombo->TabIndex = 2;
			// 
			// replybtn
			// 
			this->replybtn->BackColor = System::Drawing::Color::Black;
			this->replybtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->replybtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->replybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->replybtn->ForeColor = System::Drawing::Color::White;
			this->replybtn->Location = System::Drawing::Point(882, 8);
			this->replybtn->Name = L"replybtn";
			this->replybtn->Size = System::Drawing::Size(155, 43);
			this->replybtn->TabIndex = 1;
			this->replybtn->Text = L"Post";
			this->replybtn->UseVisualStyleBackColor = false;
			this->replybtn->Click += gcnew System::EventHandler(this, &DiscussionForum::replybtn_Click);
			// 
			// replytxt
			// 
			this->replytxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->replytxt->Location = System::Drawing::Point(26, 8);
			this->replytxt->Name = L"replytxt";
			this->replytxt->Size = System::Drawing::Size(831, 90);
			this->replytxt->TabIndex = 0;
			this->replytxt->Text = L"";
			// 
			// DiscussionForum
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Controls->Add(this->message_detail);
			this->Controls->Add(this->replypanel);
			this->Controls->Add(this->toppanel);
			this->Controls->Add(this->msgpanel);
			this->Name = L"DiscussionForum";
			this->Size = System::Drawing::Size(1105, 670);
			this->Load += gcnew System::EventHandler(this, &DiscussionForum::DiscussionForum_Load);
			this->toppanel->ResumeLayout(false);
			this->toppanel->PerformLayout();
			this->replypanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		int startx;
		int starty;
		int messagewidth;
		int widthheight;
		int usernamewidth;
		int datewidth;
		int tagwidth;
		int typewidth;
		int reportwidth;
		int messagebodywidth;
		String ^ reply_message;
		int message_id;
		int Number_of_replies_width;
		String ^ username;
		String ^ designation;
		bool approved ;
		String ^ module;
		System::Collections::Generic::List<System::String ^> filters;
		// on load function

		void loadbase()
		{
			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

			DB_Connection->Open();
			String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
			OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
			OleDbDataReader ^ reader = cmd->ExecuteReader();
			if(reader->Read()){
				designation = reader->GetString(7);
				approved = reader->GetBoolean(6);
			}

			DB_Connection->Close();
			msgpanel->Controls->Clear();
			reply_message="message";
			msgpanel->Visible=true;
			message_detail->Visible=false;
			startx=(msgpanel->Size.Width)*0.125;
			starty=msgpanel->Location.Y;
			messagewidth=(msgpanel->Size.Width)*(0.75);
			tagwidth=(msgpanel->Size.Width)*(0.1)-15;
			usernamewidth=(msgpanel->Size.Width)*(0.10);
			datewidth =(msgpanel->Size.Width)*(0.15);
			typewidth = (msgpanel->Size.Width)*(0.1);
			reportwidth = (msgpanel->Size.Width)*(0.1); 
			Number_of_replies_width=(msgpanel->Size.Width)*(0.10);
			replybtn->Enabled=true;
			bool flag = false;

			// to be done later select a field on load 
			try{
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";
				DB_Connection->Open();
				String ^ readString = "SELECT * FROM Messages ORDER BY [Date&Time] DESC;";
				OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				OleDbDataReader ^ reader = cmd->ExecuteReader();
				while(reader->Read())
				{
					flag = false;
					for(int i = 0; i<filters.Count;i++)
					{
						if(reader->GetString(3) == filters[i])
						{
							flag = true;
						}

					}
					if(flag == true)
					{
						int count=0;
						//this readstring is only for counting number of replies
						String ^ readString = "SELECT * FROM Replies where MessageID="+reader->GetValue(0);
						OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
						OleDbDataReader ^ readercount = cmd->ExecuteReader();
						while(readercount->Read()){count+=1;}

						Panel ^ background=gcnew Panel();
						Label ^ message_text = gcnew Label();
						Label ^ tag_text = gcnew Label();
						Label ^ username_text = gcnew Label();
						Label ^ date_text = gcnew Label();
						Label ^ type_text = gcnew Label();
						PictureBox ^ tag_pic = gcnew PictureBox();
						Label ^ Number_of_replies=gcnew Label();

						tag_pic->Size = Drawing::Size(15,15);
						tag_text->Size = Drawing::Size(tagwidth,15);
						username_text->Size = Drawing::Size(usernamewidth,15);
						date_text->Size = Drawing::Size(datewidth,15);
						type_text->Size = Drawing::Size(typewidth,15);
						background->Size=Drawing::Size(messagewidth,105);
						Number_of_replies->Size=Drawing::Size(Number_of_replies_width,15);

						Number_of_replies->Location = Drawing::Point(startx+10,starty+65);
						date_text->Location = Drawing::Point(startx+usernamewidth,starty+65);
						username_text->Location = Drawing::Point(startx+usernamewidth+datewidth,starty+65);
						type_text->Location = Drawing::Point(startx+2*usernamewidth+datewidth,starty+65);
						tag_pic->Location = Drawing::Point(startx+usernamewidth+typewidth+datewidth+95,starty+65);
						tag_text->Location=Drawing::Point(startx+usernamewidth+typewidth+datewidth+110,starty+65);
						background->Location=Drawing::Point(startx,starty);

						background->SendToBack();
						background->BackColor=Color::White;
						background->BorderStyle=System::Windows::Forms::BorderStyle::FixedSingle;

						Number_of_replies->Text=count.ToString()+" comments";

						username_text->Text = "By: " + reader->GetString(5);
						type_text->Text = reader->GetString(6);
						date_text->Text = "Posted " + System::DateTime::Now.Subtract(reader->GetDateTime(2)).Hours.ToString()+" Hours ago";
						tag_text->Text = " " + reader->GetString(3);
						tag_pic->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\tag.png";
						tag_pic->SizeMode = PictureBoxSizeMode::StretchImage;
						tag_pic->BackColor=Color::White;

						Number_of_replies->BackColor=Color::White;
						username_text->BackColor=Color::White;
						tag_text->BackColor=Color::White;
						date_text->BackColor=Color::White;
						type_text->BackColor=Color::White;

						Number_of_replies->ForeColor=Color::DimGray;
						username_text->ForeColor=Color::DimGray;
						tag_text->ForeColor=Color::DimGray;
						date_text->ForeColor=Color::DimGray;
						type_text->ForeColor=Color::DimGray;


						message_text->AutoEllipsis=true;
						message_text->MaximumSize=Drawing::Size(messagewidth-15,22);
						message_text->AutoSize=true;
						message_text->Text = reader->GetString(1);
						message_text->Size = Drawing::Size(message_text->PreferredWidth,message_text->PreferredHeight);
						message_text->ForeColor=Color::Black;
						message_text->BackColor=Color::White;
						message_text->Font=gcnew System::Drawing::Font("Times New Roman",12,FontStyle::Bold);
						message_text->Location = Drawing::Point(startx+10,starty+30);
						Number_of_replies->Font=gcnew System::Drawing::Font("Arial",8,FontStyle::Underline);


						message_text->Tag = reader->GetValue(0);
						Number_of_replies->Tag=reader->GetValue(0);
						msgpanel->Controls->Add(message_text);

						Number_of_replies->Click += gcnew EventHandler(this,&DiscussionForum::message_text_click);
						message_text->Click  += gcnew EventHandler(this, &DiscussionForum::message_text_click);
						message_text->Cursor= System::Windows::Forms::Cursors::Hand;
						Number_of_replies->Cursor= System::Windows::Forms::Cursors::Hand;

						if(reader->GetString(5)==username)
						{
							//MessageBox::Show(username);
							message_text->ForeColor=System::Drawing::Color::SaddleBrown;
						}
						starty+=105;
						msgpanel->Controls->Add(username_text);
						msgpanel->Controls->Add(type_text);
						msgpanel->Controls->Add(date_text);
						msgpanel->Controls->Add(tag_text);
						msgpanel->Controls->Add(tag_pic);
						msgpanel->Controls->Add(Number_of_replies);
						msgpanel->Controls->Add(background);

					}
				}
			}
			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}




	private: System::Void DiscussionForum_Load(System::Object^  sender, System::EventArgs^  e) {
				 tagcombo->Text=module;
				 if(module=="Array")
				 {
					 arrycheck->Checked=true;
				 }
				 if(module=="Linked List")
				 {
					 llcheck->Checked=true;
				 }
				 if(module=="Searching")
				 {
					 searchcheck->Checked=true;
				 }
				 if(module=="Sorting")
				 {
					 sortcheck->Checked=true;
				 }
				 if(module=="Queue")
				 {
					 queuecheck->Checked=true;
				 }
				 if(module=="Stack")
				 {
					 stackcheck->Checked=true;
				 }
				 if(module=="BST")
				 {
					 bstcheck->Checked=true;
				 }
				 if(module=="Graph")
				 {
					 graphcheck->Checked=true;
				 }
				 if(module=="Heap")
				 {
					 heapcheck->Checked=true;
				 }
				 filterbtn->PerformClick();		

			 }
	public: System::Void message_text_click(System::Object^  sender, System::EventArgs^  e) {

				Label	^ txt = gcnew Label;
				txt = static_cast<Label ^>(sender); 
				message_id = static_cast<int>(txt->Tag);
				refresh_messagebody(message_id);

			}
	public: System::Void message_text_hover(System::Object^  sender, System::EventArgs^  e) {



			}			// function for posting messages and replies
	private: System::Void replybtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(username=="guest")
				 {
					 MessageBox::Show("Login or Sign-up to post this message!!");
				 }
				 else if(replytxt->Text=="")
				 {
					 MessageBox::Show("Empty message");
				 }
				 else{
					 // function for posting message and replies on clicking post button
					 if(reply_message=="message")
					 {
						 DialogResult result = MessageBox::Show("You sure want to post ?", "Post", 
							 MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
						 if(result==DialogResult::Yes)
						 {

							 try{
								 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
								 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

								 // username and designation and to be later on taken from main page
								 String ^ messagetext = replytxt->Text;
								 String ^  date = System::DateTime::Now.ToString();
								 String ^ tag = tagcombo->Text;
								 String ^ closed = "NO";
								 String ^ reportedabuse = "NO";


								 String ^ insertString = "insert into Messages([Message],[Date&Time],[FieldTag],[Closed],[Username],[Designation],[ReportedAbuse]) VALUES('" +messagetext+ "','" + date + "' , '" +tag+ "', '" +closed+ "', '" +username+ "', '" +designation+ "', '" +reportedabuse+ "' );";

								 DB_Connection->Open();

								 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
								 cmd->ExecuteNonQuery();
								 DB_Connection->Close();
								 MessageBox::Show("Your message has been recorded.");
								 replytxt->Text = "";
							 }

							 catch(Exception ^ ex)
							 {
								 MessageBox::Show(ex->Message);
							 }
							loadbase();
						 }
					 }
					 else if(reply_message=="reply")
					 {

						 DialogResult result = MessageBox::Show("You sure want to reply ?", "Post", 
							 MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
						 if(result==DialogResult::Yes)
						 {

							 try{
								 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
								 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

								 // username and designation and to be later on taken from main page
								 String ^ replytext = replytxt->Text;
								 String ^  date = System::DateTime::Now.ToString();
								 int message_id_for_reply = message_id;

								 String ^ closed = "NO";
								 String ^ designation = designation;
								 String ^ reportedabuse = "NO";



								 String ^ insertString = "insert into Replies([MessageID],[UserName],[Reply],[Date&Time],[Designation],[ReportedAbuse]) VALUES(" + message_id_for_reply + ",'" + username + "' , '" + replytext + "', '" + date + "', '" + designation + "', '" + reportedabuse + "' );";

								 DB_Connection->Open();

								 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
								 cmd->ExecuteNonQuery();
								 DB_Connection->Close();
								 MessageBox::Show("Your reply has been recorded.");
								 replytxt->Text = "";
							 }

							 catch(Exception ^ ex)
							 {
								 MessageBox::Show(ex->Message);
							 }
							 refresh_messagebody(message_id);
						 }

					 }


				 }
			 }
			 // function for refreshing message detail page after clicking on post
	public: Void refresh_messagebody(int message_id)
			{
				message_detail->Controls->Clear();
				reply_message="reply";
				msgpanel->Visible=false;
				message_detail->Visible=true;
				try{
					OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";
					DB_Connection->Open();
					String ^ readString = "SELECT * FROM Messages WHERE MessageID=" + message_id ;
					OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
					OleDbDataReader ^ reader = cmd->ExecuteReader();
					reader->Read();



					tagcombo->Visible=false;

					messagebodywidth = (message_detail->Size.Width)*0.75;
					startx = message_detail->Location.X+10;
					starty = message_detail->Location.Y+30;
					String ^ messagebody= reader->GetString(1);

					Label ^ messagetext = gcnew Label();
					Label ^ usernametext = gcnew Label();
					Label ^ datetext = gcnew Label();
					Label ^ typetext = gcnew Label();
					Button ^ reportabuse = gcnew Button();
					Button ^ closethread = gcnew Button();
					Button ^ deletethread = gcnew Button();
					Label ^ replylabel = gcnew Label();
					PictureBox ^ back_button = gcnew PictureBox();


					usernametext->Text = "By: "+reader->GetString(5);
					datetext->Text = "Posted " + System::DateTime::Now.Subtract(reader->GetDateTime(2)).Hours.ToString()+" Hours ago";
					typetext->Text = reader->GetString(6);
					closethread->Text= "Close Thread";
					deletethread->Text= "Delete Thread";
					reportabuse->Text="Report";
					replylabel->Text = "Replies:";

					messagetext->Font=gcnew System::Drawing::Font("Times New Roman",12);
					datetext->Font=gcnew System::Drawing::Font("Arial",8);
					usernametext->Font=gcnew System::Drawing::Font("Arial",8);
					typetext->Font=gcnew System::Drawing::Font("Arial",8);
					reportabuse->Font = gcnew System::Drawing::Font("Arial",8,FontStyle::Underline);
					closethread->Font = gcnew System::Drawing::Font("Arial",8,FontStyle::Underline);
					deletethread->Font = gcnew System::Drawing::Font("Arial",8,FontStyle::Underline);

					deletethread->ForeColor=Color::DimGray;
					reportabuse->ForeColor=Color::DimGray;
					closethread->ForeColor=Color::DimGray;
					datetext->ForeColor=Color::DarkGray;
					usernametext->ForeColor=Color::DarkGray;
					typetext->ForeColor=Color::DarkGray;

					reportabuse->FlatAppearance->BorderSize =0;
					reportabuse->FlatAppearance->BorderColor=Color::White;
					reportabuse->FlatStyle=FlatStyle::Flat;

					deletethread->FlatAppearance->BorderSize =0;
					deletethread->FlatAppearance->BorderColor=Color::White;
					deletethread->FlatStyle=FlatStyle::Flat;

					closethread->FlatAppearance->BorderSize =0;
					closethread->FlatAppearance->BorderColor=Color::White;
					closethread->FlatStyle=FlatStyle::Flat;

					usernametext->Size = Drawing::Size(messagebodywidth*0.1,25);
					datetext->Size = Drawing::Size(messagebodywidth*0.3,25);
					typetext->Size =  Drawing::Size(messagebodywidth*0.1,25);
					reportabuse->Size =  Drawing::Size(messagebodywidth*0.10,25);
					closethread->Size =  Drawing::Size(messagebodywidth*0.15,25);
					deletethread->Size =  Drawing::Size(messagebodywidth*0.15,25);
					messagetext->MaximumSize = Drawing::Size(messagebodywidth,0);
					messagetext->AutoSize=true;
					messagetext->Text = messagebody;
					messagetext->Size = Drawing::Size(messagetext->PreferredWidth,messagetext->PreferredHeight);
					replylabel->Size = Drawing::Size(80,40);
					back_button->Size = Drawing::Size(40,40);

					messagetext->Location = Drawing::Point(startx,starty);
					datetext->Location = Drawing::Point(startx,starty+messagetext->Height+10);
					usernametext->Location = Drawing::Point(startx+messagebodywidth*0.3,starty+messagetext->Height+10);
					typetext->Location = Drawing::Point(startx+messagebodywidth*0.4,starty+messagetext->Height+10);
					reportabuse->Location = Drawing::Point(startx+messagebodywidth*0.5,starty+messagetext->Height+5);
					closethread->Location = Drawing::Point(startx+messagebodywidth*0.62,starty+messagetext->Height+5);
					deletethread->Location = Drawing::Point(startx+messagebodywidth*0.79,starty+messagetext->Height+5);
					replylabel->Location = Drawing::Point(startx,starty+messagetext->Height+60);
					back_button->Location = Drawing::Point(startx+messagebodywidth+120,starty);

					
					back_button->Click  += gcnew EventHandler(this, &DiscussionForum::back_button_Click);
					back_button->Cursor= System::Windows::Forms::Cursors::Hand;
					back_button->BackColor = Color::White;
					back_button->ImageLocation = IO::Path::GetDirectoryName(Application::StartupPath)+"\\media\\back.png";

					replylabel->Font = gcnew System::Drawing::Font("Times New Roman", 15,FontStyle::Bold);
					reportabuse->Cursor= System::Windows::Forms::Cursors::Hand;
					reportabuse->Tag = "M" + reader->GetValue(0);
					reportabuse->Click  += gcnew EventHandler(this, &DiscussionForum::reportabuse_Click);

					closethread->Cursor= System::Windows::Forms::Cursors::Hand;
					closethread->Tag = "M" + reader->GetValue(0);
					closethread->Click  += gcnew EventHandler(this, &DiscussionForum::closethread_Click);

					deletethread->Cursor= System::Windows::Forms::Cursors::Hand;
					deletethread->Tag = "M" + reader->GetValue(0);
					deletethread->Click  += gcnew EventHandler(this, &DiscussionForum::deletethread_Click);



					message_detail->Controls->Add(messagetext);
					message_detail->Controls->Add(usernametext);
					message_detail->Controls->Add(datetext);
					message_detail->Controls->Add(typetext);
					message_detail->Controls->Add(reportabuse);
					message_detail->Controls->Add(back_button);
					message_detail->Controls->Add(replylabel);
					message_detail->Controls->Add(closethread);
					message_detail->Controls->Add(deletethread);
					if(designation=="admin"||(designation=="prof"&&approved==true))
					{

					}
					else
					{
						closethread->Hide();
						deletethread->Hide();
					}
					if(username==reader->GetString(5))
					{
						deletethread->Show();
					}

					if(reader->GetString(4)=="YES")
					{
						replybtn->Enabled=false;
						closethread->Enabled=false;
					}
					// showing all the replies
					String ^ readStringreply = "SELECT * FROM Replies WHERE MessageID=" + message_id + " ORDER BY [Date&Time] DESC;";
					cmd = gcnew OleDbCommand(readStringreply, DB_Connection);
					OleDbDataReader ^ readerreply = cmd->ExecuteReader();

					int replystartx=message_detail->Location.X+message_detail->Width;
					int replystarty=starty+messagetext->Height+150;
					int replybodywidth=messagebodywidth;

					while (readerreply->Read())
					{
						//Panel ^ replypanel=gcnew Panel();
						Label ^ reply = gcnew Label();
						Label ^ usernametext = gcnew Label();
						Label ^ datetext = gcnew Label();
						Label ^ typetext = gcnew Label();
						Button ^ reportabuse = gcnew Button();
						Button ^ deletereply = gcnew Button();

						usernametext->Text = "By: " + readerreply->GetString(2);
						datetext->Text =  "Posted " + System::DateTime::Now.Subtract(readerreply->GetDateTime(4)).Hours.ToString()+" Hours ago";
						typetext->Text = readerreply->GetString(5);
						reportabuse->Text="Report Abuse";
						deletereply->Text="Delete Reply";

						reply->Font=gcnew System::Drawing::Font("Times New Roman",10);
						usernametext->Font=gcnew System::Drawing::Font("Arial",8);
						datetext->Font=gcnew System::Drawing::Font("Arial",8);
						typetext->Font=gcnew System::Drawing::Font("Arial",8);
						reportabuse->Font=gcnew System::Drawing::Font("Arial",8,FontStyle::Underline);
						deletereply->Font=gcnew System::Drawing::Font("Arial",8,FontStyle::Underline);

						usernametext->ForeColor=Color::DarkGray;
						datetext->ForeColor=Color::DarkGray;
						typetext->ForeColor=Color::DarkGray;

						reportabuse->FlatAppearance->BorderSize =0;
						reportabuse->FlatAppearance->BorderColor=Color::White;
						reportabuse->FlatStyle=FlatStyle::Flat;
						reportabuse->ForeColor=Color::DimGray;

						deletereply->FlatAppearance->BorderSize =0;
						deletereply->FlatAppearance->BorderColor=Color::White;
						deletereply->FlatStyle=FlatStyle::Flat;
						deletereply->ForeColor=Color::DimGray;

						//replypanel->Size=Drawing::Size(replybodywidth,)
						usernametext->Size = Drawing::Size(replybodywidth*0.1,25);
						datetext->Size = Drawing::Size(replybodywidth*0.3,25);
						typetext->Size =  Drawing::Size(replybodywidth*0.1,25);
						reportabuse->Size =  Drawing::Size(replybodywidth*0.15,25);
						deletereply->Size =  Drawing::Size(replybodywidth*0.15,25);
						reply->MaximumSize = Drawing::Size(replybodywidth*0.9,0);
						reply->AutoSize=true;
						reply->Text = readerreply->GetString(3);
						reply->Size = Drawing::Size(reply->PreferredWidth,reply->PreferredHeight);

						reply->Location = Drawing::Point(replystartx-replybodywidth*0.9,replystarty+25);
						datetext->Location = Drawing::Point(replystartx-replybodywidth*0.9,replystarty+reply->Height+30);
						usernametext->Location = Drawing::Point(replystartx+replybodywidth*0.3-replybodywidth*0.9,replystarty+reply->Height+30);
						typetext->Location = Drawing::Point(replystartx+replybodywidth*0.4-replybodywidth*0.9,replystarty+reply->Height+30);
						reportabuse->Location = Drawing::Point(replystartx+replybodywidth*0.5-replybodywidth*0.9,replystarty+reply->Height+27);
						deletereply->Location = Drawing::Point(replystartx+replybodywidth*0.65-replybodywidth*0.9,replystarty+reply->Height+27);

						reportabuse->Click  += gcnew EventHandler(this, &DiscussionForum::reportabuse_Click);
						reportabuse->Tag = "R" + readerreply->GetValue(0);
						reportabuse->Cursor= System::Windows::Forms::Cursors::Hand;

						deletereply->Click  += gcnew EventHandler(this, &DiscussionForum::deletethread_Click);
						deletereply->Tag = "R" + readerreply->GetValue(0);
						deletereply->Cursor= System::Windows::Forms::Cursors::Hand;

						if(readerreply->GetString(2)==username)
						{
							reply->ForeColor=System::Drawing::Color::SaddleBrown;
						}

						message_detail->Controls->Add(reply);
						message_detail->Controls->Add(usernametext);
						message_detail->Controls->Add(datetext);
						message_detail->Controls->Add(typetext);
						message_detail->Controls->Add(reportabuse);
						message_detail->Controls->Add(deletereply);
						if(designation=="admin"||(designation=="prof"&&approved==true)||(username==reader->GetString(5)))
						{

						}
						else
						{
							deletereply->Hide();
						}

						replystarty += reply->Height + 40;

					}


				}
				catch(Exception ^ ex)
				{
					MessageBox::Show(ex->Message);
				}

			}

	public: System::Void reportabuse_Click(System::Object^  sender, System::EventArgs^  e) {
				Button	^ reportbtn = gcnew Button;
				reportbtn = static_cast<Button ^>(sender); 
				String ^ reply_message_id = static_cast<String ^>(reportbtn->Tag);

				if(reply_message_id[0]=='M')
				{

					reply_message_id = reply_message_id->Remove(0,1);
					OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";
					DB_Connection->Open();
					OleDbCommand ^ cmd;
					String ^ readString;
					DialogResult result = MessageBox::Show("You sure want report abuse ?", "Post", 
						MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(result==DialogResult::Yes)
					{
						try
						{
							readString = "update Messages set ReportedAbuse= '" + "YES" + "' where MessageID=" + reply_message_id  ; 
							cmd = gcnew OleDbCommand(readString, DB_Connection);
							cmd->ExecuteNonQuery();
							MessageBox::Show("Reported Abuse");
						}
						catch(Exception ^ ex)
						{
							MessageBox::Show(ex->Message);
						}

					}

				}

				else if(reply_message_id[0]=='R')
				{

					reply_message_id = reply_message_id->Remove(0,1);
					OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";
					DB_Connection->Open();
					OleDbCommand ^ cmd;
					String ^ readString;
					DialogResult result = MessageBox::Show("You sure want report abuse ?", "Post", 
						MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(result==DialogResult::Yes)
					{
						try
						{
							readString = "update Replies set ReportedAbuse= '" + "YES" + "' where ReplyID=" + reply_message_id  ; 
							cmd = gcnew OleDbCommand(readString, DB_Connection);
							cmd->ExecuteNonQuery();
							MessageBox::Show("Reported Abuse");
						}
						catch(Exception ^ ex)
						{
							MessageBox::Show(ex->Message);
						}

					}

				}


			}

			
	public: System::Void back_button_Click(System::Object^  sender, System::EventArgs^  e) {
				tagcombo->Visible=true;
				loadbase();


			}
	public: System::Void deletethread_Click(System::Object^  sender, System::EventArgs^  e) {
				Button	^ deletebtn = gcnew Button;
				deletebtn = static_cast<Button ^>(sender); 
				String ^ reply_message_id = static_cast<String ^>(deletebtn->Tag);
				if(reply_message_id[0]=='M')
				{

					reply_message_id = reply_message_id->Remove(0,1);
					OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";
					DB_Connection->Open();
					OleDbCommand ^ cmd;
					String ^ readString;
					DialogResult result = MessageBox::Show("You sure want Delete this Thread ?", "Post", 
						MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(result==DialogResult::Yes)
					{
						try
						{
							readString = "DELETE FROM Messages WHERE MessageID=" + reply_message_id  ; 
							cmd = gcnew OleDbCommand(readString, DB_Connection);
							cmd->ExecuteNonQuery();
							readString = "DELETE FROM Replies where MessageID=" + reply_message_id  ; 
							cmd = gcnew OleDbCommand(readString, DB_Connection);
							cmd->ExecuteNonQuery(); 
							MessageBox::Show("Thread Deleted");
						}
						catch(Exception ^ ex)
						{
							MessageBox::Show(ex->Message);
						}
						loadbase();
					}

				}

				else if(reply_message_id[0]=='R')
				{

					reply_message_id = reply_message_id->Remove(0,1);
					OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";
					DB_Connection->Open();
					OleDbCommand ^ cmd;
					String ^ readString;
					DialogResult result = MessageBox::Show("You sure want Delete this reply ?", "Post", 
						MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if(result==DialogResult::Yes)
					{
						try
						{
							readString = "DELETE FROM Replies where ReplyID=" + reply_message_id  ; 
							cmd = gcnew OleDbCommand(readString, DB_Connection);
							cmd->ExecuteNonQuery();
							MessageBox::Show("Reply Deleted");
						}
						catch(Exception ^ ex)
						{
							MessageBox::Show(ex->Message);
						}

					}
					refresh_messagebody(message_id);

				}

			}




	public: System::Void closethread_Click(System::Object^  sender, System::EventArgs^  e) {
				Button	^ closebtn = gcnew Button;
				closebtn = static_cast<Button ^>(sender); 
				String ^ reply_message_id = static_cast<String ^>(closebtn->Tag);
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				reply_message_id = reply_message_id->Remove(0,1);
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";
				DB_Connection->Open();
				OleDbCommand ^ cmd;
				String ^ readString;
				DialogResult result = MessageBox::Show("You sure want close this thread ?", "Post", 
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(result==DialogResult::Yes)
				{
					try
					{
						readString = "update Messages set Closed= '" + "YES" + "' where MessageID=" + reply_message_id  ; 
						cmd = gcnew OleDbCommand(readString, DB_Connection);
						cmd->ExecuteNonQuery();
						MessageBox::Show("Closed Thread");
					}
					catch(Exception ^ ex)
					{
						MessageBox::Show(ex->Message);
					}
				}
				refresh_messagebody(message_id);
			}

	private: System::Void filterbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 filters.Clear();

				 if(arrycheck->Checked==true)
				 {
					 filters.Add("Array");
				 }
				 if(llcheck->Checked==true)
				 {
					 filters.Add("Linked List");
				 }
				 if(sortcheck->Checked==true)
				 {
					 filters.Add("Sorting");
				 }
				 if(searchcheck->Checked==true)
				 {
					 filters.Add("Searching");
				 }
				 if(queuecheck->Checked==true)
				 {
					 filters.Add("Queue");
				 }
				 if(bstcheck->Checked==true)
				 {
					 filters.Add("BST");
				 }
				 if(graphcheck->Checked==true)
				 {
					 filters.Add("Graph");
				 }
				 if(heapcheck->Checked==true)
				 {
					 filters.Add("Heap");
				 }
				 if(stackcheck->Checked==true)
				 {
					 filters.Add("Stack");
				 }
				 if(filters.Count==0)
				 {
					 filters.Add("BST");
					 filters.Add("Graph");
					 filters.Add("Heap");
					 filters.Add("Array");
					 filters.Add("Linked List");
					 filters.Add("Sorting");
					 filters.Add("Searching");
					 filters.Add("Queue");
					 filters.Add("Stack");
					 filters.Add("General");
				 }
				 loadbase();
			 }
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void arrycheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void queuecheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
				loadbase();
			 }
private: System::Void message_detail_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}