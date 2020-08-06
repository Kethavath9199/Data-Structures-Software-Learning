#pragma once



#include<string.h>
#include <string>
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include "Homepage.h"
#include "DiscussionForum.h"
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>


namespace DataStructuresLearningSoftware	 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;
	using namespace System::Web;
	using namespace System::Net::Mail;
	using namespace System::Security::Cryptography;
	using namespace System::Text;


	 


	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
	//Public global variables
	String ^username;
	String ^first_name;
	String ^last_name;
	String ^ userid;
	String ^password;
	String ^email;
	String ^contact;
	String ^isapproved;
	String ^designation;
	String ^ array_progress;
	String ^ ll_progress;
	String ^ searching_progress;
	String ^ sorting_progress;
	String ^ stack_progress;
	String ^ queue_progress;
	String ^query;
	String ^email_code;
	String ^new_email;
	int ds_id;
	int module_id;
	
	OleDb::OleDbConnection ^connection;
	private: System::Windows::Forms::OpenFileDialog^  ProfileopenFileDialog;
	private: System::Windows::Forms::Label^  ProfilePicturelabel;
	private: System::Windows::Forms::Label^  ProfileErrorlabel;
	private: System::Windows::Forms::Button^  Profilecodebutton;
	private: System::Windows::Forms::TextBox^  ProfilecodetextBox;
	private: System::Windows::Forms::Label^  HomeTitlelabel;




















	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;


	public: System::Windows::Forms::TextBox^  vartextBox;
	private: System::Windows::Forms::Label^  HomepanelStatuslabel;
	private: System::Windows::Forms::Button^  HeaderForumbutton;
	private: System::Windows::Forms::Panel^  AdminHeaderpanel;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  ARpanel;
	private: System::Windows::Forms::ListBox^  arlistBox;

	private: System::Windows::Forms::Button^  ARRejectbutton;
	private: System::Windows::Forms::Button^  ARApprovebutton;
	private: System::Windows::Forms::Panel^  udpanel;












	private: System::Windows::Forms::Button^  udDeletebutton;

	private: System::Windows::Forms::ListBox^  udlistBox;
	private: System::Windows::Forms::Panel^  lupanel;
	private: System::Windows::Forms::Button^  lulockbutton;


	private: System::Windows::Forms::ListBox^  lulistBox;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  uupanel;
	private: System::Windows::Forms::Button^  uuunlockbutton;
	private: System::Windows::Forms::ListBox^  uulistBox;
	private: System::Windows::Forms::Panel^  abrpanel;
	private: System::Windows::Forms::ListBox^  abrlistBox;
	private: System::Windows::Forms::Panel^  outputpanel;
	private: System::Windows::Forms::Panel^  suggestionpanel;
	private: System::Windows::Forms::ListBox^  suggestionlistBox;

	private: System::Windows::Forms::Button^  SuggestionRejectbutton;
	private: System::Windows::Forms::Button^  suggestionapprovebutton;
private: System::Windows::Forms::ListBox^  suggestioninfotextBox;
private: System::Windows::Forms::ListBox^  arinfotextBox;
private: System::Windows::Forms::ListBox^  udinfotextBox;
private: System::Windows::Forms::Button^  HeaderHomepagebutton;






























































































	public: 

	public: 
	private: 

	public: 

	public: 
		OleDb::OleDbCommand ^command;
	
		int SendEmail(String ^sendto, String ^message, String ^subject){
			//Function to send mail through smtp protocol

			try
			{
				MailMessage ^mail=gcnew MailMessage("dslearningapp@gmail.com",sendto,subject,message);
				SmtpClient ^client=gcnew SmtpClient("smtp.gmail.com");
				client->Port=587;
				client->Credentials=gcnew System::Net::NetworkCredential("dslearningapp@gmail.com","data4321");
				client->EnableSsl=true;
				client->Send(mail);
				return 1;			


			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex->Message,"Email Error");
				return 0;

			}
		}

		
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//MessageBox::Show("inside homepage "+username);
			//username=vartextBox->Text;
			ds_id=-1;
			module_id=-1;
			//Homepanel is shown by default
			Profilepanel->Hide();
			////->Hide();
			Homepanel->Show();
			HeaderStatusPanelpictureBox1->BackColor=Color::Red;
			HeaderHomebutton->BackColor=Color::Gray;

			//Profile panel textboxes should be read only
			ProfileFirstNametextBox->Enabled=0;
			ProfileLastNametextBox->Enabled=0;
			ProfileemailtextBox->Enabled=0;
			ProfileUsernametextBox->Enabled=0;
			ProfileDesignationtextBox->Enabled=0;
			ProfileContacttextBox->Enabled=0;

			if(username=="guest")
			{
			HeaderProfilebutton->Enabled=0;
				return;
			
			}
			String ^projdirectory= System::IO::Directory::GetCurrentDirectory();
			//MessageBox::Show(projdirectory);
			String ^databasepath = projdirectory+"\\..\\Database.accdb";
			//MessageBox::Show(databasepath);
			try
			{
				connection= gcnew OleDb::OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+databasepath+";Persist Security Info=False;");
			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex->Message,"Error while connecting to DB from Home Page");

			}

			//username="sid";

				//Retrieving user info
			
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  HeaderPanel;




	

	private: System::Windows::Forms::Button^  HeaderProfilebutton;

	private: System::Windows::Forms::Button^  HeaderHomebutton;
	private: System::Windows::Forms::Button^  HeaderLogoutbutton;
	private: System::Windows::Forms::Button^  HeaderClosebutton;
	private: System::Windows::Forms::Panel^  Headerstatuspanel;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox4;


	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox3;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox1;
public: System::Windows::Forms::Panel^  Homepanel;
private: 


	private: System::Windows::Forms::Panel^  Profilepanel;
	private: System::Windows::Forms::Panel^  Profilepanel5;
private: System::Windows::Forms::TextBox^  ProfileemailtextBox;


	private: System::Windows::Forms::Label^  ProfileEmaillabel;

	private: System::Windows::Forms::Panel^  Profilepanel4;
	private: System::Windows::Forms::TextBox^  ProfileDesignationtextBox;


	private: System::Windows::Forms::Label^  ProfileDesignationlabel;

	private: System::Windows::Forms::Panel^  Profilepanel3;
	private: System::Windows::Forms::TextBox^  ProfileLastNametextBox;


	private: System::Windows::Forms::Label^  ProfileLastLabellabel;


	private: System::Windows::Forms::Panel^  Profilepanel2;
	private: System::Windows::Forms::TextBox^  ProfileFirstNametextBox;


	private: System::Windows::Forms::Label^  ProfileFirstNamelabel;

	private: System::Windows::Forms::Panel^  Profilepanel1;

	private: System::Windows::Forms::TextBox^  ProfileUsernametextBox;

	private: System::Windows::Forms::Label^  ProfileUsernamelabel;

	private: System::Windows::Forms::Button^  ProfilePictureChangebutton;
	private: System::Windows::Forms::PictureBox^  ProfilepictureBox;
	private: System::Windows::Forms::Button^  ProfileSavebutton;
	private: System::Windows::Forms::Button^  ProfileEditbutton;
	private: System::Windows::Forms::Panel^  Profilepanel6;
	private: System::Windows::Forms::TextBox^  ProfileContacttextBox;
	private: System::Windows::Forms::Label^  ProfileContactlabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  ProfileChangePasswordpanel1;

	private: System::Windows::Forms::PictureBox^  ProfileChangePasswordpictureBox1;
	private: System::Windows::Forms::TextBox^  ProfileOldPasswordtextBox;
	private: System::Windows::Forms::Panel^  ProfileChangePasswordpanel3;




	private: System::Windows::Forms::PictureBox^  ProfileChangePasswordpictureBox3;
	private: System::Windows::Forms::TextBox^  ProfileConfirmPasswordtextBox;
	private: System::Windows::Forms::Panel^  ProfileChangePasswordpanel2;



	private: System::Windows::Forms::PictureBox^  ProfileChangePasswordpictureBox2;
	private: System::Windows::Forms::TextBox^  ProfileNewPasswordtextBox;


	private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::PictureBox^  ProfileSecuritypictureBox1;
private: System::Windows::Forms::TextBox^  ProfileOldPasswordSecuritytextBox;
private: System::Windows::Forms::Button^  ProfileSecuritySavebutton;




	private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::PictureBox^  ProfileSecuritypictureBox2;
private: System::Windows::Forms::TextBox^  ProfileSecurityAnswertextBox;


private: System::Windows::Forms::ComboBox^  ProfileSecuritycomboBox;

private: System::Windows::Forms::Button^  ProfileChangePasswordSavebutton;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->HeaderPanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderHomepagebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderForumbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderClosebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderLogoutbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderProfilebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderHomebutton = (gcnew System::Windows::Forms::Button());
			this->HomeTitlelabel = (gcnew System::Windows::Forms::Label());
			this->Headerstatuspanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderStatusPanelpictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Homepanel = (gcnew System::Windows::Forms::Panel());
			this->suggestionpanel = (gcnew System::Windows::Forms::Panel());
			this->suggestioninfotextBox = (gcnew System::Windows::Forms::ListBox());
			this->suggestionlistBox = (gcnew System::Windows::Forms::ListBox());
			this->SuggestionRejectbutton = (gcnew System::Windows::Forms::Button());
			this->suggestionapprovebutton = (gcnew System::Windows::Forms::Button());
			this->udpanel = (gcnew System::Windows::Forms::Panel());
			this->udinfotextBox = (gcnew System::Windows::Forms::ListBox());
			this->udDeletebutton = (gcnew System::Windows::Forms::Button());
			this->udlistBox = (gcnew System::Windows::Forms::ListBox());
			this->lupanel = (gcnew System::Windows::Forms::Panel());
			this->lulockbutton = (gcnew System::Windows::Forms::Button());
			this->lulistBox = (gcnew System::Windows::Forms::ListBox());
			this->ARpanel = (gcnew System::Windows::Forms::Panel());
			this->arinfotextBox = (gcnew System::Windows::Forms::ListBox());
			this->ARRejectbutton = (gcnew System::Windows::Forms::Button());
			this->ARApprovebutton = (gcnew System::Windows::Forms::Button());
			this->arlistBox = (gcnew System::Windows::Forms::ListBox());
			this->abrpanel = (gcnew System::Windows::Forms::Panel());
			this->abrlistBox = (gcnew System::Windows::Forms::ListBox());
			this->uupanel = (gcnew System::Windows::Forms::Panel());
			this->uuunlockbutton = (gcnew System::Windows::Forms::Button());
			this->uulistBox = (gcnew System::Windows::Forms::ListBox());
			this->AdminHeaderpanel = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->HomepanelStatuslabel = (gcnew System::Windows::Forms::Label());
			this->vartextBox = (gcnew System::Windows::Forms::TextBox());
			this->Profilepanel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ProfilepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Profilepanel6 = (gcnew System::Windows::Forms::Panel());
			this->ProfileContacttextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileContactlabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel5 = (gcnew System::Windows::Forms::Panel());
			this->ProfileemailtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileEmaillabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel4 = (gcnew System::Windows::Forms::Panel());
			this->ProfileDesignationtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileDesignationlabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel3 = (gcnew System::Windows::Forms::Panel());
			this->ProfileLastNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileLastLabellabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel2 = (gcnew System::Windows::Forms::Panel());
			this->ProfileFirstNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileFirstNamelabel = (gcnew System::Windows::Forms::Label());
			this->Profilepanel1 = (gcnew System::Windows::Forms::Panel());
			this->ProfileUsernametextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileUsernamelabel = (gcnew System::Windows::Forms::Label());
			this->Profilecodebutton = (gcnew System::Windows::Forms::Button());
			this->ProfilecodetextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileErrorlabel = (gcnew System::Windows::Forms::Label());
			this->ProfilePicturelabel = (gcnew System::Windows::Forms::Label());
			this->ProfileChangePasswordSavebutton = (gcnew System::Windows::Forms::Button());
			this->ProfileSecuritySavebutton = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ProfileSecuritypictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileSecurityAnswertextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileSecuritycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ProfileSecuritypictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileOldPasswordSecuritytextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileChangePasswordpanel3 = (gcnew System::Windows::Forms::Panel());
			this->ProfileChangePasswordpictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileConfirmPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileChangePasswordpanel2 = (gcnew System::Windows::Forms::Panel());
			this->ProfileChangePasswordpictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileNewPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfileChangePasswordpanel1 = (gcnew System::Windows::Forms::Panel());
			this->ProfileChangePasswordpictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ProfileOldPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ProfileSavebutton = (gcnew System::Windows::Forms::Button());
			this->ProfileEditbutton = (gcnew System::Windows::Forms::Button());
			this->ProfilePictureChangebutton = (gcnew System::Windows::Forms::Button());
			this->ProfileopenFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->outputpanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderPanel->SuspendLayout();
			this->Headerstatuspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->BeginInit();
			this->Homepanel->SuspendLayout();
			this->suggestionpanel->SuspendLayout();
			this->udpanel->SuspendLayout();
			this->lupanel->SuspendLayout();
			this->ARpanel->SuspendLayout();
			this->abrpanel->SuspendLayout();
			this->uupanel->SuspendLayout();
			this->AdminHeaderpanel->SuspendLayout();
			this->Profilepanel->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfilepictureBox))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// HeaderPanel
			// 
			this->HeaderPanel->BackColor = System::Drawing::Color::Black;
			this->HeaderPanel->Controls->Add(this->HeaderHomepagebutton);
			this->HeaderPanel->Controls->Add(this->HeaderForumbutton);
			this->HeaderPanel->Controls->Add(this->HeaderClosebutton);
			this->HeaderPanel->Controls->Add(this->HeaderLogoutbutton);
			this->HeaderPanel->Controls->Add(this->HeaderProfilebutton);
			this->HeaderPanel->Controls->Add(this->HeaderHomebutton);
			this->HeaderPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->HeaderPanel->ForeColor = System::Drawing::Color::White;
			this->HeaderPanel->Location = System::Drawing::Point(0, 0);
			this->HeaderPanel->Margin = System::Windows::Forms::Padding(0);
			this->HeaderPanel->Name = L"HeaderPanel";
			this->HeaderPanel->Size = System::Drawing::Size(1280, 50);
			this->HeaderPanel->TabIndex = 0;
			// 
			// HeaderHomepagebutton
			// 
			this->HeaderHomepagebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderHomepagebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderHomepagebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HeaderHomepagebutton->Location = System::Drawing::Point(936, 0);
			this->HeaderHomepagebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderHomepagebutton->Name = L"HeaderHomepagebutton";
			this->HeaderHomepagebutton->Size = System::Drawing::Size(192, 50);
			this->HeaderHomepagebutton->TabIndex = 7;
			this->HeaderHomepagebutton->Text = L"HOMEPAGE";
			this->HeaderHomepagebutton->UseVisualStyleBackColor = true;
			this->HeaderHomepagebutton->Click += gcnew System::EventHandler(this, &AdminForm::HeaderHomepagebutton_Click);
			// 
			// HeaderForumbutton
			// 
			this->HeaderForumbutton->BackColor = System::Drawing::Color::Black;
			this->HeaderForumbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderForumbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderForumbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderForumbutton->Location = System::Drawing::Point(492, 0);
			this->HeaderForumbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderForumbutton->Name = L"HeaderForumbutton";
			this->HeaderForumbutton->Size = System::Drawing::Size(240, 50);
			this->HeaderForumbutton->TabIndex = 5;
			this->HeaderForumbutton->Text = L"FORUMS";
			this->HeaderForumbutton->UseVisualStyleBackColor = false;
			this->HeaderForumbutton->Click += gcnew System::EventHandler(this, &AdminForm::HeaderForumbutton_Click_1);
			// 
			// HeaderClosebutton
			// 
			this->HeaderClosebutton->BackColor = System::Drawing::Color::White;
			this->HeaderClosebutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"HeaderClosebutton.BackgroundImage")));
			this->HeaderClosebutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HeaderClosebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderClosebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderClosebutton->Location = System::Drawing::Point(1227, 0);
			this->HeaderClosebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderClosebutton->Name = L"HeaderClosebutton";
			this->HeaderClosebutton->Size = System::Drawing::Size(53, 50);
			this->HeaderClosebutton->TabIndex = 4;
			this->HeaderClosebutton->UseVisualStyleBackColor = false;
			this->HeaderClosebutton->Click += gcnew System::EventHandler(this, &AdminForm::HeaderClosebutton_Click);
			this->HeaderClosebutton->MouseEnter += gcnew System::EventHandler(this, &AdminForm::HeaderClosebutton_MouseEnter);
			this->HeaderClosebutton->MouseLeave += gcnew System::EventHandler(this, &AdminForm::HeaderClosebutton_MouseLeave);
			// 
			// HeaderLogoutbutton
			// 
			this->HeaderLogoutbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderLogoutbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderLogoutbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderLogoutbutton->Location = System::Drawing::Point(738, 0);
			this->HeaderLogoutbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderLogoutbutton->Name = L"HeaderLogoutbutton";
			this->HeaderLogoutbutton->Size = System::Drawing::Size(192, 50);
			this->HeaderLogoutbutton->TabIndex = 2;
			this->HeaderLogoutbutton->Text = L"LOGOUT";
			this->HeaderLogoutbutton->UseVisualStyleBackColor = true;
			this->HeaderLogoutbutton->Click += gcnew System::EventHandler(this, &AdminForm::HeaderLogoutbutton_Click);
			// 
			// HeaderProfilebutton
			// 
			this->HeaderProfilebutton->BackColor = System::Drawing::Color::Black;
			this->HeaderProfilebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderProfilebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderProfilebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HeaderProfilebutton->Location = System::Drawing::Point(246, 0);
			this->HeaderProfilebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderProfilebutton->Name = L"HeaderProfilebutton";
			this->HeaderProfilebutton->Size = System::Drawing::Size(240, 50);
			this->HeaderProfilebutton->TabIndex = 3;
			this->HeaderProfilebutton->Text = L"PROFILE";
			this->HeaderProfilebutton->UseVisualStyleBackColor = false;
			this->HeaderProfilebutton->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// HeaderHomebutton
			// 
			this->HeaderHomebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderHomebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderHomebutton->Location = System::Drawing::Point(0, 0);
			this->HeaderHomebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderHomebutton->Name = L"HeaderHomebutton";
			this->HeaderHomebutton->Size = System::Drawing::Size(240, 50);
			this->HeaderHomebutton->TabIndex = 1;
			this->HeaderHomebutton->Text = L"ADMIN PANEL";
			this->HeaderHomebutton->UseVisualStyleBackColor = true;
			this->HeaderHomebutton->Click += gcnew System::EventHandler(this, &AdminForm::HeaderHomebutton_Click);
			// 
			// HomeTitlelabel
			// 
			this->HomeTitlelabel->AutoSize = true;
			this->HomeTitlelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HomeTitlelabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->HomeTitlelabel->Location = System::Drawing::Point(917, 61);
			this->HomeTitlelabel->Name = L"HomeTitlelabel";
			this->HomeTitlelabel->Size = System::Drawing::Size(302, 20);
			this->HomeTitlelabel->TabIndex = 0;
			this->HomeTitlelabel->Text = L"Data Structures Learning Software";
			this->HomeTitlelabel->Click += gcnew System::EventHandler(this, &AdminForm::HomeTitlelabel_Click);
			// 
			// Headerstatuspanel
			// 
			this->Headerstatuspanel->BackColor = System::Drawing::Color::Black;
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox4);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox5);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox3);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox1);
			this->Headerstatuspanel->Location = System::Drawing::Point(0, 50);
			this->Headerstatuspanel->Margin = System::Windows::Forms::Padding(0);
			this->Headerstatuspanel->Name = L"Headerstatuspanel";
			this->Headerstatuspanel->Size = System::Drawing::Size(1280, 15);
			this->Headerstatuspanel->TabIndex = 6;
			// 
			// HeaderStatusPanelpictureBox4
			// 
			this->HeaderStatusPanelpictureBox4->Location = System::Drawing::Point(493, 0);
			this->HeaderStatusPanelpictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderStatusPanelpictureBox4->Name = L"HeaderStatusPanelpictureBox4";
			this->HeaderStatusPanelpictureBox4->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox4->TabIndex = 9;
			this->HeaderStatusPanelpictureBox4->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox5
			// 
			this->HeaderStatusPanelpictureBox5->Location = System::Drawing::Point(738, 0);
			this->HeaderStatusPanelpictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderStatusPanelpictureBox5->Name = L"HeaderStatusPanelpictureBox5";
			this->HeaderStatusPanelpictureBox5->Size = System::Drawing::Size(189, 15);
			this->HeaderStatusPanelpictureBox5->TabIndex = 10;
			this->HeaderStatusPanelpictureBox5->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox3
			// 
			this->HeaderStatusPanelpictureBox3->BackColor = System::Drawing::Color::Black;
			this->HeaderStatusPanelpictureBox3->Location = System::Drawing::Point(246, 0);
			this->HeaderStatusPanelpictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderStatusPanelpictureBox3->Name = L"HeaderStatusPanelpictureBox3";
			this->HeaderStatusPanelpictureBox3->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox3->TabIndex = 8;
			this->HeaderStatusPanelpictureBox3->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox1
			// 
			this->HeaderStatusPanelpictureBox1->Location = System::Drawing::Point(0, 0);
			this->HeaderStatusPanelpictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HeaderStatusPanelpictureBox1->Name = L"HeaderStatusPanelpictureBox1";
			this->HeaderStatusPanelpictureBox1->Size = System::Drawing::Size(240, 15);
			this->HeaderStatusPanelpictureBox1->TabIndex = 2;
			this->HeaderStatusPanelpictureBox1->TabStop = false;
			// 
			// Homepanel
			// 
			this->Homepanel->BackColor = System::Drawing::Color::AliceBlue;
			this->Homepanel->Controls->Add(this->suggestionpanel);
			this->Homepanel->Controls->Add(this->udpanel);
			this->Homepanel->Controls->Add(this->lupanel);
			this->Homepanel->Controls->Add(this->HomeTitlelabel);
			this->Homepanel->Controls->Add(this->ARpanel);
			this->Homepanel->Controls->Add(this->abrpanel);
			this->Homepanel->Controls->Add(this->uupanel);
			this->Homepanel->Controls->Add(this->AdminHeaderpanel);
			this->Homepanel->Controls->Add(this->HomepanelStatuslabel);
			this->Homepanel->Controls->Add(this->vartextBox);
			this->Homepanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Homepanel->Location = System::Drawing::Point(0, 65);
			this->Homepanel->Margin = System::Windows::Forms::Padding(0);
			this->Homepanel->Name = L"Homepanel";
			this->Homepanel->Size = System::Drawing::Size(1280, 705);
			this->Homepanel->TabIndex = 7;
			// 
			// suggestionpanel
			// 
			this->suggestionpanel->Controls->Add(this->suggestioninfotextBox);
			this->suggestionpanel->Controls->Add(this->suggestionlistBox);
			this->suggestionpanel->Controls->Add(this->SuggestionRejectbutton);
			this->suggestionpanel->Controls->Add(this->suggestionapprovebutton);
			this->suggestionpanel->Location = System::Drawing::Point(17, 91);
			this->suggestionpanel->Name = L"suggestionpanel";
			this->suggestionpanel->Size = System::Drawing::Size(1248, 611);
			this->suggestionpanel->TabIndex = 29;
			// 
			// suggestioninfotextBox
			// 
			this->suggestioninfotextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->suggestioninfotextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->suggestioninfotextBox->FormattingEnabled = true;
			this->suggestioninfotextBox->HorizontalExtent = 15000;
			this->suggestioninfotextBox->HorizontalScrollbar = true;
			this->suggestioninfotextBox->ItemHeight = 31;
			this->suggestioninfotextBox->Location = System::Drawing::Point(10, 437);
			this->suggestioninfotextBox->Name = L"suggestioninfotextBox";
			this->suggestioninfotextBox->ScrollAlwaysVisible = true;
			this->suggestioninfotextBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->suggestioninfotextBox->Size = System::Drawing::Size(1230, 97);
			this->suggestioninfotextBox->TabIndex = 9;
			// 
			// suggestionlistBox
			// 
			this->suggestionlistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->suggestionlistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->suggestionlistBox->FormattingEnabled = true;
			this->suggestionlistBox->HorizontalExtent = 15000;
			this->suggestionlistBox->HorizontalScrollbar = true;
			this->suggestionlistBox->ItemHeight = 31;
			this->suggestionlistBox->Location = System::Drawing::Point(9, 16);
			this->suggestionlistBox->Name = L"suggestionlistBox";
			this->suggestionlistBox->ScrollAlwaysVisible = true;
			this->suggestionlistBox->Size = System::Drawing::Size(1230, 407);
			this->suggestionlistBox->TabIndex = 8;
			this->suggestionlistBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::suggestionlistBox_SelectedIndexChanged_1);
			// 
			// SuggestionRejectbutton
			// 
			this->SuggestionRejectbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionRejectbutton->Location = System::Drawing::Point(835, 540);
			this->SuggestionRejectbutton->Name = L"SuggestionRejectbutton";
			this->SuggestionRejectbutton->Size = System::Drawing::Size(198, 58);
			this->SuggestionRejectbutton->TabIndex = 6;
			this->SuggestionRejectbutton->Text = L"Reject";
			this->SuggestionRejectbutton->UseVisualStyleBackColor = true;
			this->SuggestionRejectbutton->Click += gcnew System::EventHandler(this, &AdminForm::SuggestionRejectbutton_Click_1);
			// 
			// suggestionapprovebutton
			// 
			this->suggestionapprovebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->suggestionapprovebutton->Location = System::Drawing::Point(1039, 540);
			this->suggestionapprovebutton->Name = L"suggestionapprovebutton";
			this->suggestionapprovebutton->Size = System::Drawing::Size(198, 58);
			this->suggestionapprovebutton->TabIndex = 5;
			this->suggestionapprovebutton->Text = L"Approve";
			this->suggestionapprovebutton->UseVisualStyleBackColor = true;
			this->suggestionapprovebutton->Click += gcnew System::EventHandler(this, &AdminForm::suggestionapprovebutton_Click_1);
			// 
			// udpanel
			// 
			this->udpanel->Controls->Add(this->udinfotextBox);
			this->udpanel->Controls->Add(this->udDeletebutton);
			this->udpanel->Controls->Add(this->udlistBox);
			this->udpanel->Location = System::Drawing::Point(17, 91);
			this->udpanel->Name = L"udpanel";
			this->udpanel->Size = System::Drawing::Size(1248, 611);
			this->udpanel->TabIndex = 22;
			// 
			// udinfotextBox
			// 
			this->udinfotextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->udinfotextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->udinfotextBox->FormattingEnabled = true;
			this->udinfotextBox->HorizontalExtent = 15000;
			this->udinfotextBox->HorizontalScrollbar = true;
			this->udinfotextBox->ItemHeight = 31;
			this->udinfotextBox->Location = System::Drawing::Point(10, 439);
			this->udinfotextBox->Name = L"udinfotextBox";
			this->udinfotextBox->ScrollAlwaysVisible = true;
			this->udinfotextBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->udinfotextBox->Size = System::Drawing::Size(1230, 97);
			this->udinfotextBox->TabIndex = 7;
			// 
			// udDeletebutton
			// 
			this->udDeletebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->udDeletebutton->Location = System::Drawing::Point(1086, 550);
			this->udDeletebutton->Name = L"udDeletebutton";
			this->udDeletebutton->Size = System::Drawing::Size(154, 52);
			this->udDeletebutton->TabIndex = 6;
			this->udDeletebutton->Text = L"Delete";
			this->udDeletebutton->UseVisualStyleBackColor = true;
			this->udDeletebutton->Click += gcnew System::EventHandler(this, &AdminForm::udDeletebutton_Click);
			// 
			// udlistBox
			// 
			this->udlistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->udlistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->udlistBox->FormattingEnabled = true;
			this->udlistBox->HorizontalExtent = 15000;
			this->udlistBox->HorizontalScrollbar = true;
			this->udlistBox->ItemHeight = 31;
			this->udlistBox->Location = System::Drawing::Point(9, 16);
			this->udlistBox->Name = L"udlistBox";
			this->udlistBox->ScrollAlwaysVisible = true;
			this->udlistBox->Size = System::Drawing::Size(1230, 407);
			this->udlistBox->TabIndex = 2;
			this->udlistBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::udlistBox_SelectedIndexChanged);
			// 
			// lupanel
			// 
			this->lupanel->Controls->Add(this->lulockbutton);
			this->lupanel->Controls->Add(this->lulistBox);
			this->lupanel->Location = System::Drawing::Point(17, 91);
			this->lupanel->Name = L"lupanel";
			this->lupanel->Size = System::Drawing::Size(1248, 611);
			this->lupanel->TabIndex = 24;
			// 
			// lulockbutton
			// 
			this->lulockbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lulockbutton->Location = System::Drawing::Point(1075, 553);
			this->lulockbutton->Name = L"lulockbutton";
			this->lulockbutton->Size = System::Drawing::Size(161, 51);
			this->lulockbutton->TabIndex = 3;
			this->lulockbutton->Text = L"Lock";
			this->lulockbutton->UseVisualStyleBackColor = true;
			this->lulockbutton->Click += gcnew System::EventHandler(this, &AdminForm::lulockbutton_Click);
			// 
			// lulistBox
			// 
			this->lulistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lulistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lulistBox->FormattingEnabled = true;
			this->lulistBox->HorizontalExtent = 15000;
			this->lulistBox->HorizontalScrollbar = true;
			this->lulistBox->ItemHeight = 31;
			this->lulistBox->Location = System::Drawing::Point(7, 16);
			this->lulistBox->Name = L"lulistBox";
			this->lulistBox->ScrollAlwaysVisible = true;
			this->lulistBox->Size = System::Drawing::Size(1230, 531);
			this->lulistBox->TabIndex = 2;
			// 
			// ARpanel
			// 
			this->ARpanel->Controls->Add(this->arinfotextBox);
			this->ARpanel->Controls->Add(this->ARRejectbutton);
			this->ARpanel->Controls->Add(this->ARApprovebutton);
			this->ARpanel->Controls->Add(this->arlistBox);
			this->ARpanel->Location = System::Drawing::Point(17, 91);
			this->ARpanel->Name = L"ARpanel";
			this->ARpanel->Size = System::Drawing::Size(1248, 611);
			this->ARpanel->TabIndex = 18;
			// 
			// arinfotextBox
			// 
			this->arinfotextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->arinfotextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->arinfotextBox->FormattingEnabled = true;
			this->arinfotextBox->HorizontalExtent = 15000;
			this->arinfotextBox->HorizontalScrollbar = true;
			this->arinfotextBox->ItemHeight = 31;
			this->arinfotextBox->Location = System::Drawing::Point(10, 453);
			this->arinfotextBox->Name = L"arinfotextBox";
			this->arinfotextBox->ScrollAlwaysVisible = true;
			this->arinfotextBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->arinfotextBox->Size = System::Drawing::Size(1230, 97);
			this->arinfotextBox->TabIndex = 3;
			// 
			// ARRejectbutton
			// 
			this->ARRejectbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ARRejectbutton->Location = System::Drawing::Point(904, 557);
			this->ARRejectbutton->Name = L"ARRejectbutton";
			this->ARRejectbutton->Size = System::Drawing::Size(165, 48);
			this->ARRejectbutton->TabIndex = 2;
			this->ARRejectbutton->Text = L"Reject";
			this->ARRejectbutton->UseVisualStyleBackColor = true;
			this->ARRejectbutton->Click += gcnew System::EventHandler(this, &AdminForm::ARRejectbutton_Click);
			// 
			// ARApprovebutton
			// 
			this->ARApprovebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ARApprovebutton->Location = System::Drawing::Point(1075, 555);
			this->ARApprovebutton->Name = L"ARApprovebutton";
			this->ARApprovebutton->Size = System::Drawing::Size(165, 48);
			this->ARApprovebutton->TabIndex = 1;
			this->ARApprovebutton->Text = L"Approve";
			this->ARApprovebutton->UseVisualStyleBackColor = true;
			this->ARApprovebutton->Click += gcnew System::EventHandler(this, &AdminForm::ARApprovebutton_Click);
			// 
			// arlistBox
			// 
			this->arlistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->arlistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->arlistBox->FormattingEnabled = true;
			this->arlistBox->HorizontalExtent = 15000;
			this->arlistBox->HorizontalScrollbar = true;
			this->arlistBox->ItemHeight = 31;
			this->arlistBox->Location = System::Drawing::Point(10, 4);
			this->arlistBox->Name = L"arlistBox";
			this->arlistBox->ScrollAlwaysVisible = true;
			this->arlistBox->Size = System::Drawing::Size(1230, 438);
			this->arlistBox->TabIndex = 0;
			this->arlistBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::arlistBox_SelectedIndexChanged);
			// 
			// abrpanel
			// 
			this->abrpanel->Controls->Add(this->abrlistBox);
			this->abrpanel->Location = System::Drawing::Point(17, 91);
			this->abrpanel->Name = L"abrpanel";
			this->abrpanel->Size = System::Drawing::Size(1248, 611);
			this->abrpanel->TabIndex = 28;
			// 
			// abrlistBox
			// 
			this->abrlistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->abrlistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->abrlistBox->FormattingEnabled = true;
			this->abrlistBox->HorizontalExtent = 15000;
			this->abrlistBox->HorizontalScrollbar = true;
			this->abrlistBox->ItemHeight = 31;
			this->abrlistBox->Location = System::Drawing::Point(9, 15);
			this->abrlistBox->Name = L"abrlistBox";
			this->abrlistBox->ScrollAlwaysVisible = true;
			this->abrlistBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->abrlistBox->Size = System::Drawing::Size(1230, 562);
			this->abrlistBox->TabIndex = 4;
			// 
			// uupanel
			// 
			this->uupanel->Controls->Add(this->uuunlockbutton);
			this->uupanel->Controls->Add(this->uulistBox);
			this->uupanel->Location = System::Drawing::Point(17, 91);
			this->uupanel->Name = L"uupanel";
			this->uupanel->Size = System::Drawing::Size(1248, 611);
			this->uupanel->TabIndex = 26;
			// 
			// uuunlockbutton
			// 
			this->uuunlockbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->uuunlockbutton->Location = System::Drawing::Point(1078, 550);
			this->uuunlockbutton->Name = L"uuunlockbutton";
			this->uuunlockbutton->Size = System::Drawing::Size(161, 51);
			this->uuunlockbutton->TabIndex = 4;
			this->uuunlockbutton->Text = L"Unlock";
			this->uuunlockbutton->UseVisualStyleBackColor = true;
			this->uuunlockbutton->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
			// 
			// uulistBox
			// 
			this->uulistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->uulistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->uulistBox->FormattingEnabled = true;
			this->uulistBox->HorizontalExtent = 15000;
			this->uulistBox->HorizontalScrollbar = true;
			this->uulistBox->ItemHeight = 31;
			this->uulistBox->Location = System::Drawing::Point(9, 13);
			this->uulistBox->Name = L"uulistBox";
			this->uulistBox->ScrollAlwaysVisible = true;
			this->uulistBox->Size = System::Drawing::Size(1230, 531);
			this->uulistBox->TabIndex = 3;
			// 
			// AdminHeaderpanel
			// 
			this->AdminHeaderpanel->BackColor = System::Drawing::Color::Black;
			this->AdminHeaderpanel->Controls->Add(this->button6);
			this->AdminHeaderpanel->Controls->Add(this->button3);
			this->AdminHeaderpanel->Controls->Add(this->button5);
			this->AdminHeaderpanel->Controls->Add(this->button4);
			this->AdminHeaderpanel->Controls->Add(this->button2);
			this->AdminHeaderpanel->Controls->Add(this->button1);
			this->AdminHeaderpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AdminHeaderpanel->Location = System::Drawing::Point(0, 0);
			this->AdminHeaderpanel->Name = L"AdminHeaderpanel";
			this->AdminHeaderpanel->Size = System::Drawing::Size(1280, 50);
			this->AdminHeaderpanel->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Location = System::Drawing::Point(1074, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(206, 50);
			this->button6->TabIndex = 6;
			this->button6->Text = L"USER UNLOCK";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminForm::button6_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(896, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"USER LOCK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click_1);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Location = System::Drawing::Point(686, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(204, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"ABUSE REPORT";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Location = System::Drawing::Point(492, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"USER DELETE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(280, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SUGGESTIONS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(274, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"APPROVAL REQUESTS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// HomepanelStatuslabel
			// 
			this->HomepanelStatuslabel->AutoSize = true;
			this->HomepanelStatuslabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->HomepanelStatuslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HomepanelStatuslabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->HomepanelStatuslabel->Location = System::Drawing::Point(12, 59);
			this->HomepanelStatuslabel->Name = L"HomepanelStatuslabel";
			this->HomepanelStatuslabel->Size = System::Drawing::Size(85, 29);
			this->HomepanelStatuslabel->TabIndex = 16;
			this->HomepanelStatuslabel->Text = L"label3";
			// 
			// vartextBox
			// 
			this->vartextBox->Location = System::Drawing::Point(1061, 59);
			this->vartextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->vartextBox->Name = L"vartextBox";
			this->vartextBox->Size = System::Drawing::Size(207, 22);
			this->vartextBox->TabIndex = 15;
			this->vartextBox->Visible = false;
			this->vartextBox->TextChanged += gcnew System::EventHandler(this, &AdminForm::vartextBox_TextChanged);
			// 
			// Profilepanel
			// 
			this->Profilepanel->BackColor = System::Drawing::Color::AliceBlue;
			this->Profilepanel->Controls->Add(this->panel3);
			this->Profilepanel->Controls->Add(this->panel2);
			this->Profilepanel->Controls->Add(this->Profilecodebutton);
			this->Profilepanel->Controls->Add(this->ProfilecodetextBox);
			this->Profilepanel->Controls->Add(this->ProfileErrorlabel);
			this->Profilepanel->Controls->Add(this->ProfilePicturelabel);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordSavebutton);
			this->Profilepanel->Controls->Add(this->ProfileSecuritySavebutton);
			this->Profilepanel->Controls->Add(this->panel5);
			this->Profilepanel->Controls->Add(this->ProfileSecuritypictureBox2);
			this->Profilepanel->Controls->Add(this->ProfileSecurityAnswertextBox);
			this->Profilepanel->Controls->Add(this->ProfileSecuritycomboBox);
			this->Profilepanel->Controls->Add(this->panel4);
			this->Profilepanel->Controls->Add(this->ProfileSecuritypictureBox1);
			this->Profilepanel->Controls->Add(this->ProfileOldPasswordSecuritytextBox);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpanel3);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpictureBox3);
			this->Profilepanel->Controls->Add(this->ProfileConfirmPasswordtextBox);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpanel2);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpictureBox2);
			this->Profilepanel->Controls->Add(this->ProfileNewPasswordtextBox);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpanel1);
			this->Profilepanel->Controls->Add(this->ProfileChangePasswordpictureBox1);
			this->Profilepanel->Controls->Add(this->ProfileOldPasswordtextBox);
			this->Profilepanel->Controls->Add(this->label2);
			this->Profilepanel->Controls->Add(this->label1);
			this->Profilepanel->Controls->Add(this->ProfileSavebutton);
			this->Profilepanel->Controls->Add(this->ProfileEditbutton);
			this->Profilepanel->Controls->Add(this->ProfilePictureChangebutton);
			this->Profilepanel->Location = System::Drawing::Point(0, 65);
			this->Profilepanel->Margin = System::Windows::Forms::Padding(0);
			this->Profilepanel->Name = L"Profilepanel";
			this->Profilepanel->Size = System::Drawing::Size(1280, 705);
			this->Profilepanel->TabIndex = 12;
			this->Profilepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Profilepanel_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::AliceBlue;
			this->panel3->Controls->Add(this->ProfilepictureBox);
			this->panel3->Location = System::Drawing::Point(989, 18);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(277, 297);
			this->panel3->TabIndex = 49;
			// 
			// ProfilepictureBox
			// 
			this->ProfilepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfilepictureBox.BackgroundImage")));
			this->ProfilepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfilepictureBox->Location = System::Drawing::Point(9, 6);
			this->ProfilepictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfilepictureBox->Name = L"ProfilepictureBox";
			this->ProfilepictureBox->Size = System::Drawing::Size(260, 284);
			this->ProfilepictureBox->TabIndex = 0;
			this->ProfilepictureBox->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Navy;
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Location = System::Drawing::Point(27, 9);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(765, 378);
			this->panel2->TabIndex = 48;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AliceBlue;
			this->panel1->Controls->Add(this->Profilepanel6);
			this->panel1->Controls->Add(this->ProfileContacttextBox);
			this->panel1->Controls->Add(this->ProfileContactlabel);
			this->panel1->Controls->Add(this->Profilepanel5);
			this->panel1->Controls->Add(this->ProfileemailtextBox);
			this->panel1->Controls->Add(this->ProfileEmaillabel);
			this->panel1->Controls->Add(this->Profilepanel4);
			this->panel1->Controls->Add(this->ProfileDesignationtextBox);
			this->panel1->Controls->Add(this->ProfileDesignationlabel);
			this->panel1->Controls->Add(this->Profilepanel3);
			this->panel1->Controls->Add(this->ProfileLastNametextBox);
			this->panel1->Controls->Add(this->ProfileLastLabellabel);
			this->panel1->Controls->Add(this->Profilepanel2);
			this->panel1->Controls->Add(this->ProfileFirstNametextBox);
			this->panel1->Controls->Add(this->ProfileFirstNamelabel);
			this->panel1->Controls->Add(this->Profilepanel1);
			this->panel1->Controls->Add(this->ProfileUsernametextBox);
			this->panel1->Controls->Add(this->ProfileUsernamelabel);
			this->panel1->Location = System::Drawing::Point(7, 7);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(753, 364);
			this->panel1->TabIndex = 47;
			// 
			// Profilepanel6
			// 
			this->Profilepanel6->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel6->Location = System::Drawing::Point(5, 351);
			this->Profilepanel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Profilepanel6->Name = L"Profilepanel6";
			this->Profilepanel6->Size = System::Drawing::Size(740, 2);
			this->Profilepanel6->TabIndex = 19;
			// 
			// ProfileContacttextBox
			// 
			this->ProfileContacttextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileContacttextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileContacttextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContacttextBox->Location = System::Drawing::Point(121, 314);
			this->ProfileContacttextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileContacttextBox->Name = L"ProfileContacttextBox";
			this->ProfileContacttextBox->Size = System::Drawing::Size(625, 34);
			this->ProfileContacttextBox->TabIndex = 18;
			// 
			// ProfileContactlabel
			// 
			this->ProfileContactlabel->AutoSize = true;
			this->ProfileContactlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContactlabel->Location = System::Drawing::Point(0, 313);
			this->ProfileContactlabel->Name = L"ProfileContactlabel";
			this->ProfileContactlabel->Size = System::Drawing::Size(125, 36);
			this->ProfileContactlabel->TabIndex = 17;
			this->ProfileContactlabel->Text = L"Contact:";
			// 
			// Profilepanel5
			// 
			this->Profilepanel5->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel5->Location = System::Drawing::Point(5, 290);
			this->Profilepanel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Profilepanel5->Name = L"Profilepanel5";
			this->Profilepanel5->Size = System::Drawing::Size(740, 2);
			this->Profilepanel5->TabIndex = 16;
			// 
			// ProfileemailtextBox
			// 
			this->ProfileemailtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileemailtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileemailtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileemailtextBox->Location = System::Drawing::Point(101, 254);
			this->ProfileemailtextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileemailtextBox->Name = L"ProfileemailtextBox";
			this->ProfileemailtextBox->Size = System::Drawing::Size(644, 34);
			this->ProfileemailtextBox->TabIndex = 15;
			// 
			// ProfileEmaillabel
			// 
			this->ProfileEmaillabel->AutoSize = true;
			this->ProfileEmaillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEmaillabel->Location = System::Drawing::Point(0, 251);
			this->ProfileEmaillabel->Name = L"ProfileEmaillabel";
			this->ProfileEmaillabel->Size = System::Drawing::Size(96, 36);
			this->ProfileEmaillabel->TabIndex = 14;
			this->ProfileEmaillabel->Text = L"Email:";
			// 
			// Profilepanel4
			// 
			this->Profilepanel4->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel4->Location = System::Drawing::Point(5, 225);
			this->Profilepanel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Profilepanel4->Name = L"Profilepanel4";
			this->Profilepanel4->Size = System::Drawing::Size(740, 2);
			this->Profilepanel4->TabIndex = 13;
			// 
			// ProfileDesignationtextBox
			// 
			this->ProfileDesignationtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileDesignationtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileDesignationtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationtextBox->Location = System::Drawing::Point(187, 188);
			this->ProfileDesignationtextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileDesignationtextBox->Name = L"ProfileDesignationtextBox";
			this->ProfileDesignationtextBox->Size = System::Drawing::Size(559, 34);
			this->ProfileDesignationtextBox->TabIndex = 12;
			// 
			// ProfileDesignationlabel
			// 
			this->ProfileDesignationlabel->AutoSize = true;
			this->ProfileDesignationlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationlabel->Location = System::Drawing::Point(0, 186);
			this->ProfileDesignationlabel->Name = L"ProfileDesignationlabel";
			this->ProfileDesignationlabel->Size = System::Drawing::Size(181, 36);
			this->ProfileDesignationlabel->TabIndex = 11;
			this->ProfileDesignationlabel->Text = L"Designation:";
			// 
			// Profilepanel3
			// 
			this->Profilepanel3->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel3->Location = System::Drawing::Point(5, 164);
			this->Profilepanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Profilepanel3->Name = L"Profilepanel3";
			this->Profilepanel3->Size = System::Drawing::Size(740, 2);
			this->Profilepanel3->TabIndex = 10;
			// 
			// ProfileLastNametextBox
			// 
			this->ProfileLastNametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileLastNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileLastNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastNametextBox->Location = System::Drawing::Point(172, 127);
			this->ProfileLastNametextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileLastNametextBox->Name = L"ProfileLastNametextBox";
			this->ProfileLastNametextBox->Size = System::Drawing::Size(573, 34);
			this->ProfileLastNametextBox->TabIndex = 9;
			// 
			// ProfileLastLabellabel
			// 
			this->ProfileLastLabellabel->AutoSize = true;
			this->ProfileLastLabellabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastLabellabel->Location = System::Drawing::Point(0, 126);
			this->ProfileLastLabellabel->Name = L"ProfileLastLabellabel";
			this->ProfileLastLabellabel->Size = System::Drawing::Size(164, 36);
			this->ProfileLastLabellabel->TabIndex = 8;
			this->ProfileLastLabellabel->Text = L"Last Name:";
			// 
			// Profilepanel2
			// 
			this->Profilepanel2->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel2->Location = System::Drawing::Point(5, 103);
			this->Profilepanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Profilepanel2->Name = L"Profilepanel2";
			this->Profilepanel2->Size = System::Drawing::Size(740, 2);
			this->Profilepanel2->TabIndex = 7;
			// 
			// ProfileFirstNametextBox
			// 
			this->ProfileFirstNametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileFirstNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileFirstNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNametextBox->Location = System::Drawing::Point(172, 66);
			this->ProfileFirstNametextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileFirstNametextBox->Name = L"ProfileFirstNametextBox";
			this->ProfileFirstNametextBox->Size = System::Drawing::Size(573, 34);
			this->ProfileFirstNametextBox->TabIndex = 6;
			// 
			// ProfileFirstNamelabel
			// 
			this->ProfileFirstNamelabel->AutoSize = true;
			this->ProfileFirstNamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNamelabel->Location = System::Drawing::Point(0, 65);
			this->ProfileFirstNamelabel->Name = L"ProfileFirstNamelabel";
			this->ProfileFirstNamelabel->Size = System::Drawing::Size(166, 36);
			this->ProfileFirstNamelabel->TabIndex = 5;
			this->ProfileFirstNamelabel->Text = L"First Name:";
			// 
			// Profilepanel1
			// 
			this->Profilepanel1->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel1->Location = System::Drawing::Point(5, 39);
			this->Profilepanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Profilepanel1->Name = L"Profilepanel1";
			this->Profilepanel1->Size = System::Drawing::Size(740, 2);
			this->Profilepanel1->TabIndex = 4;
			// 
			// ProfileUsernametextBox
			// 
			this->ProfileUsernametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileUsernametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileUsernametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernametextBox->Location = System::Drawing::Point(172, 2);
			this->ProfileUsernametextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileUsernametextBox->Name = L"ProfileUsernametextBox";
			this->ProfileUsernametextBox->Size = System::Drawing::Size(573, 34);
			this->ProfileUsernametextBox->TabIndex = 3;
			// 
			// ProfileUsernamelabel
			// 
			this->ProfileUsernamelabel->AutoSize = true;
			this->ProfileUsernamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernamelabel->Location = System::Drawing::Point(0, 0);
			this->ProfileUsernamelabel->Name = L"ProfileUsernamelabel";
			this->ProfileUsernamelabel->Size = System::Drawing::Size(158, 36);
			this->ProfileUsernamelabel->TabIndex = 2;
			this->ProfileUsernamelabel->Text = L"Username:";
			// 
			// Profilecodebutton
			// 
			this->Profilecodebutton->BackColor = System::Drawing::Color::Navy;
			this->Profilecodebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Profilecodebutton->ForeColor = System::Drawing::Color::White;
			this->Profilecodebutton->Location = System::Drawing::Point(800, 316);
			this->Profilecodebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Profilecodebutton->Name = L"Profilecodebutton";
			this->Profilecodebutton->Size = System::Drawing::Size(109, 46);
			this->Profilecodebutton->TabIndex = 46;
			this->Profilecodebutton->Text = L"Verify";
			this->Profilecodebutton->UseVisualStyleBackColor = false;
			this->Profilecodebutton->Click += gcnew System::EventHandler(this, &AdminForm::Profilecodebutton_Click);
			// 
			// ProfilecodetextBox
			// 
			this->ProfilecodetextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ProfilecodetextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfilecodetextBox->Location = System::Drawing::Point(800, 267);
			this->ProfilecodetextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfilecodetextBox->Name = L"ProfilecodetextBox";
			this->ProfilecodetextBox->Size = System::Drawing::Size(161, 34);
			this->ProfilecodetextBox->TabIndex = 45;
			this->ProfilecodetextBox->Text = L"CODE";
			// 
			// ProfileErrorlabel
			// 
			this->ProfileErrorlabel->AutoSize = true;
			this->ProfileErrorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileErrorlabel->ForeColor = System::Drawing::Color::Red;
			this->ProfileErrorlabel->Location = System::Drawing::Point(607, 452);
			this->ProfileErrorlabel->Name = L"ProfileErrorlabel";
			this->ProfileErrorlabel->Size = System::Drawing::Size(99, 20);
			this->ProfileErrorlabel->TabIndex = 44;
			this->ProfileErrorlabel->Text = L"Errordisplay";
			// 
			// ProfilePicturelabel
			// 
			this->ProfilePicturelabel->AutoSize = true;
			this->ProfilePicturelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePicturelabel->ForeColor = System::Drawing::Color::Red;
			this->ProfilePicturelabel->Location = System::Drawing::Point(995, 388);
			this->ProfilePicturelabel->Name = L"ProfilePicturelabel";
			this->ProfilePicturelabel->Size = System::Drawing::Size(102, 24);
			this->ProfilePicturelabel->TabIndex = 43;
			this->ProfilePicturelabel->Text = L"jpg image";
			// 
			// ProfileChangePasswordSavebutton
			// 
			this->ProfileChangePasswordSavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordSavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileChangePasswordSavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileChangePasswordSavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileChangePasswordSavebutton->Location = System::Drawing::Point(1137, 492);
			this->ProfileChangePasswordSavebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileChangePasswordSavebutton->Name = L"ProfileChangePasswordSavebutton";
			this->ProfileChangePasswordSavebutton->Size = System::Drawing::Size(140, 50);
			this->ProfileChangePasswordSavebutton->TabIndex = 42;
			this->ProfileChangePasswordSavebutton->Text = L"Change";
			this->ProfileChangePasswordSavebutton->UseVisualStyleBackColor = false;
			this->ProfileChangePasswordSavebutton->Click += gcnew System::EventHandler(this, &AdminForm::ProfileChangePasswordSavebutton_Click);
			// 
			// ProfileSecuritySavebutton
			// 
			this->ProfileSecuritySavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileSecuritySavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileSecuritySavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecuritySavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileSecuritySavebutton->Location = System::Drawing::Point(1137, 646);
			this->ProfileSecuritySavebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileSecuritySavebutton->Name = L"ProfileSecuritySavebutton";
			this->ProfileSecuritySavebutton->Size = System::Drawing::Size(140, 50);
			this->ProfileSecuritySavebutton->TabIndex = 41;
			this->ProfileSecuritySavebutton->Text = L"Change";
			this->ProfileSecuritySavebutton->UseVisualStyleBackColor = false;
			this->ProfileSecuritySavebutton->Click += gcnew System::EventHandler(this, &AdminForm::ProfileSecuritySavebutton_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Location = System::Drawing::Point(780, 694);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(351, 2);
			this->panel5->TabIndex = 39;
			// 
			// ProfileSecuritypictureBox2
			// 
			this->ProfileSecuritypictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox2.BackgroundImage")));
			this->ProfileSecuritypictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox2->Location = System::Drawing::Point(780, 640);
			this->ProfileSecuritypictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileSecuritypictureBox2->Name = L"ProfileSecuritypictureBox2";
			this->ProfileSecuritypictureBox2->Size = System::Drawing::Size(55, 48);
			this->ProfileSecuritypictureBox2->TabIndex = 38;
			this->ProfileSecuritypictureBox2->TabStop = false;
			// 
			// ProfileSecurityAnswertextBox
			// 
			this->ProfileSecurityAnswertextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileSecurityAnswertextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileSecurityAnswertextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecurityAnswertextBox->Location = System::Drawing::Point(841, 654);
			this->ProfileSecurityAnswertextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileSecurityAnswertextBox->Name = L"ProfileSecurityAnswertextBox";
			this->ProfileSecurityAnswertextBox->Size = System::Drawing::Size(291, 27);
			this->ProfileSecurityAnswertextBox->TabIndex = 37;
			this->ProfileSecurityAnswertextBox->Text = L"Answer";
			// 
			// ProfileSecuritycomboBox
			// 
			this->ProfileSecuritycomboBox->BackColor = System::Drawing::Color::Black;
			this->ProfileSecuritycomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ProfileSecuritycomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecuritycomboBox->ForeColor = System::Drawing::Color::White;
			this->ProfileSecuritycomboBox->Location = System::Drawing::Point(220, 588);
			this->ProfileSecuritycomboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileSecuritycomboBox->Name = L"ProfileSecuritycomboBox";
			this->ProfileSecuritycomboBox->Size = System::Drawing::Size(825, 37);
			this->ProfileSecuritycomboBox->Sorted = true;
			this->ProfileSecuritycomboBox->TabIndex = 36;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Navy;
			this->panel4->Location = System::Drawing::Point(33, 694);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(351, 2);
			this->panel4->TabIndex = 35;
			// 
			// ProfileSecuritypictureBox1
			// 
			this->ProfileSecuritypictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox1.BackgroundImage")));
			this->ProfileSecuritypictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox1->Location = System::Drawing::Point(33, 640);
			this->ProfileSecuritypictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->ProfileSecuritypictureBox1->Name = L"ProfileSecuritypictureBox1";
			this->ProfileSecuritypictureBox1->Size = System::Drawing::Size(55, 48);
			this->ProfileSecuritypictureBox1->TabIndex = 34;
			this->ProfileSecuritypictureBox1->TabStop = false;
			// 
			// ProfileOldPasswordSecuritytextBox
			// 
			this->ProfileOldPasswordSecuritytextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileOldPasswordSecuritytextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordSecuritytextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordSecuritytextBox->Location = System::Drawing::Point(93, 654);
			this->ProfileOldPasswordSecuritytextBox->Margin = System::Windows::Forms::Padding(0);
			this->ProfileOldPasswordSecuritytextBox->Name = L"ProfileOldPasswordSecuritytextBox";
			this->ProfileOldPasswordSecuritytextBox->Size = System::Drawing::Size(291, 27);
			this->ProfileOldPasswordSecuritytextBox->TabIndex = 33;
			this->ProfileOldPasswordSecuritytextBox->Text = L"Password";
			// 
			// ProfileChangePasswordpanel3
			// 
			this->ProfileChangePasswordpanel3->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel3->Location = System::Drawing::Point(780, 542);
			this->ProfileChangePasswordpanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileChangePasswordpanel3->Name = L"ProfileChangePasswordpanel3";
			this->ProfileChangePasswordpanel3->Size = System::Drawing::Size(351, 2);
			this->ProfileChangePasswordpanel3->TabIndex = 32;
			// 
			// ProfileChangePasswordpictureBox3
			// 
			this->ProfileChangePasswordpictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox3.BackgroundImage")));
			this->ProfileChangePasswordpictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox3->Location = System::Drawing::Point(780, 487);
			this->ProfileChangePasswordpictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileChangePasswordpictureBox3->Name = L"ProfileChangePasswordpictureBox3";
			this->ProfileChangePasswordpictureBox3->Size = System::Drawing::Size(55, 48);
			this->ProfileChangePasswordpictureBox3->TabIndex = 31;
			this->ProfileChangePasswordpictureBox3->TabStop = false;
			// 
			// ProfileConfirmPasswordtextBox
			// 
			this->ProfileConfirmPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileConfirmPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileConfirmPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileConfirmPasswordtextBox->Location = System::Drawing::Point(841, 498);
			this->ProfileConfirmPasswordtextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileConfirmPasswordtextBox->Name = L"ProfileConfirmPasswordtextBox";
			this->ProfileConfirmPasswordtextBox->Size = System::Drawing::Size(291, 27);
			this->ProfileConfirmPasswordtextBox->TabIndex = 30;
			this->ProfileConfirmPasswordtextBox->Text = L"Confirm Password";
			// 
			// ProfileChangePasswordpanel2
			// 
			this->ProfileChangePasswordpanel2->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel2->Location = System::Drawing::Point(408, 542);
			this->ProfileChangePasswordpanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileChangePasswordpanel2->Name = L"ProfileChangePasswordpanel2";
			this->ProfileChangePasswordpanel2->Size = System::Drawing::Size(351, 2);
			this->ProfileChangePasswordpanel2->TabIndex = 29;
			// 
			// ProfileChangePasswordpictureBox2
			// 
			this->ProfileChangePasswordpictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox2.BackgroundImage")));
			this->ProfileChangePasswordpictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox2->Location = System::Drawing::Point(408, 487);
			this->ProfileChangePasswordpictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileChangePasswordpictureBox2->Name = L"ProfileChangePasswordpictureBox2";
			this->ProfileChangePasswordpictureBox2->Size = System::Drawing::Size(55, 48);
			this->ProfileChangePasswordpictureBox2->TabIndex = 28;
			this->ProfileChangePasswordpictureBox2->TabStop = false;
			// 
			// ProfileNewPasswordtextBox
			// 
			this->ProfileNewPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileNewPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileNewPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileNewPasswordtextBox->Location = System::Drawing::Point(469, 498);
			this->ProfileNewPasswordtextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileNewPasswordtextBox->Name = L"ProfileNewPasswordtextBox";
			this->ProfileNewPasswordtextBox->Size = System::Drawing::Size(289, 27);
			this->ProfileNewPasswordtextBox->TabIndex = 27;
			this->ProfileNewPasswordtextBox->Text = L"New Password";
			// 
			// ProfileChangePasswordpanel1
			// 
			this->ProfileChangePasswordpanel1->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel1->Location = System::Drawing::Point(33, 542);
			this->ProfileChangePasswordpanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileChangePasswordpanel1->Name = L"ProfileChangePasswordpanel1";
			this->ProfileChangePasswordpanel1->Size = System::Drawing::Size(351, 2);
			this->ProfileChangePasswordpanel1->TabIndex = 26;
			// 
			// ProfileChangePasswordpictureBox1
			// 
			this->ProfileChangePasswordpictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox1.BackgroundImage")));
			this->ProfileChangePasswordpictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox1->Location = System::Drawing::Point(33, 487);
			this->ProfileChangePasswordpictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileChangePasswordpictureBox1->Name = L"ProfileChangePasswordpictureBox1";
			this->ProfileChangePasswordpictureBox1->Size = System::Drawing::Size(55, 48);
			this->ProfileChangePasswordpictureBox1->TabIndex = 25;
			this->ProfileChangePasswordpictureBox1->TabStop = false;
			// 
			// ProfileOldPasswordtextBox
			// 
			this->ProfileOldPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileOldPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordtextBox->Location = System::Drawing::Point(93, 501);
			this->ProfileOldPasswordtextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileOldPasswordtextBox->Name = L"ProfileOldPasswordtextBox";
			this->ProfileOldPasswordtextBox->Size = System::Drawing::Size(291, 27);
			this->ProfileOldPasswordtextBox->TabIndex = 24;
			this->ProfileOldPasswordtextBox->Text = L"Current Password";
			this->ProfileOldPasswordtextBox->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 553);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(376, 26);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Change Security Question/Answer";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 452);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 29);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Change Password";
			this->label1->Click += gcnew System::EventHandler(this, &AdminForm::label1_Click);
			// 
			// ProfileSavebutton
			// 
			this->ProfileSavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileSavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileSavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileSavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileSavebutton->Location = System::Drawing::Point(611, 390);
			this->ProfileSavebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileSavebutton->Name = L"ProfileSavebutton";
			this->ProfileSavebutton->Size = System::Drawing::Size(163, 50);
			this->ProfileSavebutton->TabIndex = 21;
			this->ProfileSavebutton->Text = L"Save";
			this->ProfileSavebutton->UseVisualStyleBackColor = false;
			this->ProfileSavebutton->Click += gcnew System::EventHandler(this, &AdminForm::ProfileSavebutton_Click);
			// 
			// ProfileEditbutton
			// 
			this->ProfileEditbutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileEditbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileEditbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEditbutton->ForeColor = System::Drawing::Color::White;
			this->ProfileEditbutton->Location = System::Drawing::Point(33, 390);
			this->ProfileEditbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfileEditbutton->Name = L"ProfileEditbutton";
			this->ProfileEditbutton->Size = System::Drawing::Size(163, 50);
			this->ProfileEditbutton->TabIndex = 20;
			this->ProfileEditbutton->Text = L"Edit Profile";
			this->ProfileEditbutton->UseVisualStyleBackColor = false;
			this->ProfileEditbutton->Click += gcnew System::EventHandler(this, &AdminForm::ProfileEditbutton_Click);
			// 
			// ProfilePictureChangebutton
			// 
			this->ProfilePictureChangebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfilePictureChangebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfilePictureChangebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePictureChangebutton->ForeColor = System::Drawing::Color::White;
			this->ProfilePictureChangebutton->Location = System::Drawing::Point(997, 327);
			this->ProfilePictureChangebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProfilePictureChangebutton->Name = L"ProfilePictureChangebutton";
			this->ProfilePictureChangebutton->Size = System::Drawing::Size(179, 50);
			this->ProfilePictureChangebutton->TabIndex = 1;
			this->ProfilePictureChangebutton->Text = L"Change Image";
			this->ProfilePictureChangebutton->UseVisualStyleBackColor = false;
			this->ProfilePictureChangebutton->Click += gcnew System::EventHandler(this, &AdminForm::ProfilePictureChangebutton_Click);
			// 
			// ProfileopenFileDialog
			// 
			this->ProfileopenFileDialog->FileName = L"ProfileopenFileDialog";
			this->ProfileopenFileDialog->Filter = L"Jpg (*.jpg)|*.jpg";
			// 
			// outputpanel
			// 
			this->outputpanel->Location = System::Drawing::Point(0, 65);
			this->outputpanel->Name = L"outputpanel";
			this->outputpanel->Size = System::Drawing::Size(1280, 705);
			this->outputpanel->TabIndex = 51;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 770);
			this->Controls->Add(this->Homepanel);
			this->Controls->Add(this->outputpanel);
			this->Controls->Add(this->Profilepanel);
			this->Controls->Add(this->Headerstatuspanel);
			this->Controls->Add(this->HeaderPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->HeaderPanel->ResumeLayout(false);
			this->Headerstatuspanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->EndInit();
			this->Homepanel->ResumeLayout(false);
			this->Homepanel->PerformLayout();
			this->suggestionpanel->ResumeLayout(false);
			this->udpanel->ResumeLayout(false);
			this->lupanel->ResumeLayout(false);
			this->ARpanel->ResumeLayout(false);
			this->abrpanel->ResumeLayout(false);
			this->uupanel->ResumeLayout(false);
			this->AdminHeaderpanel->ResumeLayout(false);
			this->Profilepanel->ResumeLayout(false);
			this->Profilepanel->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfilepictureBox))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileSecuritypictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ProfileChangePasswordpictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(username=="guest")
				 {
					 MessageBox::Show("Login to access profile","Guest");
					 return;
				 }
				 Homepanel->Hide();
				 //->Hide();
				 Profilepanel->Show();
				 outputpanel->Hide();
				 HeaderStatusPanelpictureBox3->BackColor=Color::Red;
				 HeaderStatusPanelpictureBox1->BackColor=Color::Black;
				 //->BackColor=Color::Black;
				 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
				 HeaderHomebutton->BackColor=Color::Black;
				 //->BackColor=Color::Black;
				 HeaderForumbutton->BackColor=Color::Black;
				 HeaderProfilebutton->BackColor=Color::Gray;

				 ProfileUsernametextBox->Text=username;
				 ProfileFirstNametextBox->Text=first_name;
				 ProfileLastNametextBox->Text=last_name;
				 ProfileDesignationtextBox->Text=designation;
				 ProfileemailtextBox->Text=email;
				 ProfileContacttextBox->Text=contact;
				 ProfileErrorlabel->Hide();
				 ProfileChangePasswordSavebutton->Enabled=1;
				 ProfileSecuritySavebutton->Enabled=1;
				 ProfileFirstNametextBox->Enabled=0;
				 ProfileLastNametextBox->Enabled=0;
				 ProfileemailtextBox->Enabled=0;
				 ProfileUsernametextBox->Enabled=0;
				 ProfileDesignationtextBox->Enabled=0;
				 ProfileContacttextBox->Enabled=0;
				 ProfileSavebutton->Enabled=0;
				 ProfileEditbutton->Enabled=1;
				 ProfilecodetextBox->Hide();
				 Profilecodebutton->Hide();
				 ProfileOldPasswordSecuritytextBox->Text="Password";
				 ProfileSecuritycomboBox->Text="Security Question";
				 ProfileSecurityAnswertextBox->Text="Answer";
				 ProfileOldPasswordtextBox->Text="Old Password";
				 ProfileNewPasswordtextBox->Text="New Password";
				 ProfileConfirmPasswordtextBox->Text="Confirm Password";
			 }
private: System::Void AdminForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Profilepanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void HeaderClosebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);

		 }
private: System::Void HeaderHomebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Homepanel->Show();
			 ////->Hide();
			 Profilepanel->Hide();
			 outputpanel->Hide();
			 HeaderStatusPanelpictureBox3->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox1->BackColor=Color::Red;
			 //->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
			 HeaderHomebutton->BackColor=Color::Gray;
			 //->BackColor=Color::Black;
			 HeaderForumbutton->BackColor=Color::Black;
			 HeaderProfilebutton->BackColor=Color::Black;


			 if(username=="guest")
			 {
				HomepanelStatuslabel->Text="Logged in as a guest (Progress won't be saved)";
				HomepanelStatuslabel->BackColor=Color::LightBlue;
				HomepanelStatuslabel->ForeColor=Color::Blue;
				 return;
			 }
			 if(designation=="prof")
			 {
				 if(isapproved=="False")
				 {
					HomepanelStatuslabel->Text="Designation as 'Professor' not verified by admin (Limited Capabilities)";
					HomepanelStatuslabel->BackColor=Color::LightPink;
					HomepanelStatuslabel->ForeColor=Color::Red;
				 }
				 else
				 {
					 HomepanelStatuslabel->Text="Logged in as 'Professor'";
					 HomepanelStatuslabel->BackColor=Color::LightGreen;
					 HomepanelStatuslabel->ForeColor=Color::Green;
				 }
			 }
			 if(designation=="stud")
			 {
				 HomepanelStatuslabel->Text="Logged in as 'Student'";
				 HomepanelStatuslabel->BackColor=Color::LightGreen;
				 HomepanelStatuslabel->ForeColor=Color::Green;
			 }
			 //retrieving progress info
			 try
			 {
				 connection->Open();
				 command->Connection=connection;

				 query="Select ArraysProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 array_progress=command->ExecuteScalar()->ToString();

				 query="Select LinkedListProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 ll_progress=command->ExecuteScalar()->ToString();

				 query="Select SearchingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 searching_progress=command->ExecuteScalar()->ToString();

				 query="Select SortingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 sorting_progress=command->ExecuteScalar()->ToString();

				 query="Select StacksProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 stack_progress=command->ExecuteScalar()->ToString();

				 query="Select QueuesProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 queue_progress=command->ExecuteScalar()->ToString();


				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
			 	MessageBox::Show(ex->Message,"Error While reading data for Progress");
			 }

			 
			 
		 }

private: System::Void ProfilePictureChangebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^filepath="";	//Source path for image file
			 String ^projdirectory= System::IO::Directory::GetCurrentDirectory();
			 String ^destinationpath=projdirectory+"\\..\\profilepic\\"+username+".jpg";
			 ProfileErrorlabel->Hide();
			 if(ProfileopenFileDialog->ShowDialog()==Windows::Forms::DialogResult::OK)
			 {
				 filepath=ProfileopenFileDialog->FileName;
			 }

			 if(filepath!="")
			 {
				 if(IO::File::Exists(filepath))
				 {
						File::Delete(destinationpath);
						File::Copy(filepath,destinationpath);
						System::IO::FileStream ^fs=gcnew System::IO::FileStream(destinationpath, IO::FileMode::Open, IO::FileAccess::Read);
						ProfilepictureBox->Image=System::Drawing::Image::FromStream(fs);
						ProfilepictureBox->SizeMode=PictureBoxSizeMode::StretchImage;
						fs->Close();
						MessageBox::Show("Profile Image Updated", "Success");
				 }
				 else
				 {
					MessageBox::Show("File Does Not Exist", "Error");
				 }
			 }
			 else	
			 {
				 MessageBox::Show("Image File not provided", "Error");
			 }
	}
		
private: System::Void ProfileEditbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^input=Microsoft::VisualBasic::Interaction::InputBox(L"Enter Password:","Profile Edit","DefResp",500,500);
			 //MessageBox::Show(input);
			 ProfileErrorlabel->Hide();
			 if(input==password)
			 {
				ProfileFirstNametextBox->Enabled=1;
				ProfileLastNametextBox->Enabled=1;
				ProfileemailtextBox->Enabled=1;
				ProfileContacttextBox->Enabled=1;
				ProfileChangePasswordSavebutton->Enabled=0;
				ProfileSecuritySavebutton->Enabled=0;
				ProfileSavebutton->Enabled=1;
				ProfileEditbutton->Enabled=0;

				
			 }
			 else
			 {
				ProfileErrorlabel->Text="Wrong Password";
				ProfileErrorlabel->Show();
			 }
		 }
private: System::Void ProfileSavebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ProfileErrorlabel->Hide();
			 //Variables Declaration
			 String^ first_name2 = ProfileFirstNametextBox->Text;
			 String^ last_name2 = ProfileLastNametextBox->Text;
			 String^ email2 = ProfileemailtextBox->Text;
			 String^ contact2 = ProfileContacttextBox->Text;
			 int len1 = first_name2->Length;
			 int len3 = email2->Length;
			 int len4 = contact2->Length;
			 bool flag = true;

			 //Check Validity of information
			 //Checking empty fields
			 
			 if (len1 == 0)		//First name empty
			 {
				 ProfileErrorlabel->Text = "First Name field can't be empty";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if (len3 == 0)			//Email empty
			 {
				 ProfileErrorlabel->Text = "Email field can't be empty";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if(len4!=10&&len4!=0)
			 {
				 ProfileErrorlabel->Text = "Contact number is Incorrect";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 //Preliminary tests
			 //Checking Validity of first name
			 for (int i = 0; i < len1; i++)
			 {
				 if (!(isalpha(first_name2[i])))		//Wrong firstname
				 {
					 ProfileErrorlabel->Text = "First Name contains non-valid character";
					 ProfileErrorlabel->Show();
					 return;
				 }


			 }

			 //Checking Validity of last name
			 if (last_name2 == "Last Name (Optional)")
			 {
				 last_name2 = "";
			 }
			 int len2 = last_name2->Length;


			 for (int i = 0; i < len2; i++)
			 {
				 if (!(isalpha(last_name2[i])))		//Wrong lastname
				 {
					 ProfileErrorlabel->Text = "Last Name contains non-valid character";
					 ProfileErrorlabel->Show();
					 return;
				 }
			 }

			 //Checking Validity of email
			 int count = 0;
			 int count1 = 0;
			 int count2 = 0;
			 int count3 = 0;

			 for (int i = 0; i < len3; i++)
			 {
				 if (!((isalnum(email2[i])) || email2[i] == '.' || email2[i] == '@' || email2[i] == '-' || email2[i] == '_'))
				 {
					 ProfileErrorlabel->Text = "Email contains non-valid character";
					 ProfileErrorlabel->Show();
					 return;
				 }
				 if (email2[i] == '@')
				 {
					 if (i == 0)
					 {
						 ProfileErrorlabel->Text = "'@' should be preceeded by atleast 1 character";
						 ProfileErrorlabel->Show();
						 return;
					 }
					 count++;
				 }
				 if (count > 1)		//More than 1 '@'
				 {
					 ProfileErrorlabel->Text = "Email contains multiple '@'";
					 ProfileErrorlabel->Show();
					 return;
				 }
				 if (count == 1 && count1==0 && email2[i]!='.' && email2[i]!='@')
				 {
					 count2++;
				 }

				 if (count == 1 && email2[i] == '.')
				 {
					 if (count2 == 0)
					 {
						 ProfileErrorlabel->Text = "Wrong trail after '@'";
						 ProfileErrorlabel->Show();
						 return;
					 }
					 count1++;
				 }

				 /*if (count1 > 1)		//More than 1 '.' after '@'
				 {
					 ProfileErrorlabel->Text = "Email contains multiple '.' after '@'";
					 ProfileErrorlabel->Show();
					 return;
				 }*/
				 if (count1 && email2[i]!='.')
				 {
					 count3++;
				 }
			 }

			 if (!count)
			 {
				 ProfileErrorlabel->Text = "Email does not contain '@'";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if (!count1)
			 {
				 ProfileErrorlabel->Text = "Email does not contain '.' after '@'";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 if (!count3)
			 {
				 ProfileErrorlabel->Text = "'.' should be followed by atleast 1 character";
				 ProfileErrorlabel->Show();
				 return;
			 }

			 
			 //Checking Validity of contact
			 
			 
			 for (int i = 0; i < len4; i++)
			 {
				 if (!(isdigit(contact2[i])))		//Wrong username
				 {
					 ProfileErrorlabel->Text = "Contact contains non-valid character (Should be num)";
					 ProfileErrorlabel->Show();
					 return;
				 }


			 }

			 //Check for duplicate email
			 if(email!=email2)
			 {
				 try
				 {
					 connection->Open();
					 bool email_flag=false;
					 command->Connection=connection;
					 query = "Select * From Users Where Email = '"+email2+"'; ";
					 command->CommandText=query;
					 OleDbDataReader ^reader=command->ExecuteReader();
					 while(reader->Read())
					 {
						 ProfileErrorlabel->Text = "Entered email is already registered";
						 ProfileErrorlabel->Show();
						 email_flag=true;
						 break;
					 }
					 connection->Close();
					 if(email_flag)
					 {
						 return;
					 }
				 }
				 catch(Exception ^ex)
				 {

					MessageBox::Show(ex->Message,"Error in Duplicate Email checking");
					return;
				 }
				 
			}
			 


			try
			{
				connection->Open();
				command->Connection=connection;
				query="Update Users Set [FirstName]= '"+first_name2+"', [LastName]= '"+last_name2+"', [Contact]= '"+contact2+"' where UserName= '"+username+"';";
				command->CommandText=query;
				command->ExecuteNonQuery();
				//command->Dispose();
				connection->Close();
			}
			catch (Exception ^ ex)
			{
				MessageBox::Show(ex->Message,"Error while writing data from Profile section(SAVE AdminForm)");
				return;
			}
			first_name=first_name2;
			last_name=last_name2;
			contact=contact2;
			
			 
			 
			 if(email!=email2)
			 {
				 //Proceeding to email verification if success
				 

				 //Send a code to email and verify
				 String ^code;
				
					 srand((unsigned)time(0)); 
					 int random_integer; 
					 int lowest=1000, highest=9999; 
					 int range=(highest-lowest)+1; 
					 random_integer = lowest+int(range*rand()/(RAND_MAX + 1.0));
					 code=""+random_integer+"";

				 int num=0;	
				 num+=SendEmail(email2,"Hello "+username+"\r\nVerification Code for Registration: "+code+"\r\n\r\nCheers\r\nTeam DSlearning", "Email verification Code for DS Learning S/W");
				 if(!num)
				 {
					MessageBox::Show("Service unavailable: Change Email not currently available, other fields are updated","Email Verification");
				 Profilecodebutton->Hide();
				 ProfilecodetextBox->Hide();
				 //Reload profile
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button3_Click(sender,e);
				 }
				 else
				 {
					 MessageBox::Show("Fields other than Email Updated","Success");
					 email_code=code;
					 new_email=email2;
					 ProfilecodetextBox->Show();
					 ProfilecodetextBox->Text="CODE";
					 Profilecodebutton->Show();
				 }

				 

			 }
			 else
			 {
				 MessageBox::Show("Fields Updated","Success");
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button3_Click(sender,e);
			 }
			 
			 
			 

		 }

	

		 
private: System::Void Profilecodebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 String ^email2=new_email;
			 String ^code=ProfilecodetextBox->Text;
			 if(code==email_code)
			 {
				 try
				 {
					 connection->Open();
					 command->Connection=connection;
					 query="Update Users Set [Email]= '"+email2+"' where UserName= '"+username+"';";
					 command->CommandText=query;
					 command->ExecuteNonQuery();
					 //command->Dispose();
					 connection->Close();
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Error while writing data (Email)");
				 }

				 MessageBox::Show("Email Updated","Success");
				 email=email2;
				 ProfilecodetextBox->Hide();
				 ProfilecodetextBox->Text="CODE";
				 Profilecodebutton->Hide();
				 //Reload profile
				 System::Object ^sender;
				 System::EventArgs ^e;
				this->button3_Click(sender,e);

			 }
			 else
			 {
				 MessageBox::Show("Incorrect Security Code","Email Verification");

			 }
			 }
				 
				
		
private: System::Void ProfileChangePasswordSavebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^npass=ProfileNewPasswordtextBox->Text;
			 String ^cpass=ProfileConfirmPasswordtextBox->Text;
			 String ^opass=ProfileOldPasswordtextBox->Text;
			 if(opass!=password)
			 {
				MessageBox::Show("Current Password is incorrent","Change Password");
				return;
			 }
			 if(npass!=cpass)
			 {
				 MessageBox::Show("New Password and Confirm Password Don't match","Change Password");
				 return;
			 }
			 if(npass->Length<3)
			 {

				 MessageBox::Show("Password must be atleast 3 characters long","Change Password");
				 return;
			 }
			 for(int i=0;i<npass->Length;i++)
			 {

				 if(!(isalnum(npass[i])))
				 {
					 MessageBox::Show("New Password contains an invalid character (should be alnum)","Change Password");
					 return;
				 }
			 }

			 password=npass;
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [Password]= '"+password+"' where UserName= '"+username+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while writing data (Password)");
			 }

			 MessageBox::Show("Updated Successfully","Change Password");
			 ProfileOldPasswordtextBox->Text="Old Password";
			 ProfileNewPasswordtextBox->Text="New Password";
			ProfileConfirmPasswordtextBox->Text="Confirm Password";
			 
		 }
private: System::Void ProfileSecuritySavebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^pass=ProfileOldPasswordSecuritytextBox->Text;
			 if(pass!=password)
			 {
				 MessageBox::Show("Current Password is incorrent","Change Security Answer");
				 return;
			 }
			 String ^ans=ProfileSecurityAnswertextBox->Text;
			 if(ans->Length==0)
			 {
				 MessageBox::Show("Answer field is empty","Change Security Answer");
				 return;
			 }
			 String ^ques=ProfileSecuritycomboBox->Text;
			 if(ques=="Security Question")
			 {

				 MessageBox::Show("Please select one security question","Change Security Answer");
				 return;
			 }
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [SecurityAnswer]= '"+ans+"', [SecurityQuestion]= '"+ques+"' where UserName= '"+username+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while writing data (Password)");
			 }

			 MessageBox::Show("Updated Successfully","Change Security Answer");
			ProfileOldPasswordSecuritytextBox->Text="Password";
			ProfileSecuritycomboBox->Text="Security Question";
			ProfileSecurityAnswertextBox->Text="Answer";

		 }
private: System::Void HeaderLogoutbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*if(this->Owner!=nullptr)
			 {
				 this->Owner->Visible=true;
			 }*/
			 this->Close(); 


		 }
private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void HeaderClosebutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 HeaderClosebutton->BackColor=Color::Red;
		 }
private: System::Void HeaderClosebutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 HeaderClosebutton->BackColor=Color::White;
		 }
private: System::Void vartextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //MessageBox::Show("var textbox changed");
			 username=vartextBox->Text;
			 
			 
			 String ^projdirectory= System::IO::Directory::GetCurrentDirectory();
			 try
			 {
				 connection->Open();
				 command=gcnew OleDbCommand;
				 command->Connection=connection;

				 query="Select FirstName From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 first_name=command->ExecuteScalar()->ToString();

				 query="Select LastName From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 last_name=command->ExecuteScalar()->ToString();

				 query="Select UserId From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 userid=(command->ExecuteScalar()->ToString());


				 query="Select Password From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 password=command->ExecuteScalar()->ToString();

				 query="Select Email From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 email=command->ExecuteScalar()->ToString();

				 query="Select Contact From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 contact=command->ExecuteScalar()->ToString();



				 query="Select IsApproved From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 isapproved=command->ExecuteScalar()->ToString();

				 query="Select Designation From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 designation=command->ExecuteScalar()->ToString();

				 query="Select ArraysProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 array_progress=command->ExecuteScalar()->ToString();

				 query="Select LinkedListProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 ll_progress=command->ExecuteScalar()->ToString();

				 query="Select SearchingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 searching_progress=command->ExecuteScalar()->ToString();

				 query="Select SortingProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 sorting_progress=command->ExecuteScalar()->ToString();

				 query="Select StacksProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 stack_progress=command->ExecuteScalar()->ToString();

				 query="Select QueuesProgress From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 queue_progress=command->ExecuteScalar()->ToString();


				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {	
				 MessageBox::Show(ex->Message,"Error while reading data on LOAD");
			 }

			//designation="admin";
			 if(designation=="prof")
			 {
				 if(isapproved=="False")
				 {
					 HomepanelStatuslabel->Text="Designation as 'Professor' not verified by admin (Limited Capabilities)";
					 HomepanelStatuslabel->BackColor=Color::LightPink;
					 HomepanelStatuslabel->ForeColor=Color::Red;
				 }
				 else
				 {
					 HomepanelStatuslabel->Text="Logged in as 'Professor'";
					 HomepanelStatuslabel->BackColor=Color::LightGreen;
					 HomepanelStatuslabel->ForeColor=Color::Green;
				 }
			 }
			 if(designation=="stud")
			 {
				 HomepanelStatuslabel->Text="Logged in as 'Student'";
				 HomepanelStatuslabel->BackColor=Color::LightGreen;
				 HomepanelStatuslabel->ForeColor=Color::Green;
			 }

			 if(designation=="admin")
			 {
				 HomepanelStatuslabel->Text="Logged in as 'ADMIN'";
				 HomepanelStatuslabel->BackColor=Color::LightPink;
				 HomepanelStatuslabel->ForeColor=Color::Magenta;
			 }
			

			 

			 //Checking and setting profile picture if it exists

			 String ^destinationpath=projdirectory+"\\..\\profilepic\\"+username+".jpg";
			 
			 if(IO::File::Exists(destinationpath))
			 {
				 System::IO::FileStream ^fs;
				 fs=gcnew System::IO::FileStream(destinationpath, IO::FileMode::Open, IO::FileAccess::Read);
				 ProfilepictureBox->Image=System::Drawing::Image::FromStream(fs);
				 ProfilepictureBox->SizeMode=PictureBoxSizeMode::StretchImage;
				 fs->Close();

			 }

			// MessageBox::Show("test"+isapproved);

			 //Reading security questions
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query = "Select * From SQuestions; ";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 while(reader->Read())
				 {
					 String ^ques=reader->GetString(1);
					 ProfileSecuritycomboBox->Items->Add(ques);

				 }
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while reading data (Security Questions)");
			 }
			 

			 //forums
			 outputpanel->Controls->Clear();
			 DiscussionForum ^ discuss = gcnew DiscussionForum;
			 discuss->username=username;
			 outputpanel->Controls->Add(discuss);	
			 
			 func();


		 }

			void func(void)
			{
				System::Object ^sender;
				System::EventArgs ^e;
				this->HeaderHomebutton_Click(sender,e);
				this->button1_Click(sender,e);
			}


private: System::Void HeaderForumbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void HomeTitlelabel_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ARApprovebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(arlistBox->SelectedIndex==-1)
				 return;
			 String ^user=arlistBox->SelectedItem->ToString();
				if(user=="")
				{
					MessageBox::Show("Select an entry","Approve");
					return;
				}
				//approve
				try
				{
					connection->Open();
					command->Connection=connection;
					query="Update Users Set [IsApproved]= 1,[Status]= 'Approved' where UserName= '"+user+"';";
					command->CommandText=query;
					command->ExecuteNonQuery();
					MessageBox::Show("Successfully Approved");
					//Refresh
					connection->Close();
					System::Object ^sender;
					System::EventArgs ^e;
					this->button1_Click(sender,e);

				}
				catch (Exception ^e)
				{
					MessageBox::Show(e->Message,"Error while updating Approval");
				}

				
				
		 }
private: System::Void arlistBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^user=arlistBox->SelectedItem->ToString();
			 if(user=="")
			 {
				 arinfotextBox->Items->Clear();
				 return;
			 }
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from Users where UserName='"+user+"';";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 while(reader->Read())
				 {
					 String ^firstname=reader->GetString(2);
					 String ^lastname=reader->GetString(17);
					 String ^email=reader->GetString(4);
					 //String ^contact=
					 arinfotextBox->Items->Clear();
					 arinfotextBox->Items->Add("FIRST NAME: "+firstname+" |LAST NAME :"+lastname+" |EMAIL: "+email);

				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from AR Info retrieval");
			 }

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 ARpanel->Show();
			 suggestionpanel->Hide();
			 udpanel->Hide();
			 lupanel->Hide();
			 uupanel->Hide();
			 abrpanel->Hide();
			 arlistBox->Items->Clear();
			 //read from db
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from Users where [Designation]='prof' and [Status]='Pending';";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 while(reader->Read())
				 {
					 
					 arlistBox->Items->Add(reader->GetString(1));

				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from AR ListBox retrieval");
			 }

		 }
private: System::Void ARRejectbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(arlistBox->SelectedIndex==-1)
				 return;
			 String ^user=arlistBox->SelectedItem->ToString();
			 if(user=="")
			 {
				 MessageBox::Show("Select an entry","Reject");
				 return;
			 }
			 //Ask for reason
			 String ^input=Microsoft::VisualBasic::Interaction::InputBox(L"Enter Reason:","Reject","",500,500);
			 if(input=="")
			 {
				 MessageBox::Show("A valid reason should be specified for Reject","Reject");
				 return;
			 }
			 //Reject
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [Reason]= '"+input+"',[Status]= 'Rejected' where UserName= '"+user+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 MessageBox::Show("Successfully Rejected");
				 //Refresh
				 connection->Close();
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button1_Click(sender,e);

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while updating Rejection");
			 }

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 ARpanel->Hide();
			 suggestionpanel->Show();
			 udpanel->Hide();
			 lupanel->Hide();
			 uupanel->Hide();
			 abrpanel->Hide();
			 suggestionlistBox->Items->Clear();
			 //read from db
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Suggestion] where [Status]='Pending';";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached Here");
				 while(reader->Read())
				 {
					 int id=reader->GetInt32(0);
					 suggestionlistBox->Items->Add(""+id);

				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from Suggestion ListBox retrieval");
			 }

		 }
private: System::Void suggestionlistBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^id=suggestionlistBox->SelectedItem->ToString();
			 if(id=="")
			 {
				 suggestioninfotextBox->Text="";
				 return;
			 }
			 //MessageBox::Show(id);
			 int ID=Convert::ToInt32(id);

			 MessageBox::Show("Reached here");
			 
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from Suggestion where [ID]="+ID+";";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached here");
				 while(reader->Read())
				 {
					 String ^type=reader->GetString(1);
					 String ^ques=reader->GetString(2);
					 //MessageBox::Show("|"+reader->GetData(3)+"|");
					 String ^op1=reader->GetString(3);
					 String ^op2=reader->GetString(4);
					 String ^op3=reader->GetString(5);
					 String ^op4=reader->GetString(6);
					 //String ^ ans1=reader->GetString(7);
					 //String ^ans2=reader->GetString(8);
					 //String ^ans3=reader->GetString(9);
					 //String ^ans4=reader->GetString(10);
					 String ^user=reader->GetString(12);
					 int ds2=reader->GetInt32(13);
					 int module2=reader->GetInt32(14);
					 String ^ds=Convert::ToString(ds2);
					 String ^module=Convert::ToString(module2);
					 String ^reason=reader->GetString(16);
					 MessageBox::Show("Reached here");
					 
					 suggestioninfotextBox->Text="TYPE: "+type+" |QUESTION :"+ques+" |OPTION 1: "+op1+" |OPTION 2: "+op2+" |OPTION 3: "+op3+" |OPTION 4: "+op4+" |USER: "+user+" |DS: "+ds+" : "+ds+" |MODULE: "+module+" |REASON: "+reason;
					 MessageBox::Show("Reached here");
				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from Suggestion Info retrieval");
			 }
		 }


private: System::Void udinfotextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 ARpanel->Hide();
			 suggestionpanel->Hide();
			 udpanel->Show();
			 lupanel->Hide();
			 uupanel->Hide();
			 abrpanel->Hide();
			 udlistBox->Items->Clear();
			 //read from db
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Users] ;";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached Here");
				 while(reader->Read())
				 {
					 String ^user=reader->GetString(1);
					 if(user!="guest")
					 udlistBox->Items->Add(user);

				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from Delete user ListBox retrieval");
			 }
		 }
private: System::Void udlistBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 String ^user=udlistBox->SelectedItem->ToString();
			 if(user=="")
			 {
				udinfotextBox->Items->Clear();
				 return;
			 }
			 //MessageBox::Show(id);
			 
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from Users where UserName='"+user+"';";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached here");
				 while(reader->Read())
				 {
					 String ^firstname=reader->GetString(2);
					 String ^lastname=reader->GetString(17);
					 //MessageBox::Show("|"+reader->GetData(3)+"|");
					 String ^email=reader->GetString(4);
					 String ^designation=reader->GetString(7);
					 //String ^contact=reader->GetString(5);
					 

					udinfotextBox->Items->Clear();
					 udinfotextBox->Items->Add("FIRST NAME: "+firstname+" |LAST NAME :"+lastname+" |EMAIL: "+email+" |DESIGNATION: "+designation+" |CONTACT: "+contact);

				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from User Delete Info retrieval");
			 }

		 }
private: System::Void udDeletebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(udlistBox->SelectedIndex==-1)
				 return;
			 String ^user=udlistBox->SelectedItem->ToString();
			 if(user=="")
			 {
				 MessageBox::Show("Select an entry","Reject");
				 return;
			 }

			 String ^designation;
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select Designation from Users where UserName= '"+user+"';";
				 command->CommandText=query;
				 designation=command->ExecuteScalar()->ToString();
				 if(designation=="admin")
				 {
					 MessageBox::Show("Can't delete an Admin","Delete User");
					 connection->Close();
					 return;
				 }
				 if(user=="guest")
				 {
					 MessageBox::Show("Can't delete guest","Delete User");
					 connection->Close();
					 return;
				 }
				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while reading designation of USER for Delete");
			 }
			 
			 //Delete from users table
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="DELETE from Users  where UserName= '"+user+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 
				 connection->Close();
			

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while updating Users(user Delete)");
			 }
			 //Delete from suggestions table
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="DELETE from Suggestion  where Username= '"+user+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();

				 connection->Close();
				 MessageBox::Show("Successfully deleted User","User Delete");
				 //Refresh
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button4_Click(sender,e);



			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while updating Users(user Delete)");
			 }
		 }

private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 ARpanel->Hide();
			 suggestionpanel->Hide();
			 udpanel->Hide();
			 lupanel->Show();
			 uupanel->Hide();
			 abrpanel->Hide();
			 //MessageBox::Show("Came here");
			 lulistBox->Items->Clear();
			 //read from db
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Users]  ;";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached Here");
				 while(reader->Read())
				 {
					 String ^user=reader->GetString(1);
					 String ^st=reader->GetString(22);
					 String ^designation=reader->GetString(7);
					 String ^firstname=reader->GetString(2);
					 String ^email=reader->GetString(4);
					 int count=reader->GetInt32(21);
					 if(st!="Locked")
					 {
						 String ^res="Username: "+user+" |Abuse Count: "+count+" |First Name: "+firstname+" |Designation: "+designation+" |Email: "+email;
						 lulistBox->Items->Add(res);
					 }


				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from User Lock ListBox retrieval");
			 }
		 }
private: System::Void lulockbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lulistBox->SelectedIndex==-1)
				 return;
			 String ^res=lulistBox->SelectedItem->ToString();
			 if(res=="")
			 {
				 MessageBox::Show("Select an entry","Lock");
				 return;
			 }
			 String ^user="";
			 //Getting username from the string res
			 int i=0;
			 while(res[i]!=' ')
			 {
				 i++;
			 }i++;
			 while(res[i]!=' ')
			 {
				 user=user+""+res[i];
				 i++;
			 }
			 //MessageBox::Show(user);
			 String ^designation;
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select Designation from Users where UserName= '"+user+"';";
				 command->CommandText=query;
				designation=command->ExecuteScalar()->ToString();
				 if(designation=="admin")
				 {
					 MessageBox::Show("Can't lock an Admin","Lock User");
					 connection->Close();
					 return;
				 }
				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while reading designation of USER for lock");
			 }
			 //LOCK
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [LStatus]= 'Locked' where UserName= '"+user+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 MessageBox::Show("Successfully Locked");
				 //Refresh
				 connection->Close();
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button3_Click_1(sender,e);
				

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while Locking User");
			 }

		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(uulistBox->SelectedIndex==-1)
				 return;
			 String ^res=uulistBox->SelectedItem->ToString();
			 if(res=="")
			 {
				 MessageBox::Show("Select an entry","Unlock");
				 return;
			 }
			 String ^user="";
			 //Getting username from the string res
			 int i=0;
			 while(res[i]!=' ')
			 {
				 i++;
			 }i++;
			 while(res[i]!=' ')
			 {
				 user=user+""+res[i];
				 i++;
			 }
			 //MessageBox::Show(user);
			 //approve
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [LStatus]= 'Unocked' where UserName= '"+user+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 MessageBox::Show("Successfully Unocked");
				 //Refresh
				 connection->Close();
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button6_Click(sender,e);
				

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while Unlocking User");
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 ARpanel->Hide();
			 suggestionpanel->Hide();
			 udpanel->Hide();
			 lupanel->Hide();
			 uupanel->Show();
			 abrpanel->Hide();
			 //MessageBox::Show("Came here");
			 uulistBox->Items->Clear();
			 //read from db
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Users]  ;";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached Here");
				 while(reader->Read())
				 {
					 String ^user=reader->GetString(1);
					 String ^st=reader->GetString(22);
					 String ^designation=reader->GetString(7);
					 String ^firstname=reader->GetString(2);
					 String ^email=reader->GetString(4);
					 int count=reader->GetInt32(21);
					 if(st=="Locked")
					 {
						 String ^res="Username: "+user+" |Abuse Count: "+count+" |First Name: "+firstname+" |Designation: "+designation+" |Email: "+email;
						 uulistBox->Items->Add(res);
					 }


				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from User Unlock ListBox retrieval");
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 ARpanel->Hide();
			 suggestionpanel->Hide();
			 udpanel->Hide();
			 lupanel->Hide();
			 uupanel->Hide();
			 abrpanel->Show();
			 //MessageBox::Show("Came here");
			 abrlistBox->Items->Clear();

			 //read from Messages table
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Messages]  ;";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached Here");
				 while(reader->Read())
				 {
					 String ^user=reader->GetString(5);
					 String ^msg=reader->GetString(1);
					 String ^designation=reader->GetString(6);
					 String ^section=reader->GetString(3);
					 String ^abuse=reader->GetString(7);
					 int mid=reader->GetInt32(0);
					 if(abuse=="YES")
					 {
						 String ^res="Username: "+user+" |Messaged ID: "+mid+" |Message: "+msg+" |Section: "+section+" |Designation: "+designation;
						 abrlistBox->Items->Add(res);
					 }


				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from Report abuse ListBox retrieval(Messages)");
			 }

			 //read from Replies table
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Replies]  ;";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached Here");
				 while(reader->Read())
				 {
					 String ^user=reader->GetString(2);
					 String ^msg=reader->GetString(3);
					 String ^designation=reader->GetString(5);
					 
					 String ^abuse=reader->GetString(6);
					 int mid=reader->GetInt32(1);
					 int rid=reader->GetInt32(0);
					 if(abuse=="YES")
					 {
						 String ^res="Username: "+user+" |Messaged ID: "+mid+" |Reply ID: "+rid+" |Reply: "+msg+" |Designation: "+designation;
						 abrlistBox->Items->Add(res);
					 }


				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from Report abuse ListBox retrieval(Replies)");
			 }
		 }
private: System::Void HeaderForumbutton_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Homepanel->Hide();
			 Profilepanel->Hide();
			 //DSpanel->Hide();
			 outputpanel->Show();
			 HeaderStatusPanelpictureBox3->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox1->BackColor=Color::Black;
			 //HeaderStatusPanelpictureBox2->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox4->BackColor=Color::Red;
			 HeaderHomebutton->BackColor=Color::Black;
			 //HeaderDSButton->BackColor=Color::Black;
			 HeaderForumbutton->BackColor=Color::Gray;
			 HeaderProfilebutton->BackColor=Color::Black;
		 }
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void suggestionlistBox_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 String ^id=suggestionlistBox->SelectedItem->ToString();
			 if(id=="")
			 {
				 suggestioninfotextBox->Items->Clear();
				 return;
			 }
			 //MessageBox::Show(id);
			 int ID=Convert::ToInt32(id);

			 //MessageBox::Show("Reached here");

			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from Suggestion where [ID]="+ID+";";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached here");
				 while(reader->Read())
				 {
					 String ^type=reader->GetString(1);
					 String ^ques=reader->GetString(2);
					 //MessageBox::Show("|"+reader->GetData(3)+"|");
					 String ^op1=reader->GetString(3);
					 String ^op2=reader->GetString(4);
					 String ^op3=reader->GetString(5);
					 String ^op4=reader->GetString(6);
					 //String ^ ans1=reader->GetString(7);
					 //String ^ans2=reader->GetString(8);
					 //String ^ans3=reader->GetString(9);
					 //String ^ans4=reader->GetString(10);
					 String ^user=reader->GetString(12);
					 int ds2=reader->GetInt32(13);
					 int module2=reader->GetInt32(14);
					 String ^ds=Convert::ToString(ds2);
					 String ^module=Convert::ToString(module2);
					 String ^reason=reader->GetString(16);
					 //MessageBox::Show("Reached here");

					 suggestioninfotextBox->Items->Clear();
					 suggestioninfotextBox->Items->Add("TYPE: "+type+" |QUESTION :"+ques+" |OPTION 1: "+op1+" |OPTION 2: "+op2+" |OPTION 3: "+op3+" |OPTION 4: "+op4+" |USER: "+user+" |DS: "+ds+" : "+ds+" |MODULE: "+module+" |REASON: "+reason);
					 //MessageBox::Show("Reached here");
				 }

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while connecting to DB from Suggestion Info retrieval");
			 }
		 }
private: System::Void SuggestionRejectbutton_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if(suggestionlistBox->SelectedIndex==-1)
				 return;
			 String ^id=suggestionlistBox->SelectedItem->ToString();
			 if(id=="")
			 {
				 MessageBox::Show("Select an entry","Reject");
				 return;
			 }
			 int ID=Convert::ToInt32(id);
			 //Ask for reason
			 String ^input;
			 input=Microsoft::VisualBasic::Interaction::InputBox(L"Enter Reason:","Reject","",500,500);
			 //MessageBox::Show(input);
			 int i=0;
			 int len=input->Length;
			 bool flag=false;
			 for(int i=0;i<len;i++)
			 {
				 if(isalpha(input[i]))
				 {
					flag=true;
					break;
				 }
			 }
			 if(!flag)
			 {
				 MessageBox::Show("A valid reason should be specified for Reject","Reject");
				 return;
			 }
			 if(input=="")
			 {
				 MessageBox::Show("A valid reason should be specified for Reject","Reject");
				 return;
			 }
			 //Reject
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Suggestion Set [Reason]= '"+input+"',[Status]= 'Rejected' where ID= "+ID+";";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 MessageBox::Show("Successfully Rejected");
				 //Refresh
				 connection->Close();
				 System::Object ^sender;
				 System::EventArgs ^e;
				 this->button2_Click(sender,e);

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while updating Rejection(Suggestion)");
			 }
		 }
private: System::Void suggestionapprovebutton_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if(suggestionlistBox->SelectedIndex==-1)
				 return;
			 //MessageBox::Show(""+suggestionlistBox->SelectedIndex);
			 String ^id=suggestionlistBox->SelectedItem->ToString();
			 if(id=="")
			 {
				 MessageBox::Show("Select an entry","Approve");
				 return;
			 }
			 //approve
			 int ID=Convert::ToInt32(id);
			 //Get module and ds id and type
			 int ds,module;
			 String ^type;
			 String ^op1;
			 String ^op2;
			 String ^op3;
			 String ^op4;
			 String ^ans1;
			 String ^ans2;
			 String ^ans3;
			 String ^ans4;
			 String ^ques;
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Suggestion] where [ID]="+ID+";";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();

				 while(reader->Read())
				 {
					 ds=reader->GetInt32(13);
					 ques=reader->GetString(2);
					 module=reader->GetInt32(14);
					 type=reader->GetString(1);
					 op1=reader->GetString(3);
					 op2=reader->GetString(4);
					 op3=reader->GetString(5);
					 op4=reader->GetString(6);

				 }
				 connection->Close();
				 connection->Open();
				 command->Connection=connection;

				 query="Select Answer1 From Suggestion Where ID = "+ID+";";
				 command->CommandText=query;
				 ans1=command->ExecuteScalar()->ToString();

				 query="Select Answer2 From Suggestion Where ID = "+ID+";";
				 command->CommandText=query;
				 ans2=command->ExecuteScalar()->ToString();

				 query="Select Answer3 From Suggestion Where ID ="+ID+";";
				 command->CommandText=query;
				 ans3=command->ExecuteScalar()->ToString();

				 query="Select Answer4 From Suggestion Where ID = "+ID+";";
				 command->CommandText=query;
				 ans4=command->ExecuteScalar()->ToString();

				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while reading ds and module id for Approve(Suggestion)");
			 }


			 //Update Suggestion table
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Suggestion Set [Status]= 'Approved' where [ID]= "+ID+";";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 connection->Close();

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while updating Approval(Suggestion)");
			 }


			 if(type=="ADD")		//add to quizzes table
			 {
				 try
				 {
					 connection->Open();
					 command->Connection=connection;
					 query = "INSERT INTO [Quizzes] ([Question], OptionA, OptionB, OptionC, OptionD, AnswerA , AnswerB, AnswerC, AnswerD,DataStructureID,ModuleID) VALUES ('"+ques+"', '"+op1+"', '"+op2+"', '"+op3+"', '"+op4+"', "+ans1+", "+ans2+", "+ans3+", "+ans4+", "+ds+","+module+"); ";
					 command->CommandText=query;
					 command->ExecuteNonQuery();
					 connection->Close();

					 MessageBox::Show("Successfully Approved and Added to DB");
					 //Refresh

					 System::Object ^sender;
					 System::EventArgs ^e;
					 this->button2_Click(sender,e);


				 }
				 catch (Exception ^e)
				 {
					 MessageBox::Show(e->Message,"Error while updating Quizzes table Approval(Suggestion)");
				 }

			 }
			 else		//DELETE
			 {
				 try
				 {
					 connection->Open();
					 command->Connection=connection;
					 query = "DELETE from Quizzes Where Question = '"+ques+"' and DataStructureID = "+ds+" and ModuleID ="+module+" ;";
					 command->CommandText=query;
					 command->ExecuteNonQuery();
					 connection->Close();

					 MessageBox::Show("Successfully Approved and Deleted from DB");
					 //Refresh

					 System::Object ^sender;
					 System::EventArgs ^e;
					 this->button2_Click(sender,e);


				 }
				 catch (Exception ^e)
				 {
					 MessageBox::Show(e->Message,"Error while updating Quizzes table Deletion(Suggestion)");
				 }

			 }


		 }
private: System::Void HeaderHomepagebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Homepage ^form=gcnew Homepage;
			 form->vartextBox->Text=username;
			 this->Hide();
			 form->ShowDialog();
			 this->Show();
		 }
};
}