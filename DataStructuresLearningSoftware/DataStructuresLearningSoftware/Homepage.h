#pragma once

#include "Arrays.h"
#include "LinkedList1.h"
#include "Searching.h"
#include "Sorting.h"
#include "Stack_Main.h"
#include "Queue_Home.h"
#include "BST.h"
#include "Graph.h"
#include "Heap.h"
#include "Graphs_Home.h"
#include "DiscussionForum_Main.h"
#include<string.h>
#include <string>
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>


namespace DataStructuresLearningSoftware {

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
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
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
	String ^reason;
	String ^status;
	int ds_id;
	int module_id;
	
	OleDb::OleDbConnection ^connection;
	private: System::Windows::Forms::OpenFileDialog^  ProfileopenFileDialog;
	private: System::Windows::Forms::Label^  ProfilePicturelabel;
	private: System::Windows::Forms::Label^  ProfileErrorlabel;
	private: System::Windows::Forms::Button^  Profilecodebutton;
	private: System::Windows::Forms::TextBox^  ProfilecodetextBox;
	private: System::Windows::Forms::Label^  HomeTitlelabel;
	private: System::Windows::Forms::ProgressBar^  queueprogressBar;

	private: System::Windows::Forms::ProgressBar^  stackprogressBar;

	private: System::Windows::Forms::ProgressBar^  sortingprogressBar;

	private: System::Windows::Forms::ProgressBar^  searchingprogressBar;

	private: System::Windows::Forms::ProgressBar^  llprogressBar;

	private: System::Windows::Forms::ProgressBar^  ArrayprogressBar;
	private: System::Windows::Forms::Label^  queueprogresslabel;
	private: System::Windows::Forms::Label^  stackprogresslabel;
	private: System::Windows::Forms::Label^  sortingprigresslabel;
	private: System::Windows::Forms::Label^  searchingprogresslabel;
	private: System::Windows::Forms::Label^  llprogresslabel;
	private: System::Windows::Forms::Label^  Arrayprogresslabel;



	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel6;
	public: System::Windows::Forms::TextBox^  vartextBox;
	private: System::Windows::Forms::Label^  HomepanelStatuslabel;
	private: System::Windows::Forms::Panel^  DSpanel;
	private: System::Windows::Forms::Panel^  Suggestionpanel;

	private: System::Windows::Forms::RadioButton^  deleteradioButton;
	private: System::Windows::Forms::RadioButton^  addradioButton;
	private: System::Windows::Forms::Panel^  SuggestionADDpanel;
	private: System::Windows::Forms::CheckBox^  SuggestionAddOption1checkBox;






	private: System::Windows::Forms::Label^  DSSuggestionlabel;
	private: System::Windows::Forms::ComboBox^  ModulecomboBox;
	private: System::Windows::Forms::ComboBox^  DScomboBox;
	private: System::Windows::Forms::Panel^  DSLinkpanel;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::TextBox^  SuggestionAddOption4textBox;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::TextBox^  SuggestionAddoption2textBox;

	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  SuggestionAddOption3textBox;




	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  SuggestionAddOption1textBox;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  SuggestionAddQuestiontextBox;
	private: System::Windows::Forms::CheckBox^  SuggestionAddOption4checkBox;
	private: System::Windows::Forms::CheckBox^  SuggestionAddOption3checkBox;
	private: System::Windows::Forms::CheckBox^  SuggestionAddOption2checkBox;
	private: System::Windows::Forms::Button^  SuggestionAddSuggestionbutton;
	private: System::Windows::Forms::RadioButton^  PastSuggestionradioButton;
private: System::Windows::Forms::Label^  SuggestionAddCorrectlabel;
private: System::Windows::Forms::Panel^  SuggestionPastpanel;
private: System::Windows::Forms::ListBox^  SuggestionPastlistBox;
private: System::Windows::Forms::Panel^  SuggestionDeletepanel;
private: System::Windows::Forms::Button^  SuggestionDeletebutton;
private: System::Windows::Forms::ListBox^  SuggestionDeletelistBox;

private: System::Windows::Forms::Button^  btnStacks;

private: System::Windows::Forms::Button^  btnSorting;

private: System::Windows::Forms::Button^  btnSearching;

private: System::Windows::Forms::Button^  btnLinkedList;

private: System::Windows::Forms::Button^  btnArrays;
private: System::Windows::Forms::Button^  btnGraphs;


private: System::Windows::Forms::Button^  btnHeaps;

private: System::Windows::Forms::Button^  btnTrees;

private: System::Windows::Forms::Button^  btnQueues;
private: System::Windows::Forms::Button^  DSSuggestionsbutton;
private: System::Windows::Forms::Button^  SuggestionDSbutton;
private: System::Windows::Forms::Label^  HomeReasonlabel;
private: System::Windows::Forms::Panel^  outputpanel;
private: System::Windows::Forms::Button^  AdminPagebutton;










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

		
		Homepage(void)
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
			DSpanel->Hide();
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
			HomeReasonlabel->Hide();
			AdminPagebutton->Hide();
				

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  HeaderPanel;
	private: System::Windows::Forms::Button^  HeaderDSButton;
	private: System::Windows::Forms::Button^  HeaderForumbutton;


	

	private: System::Windows::Forms::Button^  HeaderProfilebutton;

	private: System::Windows::Forms::Button^  HeaderHomebutton;
	private: System::Windows::Forms::Button^  HeaderLogoutbutton;
	private: System::Windows::Forms::Button^  HeaderClosebutton;
	private: System::Windows::Forms::Panel^  Headerstatuspanel;
	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox4;

	private: System::Windows::Forms::PictureBox^  HeaderStatusPanelpictureBox2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Homepage::typeid));
			this->HeaderPanel = (gcnew System::Windows::Forms::Panel());
			this->AdminPagebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderClosebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderLogoutbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderDSButton = (gcnew System::Windows::Forms::Button());
			this->HeaderForumbutton = (gcnew System::Windows::Forms::Button());
			this->HeaderProfilebutton = (gcnew System::Windows::Forms::Button());
			this->HeaderHomebutton = (gcnew System::Windows::Forms::Button());
			this->Headerstatuspanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderStatusPanelpictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->HeaderStatusPanelpictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Homepanel = (gcnew System::Windows::Forms::Panel());
			this->HomeReasonlabel = (gcnew System::Windows::Forms::Label());
			this->HomepanelStatuslabel = (gcnew System::Windows::Forms::Label());
			this->vartextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->queueprogresslabel = (gcnew System::Windows::Forms::Label());
			this->stackprogresslabel = (gcnew System::Windows::Forms::Label());
			this->sortingprigresslabel = (gcnew System::Windows::Forms::Label());
			this->searchingprogresslabel = (gcnew System::Windows::Forms::Label());
			this->llprogresslabel = (gcnew System::Windows::Forms::Label());
			this->Arrayprogresslabel = (gcnew System::Windows::Forms::Label());
			this->queueprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->stackprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->sortingprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->searchingprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->llprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->ArrayprogressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->HomeTitlelabel = (gcnew System::Windows::Forms::Label());
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
			this->DSpanel = (gcnew System::Windows::Forms::Panel());
			this->Suggestionpanel = (gcnew System::Windows::Forms::Panel());
			this->SuggestionADDpanel = (gcnew System::Windows::Forms::Panel());
			this->SuggestionAddCorrectlabel = (gcnew System::Windows::Forms::Label());
			this->SuggestionAddSuggestionbutton = (gcnew System::Windows::Forms::Button());
			this->SuggestionAddOption4checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuggestionAddOption3checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuggestionAddOption2checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->SuggestionAddOption4textBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->SuggestionAddoption2textBox = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->SuggestionAddOption3textBox = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SuggestionAddOption1textBox = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SuggestionAddQuestiontextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuggestionAddOption1checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuggestionPastpanel = (gcnew System::Windows::Forms::Panel());
			this->SuggestionPastlistBox = (gcnew System::Windows::Forms::ListBox());
			this->SuggestionDeletepanel = (gcnew System::Windows::Forms::Panel());
			this->SuggestionDeletebutton = (gcnew System::Windows::Forms::Button());
			this->SuggestionDeletelistBox = (gcnew System::Windows::Forms::ListBox());
			this->SuggestionDSbutton = (gcnew System::Windows::Forms::Button());
			this->PastSuggestionradioButton = (gcnew System::Windows::Forms::RadioButton());
			this->deleteradioButton = (gcnew System::Windows::Forms::RadioButton());
			this->addradioButton = (gcnew System::Windows::Forms::RadioButton());
			this->DSSuggestionlabel = (gcnew System::Windows::Forms::Label());
			this->ModulecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->DScomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->DSLinkpanel = (gcnew System::Windows::Forms::Panel());
			this->DSSuggestionsbutton = (gcnew System::Windows::Forms::Button());
			this->btnGraphs = (gcnew System::Windows::Forms::Button());
			this->btnHeaps = (gcnew System::Windows::Forms::Button());
			this->btnTrees = (gcnew System::Windows::Forms::Button());
			this->btnQueues = (gcnew System::Windows::Forms::Button());
			this->btnStacks = (gcnew System::Windows::Forms::Button());
			this->btnSorting = (gcnew System::Windows::Forms::Button());
			this->btnSearching = (gcnew System::Windows::Forms::Button());
			this->btnLinkedList = (gcnew System::Windows::Forms::Button());
			this->btnArrays = (gcnew System::Windows::Forms::Button());
			this->outputpanel = (gcnew System::Windows::Forms::Panel());
			this->HeaderPanel->SuspendLayout();
			this->Headerstatuspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->BeginInit();
			this->Homepanel->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
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
			this->DSpanel->SuspendLayout();
			this->Suggestionpanel->SuspendLayout();
			this->SuggestionADDpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuggestionPastpanel->SuspendLayout();
			this->SuggestionDeletepanel->SuspendLayout();
			this->DSLinkpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// HeaderPanel
			// 
			this->HeaderPanel->BackColor = System::Drawing::Color::Black;
			this->HeaderPanel->Controls->Add(this->AdminPagebutton);
			this->HeaderPanel->Controls->Add(this->HeaderClosebutton);
			this->HeaderPanel->Controls->Add(this->HeaderLogoutbutton);
			this->HeaderPanel->Controls->Add(this->HeaderDSButton);
			this->HeaderPanel->Controls->Add(this->HeaderForumbutton);
			this->HeaderPanel->Controls->Add(this->HeaderProfilebutton);
			this->HeaderPanel->Controls->Add(this->HeaderHomebutton);
			this->HeaderPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->HeaderPanel->ForeColor = System::Drawing::Color::White;
			this->HeaderPanel->Location = System::Drawing::Point(0, 0);
			this->HeaderPanel->Margin = System::Windows::Forms::Padding(0);
			this->HeaderPanel->Name = L"HeaderPanel";
			this->HeaderPanel->Size = System::Drawing::Size(960, 41);
			this->HeaderPanel->TabIndex = 0;
			// 
			// AdminPagebutton
			// 
			this->AdminPagebutton->BackColor = System::Drawing::Color::Black;
			this->AdminPagebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AdminPagebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AdminPagebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AdminPagebutton->ForeColor = System::Drawing::Color::White;
			this->AdminPagebutton->Location = System::Drawing::Point(739, 0);
			this->AdminPagebutton->Margin = System::Windows::Forms::Padding(2);
			this->AdminPagebutton->Name = L"AdminPagebutton";
			this->AdminPagebutton->Size = System::Drawing::Size(154, 41);
			this->AdminPagebutton->TabIndex = 19;
			this->AdminPagebutton->Text = L"ADMIN PAGE";
			this->AdminPagebutton->UseVisualStyleBackColor = false;
			this->AdminPagebutton->Click += gcnew System::EventHandler(this, &Homepage::AdminPagebutton_Click);
			// 
			// HeaderClosebutton
			// 
			this->HeaderClosebutton->BackColor = System::Drawing::Color::White;
			this->HeaderClosebutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"HeaderClosebutton.BackgroundImage")));
			this->HeaderClosebutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HeaderClosebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderClosebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderClosebutton->Location = System::Drawing::Point(920, 0);
			this->HeaderClosebutton->Margin = System::Windows::Forms::Padding(2);
			this->HeaderClosebutton->Name = L"HeaderClosebutton";
			this->HeaderClosebutton->Size = System::Drawing::Size(40, 41);
			this->HeaderClosebutton->TabIndex = 4;
			this->HeaderClosebutton->UseVisualStyleBackColor = false;
			this->HeaderClosebutton->Click += gcnew System::EventHandler(this, &Homepage::HeaderClosebutton_Click);
			this->HeaderClosebutton->MouseEnter += gcnew System::EventHandler(this, &Homepage::HeaderClosebutton_MouseEnter);
			this->HeaderClosebutton->MouseLeave += gcnew System::EventHandler(this, &Homepage::HeaderClosebutton_MouseLeave);
			// 
			// HeaderLogoutbutton
			// 
			this->HeaderLogoutbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderLogoutbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderLogoutbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderLogoutbutton->Location = System::Drawing::Point(738, 0);
			this->HeaderLogoutbutton->Margin = System::Windows::Forms::Padding(2);
			this->HeaderLogoutbutton->Name = L"HeaderLogoutbutton";
			this->HeaderLogoutbutton->Size = System::Drawing::Size(144, 41);
			this->HeaderLogoutbutton->TabIndex = 2;
			this->HeaderLogoutbutton->Text = L"LOGOUT";
			this->HeaderLogoutbutton->UseVisualStyleBackColor = true;
			this->HeaderLogoutbutton->Click += gcnew System::EventHandler(this, &Homepage::HeaderLogoutbutton_Click);
			// 
			// HeaderDSButton
			// 
			this->HeaderDSButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderDSButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderDSButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderDSButton->Location = System::Drawing::Point(184, 0);
			this->HeaderDSButton->Margin = System::Windows::Forms::Padding(2);
			this->HeaderDSButton->Name = L"HeaderDSButton";
			this->HeaderDSButton->Size = System::Drawing::Size(180, 41);
			this->HeaderDSButton->TabIndex = 2;
			this->HeaderDSButton->Text = L"DS";
			this->HeaderDSButton->UseVisualStyleBackColor = true;
			this->HeaderDSButton->Click += gcnew System::EventHandler(this, &Homepage::HeaderDSButton_Click);
			// 
			// HeaderForumbutton
			// 
			this->HeaderForumbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderForumbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderForumbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderForumbutton->Location = System::Drawing::Point(554, 0);
			this->HeaderForumbutton->Margin = System::Windows::Forms::Padding(2);
			this->HeaderForumbutton->Name = L"HeaderForumbutton";
			this->HeaderForumbutton->Size = System::Drawing::Size(180, 41);
			this->HeaderForumbutton->TabIndex = 2;
			this->HeaderForumbutton->Text = L"FORUMS";
			this->HeaderForumbutton->UseVisualStyleBackColor = true;
			this->HeaderForumbutton->Click += gcnew System::EventHandler(this, &Homepage::HeaderForumbutton_Click);
			// 
			// HeaderProfilebutton
			// 
			this->HeaderProfilebutton->BackColor = System::Drawing::Color::Black;
			this->HeaderProfilebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderProfilebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderProfilebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HeaderProfilebutton->Location = System::Drawing::Point(369, 0);
			this->HeaderProfilebutton->Margin = System::Windows::Forms::Padding(2);
			this->HeaderProfilebutton->Name = L"HeaderProfilebutton";
			this->HeaderProfilebutton->Size = System::Drawing::Size(180, 41);
			this->HeaderProfilebutton->TabIndex = 3;
			this->HeaderProfilebutton->Text = L"PROFILE";
			this->HeaderProfilebutton->UseVisualStyleBackColor = false;
			this->HeaderProfilebutton->Click += gcnew System::EventHandler(this, &Homepage::button3_Click);
			// 
			// HeaderHomebutton
			// 
			this->HeaderHomebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HeaderHomebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HeaderHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HeaderHomebutton->Location = System::Drawing::Point(0, 0);
			this->HeaderHomebutton->Margin = System::Windows::Forms::Padding(2);
			this->HeaderHomebutton->Name = L"HeaderHomebutton";
			this->HeaderHomebutton->Size = System::Drawing::Size(180, 41);
			this->HeaderHomebutton->TabIndex = 1;
			this->HeaderHomebutton->Text = L"HOME";
			this->HeaderHomebutton->UseVisualStyleBackColor = true;
			this->HeaderHomebutton->Click += gcnew System::EventHandler(this, &Homepage::HeaderHomebutton_Click);
			// 
			// Headerstatuspanel
			// 
			this->Headerstatuspanel->BackColor = System::Drawing::Color::Black;
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox4);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox5);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox2);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox3);
			this->Headerstatuspanel->Controls->Add(this->HeaderStatusPanelpictureBox1);
			this->Headerstatuspanel->Location = System::Drawing::Point(0, 41);
			this->Headerstatuspanel->Margin = System::Windows::Forms::Padding(0);
			this->Headerstatuspanel->Name = L"Headerstatuspanel";
			this->Headerstatuspanel->Size = System::Drawing::Size(960, 12);
			this->Headerstatuspanel->TabIndex = 6;
			// 
			// HeaderStatusPanelpictureBox4
			// 
			this->HeaderStatusPanelpictureBox4->Location = System::Drawing::Point(554, 0);
			this->HeaderStatusPanelpictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->HeaderStatusPanelpictureBox4->Name = L"HeaderStatusPanelpictureBox4";
			this->HeaderStatusPanelpictureBox4->Size = System::Drawing::Size(180, 12);
			this->HeaderStatusPanelpictureBox4->TabIndex = 9;
			this->HeaderStatusPanelpictureBox4->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox5
			// 
			this->HeaderStatusPanelpictureBox5->Location = System::Drawing::Point(738, 0);
			this->HeaderStatusPanelpictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->HeaderStatusPanelpictureBox5->Name = L"HeaderStatusPanelpictureBox5";
			this->HeaderStatusPanelpictureBox5->Size = System::Drawing::Size(142, 12);
			this->HeaderStatusPanelpictureBox5->TabIndex = 10;
			this->HeaderStatusPanelpictureBox5->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox2
			// 
			this->HeaderStatusPanelpictureBox2->Location = System::Drawing::Point(184, 0);
			this->HeaderStatusPanelpictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->HeaderStatusPanelpictureBox2->Name = L"HeaderStatusPanelpictureBox2";
			this->HeaderStatusPanelpictureBox2->Size = System::Drawing::Size(180, 12);
			this->HeaderStatusPanelpictureBox2->TabIndex = 7;
			this->HeaderStatusPanelpictureBox2->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox3
			// 
			this->HeaderStatusPanelpictureBox3->BackColor = System::Drawing::Color::Black;
			this->HeaderStatusPanelpictureBox3->Location = System::Drawing::Point(369, 0);
			this->HeaderStatusPanelpictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->HeaderStatusPanelpictureBox3->Name = L"HeaderStatusPanelpictureBox3";
			this->HeaderStatusPanelpictureBox3->Size = System::Drawing::Size(180, 12);
			this->HeaderStatusPanelpictureBox3->TabIndex = 8;
			this->HeaderStatusPanelpictureBox3->TabStop = false;
			// 
			// HeaderStatusPanelpictureBox1
			// 
			this->HeaderStatusPanelpictureBox1->Location = System::Drawing::Point(0, 0);
			this->HeaderStatusPanelpictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->HeaderStatusPanelpictureBox1->Name = L"HeaderStatusPanelpictureBox1";
			this->HeaderStatusPanelpictureBox1->Size = System::Drawing::Size(180, 12);
			this->HeaderStatusPanelpictureBox1->TabIndex = 2;
			this->HeaderStatusPanelpictureBox1->TabStop = false;
			// 
			// Homepanel
			// 
			this->Homepanel->BackColor = System::Drawing::Color::AliceBlue;
			this->Homepanel->Controls->Add(this->HomeReasonlabel);
			this->Homepanel->Controls->Add(this->HomepanelStatuslabel);
			this->Homepanel->Controls->Add(this->vartextBox);
			this->Homepanel->Controls->Add(this->panel7);
			this->Homepanel->Controls->Add(this->HomeTitlelabel);
			this->Homepanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Homepanel->Location = System::Drawing::Point(0, 53);
			this->Homepanel->Margin = System::Windows::Forms::Padding(0);
			this->Homepanel->Name = L"Homepanel";
			this->Homepanel->Size = System::Drawing::Size(960, 573);
			this->Homepanel->TabIndex = 7;
			this->Homepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::Homepanel_Paint);
			// 
			// HomeReasonlabel
			// 
			this->HomeReasonlabel->AutoSize = true;
			this->HomeReasonlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->HomeReasonlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HomeReasonlabel->ForeColor = System::Drawing::Color::Maroon;
			this->HomeReasonlabel->Location = System::Drawing::Point(19, 76);
			this->HomeReasonlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->HomeReasonlabel->Name = L"HomeReasonlabel";
			this->HomeReasonlabel->Size = System::Drawing::Size(52, 18);
			this->HomeReasonlabel->TabIndex = 17;
			this->HomeReasonlabel->Text = L"label3";
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
			this->HomepanelStatuslabel->Location = System::Drawing::Point(21, 49);
			this->HomepanelStatuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->HomepanelStatuslabel->Name = L"HomepanelStatuslabel";
			this->HomepanelStatuslabel->Size = System::Drawing::Size(66, 24);
			this->HomepanelStatuslabel->TabIndex = 16;
			this->HomepanelStatuslabel->Text = L"label3";
			// 
			// vartextBox
			// 
			this->vartextBox->Location = System::Drawing::Point(742, 29);
			this->vartextBox->Margin = System::Windows::Forms::Padding(2);
			this->vartextBox->Name = L"vartextBox";
			this->vartextBox->Size = System::Drawing::Size(156, 20);
			this->vartextBox->TabIndex = 15;
			this->vartextBox->Visible = false;
			this->vartextBox->TextChanged += gcnew System::EventHandler(this, &Homepage::vartextBox_TextChanged);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Navy;
			this->panel7->Controls->Add(this->panel6);
			this->panel7->Location = System::Drawing::Point(57, 97);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(840, 473);
			this->panel7->TabIndex = 14;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->Controls->Add(this->queueprogresslabel);
			this->panel6->Controls->Add(this->stackprogresslabel);
			this->panel6->Controls->Add(this->sortingprigresslabel);
			this->panel6->Controls->Add(this->searchingprogresslabel);
			this->panel6->Controls->Add(this->llprogresslabel);
			this->panel6->Controls->Add(this->Arrayprogresslabel);
			this->panel6->Controls->Add(this->queueprogressBar);
			this->panel6->Controls->Add(this->stackprogressBar);
			this->panel6->Controls->Add(this->sortingprogressBar);
			this->panel6->Controls->Add(this->searchingprogressBar);
			this->panel6->Controls->Add(this->llprogressBar);
			this->panel6->Controls->Add(this->ArrayprogressBar);
			this->panel6->Location = System::Drawing::Point(4, 5);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(832, 463);
			this->panel6->TabIndex = 13;
			// 
			// queueprogresslabel
			// 
			this->queueprogresslabel->AutoSize = true;
			this->queueprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->queueprogresslabel->Location = System::Drawing::Point(9, 395);
			this->queueprogresslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->queueprogresslabel->Name = L"queueprogresslabel";
			this->queueprogresslabel->Size = System::Drawing::Size(204, 29);
			this->queueprogresslabel->TabIndex = 12;
			this->queueprogresslabel->Text = L"Queue Progress";
			// 
			// stackprogresslabel
			// 
			this->stackprogresslabel->AutoSize = true;
			this->stackprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->stackprogresslabel->Location = System::Drawing::Point(9, 316);
			this->stackprogresslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->stackprogresslabel->Name = L"stackprogresslabel";
			this->stackprogresslabel->Size = System::Drawing::Size(190, 29);
			this->stackprogresslabel->TabIndex = 11;
			this->stackprogresslabel->Text = L"Stack Progress";
			// 
			// sortingprigresslabel
			// 
			this->sortingprigresslabel->AutoSize = true;
			this->sortingprigresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sortingprigresslabel->Location = System::Drawing::Point(9, 245);
			this->sortingprigresslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->sortingprigresslabel->Name = L"sortingprigresslabel";
			this->sortingprigresslabel->Size = System::Drawing::Size(210, 29);
			this->sortingprigresslabel->TabIndex = 10;
			this->sortingprigresslabel->Text = L"Sorting Progress";
			// 
			// searchingprogresslabel
			// 
			this->searchingprogresslabel->AutoSize = true;
			this->searchingprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchingprogresslabel->Location = System::Drawing::Point(9, 166);
			this->searchingprogresslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->searchingprogresslabel->Name = L"searchingprogresslabel";
			this->searchingprogresslabel->Size = System::Drawing::Size(244, 29);
			this->searchingprogresslabel->TabIndex = 9;
			this->searchingprogresslabel->Text = L"Searching Progress";
			// 
			// llprogresslabel
			// 
			this->llprogresslabel->AutoSize = true;
			this->llprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->llprogresslabel->Location = System::Drawing::Point(9, 90);
			this->llprogresslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->llprogresslabel->Name = L"llprogresslabel";
			this->llprogresslabel->Size = System::Drawing::Size(252, 29);
			this->llprogresslabel->TabIndex = 8;
			this->llprogresslabel->Text = L"Linked List Progress";
			// 
			// Arrayprogresslabel
			// 
			this->Arrayprogresslabel->AutoSize = true;
			this->Arrayprogresslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Arrayprogresslabel->Location = System::Drawing::Point(10, 8);
			this->Arrayprogresslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Arrayprogresslabel->Name = L"Arrayprogresslabel";
			this->Arrayprogresslabel->Size = System::Drawing::Size(186, 29);
			this->Arrayprogresslabel->TabIndex = 7;
			this->Arrayprogresslabel->Text = L"Array Progress";
			// 
			// queueprogressBar
			// 
			this->queueprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->queueprogressBar->Location = System::Drawing::Point(14, 429);
			this->queueprogressBar->Margin = System::Windows::Forms::Padding(2);
			this->queueprogressBar->Maximum = 3;
			this->queueprogressBar->Name = L"queueprogressBar";
			this->queueprogressBar->Size = System::Drawing::Size(814, 28);
			this->queueprogressBar->TabIndex = 6;
			// 
			// stackprogressBar
			// 
			this->stackprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->stackprogressBar->Location = System::Drawing::Point(14, 353);
			this->stackprogressBar->Margin = System::Windows::Forms::Padding(2);
			this->stackprogressBar->Maximum = 3;
			this->stackprogressBar->Name = L"stackprogressBar";
			this->stackprogressBar->Size = System::Drawing::Size(814, 28);
			this->stackprogressBar->TabIndex = 5;
			// 
			// sortingprogressBar
			// 
			this->sortingprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->sortingprogressBar->Location = System::Drawing::Point(14, 276);
			this->sortingprogressBar->Margin = System::Windows::Forms::Padding(2);
			this->sortingprogressBar->Maximum = 6;
			this->sortingprogressBar->Name = L"sortingprogressBar";
			this->sortingprogressBar->Size = System::Drawing::Size(814, 28);
			this->sortingprogressBar->TabIndex = 4;
			// 
			// searchingprogressBar
			// 
			this->searchingprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->searchingprogressBar->Location = System::Drawing::Point(14, 201);
			this->searchingprogressBar->Margin = System::Windows::Forms::Padding(2);
			this->searchingprogressBar->Maximum = 4;
			this->searchingprogressBar->Name = L"searchingprogressBar";
			this->searchingprogressBar->Size = System::Drawing::Size(814, 28);
			this->searchingprogressBar->TabIndex = 3;
			this->searchingprogressBar->Click += gcnew System::EventHandler(this, &Homepage::progressBar2_Click);
			// 
			// llprogressBar
			// 
			this->llprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->llprogressBar->Location = System::Drawing::Point(14, 128);
			this->llprogressBar->Margin = System::Windows::Forms::Padding(2);
			this->llprogressBar->Maximum = 4;
			this->llprogressBar->Name = L"llprogressBar";
			this->llprogressBar->Size = System::Drawing::Size(814, 28);
			this->llprogressBar->TabIndex = 2;
			// 
			// ArrayprogressBar
			// 
			this->ArrayprogressBar->ForeColor = System::Drawing::Color::Blue;
			this->ArrayprogressBar->Location = System::Drawing::Point(14, 46);
			this->ArrayprogressBar->Margin = System::Windows::Forms::Padding(2);
			this->ArrayprogressBar->Maximum = 5;
			this->ArrayprogressBar->Name = L"ArrayprogressBar";
			this->ArrayprogressBar->Size = System::Drawing::Size(814, 28);
			this->ArrayprogressBar->TabIndex = 1;
			// 
			// HomeTitlelabel
			// 
			this->HomeTitlelabel->AutoSize = true;
			this->HomeTitlelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HomeTitlelabel->ForeColor = System::Drawing::Color::Navy;
			this->HomeTitlelabel->Location = System::Drawing::Point(12, 7);
			this->HomeTitlelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->HomeTitlelabel->Name = L"HomeTitlelabel";
			this->HomeTitlelabel->Size = System::Drawing::Size(635, 44);
			this->HomeTitlelabel->TabIndex = 0;
			this->HomeTitlelabel->Text = L"Data Structures Learning Software";
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
			this->Profilepanel->Location = System::Drawing::Point(0, 53);
			this->Profilepanel->Margin = System::Windows::Forms::Padding(0);
			this->Profilepanel->Name = L"Profilepanel";
			this->Profilepanel->Size = System::Drawing::Size(960, 573);
			this->Profilepanel->TabIndex = 12;
			this->Profilepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::Profilepanel_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::AliceBlue;
			this->panel3->Controls->Add(this->ProfilepictureBox);
			this->panel3->Location = System::Drawing::Point(742, 15);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(208, 241);
			this->panel3->TabIndex = 49;
			// 
			// ProfilepictureBox
			// 
			this->ProfilepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfilepictureBox.BackgroundImage")));
			this->ProfilepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfilepictureBox->Location = System::Drawing::Point(7, 5);
			this->ProfilepictureBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfilepictureBox->Name = L"ProfilepictureBox";
			this->ProfilepictureBox->Size = System::Drawing::Size(195, 231);
			this->ProfilepictureBox->TabIndex = 0;
			this->ProfilepictureBox->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Navy;
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Location = System::Drawing::Point(20, 7);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(574, 307);
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
			this->panel1->Location = System::Drawing::Point(5, 6);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(565, 296);
			this->panel1->TabIndex = 47;
			// 
			// Profilepanel6
			// 
			this->Profilepanel6->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel6->Location = System::Drawing::Point(4, 285);
			this->Profilepanel6->Margin = System::Windows::Forms::Padding(2);
			this->Profilepanel6->Name = L"Profilepanel6";
			this->Profilepanel6->Size = System::Drawing::Size(555, 2);
			this->Profilepanel6->TabIndex = 19;
			// 
			// ProfileContacttextBox
			// 
			this->ProfileContacttextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileContacttextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileContacttextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContacttextBox->Location = System::Drawing::Point(91, 255);
			this->ProfileContacttextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileContacttextBox->Name = L"ProfileContacttextBox";
			this->ProfileContacttextBox->Size = System::Drawing::Size(469, 28);
			this->ProfileContacttextBox->TabIndex = 18;
			// 
			// ProfileContactlabel
			// 
			this->ProfileContactlabel->AutoSize = true;
			this->ProfileContactlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileContactlabel->Location = System::Drawing::Point(0, 254);
			this->ProfileContactlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfileContactlabel->Name = L"ProfileContactlabel";
			this->ProfileContactlabel->Size = System::Drawing::Size(100, 29);
			this->ProfileContactlabel->TabIndex = 17;
			this->ProfileContactlabel->Text = L"Contact:";
			// 
			// Profilepanel5
			// 
			this->Profilepanel5->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel5->Location = System::Drawing::Point(4, 236);
			this->Profilepanel5->Margin = System::Windows::Forms::Padding(2);
			this->Profilepanel5->Name = L"Profilepanel5";
			this->Profilepanel5->Size = System::Drawing::Size(555, 2);
			this->Profilepanel5->TabIndex = 16;
			// 
			// ProfileemailtextBox
			// 
			this->ProfileemailtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileemailtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileemailtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileemailtextBox->Location = System::Drawing::Point(76, 206);
			this->ProfileemailtextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileemailtextBox->Name = L"ProfileemailtextBox";
			this->ProfileemailtextBox->Size = System::Drawing::Size(483, 28);
			this->ProfileemailtextBox->TabIndex = 15;
			// 
			// ProfileEmaillabel
			// 
			this->ProfileEmaillabel->AutoSize = true;
			this->ProfileEmaillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEmaillabel->Location = System::Drawing::Point(0, 204);
			this->ProfileEmaillabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfileEmaillabel->Name = L"ProfileEmaillabel";
			this->ProfileEmaillabel->Size = System::Drawing::Size(80, 29);
			this->ProfileEmaillabel->TabIndex = 14;
			this->ProfileEmaillabel->Text = L"Email:";
			// 
			// Profilepanel4
			// 
			this->Profilepanel4->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel4->Location = System::Drawing::Point(4, 183);
			this->Profilepanel4->Margin = System::Windows::Forms::Padding(2);
			this->Profilepanel4->Name = L"Profilepanel4";
			this->Profilepanel4->Size = System::Drawing::Size(555, 2);
			this->Profilepanel4->TabIndex = 13;
			// 
			// ProfileDesignationtextBox
			// 
			this->ProfileDesignationtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileDesignationtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileDesignationtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationtextBox->Location = System::Drawing::Point(140, 153);
			this->ProfileDesignationtextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileDesignationtextBox->Name = L"ProfileDesignationtextBox";
			this->ProfileDesignationtextBox->Size = System::Drawing::Size(419, 28);
			this->ProfileDesignationtextBox->TabIndex = 12;
			// 
			// ProfileDesignationlabel
			// 
			this->ProfileDesignationlabel->AutoSize = true;
			this->ProfileDesignationlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileDesignationlabel->Location = System::Drawing::Point(0, 151);
			this->ProfileDesignationlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfileDesignationlabel->Name = L"ProfileDesignationlabel";
			this->ProfileDesignationlabel->Size = System::Drawing::Size(147, 29);
			this->ProfileDesignationlabel->TabIndex = 11;
			this->ProfileDesignationlabel->Text = L"Designation:";
			// 
			// Profilepanel3
			// 
			this->Profilepanel3->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel3->Location = System::Drawing::Point(4, 133);
			this->Profilepanel3->Margin = System::Windows::Forms::Padding(2);
			this->Profilepanel3->Name = L"Profilepanel3";
			this->Profilepanel3->Size = System::Drawing::Size(555, 2);
			this->Profilepanel3->TabIndex = 10;
			// 
			// ProfileLastNametextBox
			// 
			this->ProfileLastNametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileLastNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileLastNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastNametextBox->Location = System::Drawing::Point(129, 103);
			this->ProfileLastNametextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileLastNametextBox->Name = L"ProfileLastNametextBox";
			this->ProfileLastNametextBox->Size = System::Drawing::Size(430, 28);
			this->ProfileLastNametextBox->TabIndex = 9;
			// 
			// ProfileLastLabellabel
			// 
			this->ProfileLastLabellabel->AutoSize = true;
			this->ProfileLastLabellabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileLastLabellabel->Location = System::Drawing::Point(0, 102);
			this->ProfileLastLabellabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfileLastLabellabel->Name = L"ProfileLastLabellabel";
			this->ProfileLastLabellabel->Size = System::Drawing::Size(134, 29);
			this->ProfileLastLabellabel->TabIndex = 8;
			this->ProfileLastLabellabel->Text = L"Last Name:";
			// 
			// Profilepanel2
			// 
			this->Profilepanel2->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel2->Location = System::Drawing::Point(4, 84);
			this->Profilepanel2->Margin = System::Windows::Forms::Padding(2);
			this->Profilepanel2->Name = L"Profilepanel2";
			this->Profilepanel2->Size = System::Drawing::Size(555, 2);
			this->Profilepanel2->TabIndex = 7;
			// 
			// ProfileFirstNametextBox
			// 
			this->ProfileFirstNametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileFirstNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileFirstNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNametextBox->Location = System::Drawing::Point(129, 54);
			this->ProfileFirstNametextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileFirstNametextBox->Name = L"ProfileFirstNametextBox";
			this->ProfileFirstNametextBox->Size = System::Drawing::Size(430, 28);
			this->ProfileFirstNametextBox->TabIndex = 6;
			// 
			// ProfileFirstNamelabel
			// 
			this->ProfileFirstNamelabel->AutoSize = true;
			this->ProfileFirstNamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileFirstNamelabel->Location = System::Drawing::Point(0, 53);
			this->ProfileFirstNamelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfileFirstNamelabel->Name = L"ProfileFirstNamelabel";
			this->ProfileFirstNamelabel->Size = System::Drawing::Size(137, 29);
			this->ProfileFirstNamelabel->TabIndex = 5;
			this->ProfileFirstNamelabel->Text = L"First Name:";
			// 
			// Profilepanel1
			// 
			this->Profilepanel1->BackColor = System::Drawing::Color::Navy;
			this->Profilepanel1->Location = System::Drawing::Point(4, 32);
			this->Profilepanel1->Margin = System::Windows::Forms::Padding(2);
			this->Profilepanel1->Name = L"Profilepanel1";
			this->Profilepanel1->Size = System::Drawing::Size(555, 2);
			this->Profilepanel1->TabIndex = 4;
			// 
			// ProfileUsernametextBox
			// 
			this->ProfileUsernametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileUsernametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileUsernametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernametextBox->Location = System::Drawing::Point(129, 2);
			this->ProfileUsernametextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileUsernametextBox->Name = L"ProfileUsernametextBox";
			this->ProfileUsernametextBox->Size = System::Drawing::Size(430, 28);
			this->ProfileUsernametextBox->TabIndex = 3;
			// 
			// ProfileUsernamelabel
			// 
			this->ProfileUsernamelabel->AutoSize = true;
			this->ProfileUsernamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileUsernamelabel->Location = System::Drawing::Point(0, 0);
			this->ProfileUsernamelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfileUsernamelabel->Name = L"ProfileUsernamelabel";
			this->ProfileUsernamelabel->Size = System::Drawing::Size(130, 29);
			this->ProfileUsernamelabel->TabIndex = 2;
			this->ProfileUsernamelabel->Text = L"Username:";
			// 
			// Profilecodebutton
			// 
			this->Profilecodebutton->BackColor = System::Drawing::Color::Navy;
			this->Profilecodebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Profilecodebutton->ForeColor = System::Drawing::Color::White;
			this->Profilecodebutton->Location = System::Drawing::Point(600, 257);
			this->Profilecodebutton->Margin = System::Windows::Forms::Padding(2);
			this->Profilecodebutton->Name = L"Profilecodebutton";
			this->Profilecodebutton->Size = System::Drawing::Size(82, 37);
			this->Profilecodebutton->TabIndex = 46;
			this->Profilecodebutton->Text = L"Verify";
			this->Profilecodebutton->UseVisualStyleBackColor = false;
			this->Profilecodebutton->Click += gcnew System::EventHandler(this, &Homepage::Profilecodebutton_Click);
			// 
			// ProfilecodetextBox
			// 
			this->ProfilecodetextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ProfilecodetextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfilecodetextBox->Location = System::Drawing::Point(600, 217);
			this->ProfilecodetextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfilecodetextBox->Name = L"ProfilecodetextBox";
			this->ProfilecodetextBox->Size = System::Drawing::Size(122, 28);
			this->ProfilecodetextBox->TabIndex = 45;
			this->ProfilecodetextBox->Text = L"CODE";
			// 
			// ProfileErrorlabel
			// 
			this->ProfileErrorlabel->AutoSize = true;
			this->ProfileErrorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileErrorlabel->ForeColor = System::Drawing::Color::Red;
			this->ProfileErrorlabel->Location = System::Drawing::Point(455, 367);
			this->ProfileErrorlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfileErrorlabel->Name = L"ProfileErrorlabel";
			this->ProfileErrorlabel->Size = System::Drawing::Size(84, 17);
			this->ProfileErrorlabel->TabIndex = 44;
			this->ProfileErrorlabel->Text = L"Errordisplay";
			// 
			// ProfilePicturelabel
			// 
			this->ProfilePicturelabel->AutoSize = true;
			this->ProfilePicturelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePicturelabel->ForeColor = System::Drawing::Color::Red;
			this->ProfilePicturelabel->Location = System::Drawing::Point(746, 315);
			this->ProfilePicturelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProfilePicturelabel->Name = L"ProfilePicturelabel";
			this->ProfilePicturelabel->Size = System::Drawing::Size(80, 18);
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
			this->ProfileChangePasswordSavebutton->Location = System::Drawing::Point(853, 400);
			this->ProfileChangePasswordSavebutton->Margin = System::Windows::Forms::Padding(2);
			this->ProfileChangePasswordSavebutton->Name = L"ProfileChangePasswordSavebutton";
			this->ProfileChangePasswordSavebutton->Size = System::Drawing::Size(105, 41);
			this->ProfileChangePasswordSavebutton->TabIndex = 42;
			this->ProfileChangePasswordSavebutton->Text = L"Change";
			this->ProfileChangePasswordSavebutton->UseVisualStyleBackColor = false;
			this->ProfileChangePasswordSavebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileChangePasswordSavebutton_Click);
			// 
			// ProfileSecuritySavebutton
			// 
			this->ProfileSecuritySavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileSecuritySavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileSecuritySavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecuritySavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileSecuritySavebutton->Location = System::Drawing::Point(853, 525);
			this->ProfileSecuritySavebutton->Margin = System::Windows::Forms::Padding(2);
			this->ProfileSecuritySavebutton->Name = L"ProfileSecuritySavebutton";
			this->ProfileSecuritySavebutton->Size = System::Drawing::Size(105, 41);
			this->ProfileSecuritySavebutton->TabIndex = 41;
			this->ProfileSecuritySavebutton->Text = L"Change";
			this->ProfileSecuritySavebutton->UseVisualStyleBackColor = false;
			this->ProfileSecuritySavebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileSecuritySavebutton_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Location = System::Drawing::Point(585, 564);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(263, 2);
			this->panel5->TabIndex = 39;
			// 
			// ProfileSecuritypictureBox2
			// 
			this->ProfileSecuritypictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox2.BackgroundImage")));
			this->ProfileSecuritypictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox2->Location = System::Drawing::Point(585, 520);
			this->ProfileSecuritypictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->ProfileSecuritypictureBox2->Name = L"ProfileSecuritypictureBox2";
			this->ProfileSecuritypictureBox2->Size = System::Drawing::Size(41, 39);
			this->ProfileSecuritypictureBox2->TabIndex = 38;
			this->ProfileSecuritypictureBox2->TabStop = false;
			// 
			// ProfileSecurityAnswertextBox
			// 
			this->ProfileSecurityAnswertextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileSecurityAnswertextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileSecurityAnswertextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileSecurityAnswertextBox->Location = System::Drawing::Point(631, 531);
			this->ProfileSecurityAnswertextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileSecurityAnswertextBox->Name = L"ProfileSecurityAnswertextBox";
			this->ProfileSecurityAnswertextBox->Size = System::Drawing::Size(218, 21);
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
			this->ProfileSecuritycomboBox->Location = System::Drawing::Point(165, 478);
			this->ProfileSecuritycomboBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileSecuritycomboBox->Name = L"ProfileSecuritycomboBox";
			this->ProfileSecuritycomboBox->Size = System::Drawing::Size(620, 30);
			this->ProfileSecuritycomboBox->Sorted = true;
			this->ProfileSecuritycomboBox->TabIndex = 36;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Navy;
			this->panel4->Location = System::Drawing::Point(25, 564);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(263, 2);
			this->panel4->TabIndex = 35;
			// 
			// ProfileSecuritypictureBox1
			// 
			this->ProfileSecuritypictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileSecuritypictureBox1.BackgroundImage")));
			this->ProfileSecuritypictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileSecuritypictureBox1->Location = System::Drawing::Point(25, 520);
			this->ProfileSecuritypictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->ProfileSecuritypictureBox1->Name = L"ProfileSecuritypictureBox1";
			this->ProfileSecuritypictureBox1->Size = System::Drawing::Size(41, 39);
			this->ProfileSecuritypictureBox1->TabIndex = 34;
			this->ProfileSecuritypictureBox1->TabStop = false;
			// 
			// ProfileOldPasswordSecuritytextBox
			// 
			this->ProfileOldPasswordSecuritytextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileOldPasswordSecuritytextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordSecuritytextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordSecuritytextBox->Location = System::Drawing::Point(70, 531);
			this->ProfileOldPasswordSecuritytextBox->Margin = System::Windows::Forms::Padding(0);
			this->ProfileOldPasswordSecuritytextBox->Name = L"ProfileOldPasswordSecuritytextBox";
			this->ProfileOldPasswordSecuritytextBox->Size = System::Drawing::Size(218, 21);
			this->ProfileOldPasswordSecuritytextBox->TabIndex = 33;
			this->ProfileOldPasswordSecuritytextBox->Text = L"Password";
			// 
			// ProfileChangePasswordpanel3
			// 
			this->ProfileChangePasswordpanel3->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel3->Location = System::Drawing::Point(585, 440);
			this->ProfileChangePasswordpanel3->Margin = System::Windows::Forms::Padding(2);
			this->ProfileChangePasswordpanel3->Name = L"ProfileChangePasswordpanel3";
			this->ProfileChangePasswordpanel3->Size = System::Drawing::Size(263, 2);
			this->ProfileChangePasswordpanel3->TabIndex = 32;
			// 
			// ProfileChangePasswordpictureBox3
			// 
			this->ProfileChangePasswordpictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox3.BackgroundImage")));
			this->ProfileChangePasswordpictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox3->Location = System::Drawing::Point(585, 396);
			this->ProfileChangePasswordpictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->ProfileChangePasswordpictureBox3->Name = L"ProfileChangePasswordpictureBox3";
			this->ProfileChangePasswordpictureBox3->Size = System::Drawing::Size(41, 39);
			this->ProfileChangePasswordpictureBox3->TabIndex = 31;
			this->ProfileChangePasswordpictureBox3->TabStop = false;
			// 
			// ProfileConfirmPasswordtextBox
			// 
			this->ProfileConfirmPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileConfirmPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileConfirmPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileConfirmPasswordtextBox->Location = System::Drawing::Point(631, 405);
			this->ProfileConfirmPasswordtextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileConfirmPasswordtextBox->Name = L"ProfileConfirmPasswordtextBox";
			this->ProfileConfirmPasswordtextBox->Size = System::Drawing::Size(218, 21);
			this->ProfileConfirmPasswordtextBox->TabIndex = 30;
			this->ProfileConfirmPasswordtextBox->Text = L"Confirm Password";
			// 
			// ProfileChangePasswordpanel2
			// 
			this->ProfileChangePasswordpanel2->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel2->Location = System::Drawing::Point(306, 440);
			this->ProfileChangePasswordpanel2->Margin = System::Windows::Forms::Padding(2);
			this->ProfileChangePasswordpanel2->Name = L"ProfileChangePasswordpanel2";
			this->ProfileChangePasswordpanel2->Size = System::Drawing::Size(263, 2);
			this->ProfileChangePasswordpanel2->TabIndex = 29;
			// 
			// ProfileChangePasswordpictureBox2
			// 
			this->ProfileChangePasswordpictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox2.BackgroundImage")));
			this->ProfileChangePasswordpictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox2->Location = System::Drawing::Point(306, 396);
			this->ProfileChangePasswordpictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->ProfileChangePasswordpictureBox2->Name = L"ProfileChangePasswordpictureBox2";
			this->ProfileChangePasswordpictureBox2->Size = System::Drawing::Size(41, 39);
			this->ProfileChangePasswordpictureBox2->TabIndex = 28;
			this->ProfileChangePasswordpictureBox2->TabStop = false;
			// 
			// ProfileNewPasswordtextBox
			// 
			this->ProfileNewPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileNewPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileNewPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileNewPasswordtextBox->Location = System::Drawing::Point(352, 405);
			this->ProfileNewPasswordtextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileNewPasswordtextBox->Name = L"ProfileNewPasswordtextBox";
			this->ProfileNewPasswordtextBox->Size = System::Drawing::Size(217, 21);
			this->ProfileNewPasswordtextBox->TabIndex = 27;
			this->ProfileNewPasswordtextBox->Text = L"New Password";
			// 
			// ProfileChangePasswordpanel1
			// 
			this->ProfileChangePasswordpanel1->BackColor = System::Drawing::Color::Navy;
			this->ProfileChangePasswordpanel1->Location = System::Drawing::Point(25, 440);
			this->ProfileChangePasswordpanel1->Margin = System::Windows::Forms::Padding(2);
			this->ProfileChangePasswordpanel1->Name = L"ProfileChangePasswordpanel1";
			this->ProfileChangePasswordpanel1->Size = System::Drawing::Size(263, 2);
			this->ProfileChangePasswordpanel1->TabIndex = 26;
			// 
			// ProfileChangePasswordpictureBox1
			// 
			this->ProfileChangePasswordpictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ProfileChangePasswordpictureBox1.BackgroundImage")));
			this->ProfileChangePasswordpictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfileChangePasswordpictureBox1->Location = System::Drawing::Point(25, 396);
			this->ProfileChangePasswordpictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->ProfileChangePasswordpictureBox1->Name = L"ProfileChangePasswordpictureBox1";
			this->ProfileChangePasswordpictureBox1->Size = System::Drawing::Size(41, 39);
			this->ProfileChangePasswordpictureBox1->TabIndex = 25;
			this->ProfileChangePasswordpictureBox1->TabStop = false;
			// 
			// ProfileOldPasswordtextBox
			// 
			this->ProfileOldPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ProfileOldPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfileOldPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfileOldPasswordtextBox->Location = System::Drawing::Point(70, 407);
			this->ProfileOldPasswordtextBox->Margin = System::Windows::Forms::Padding(2);
			this->ProfileOldPasswordtextBox->Name = L"ProfileOldPasswordtextBox";
			this->ProfileOldPasswordtextBox->Size = System::Drawing::Size(218, 21);
			this->ProfileOldPasswordtextBox->TabIndex = 24;
			this->ProfileOldPasswordtextBox->Text = L"Current Password";
			this->ProfileOldPasswordtextBox->TextChanged += gcnew System::EventHandler(this, &Homepage::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 449);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(316, 22);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Change Security Question/Answer";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 367);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 24);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Change Password";
			this->label1->Click += gcnew System::EventHandler(this, &Homepage::label1_Click);
			// 
			// ProfileSavebutton
			// 
			this->ProfileSavebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileSavebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileSavebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileSavebutton->ForeColor = System::Drawing::Color::White;
			this->ProfileSavebutton->Location = System::Drawing::Point(458, 317);
			this->ProfileSavebutton->Margin = System::Windows::Forms::Padding(2);
			this->ProfileSavebutton->Name = L"ProfileSavebutton";
			this->ProfileSavebutton->Size = System::Drawing::Size(122, 41);
			this->ProfileSavebutton->TabIndex = 21;
			this->ProfileSavebutton->Text = L"Save";
			this->ProfileSavebutton->UseVisualStyleBackColor = false;
			this->ProfileSavebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileSavebutton_Click);
			// 
			// ProfileEditbutton
			// 
			this->ProfileEditbutton->BackColor = System::Drawing::Color::Navy;
			this->ProfileEditbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileEditbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ProfileEditbutton->ForeColor = System::Drawing::Color::White;
			this->ProfileEditbutton->Location = System::Drawing::Point(25, 317);
			this->ProfileEditbutton->Margin = System::Windows::Forms::Padding(2);
			this->ProfileEditbutton->Name = L"ProfileEditbutton";
			this->ProfileEditbutton->Size = System::Drawing::Size(122, 41);
			this->ProfileEditbutton->TabIndex = 20;
			this->ProfileEditbutton->Text = L"Edit Profile";
			this->ProfileEditbutton->UseVisualStyleBackColor = false;
			this->ProfileEditbutton->Click += gcnew System::EventHandler(this, &Homepage::ProfileEditbutton_Click);
			// 
			// ProfilePictureChangebutton
			// 
			this->ProfilePictureChangebutton->BackColor = System::Drawing::Color::Navy;
			this->ProfilePictureChangebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfilePictureChangebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProfilePictureChangebutton->ForeColor = System::Drawing::Color::White;
			this->ProfilePictureChangebutton->Location = System::Drawing::Point(748, 266);
			this->ProfilePictureChangebutton->Margin = System::Windows::Forms::Padding(2);
			this->ProfilePictureChangebutton->Name = L"ProfilePictureChangebutton";
			this->ProfilePictureChangebutton->Size = System::Drawing::Size(134, 41);
			this->ProfilePictureChangebutton->TabIndex = 1;
			this->ProfilePictureChangebutton->Text = L"Change Image";
			this->ProfilePictureChangebutton->UseVisualStyleBackColor = false;
			this->ProfilePictureChangebutton->Click += gcnew System::EventHandler(this, &Homepage::ProfilePictureChangebutton_Click);
			// 
			// ProfileopenFileDialog
			// 
			this->ProfileopenFileDialog->FileName = L"ProfileopenFileDialog";
			this->ProfileopenFileDialog->Filter = L"Jpg (*.jpg)|*.jpg";
			// 
			// DSpanel
			// 
			this->DSpanel->BackColor = System::Drawing::Color::AliceBlue;
			this->DSpanel->Controls->Add(this->Suggestionpanel);
			this->DSpanel->Controls->Add(this->DSLinkpanel);
			this->DSpanel->Location = System::Drawing::Point(0, 53);
			this->DSpanel->Margin = System::Windows::Forms::Padding(0);
			this->DSpanel->Name = L"DSpanel";
			this->DSpanel->Size = System::Drawing::Size(960, 573);
			this->DSpanel->TabIndex = 13;
			// 
			// Suggestionpanel
			// 
			this->Suggestionpanel->BackColor = System::Drawing::Color::AliceBlue;
			this->Suggestionpanel->Controls->Add(this->SuggestionADDpanel);
			this->Suggestionpanel->Controls->Add(this->SuggestionPastpanel);
			this->Suggestionpanel->Controls->Add(this->SuggestionDeletepanel);
			this->Suggestionpanel->Controls->Add(this->SuggestionDSbutton);
			this->Suggestionpanel->Controls->Add(this->PastSuggestionradioButton);
			this->Suggestionpanel->Controls->Add(this->deleteradioButton);
			this->Suggestionpanel->Controls->Add(this->addradioButton);
			this->Suggestionpanel->Controls->Add(this->DSSuggestionlabel);
			this->Suggestionpanel->Controls->Add(this->ModulecomboBox);
			this->Suggestionpanel->Controls->Add(this->DScomboBox);
			this->Suggestionpanel->Location = System::Drawing::Point(22, 10);
			this->Suggestionpanel->Margin = System::Windows::Forms::Padding(2);
			this->Suggestionpanel->Name = L"Suggestionpanel";
			this->Suggestionpanel->Size = System::Drawing::Size(913, 553);
			this->Suggestionpanel->TabIndex = 0;
			// 
			// SuggestionADDpanel
			// 
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddCorrectlabel);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddSuggestionbutton);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddOption4checkBox);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddOption3checkBox);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddOption2checkBox);
			this->SuggestionADDpanel->Controls->Add(this->panel13);
			this->SuggestionADDpanel->Controls->Add(this->pictureBox6);
			this->SuggestionADDpanel->Controls->Add(this->panel11);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddOption4textBox);
			this->SuggestionADDpanel->Controls->Add(this->pictureBox4);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddoption2textBox);
			this->SuggestionADDpanel->Controls->Add(this->panel10);
			this->SuggestionADDpanel->Controls->Add(this->pictureBox3);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddOption3textBox);
			this->SuggestionADDpanel->Controls->Add(this->panel8);
			this->SuggestionADDpanel->Controls->Add(this->pictureBox2);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddOption1textBox);
			this->SuggestionADDpanel->Controls->Add(this->panel9);
			this->SuggestionADDpanel->Controls->Add(this->pictureBox1);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddQuestiontextBox);
			this->SuggestionADDpanel->Controls->Add(this->SuggestionAddOption1checkBox);
			this->SuggestionADDpanel->Location = System::Drawing::Point(14, 189);
			this->SuggestionADDpanel->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionADDpanel->Name = L"SuggestionADDpanel";
			this->SuggestionADDpanel->Size = System::Drawing::Size(882, 353);
			this->SuggestionADDpanel->TabIndex = 9;
			this->SuggestionADDpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::SuggestionADDpanel_Paint);
			// 
			// SuggestionAddCorrectlabel
			// 
			this->SuggestionAddCorrectlabel->AutoSize = true;
			this->SuggestionAddCorrectlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddCorrectlabel->ForeColor = System::Drawing::Color::Black;
			this->SuggestionAddCorrectlabel->Location = System::Drawing::Point(5, 232);
			this->SuggestionAddCorrectlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->SuggestionAddCorrectlabel->Name = L"SuggestionAddCorrectlabel";
			this->SuggestionAddCorrectlabel->Size = System::Drawing::Size(156, 24);
			this->SuggestionAddCorrectlabel->TabIndex = 34;
			this->SuggestionAddCorrectlabel->Text = L"Correct Options";
			// 
			// SuggestionAddSuggestionbutton
			// 
			this->SuggestionAddSuggestionbutton->BackColor = System::Drawing::Color::Black;
			this->SuggestionAddSuggestionbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddSuggestionbutton->ForeColor = System::Drawing::Color::White;
			this->SuggestionAddSuggestionbutton->Location = System::Drawing::Point(741, 307);
			this->SuggestionAddSuggestionbutton->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddSuggestionbutton->Name = L"SuggestionAddSuggestionbutton";
			this->SuggestionAddSuggestionbutton->Size = System::Drawing::Size(128, 44);
			this->SuggestionAddSuggestionbutton->TabIndex = 33;
			this->SuggestionAddSuggestionbutton->Text = L"Suggest";
			this->SuggestionAddSuggestionbutton->UseVisualStyleBackColor = false;
			this->SuggestionAddSuggestionbutton->Click += gcnew System::EventHandler(this, &Homepage::SuggestionAddSuggestionbutton_Click);
			// 
			// SuggestionAddOption4checkBox
			// 
			this->SuggestionAddOption4checkBox->AutoSize = true;
			this->SuggestionAddOption4checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddOption4checkBox->Location = System::Drawing::Point(742, 268);
			this->SuggestionAddOption4checkBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddOption4checkBox->Name = L"SuggestionAddOption4checkBox";
			this->SuggestionAddOption4checkBox->Size = System::Drawing::Size(96, 24);
			this->SuggestionAddOption4checkBox->TabIndex = 32;
			this->SuggestionAddOption4checkBox->Text = L"Option 4";
			this->SuggestionAddOption4checkBox->UseVisualStyleBackColor = true;
			// 
			// SuggestionAddOption3checkBox
			// 
			this->SuggestionAddOption3checkBox->AutoSize = true;
			this->SuggestionAddOption3checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddOption3checkBox->Location = System::Drawing::Point(503, 268);
			this->SuggestionAddOption3checkBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddOption3checkBox->Name = L"SuggestionAddOption3checkBox";
			this->SuggestionAddOption3checkBox->Size = System::Drawing::Size(96, 24);
			this->SuggestionAddOption3checkBox->TabIndex = 31;
			this->SuggestionAddOption3checkBox->Text = L"Option 3";
			this->SuggestionAddOption3checkBox->UseVisualStyleBackColor = true;
			// 
			// SuggestionAddOption2checkBox
			// 
			this->SuggestionAddOption2checkBox->AutoSize = true;
			this->SuggestionAddOption2checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddOption2checkBox->Location = System::Drawing::Point(280, 268);
			this->SuggestionAddOption2checkBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddOption2checkBox->Name = L"SuggestionAddOption2checkBox";
			this->SuggestionAddOption2checkBox->Size = System::Drawing::Size(96, 24);
			this->SuggestionAddOption2checkBox->TabIndex = 30;
			this->SuggestionAddOption2checkBox->Text = L"Option 2";
			this->SuggestionAddOption2checkBox->UseVisualStyleBackColor = true;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Black;
			this->panel13->Location = System::Drawing::Point(466, 213);
			this->panel13->Margin = System::Windows::Forms::Padding(2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(398, 1);
			this->panel13->TabIndex = 17;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(466, 167);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(38, 42);
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Black;
			this->panel11->Location = System::Drawing::Point(2, 213);
			this->panel11->Margin = System::Windows::Forms::Padding(2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(398, 1);
			this->panel11->TabIndex = 29;
			// 
			// SuggestionAddOption4textBox
			// 
			this->SuggestionAddOption4textBox->BackColor = System::Drawing::Color::AliceBlue;
			this->SuggestionAddOption4textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SuggestionAddOption4textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddOption4textBox->ForeColor = System::Drawing::Color::Black;
			this->SuggestionAddOption4textBox->Location = System::Drawing::Point(508, 184);
			this->SuggestionAddOption4textBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddOption4textBox->Name = L"SuggestionAddOption4textBox";
			this->SuggestionAddOption4textBox->Size = System::Drawing::Size(356, 25);
			this->SuggestionAddOption4textBox->TabIndex = 15;
			this->SuggestionAddOption4textBox->Text = L"Option 4";
			this->SuggestionAddOption4textBox->MouseEnter += gcnew System::EventHandler(this, &Homepage::SuggestionAddOption4textBox_MouseEnter);
			this->SuggestionAddOption4textBox->MouseLeave += gcnew System::EventHandler(this, &Homepage::SuggestionAddOption4textBox_MouseLeave);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(2, 167);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(38, 42);
			this->pictureBox4->TabIndex = 28;
			this->pictureBox4->TabStop = false;
			// 
			// SuggestionAddoption2textBox
			// 
			this->SuggestionAddoption2textBox->BackColor = System::Drawing::Color::AliceBlue;
			this->SuggestionAddoption2textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SuggestionAddoption2textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddoption2textBox->ForeColor = System::Drawing::Color::Black;
			this->SuggestionAddoption2textBox->Location = System::Drawing::Point(45, 184);
			this->SuggestionAddoption2textBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddoption2textBox->Name = L"SuggestionAddoption2textBox";
			this->SuggestionAddoption2textBox->Size = System::Drawing::Size(356, 25);
			this->SuggestionAddoption2textBox->TabIndex = 27;
			this->SuggestionAddoption2textBox->Text = L"Option 2";
			this->SuggestionAddoption2textBox->MouseEnter += gcnew System::EventHandler(this, &Homepage::SuggestionAddoption2textBox_MouseEnter);
			this->SuggestionAddoption2textBox->MouseLeave += gcnew System::EventHandler(this, &Homepage::SuggestionAddoption2textBox_MouseLeave);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Black;
			this->panel10->Location = System::Drawing::Point(466, 144);
			this->panel10->Margin = System::Windows::Forms::Padding(2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(398, 1);
			this->panel10->TabIndex = 26;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(466, 98);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 42);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// SuggestionAddOption3textBox
			// 
			this->SuggestionAddOption3textBox->BackColor = System::Drawing::Color::AliceBlue;
			this->SuggestionAddOption3textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SuggestionAddOption3textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddOption3textBox->ForeColor = System::Drawing::Color::Black;
			this->SuggestionAddOption3textBox->Location = System::Drawing::Point(508, 115);
			this->SuggestionAddOption3textBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddOption3textBox->Name = L"SuggestionAddOption3textBox";
			this->SuggestionAddOption3textBox->Size = System::Drawing::Size(356, 25);
			this->SuggestionAddOption3textBox->TabIndex = 24;
			this->SuggestionAddOption3textBox->Text = L"Option 3";
			this->SuggestionAddOption3textBox->MouseEnter += gcnew System::EventHandler(this, &Homepage::SuggestionAddOption3textBox_MouseEnter);
			this->SuggestionAddOption3textBox->MouseLeave += gcnew System::EventHandler(this, &Homepage::SuggestionAddOption3textBox_MouseLeave);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Location = System::Drawing::Point(2, 144);
			this->panel8->Margin = System::Windows::Forms::Padding(2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(398, 1);
			this->panel8->TabIndex = 14;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(2, 98);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 42);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// SuggestionAddOption1textBox
			// 
			this->SuggestionAddOption1textBox->BackColor = System::Drawing::Color::AliceBlue;
			this->SuggestionAddOption1textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SuggestionAddOption1textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddOption1textBox->ForeColor = System::Drawing::Color::Black;
			this->SuggestionAddOption1textBox->Location = System::Drawing::Point(45, 115);
			this->SuggestionAddOption1textBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddOption1textBox->Name = L"SuggestionAddOption1textBox";
			this->SuggestionAddOption1textBox->Size = System::Drawing::Size(356, 25);
			this->SuggestionAddOption1textBox->TabIndex = 12;
			this->SuggestionAddOption1textBox->Text = L"Option 1";
			this->SuggestionAddOption1textBox->MouseEnter += gcnew System::EventHandler(this, &Homepage::SuggestionAddOption1textBox_MouseEnter);
			this->SuggestionAddOption1textBox->MouseLeave += gcnew System::EventHandler(this, &Homepage::SuggestionAddOption1textBox_MouseLeave);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Black;
			this->panel9->Location = System::Drawing::Point(30, 72);
			this->panel9->Margin = System::Windows::Forms::Padding(2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(818, 1);
			this->panel9->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(30, 25);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(38, 42);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// SuggestionAddQuestiontextBox
			// 
			this->SuggestionAddQuestiontextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->SuggestionAddQuestiontextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SuggestionAddQuestiontextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddQuestiontextBox->ForeColor = System::Drawing::Color::Black;
			this->SuggestionAddQuestiontextBox->Location = System::Drawing::Point(73, 42);
			this->SuggestionAddQuestiontextBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddQuestiontextBox->Name = L"SuggestionAddQuestiontextBox";
			this->SuggestionAddQuestiontextBox->Size = System::Drawing::Size(774, 25);
			this->SuggestionAddQuestiontextBox->TabIndex = 9;
			this->SuggestionAddQuestiontextBox->Text = L"Question";
			this->SuggestionAddQuestiontextBox->MouseEnter += gcnew System::EventHandler(this, &Homepage::SuggestionAddQuestiontextBox_MouseEnter);
			this->SuggestionAddQuestiontextBox->MouseLeave += gcnew System::EventHandler(this, &Homepage::SuggestionAddQuestiontextBox_MouseLeave);
			// 
			// SuggestionAddOption1checkBox
			// 
			this->SuggestionAddOption1checkBox->AutoSize = true;
			this->SuggestionAddOption1checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionAddOption1checkBox->Location = System::Drawing::Point(46, 268);
			this->SuggestionAddOption1checkBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionAddOption1checkBox->Name = L"SuggestionAddOption1checkBox";
			this->SuggestionAddOption1checkBox->Size = System::Drawing::Size(96, 24);
			this->SuggestionAddOption1checkBox->TabIndex = 5;
			this->SuggestionAddOption1checkBox->Text = L"Option 1";
			this->SuggestionAddOption1checkBox->UseVisualStyleBackColor = true;
			// 
			// SuggestionPastpanel
			// 
			this->SuggestionPastpanel->Controls->Add(this->SuggestionPastlistBox);
			this->SuggestionPastpanel->Location = System::Drawing::Point(14, 189);
			this->SuggestionPastpanel->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionPastpanel->Name = L"SuggestionPastpanel";
			this->SuggestionPastpanel->Size = System::Drawing::Size(882, 353);
			this->SuggestionPastpanel->TabIndex = 14;
			// 
			// SuggestionPastlistBox
			// 
			this->SuggestionPastlistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->SuggestionPastlistBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SuggestionPastlistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SuggestionPastlistBox->FormattingEnabled = true;
			this->SuggestionPastlistBox->HorizontalExtent = 15000;
			this->SuggestionPastlistBox->HorizontalScrollbar = true;
			this->SuggestionPastlistBox->ItemHeight = 20;
			this->SuggestionPastlistBox->Location = System::Drawing::Point(8, 7);
			this->SuggestionPastlistBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionPastlistBox->MultiColumn = true;
			this->SuggestionPastlistBox->Name = L"SuggestionPastlistBox";
			this->SuggestionPastlistBox->ScrollAlwaysVisible = true;
			this->SuggestionPastlistBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->SuggestionPastlistBox->Size = System::Drawing::Size(875, 284);
			this->SuggestionPastlistBox->TabIndex = 1;
			// 
			// SuggestionDeletepanel
			// 
			this->SuggestionDeletepanel->Controls->Add(this->SuggestionDeletebutton);
			this->SuggestionDeletepanel->Controls->Add(this->SuggestionDeletelistBox);
			this->SuggestionDeletepanel->Location = System::Drawing::Point(14, 189);
			this->SuggestionDeletepanel->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionDeletepanel->Name = L"SuggestionDeletepanel";
			this->SuggestionDeletepanel->Size = System::Drawing::Size(889, 353);
			this->SuggestionDeletepanel->TabIndex = 13;
			// 
			// SuggestionDeletebutton
			// 
			this->SuggestionDeletebutton->BackColor = System::Drawing::Color::Black;
			this->SuggestionDeletebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionDeletebutton->ForeColor = System::Drawing::Color::White;
			this->SuggestionDeletebutton->Location = System::Drawing::Point(749, 310);
			this->SuggestionDeletebutton->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionDeletebutton->Name = L"SuggestionDeletebutton";
			this->SuggestionDeletebutton->Size = System::Drawing::Size(133, 42);
			this->SuggestionDeletebutton->TabIndex = 1;
			this->SuggestionDeletebutton->Text = L"Suggest Delete";
			this->SuggestionDeletebutton->UseVisualStyleBackColor = false;
			this->SuggestionDeletebutton->Click += gcnew System::EventHandler(this, &Homepage::SuggestionDeletebutton_Click);
			// 
			// SuggestionDeletelistBox
			// 
			this->SuggestionDeletelistBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->SuggestionDeletelistBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SuggestionDeletelistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SuggestionDeletelistBox->FormattingEnabled = true;
			this->SuggestionDeletelistBox->HorizontalExtent = 15000;
			this->SuggestionDeletelistBox->HorizontalScrollbar = true;
			this->SuggestionDeletelistBox->ItemHeight = 20;
			this->SuggestionDeletelistBox->Location = System::Drawing::Point(8, 19);
			this->SuggestionDeletelistBox->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionDeletelistBox->Name = L"SuggestionDeletelistBox";
			this->SuggestionDeletelistBox->ScrollAlwaysVisible = true;
			this->SuggestionDeletelistBox->Size = System::Drawing::Size(875, 264);
			this->SuggestionDeletelistBox->Sorted = true;
			this->SuggestionDeletelistBox->TabIndex = 0;
			// 
			// SuggestionDSbutton
			// 
			this->SuggestionDSbutton->BackColor = System::Drawing::Color::Black;
			this->SuggestionDSbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SuggestionDSbutton->ForeColor = System::Drawing::Color::White;
			this->SuggestionDSbutton->Location = System::Drawing::Point(776, 3);
			this->SuggestionDSbutton->Margin = System::Windows::Forms::Padding(2);
			this->SuggestionDSbutton->Name = L"SuggestionDSbutton";
			this->SuggestionDSbutton->Size = System::Drawing::Size(121, 46);
			this->SuggestionDSbutton->TabIndex = 15;
			this->SuggestionDSbutton->Text = L"DS";
			this->SuggestionDSbutton->UseVisualStyleBackColor = false;
			this->SuggestionDSbutton->Click += gcnew System::EventHandler(this, &Homepage::SuggestionDSbutton_Click);
			// 
			// PastSuggestionradioButton
			// 
			this->PastSuggestionradioButton->AutoSize = true;
			this->PastSuggestionradioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PastSuggestionradioButton->ForeColor = System::Drawing::Color::Black;
			this->PastSuggestionradioButton->Location = System::Drawing::Point(718, 145);
			this->PastSuggestionradioButton->Margin = System::Windows::Forms::Padding(2);
			this->PastSuggestionradioButton->Name = L"PastSuggestionradioButton";
			this->PastSuggestionradioButton->Size = System::Drawing::Size(188, 28);
			this->PastSuggestionradioButton->TabIndex = 12;
			this->PastSuggestionradioButton->TabStop = true;
			this->PastSuggestionradioButton->Text = L"Past Suggestions";
			this->PastSuggestionradioButton->UseVisualStyleBackColor = true;
			this->PastSuggestionradioButton->CheckedChanged += gcnew System::EventHandler(this, &Homepage::PastSuggestionradioButton_CheckedChanged);
			// 
			// deleteradioButton
			// 
			this->deleteradioButton->AutoSize = true;
			this->deleteradioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->deleteradioButton->ForeColor = System::Drawing::Color::DarkRed;
			this->deleteradioButton->Location = System::Drawing::Point(14, 162);
			this->deleteradioButton->Margin = System::Windows::Forms::Padding(2);
			this->deleteradioButton->Name = L"deleteradioButton";
			this->deleteradioButton->Size = System::Drawing::Size(229, 28);
			this->deleteradioButton->TabIndex = 11;
			this->deleteradioButton->TabStop = true;
			this->deleteradioButton->Text = L"DELETE Suggestions";
			this->deleteradioButton->UseVisualStyleBackColor = true;
			this->deleteradioButton->CheckedChanged += gcnew System::EventHandler(this, &Homepage::deleteradioButton_CheckedChanged);
			// 
			// addradioButton
			// 
			this->addradioButton->AutoSize = true;
			this->addradioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addradioButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->addradioButton->Location = System::Drawing::Point(14, 130);
			this->addradioButton->Margin = System::Windows::Forms::Padding(2);
			this->addradioButton->Name = L"addradioButton";
			this->addradioButton->Size = System::Drawing::Size(191, 28);
			this->addradioButton->TabIndex = 10;
			this->addradioButton->TabStop = true;
			this->addradioButton->Text = L"ADD Suggestions";
			this->addradioButton->UseVisualStyleBackColor = true;
			this->addradioButton->CheckedChanged += gcnew System::EventHandler(this, &Homepage::addradioButton_CheckedChanged);
			// 
			// DSSuggestionlabel
			// 
			this->DSSuggestionlabel->AutoSize = true;
			this->DSSuggestionlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DSSuggestionlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->DSSuggestionlabel->Location = System::Drawing::Point(9, 8);
			this->DSSuggestionlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DSSuggestionlabel->Name = L"DSSuggestionlabel";
			this->DSSuggestionlabel->Size = System::Drawing::Size(175, 31);
			this->DSSuggestionlabel->TabIndex = 2;
			this->DSSuggestionlabel->Text = L"Suggestions";
			// 
			// ModulecomboBox
			// 
			this->ModulecomboBox->BackColor = System::Drawing::Color::Gray;
			this->ModulecomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ModulecomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ModulecomboBox->ForeColor = System::Drawing::Color::Black;
			this->ModulecomboBox->FormattingEnabled = true;
			this->ModulecomboBox->Location = System::Drawing::Point(14, 95);
			this->ModulecomboBox->Margin = System::Windows::Forms::Padding(2);
			this->ModulecomboBox->Name = L"ModulecomboBox";
			this->ModulecomboBox->Size = System::Drawing::Size(883, 28);
			this->ModulecomboBox->TabIndex = 1;
			this->ModulecomboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Homepage::ModulecomboBox_SelectedIndexChanged);
			// 
			// DScomboBox
			// 
			this->DScomboBox->BackColor = System::Drawing::Color::Gray;
			this->DScomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DScomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DScomboBox->ForeColor = System::Drawing::Color::Black;
			this->DScomboBox->FormattingEnabled = true;
			this->DScomboBox->Location = System::Drawing::Point(14, 50);
			this->DScomboBox->Margin = System::Windows::Forms::Padding(2);
			this->DScomboBox->Name = L"DScomboBox";
			this->DScomboBox->Size = System::Drawing::Size(883, 28);
			this->DScomboBox->TabIndex = 0;
			this->DScomboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Homepage::DScomboBox_SelectedIndexChanged);
			// 
			// DSLinkpanel
			// 
			this->DSLinkpanel->BackColor = System::Drawing::Color::AliceBlue;
			this->DSLinkpanel->Controls->Add(this->DSSuggestionsbutton);
			this->DSLinkpanel->Controls->Add(this->btnGraphs);
			this->DSLinkpanel->Controls->Add(this->btnHeaps);
			this->DSLinkpanel->Controls->Add(this->btnTrees);
			this->DSLinkpanel->Controls->Add(this->btnQueues);
			this->DSLinkpanel->Controls->Add(this->btnStacks);
			this->DSLinkpanel->Controls->Add(this->btnSorting);
			this->DSLinkpanel->Controls->Add(this->btnSearching);
			this->DSLinkpanel->Controls->Add(this->btnLinkedList);
			this->DSLinkpanel->Controls->Add(this->btnArrays);
			this->DSLinkpanel->Location = System::Drawing::Point(24, 30);
			this->DSLinkpanel->Margin = System::Windows::Forms::Padding(2);
			this->DSLinkpanel->Name = L"DSLinkpanel";
			this->DSLinkpanel->Size = System::Drawing::Size(912, 513);
			this->DSLinkpanel->TabIndex = 1;
			// 
			// DSSuggestionsbutton
			// 
			this->DSSuggestionsbutton->BackColor = System::Drawing::Color::Black;
			this->DSSuggestionsbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DSSuggestionsbutton->ForeColor = System::Drawing::Color::White;
			this->DSSuggestionsbutton->Location = System::Drawing::Point(764, 437);
			this->DSSuggestionsbutton->Margin = System::Windows::Forms::Padding(2);
			this->DSSuggestionsbutton->Name = L"DSSuggestionsbutton";
			this->DSSuggestionsbutton->Size = System::Drawing::Size(136, 59);
			this->DSSuggestionsbutton->TabIndex = 10;
			this->DSSuggestionsbutton->Text = L"Suggestions";
			this->DSSuggestionsbutton->UseVisualStyleBackColor = false;
			this->DSSuggestionsbutton->Click += gcnew System::EventHandler(this, &Homepage::DSSuggestionsbutton_Click);
			// 
			// btnGraphs
			// 
			this->btnGraphs->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->btnGraphs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGraphs->FlatAppearance->BorderSize = 0;
			this->btnGraphs->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGraphs->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGraphs->Location = System::Drawing::Point(546, 182);
			this->btnGraphs->Name = L"btnGraphs";
			this->btnGraphs->Size = System::Drawing::Size(182, 182);
			this->btnGraphs->TabIndex = 9;
			this->btnGraphs->Text = L"Graphs";
			this->btnGraphs->UseVisualStyleBackColor = false;
			this->btnGraphs->Click += gcnew System::EventHandler(this, &Homepage::btnGraphs_Click);
			// 
			// btnHeaps
			// 
			this->btnHeaps->BackColor = System::Drawing::Color::Bisque;
			this->btnHeaps->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHeaps->FlatAppearance->BorderSize = 0;
			this->btnHeaps->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHeaps->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHeaps->Location = System::Drawing::Point(364, 182);
			this->btnHeaps->Name = L"btnHeaps";
			this->btnHeaps->Size = System::Drawing::Size(182, 182);
			this->btnHeaps->TabIndex = 8;
			this->btnHeaps->Text = L"Heaps";
			this->btnHeaps->UseVisualStyleBackColor = false;
			this->btnHeaps->Click += gcnew System::EventHandler(this, &Homepage::btnHeaps_Click);
			// 
			// btnTrees
			// 
			this->btnTrees->BackColor = System::Drawing::Color::LightCoral;
			this->btnTrees->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTrees->FlatAppearance->BorderSize = 0;
			this->btnTrees->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTrees->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTrees->Location = System::Drawing::Point(182, 182);
			this->btnTrees->Name = L"btnTrees";
			this->btnTrees->Size = System::Drawing::Size(182, 182);
			this->btnTrees->TabIndex = 7;
			this->btnTrees->Text = L"Trees";
			this->btnTrees->UseVisualStyleBackColor = false;
			this->btnTrees->Click += gcnew System::EventHandler(this, &Homepage::btnTrees_Click);
			// 
			// btnQueues
			// 
			this->btnQueues->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnQueues->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQueues->FlatAppearance->BorderSize = 0;
			this->btnQueues->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQueues->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQueues->Location = System::Drawing::Point(0, 182);
			this->btnQueues->Name = L"btnQueues";
			this->btnQueues->Size = System::Drawing::Size(182, 182);
			this->btnQueues->TabIndex = 6;
			this->btnQueues->Text = L"Queues";
			this->btnQueues->UseVisualStyleBackColor = false;
			this->btnQueues->Click += gcnew System::EventHandler(this, &Homepage::button7_Click);
			// 
			// btnStacks
			// 
			this->btnStacks->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->btnStacks->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStacks->FlatAppearance->BorderSize = 0;
			this->btnStacks->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnStacks->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnStacks->Location = System::Drawing::Point(728, 0);
			this->btnStacks->Name = L"btnStacks";
			this->btnStacks->Size = System::Drawing::Size(182, 182);
			this->btnStacks->TabIndex = 4;
			this->btnStacks->Text = L"Stacks";
			this->btnStacks->UseVisualStyleBackColor = false;
			this->btnStacks->Click += gcnew System::EventHandler(this, &Homepage::btnStacks_Click);
			// 
			// btnSorting
			// 
			this->btnSorting->BackColor = System::Drawing::Color::Bisque;
			this->btnSorting->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSorting->FlatAppearance->BorderSize = 0;
			this->btnSorting->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSorting->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSorting->Location = System::Drawing::Point(546, 0);
			this->btnSorting->Name = L"btnSorting";
			this->btnSorting->Size = System::Drawing::Size(182, 182);
			this->btnSorting->TabIndex = 3;
			this->btnSorting->Text = L"Sorting";
			this->btnSorting->UseVisualStyleBackColor = false;
			this->btnSorting->Click += gcnew System::EventHandler(this, &Homepage::button4_Click);
			// 
			// btnSearching
			// 
			this->btnSearching->BackColor = System::Drawing::Color::LightCoral;
			this->btnSearching->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSearching->FlatAppearance->BorderSize = 0;
			this->btnSearching->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearching->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSearching->Location = System::Drawing::Point(364, 0);
			this->btnSearching->Name = L"btnSearching";
			this->btnSearching->Size = System::Drawing::Size(182, 182);
			this->btnSearching->TabIndex = 2;
			this->btnSearching->Text = L"Searching";
			this->btnSearching->UseVisualStyleBackColor = false;
			this->btnSearching->Click += gcnew System::EventHandler(this, &Homepage::btnSearching_Click);
			// 
			// btnLinkedList
			// 
			this->btnLinkedList->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnLinkedList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLinkedList->FlatAppearance->BorderSize = 0;
			this->btnLinkedList->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLinkedList->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLinkedList->Location = System::Drawing::Point(182, 0);
			this->btnLinkedList->Name = L"btnLinkedList";
			this->btnLinkedList->Size = System::Drawing::Size(182, 182);
			this->btnLinkedList->TabIndex = 1;
			this->btnLinkedList->Text = L"Linked Lists";
			this->btnLinkedList->UseVisualStyleBackColor = false;
			this->btnLinkedList->Click += gcnew System::EventHandler(this, &Homepage::button2_Click);
			// 
			// btnArrays
			// 
			this->btnArrays->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->btnArrays->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnArrays->FlatAppearance->BorderSize = 0;
			this->btnArrays->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnArrays->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnArrays->Location = System::Drawing::Point(0, 0);
			this->btnArrays->Name = L"btnArrays";
			this->btnArrays->Size = System::Drawing::Size(182, 182);
			this->btnArrays->TabIndex = 0;
			this->btnArrays->Text = L"Arrays";
			this->btnArrays->UseVisualStyleBackColor = false;
			this->btnArrays->Click += gcnew System::EventHandler(this, &Homepage::btnArrays_Click);
			// 
			// outputpanel
			// 
			this->outputpanel->Location = System::Drawing::Point(0, 53);
			this->outputpanel->Margin = System::Windows::Forms::Padding(2);
			this->outputpanel->Name = L"outputpanel";
			this->outputpanel->Size = System::Drawing::Size(960, 573);
			this->outputpanel->TabIndex = 51;
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 626);
			this->Controls->Add(this->DSpanel);
			this->Controls->Add(this->Homepanel);
			this->Controls->Add(this->outputpanel);
			this->Controls->Add(this->Profilepanel);
			this->Controls->Add(this->Headerstatuspanel);
			this->Controls->Add(this->HeaderPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Homepage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Homepage";
			this->Load += gcnew System::EventHandler(this, &Homepage::Homepage_Load);
			this->HeaderPanel->ResumeLayout(false);
			this->Headerstatuspanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaderStatusPanelpictureBox1))->EndInit();
			this->Homepanel->ResumeLayout(false);
			this->Homepanel->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
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
			this->DSpanel->ResumeLayout(false);
			this->Suggestionpanel->ResumeLayout(false);
			this->Suggestionpanel->PerformLayout();
			this->SuggestionADDpanel->ResumeLayout(false);
			this->SuggestionADDpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->SuggestionPastpanel->ResumeLayout(false);
			this->SuggestionDeletepanel->ResumeLayout(false);
			this->DSLinkpanel->ResumeLayout(false);
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
				 DSpanel->Hide();
				 Profilepanel->Show();
				 outputpanel->Hide();
				 HeaderStatusPanelpictureBox3->BackColor=Color::Red;
				 HeaderStatusPanelpictureBox1->BackColor=Color::Black;
				 HeaderStatusPanelpictureBox2->BackColor=Color::Black;
				 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
				 HeaderHomebutton->BackColor=Color::Black;
				 HeaderDSButton->BackColor=Color::Black;
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
private: System::Void Homepage_Load(System::Object^  sender, System::EventArgs^  e) {
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
			 DSpanel->Hide();
			 Profilepanel->Hide();
			 outputpanel->Hide();
			 HeaderStatusPanelpictureBox3->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox1->BackColor=Color::Red;
			 HeaderStatusPanelpictureBox2->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
			 HeaderHomebutton->BackColor=Color::Gray;
			 HeaderDSButton->BackColor=Color::Black;
			 HeaderForumbutton->BackColor=Color::Black;
			 HeaderProfilebutton->BackColor=Color::Black;
			 HeaderForumbutton->BackColor=Color::Black;
			


			 if(username=="guest")
			 {
				HomepanelStatuslabel->Text="Logged in as a guest (Progress won't be saved)";
				HomepanelStatuslabel->BackColor=Color::LightBlue;
				HomepanelStatuslabel->ForeColor=Color::Blue;
				 return;
			 }
			 if(designation=="prof")
			 {
				 if(isapproved=="False"&&status=="Pending")
				 {
					 HomepanelStatuslabel->Text="Designation as 'Professor' not verified by admin (Limited Capabilities)";
					 HomepanelStatuslabel->BackColor=Color::LightGoldenrodYellow;
					 HomepanelStatuslabel->ForeColor=Color::DarkMagenta;
				 }
				 else if(isapproved=="False"&&status=="Rejected")
				 {
					HomepanelStatuslabel->Text="Designation as 'Professor' Rejected by admin (Limited Capabilities)";
					HomeReasonlabel->Text="Reason: "+reason;
					HomeReasonlabel->Show();
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

			 int temp;
			 //Array
			 temp=Convert::ToInt32(array_progress);
			 if(temp>5||temp<0)
				 temp=5;
			 ArrayprogressBar->Value=temp;
			 //Linked list
			 temp=Convert::ToInt32(ll_progress);
			 if(temp>4||temp<0)
				 temp=4;
			 llprogressBar->Value=temp;
			 //Searching
			temp=Convert::ToInt32(searching_progress);
			 if(temp>4||temp<0)
				 temp=4;
			 searchingprogressBar->Value=temp;
			 //Sorting
			 temp=Convert::ToInt32(sorting_progress);
			 if(temp>6||temp<0)
				 temp=6;
			 sortingprogressBar->Value=temp;
			 //Stack
			 temp=Convert::ToInt32(stack_progress);
			 if(temp>3||temp<0)
				 temp=3;
			 stackprogressBar->Value=temp;
			 //Queues
			 temp=Convert::ToInt32(queue_progress);
			 if(temp>3||temp<0)
				 temp=3;
			 queueprogressBar->Value=temp;

			 
			 
		 }
private: System::Void HeaderDSButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Homepanel->Hide();
			 DSpanel->Show();
			 Profilepanel->Hide();
			 outputpanel->Hide();
			 HeaderStatusPanelpictureBox3->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox1->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox2->BackColor=Color::Red;
			 HeaderStatusPanelpictureBox4->BackColor=Color::Black;
			 HeaderHomebutton->BackColor=Color::Black;
			 HeaderDSButton->BackColor=Color::Gray;
			 HeaderForumbutton->BackColor=Color::Black;
			 HeaderProfilebutton->BackColor=Color::Black;
			 DSLinkpanel->Show();
			 Suggestionpanel->Hide();
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
				MessageBox::Show(ex->Message,"Error while writing data from Profile section(SAVE Homepage)");
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
			 if(username=="guest")
			 {
				 //HeaderProfilebutton->Enabled=0;
				 HomepanelStatuslabel->Text="Logged in as a guest (Progress won't be saved)";
				 HomepanelStatuslabel->BackColor=Color::LightBlue;
				 HomepanelStatuslabel->ForeColor=Color::Blue;
				 DSSuggestionsbutton->Hide();
				 func();
				 return;
			 }
			 
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

				 query="Select Reason From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 reason=command->ExecuteScalar()->ToString();

				 query="Select Status From Users Where Username = '"+username+"';";
				 command->CommandText=query;
				 status=command->ExecuteScalar()->ToString();


				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {	
				 MessageBox::Show(ex->Message,"Error while reading data on LOAD");
			 }

			 //status
			 //MessageBox::Show(isapproved);
			 if(designation=="prof")
			 {
				 if(isapproved=="False"&&status=="Pending")
				 {
					 HomepanelStatuslabel->Text="Designation as 'Professor' not verified by admin (Limited Capabilities)";
					 HomepanelStatuslabel->BackColor=Color::LightGoldenrodYellow;
					 HomepanelStatuslabel->ForeColor=Color::DarkMagenta;
				 }
				 else if(isapproved=="False"&&status=="Rejected")
				 {
					 HomepanelStatuslabel->Text="Designation as 'Professor' Rejected by admin (Limited Capabilities)";
					 HomeReasonlabel->Text="Reason: "+reason;
					 HomeReasonlabel->Show();
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
				 HomepanelStatuslabel->Text="Logged in as ADMIN";
				 HomepanelStatuslabel->BackColor=Color::LightPink;
				 HomepanelStatuslabel->ForeColor=Color::Magenta;
			 }



			 //progress bars
			 ArrayprogressBar->Value=Convert::ToInt32(array_progress);
			 llprogressBar->Value=Convert::ToInt32(ll_progress);
			 searchingprogressBar->Value=Convert::ToInt32(searching_progress);
			 sortingprogressBar->Value=Convert::ToInt32(sorting_progress);
			 stackprogressBar->Value=Convert::ToInt32(stack_progress);
			 queueprogressBar->Value=Convert::ToInt32(queue_progress);

			 

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
			 //Reading Data Structures
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query = "Select * From DS; ";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 while(reader->Read())
				 {
					 String ^ds=reader->GetString(2);
					 DScomboBox->Items->Add(ds);

				 }
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while reading DS Table on Load");
			 }

			 if(designation=="stud")
			 {
				 DSSuggestionsbutton->Hide();
			 }

			 if(designation=="admin")
			 {
				 AdminPagebutton->Show();
			 }

			 

			 func();
			


		 }

		 void func(void)
		 {

			 //forums
			 outputpanel->Controls->Clear();
			 // DiscussionForum_Main ^ discuss = gcnew DiscussionForum_Main;
			 // discuss->username=username;

			 // outputpanel->Controls->Add(discuss);
			 System::Object ^sender;
			 System::EventArgs ^e;
			 this->HeaderHomebutton_Click(sender,e);
		 }
private: System::Void PastSuggestionradioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 SuggestionADDpanel->Hide();
			 SuggestionPastpanel->Show();
			 SuggestionDeletepanel->Hide();
			 //Reading past Suggestions
			 try
			 {
				 
				 connection->Open();
				 command->Connection=connection;
				 query = "Select * from [Suggestion] Where [Username] ='"+username+"'; ";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				SuggestionPastlistBox->Items->Clear();
				while(reader->Read())
				{
					String ^ques = reader->GetString(2);
					String ^status=reader->GetString(11);
					String ^reason=reader->GetString(15);
					String ^res="STATUS: "+status+" |QUESTION: "+ques+" |REASON(IF REJECTED): "+reason;
					SuggestionPastlistBox->Items->Add(res);
				}
				 connection->Close();
				 //MessageBox::Show("Successfully Added to Suggestions");

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while reading data from Suggestion Table(PAST)");
			 }

			 


		 }
private: System::Void SuggestionAddSuggestionbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ques=SuggestionAddQuestiontextBox->Text;
			 String ^op1=SuggestionAddOption1textBox->Text;
			 String ^op2=SuggestionAddoption2textBox->Text;
			 String ^op3=SuggestionAddOption3textBox->Text;
			 String ^op4=SuggestionAddOption4textBox->Text;
			 int a1=0,a2=0,a3=0,a4=0;
			 int len1,len2,len3,len4=op4->Length;
			 int len=ques->Length;
			 len1=op1->Length;
			 len2=op2->Length;
			 len3=op3->Length;

			 if(DScomboBox->Text=="Data Structure"||ds_id==-1)
			 {
				 MessageBox::Show("Select a Data Structure","Suggestion ADD Error");
				 return;
			 }
			 if(ModulecomboBox->Text=="Module"||module_id==-1)
			 {
				 MessageBox::Show("Select a Module","Suggestion ADD Error");
				 return;
			 }
			 
			 //Checking validity of question and options
			 if(ques=="Question"||ques=="")			//Question
			 {
				MessageBox::Show("Enter a Valid Question","Suggestion ADD Error");
				return;
			 }
			int count=0;
			for(int i=0;i<len;i++)
			{

				if(isalnum(ques[i]))
					count++;
			}
			if(count<2)
			{
				MessageBox::Show("Enter a Valid Question","Suggestion ADD Error");
				return;
			}

			//Option 1
			if(op1=="Option 1"||op1=="")			
			{
				MessageBox::Show("Enter a Valid Option 1","Suggestion ADD Error");
				return;
			}
			count=0;
			for(int i=0;i<len1;i++)
			{

				if(isalnum(op1[i]))
					count++;
			}
			if(count<2)
			{
				MessageBox::Show("Enter a Valid Option 1","Suggestion ADD Error");
				return;
			}

			//Option 2
			if(op2=="Option 2"||op2=="")			
			{
				MessageBox::Show("Enter a Valid Option 2","Suggestion ADD Error");
				return;
			}
			count=0;
			for(int i=0;i<len2;i++)
			{

				if(isalnum(op2[i]))
					count++;
			}
			if(count<2)
			{
				MessageBox::Show("Enter a Valid Option 2","Suggestion ADD Error");
				return;
			}

			//Option 3
			if(op3=="Option 3"||op3=="")			
			{
				MessageBox::Show("Enter a Valid Option 3","Suggestion ADD Error");
				return;
			}
			count=0;
			for(int i=0;i<len3;i++)
			{

				if(isalnum(op3[i]))
					count++;
			}
			if(count<2)
			{
				MessageBox::Show("Enter a Valid Option 3","Suggestion ADD Error");
				return;
			}

			//Option 4
			if(op4=="Option 4"||op4=="")			
			{
				MessageBox::Show("Enter a Valid Option 4","Suggestion ADD Error");
				return;
			}
			count=0;
			for(int i=0;i<len4;i++)
			{

				if(isalnum(op4[i]))
					count++;
			}
			if(count<2)
			{
				MessageBox::Show("Enter a Valid Option 4","Suggestion ADD Error");
				return;
			}

			

			//Checking for duplicate question in DB
			try
			{
				connection->Open();
				command->Connection=connection;
				query = "Select * from Quizzes Where Question='"+ques+"' ; ";
				int n1=0;
				command->CommandText=query;
				OleDbDataReader ^reader=command->ExecuteReader();
				while(reader->Read())
				{
					if(ds_id==reader->GetInt32(11))
					{
						if(module_id==reader->GetInt32(16))	//duplicate
						{
							MessageBox::Show("Similar Question already present in DB");
							n1++;
							break;
						}
					}
					
					//String ^user=reader->GetString(12);
					

					
				}
				connection->Close();
				if(n1)
				return;

			}
			catch (Exception ^e)
			{
				MessageBox::Show(e->Message,"Error while reading data from Quizzes Table in ADD");
			}


			//Checking for duplicate (Same Question) in Suggestions
			try
			{
				connection->Open();
				command->Connection=connection;
				query = "Select * from Suggestion Where Question='"+ques+"' and DS="+ds_id+"; ";
				int n2=0;
				command->CommandText=query;
				OleDbDataReader ^reader=command->ExecuteReader();
				while(reader->Read())
				{
					String ^user=reader->GetString(12);
					//MessageBox::Show(user);
					int id=reader->GetInt32(14);
					//MessageBox::Show("moduleid: "+id);
					if(id==module_id)	//duplicate
					{	
						MessageBox::Show("Similar Question already suggested by user: "+user);
						n2++;
						break;
					}
						
				}
				connection->Close();
				if(n2)
				return;

			}
			catch (Exception ^e)
			{
				MessageBox::Show(e->Message,"Error while reading data from Suggestion Table in ADD");
			}

			//Setting a[]
			if(SuggestionAddOption1checkBox->Checked==true)
			a1=1;
			if(SuggestionAddOption2checkBox->Checked==true)
				a2=1;
			if(SuggestionAddOption3checkBox->Checked==true)
				a3=1;
			if(SuggestionAddOption4checkBox->Checked==true)
				a4=1;

			if(a1==0&&a2==0&&a3==0&&a4==0)
			{
				MessageBox::Show("Atleast one option should be correct","Suggestion ADD Error");
				return;
			}

			//Success
			try
			{
				connection->Open();
				command->Connection=connection;
				query = "INSERT INTO [Suggestion] ([Type], Question, Option1, Option2, Option3, Option4 , Answer1, Answer2, Answer3,Answer4,Status,Username,DS,[Module],[Reason],[ReasonD]) VALUES ('ADD', '"+ques+"', '"+op1+"', '"+op2+"', '"+op3+"', '"+op4+"', "+a1+", "+a2+", "+a3+", "+a4+", 'Pending','"+username+"',"+ds_id+","+module_id+",'-','-'); ";
				command->CommandText=query;
				command->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show("Successfully Added to Suggestions");
			
			}
			catch (Exception ^e)
			{
				MessageBox::Show(e->Message,"Error while writing data to Suggestion Table");
			}
		}
private: System::Void DScomboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ds=DScomboBox->Text;
			 try
			 {
				connection->Open();
				command->Connection=connection;
				query="Select ID from DS Where DS='"+ds+"';";
				command->CommandText=query;
				String ^res=command->ExecuteScalar()->ToString();
				ds_id=Convert::ToInt32(res);
				//MessageBox::Show("ds_id: "+ds_id);
				connection->Close();
				
			 }
			 catch (Exception ^e)
			 {
			 	MessageBox::Show(e->Message,"Error While reading DS Table on Change of DS Combobox");

			 }
			 //updating module names
			 try
			 {
				 ModulecomboBox->Items->Clear();
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from Modules Where DataStructureID="+ds_id+";";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 while(reader->Read())
				 {

					 String ^module=reader->GetString(3);
					 ModulecomboBox->Items->Add(module);

				 }
				
				 connection->Close();
				 ModulecomboBox->Text="";
				 module_id=-1;

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error While reading Modules Table on Change of DS Combobox");

			 }
			 
		 }
private: System::Void addradioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 SuggestionADDpanel->Show();
			 SuggestionPastpanel->Hide();
			 SuggestionDeletepanel->Hide();
			 SuggestionAddQuestiontextBox->Text="Question";
			 SuggestionAddOption1textBox->Text="Option 1";
			 SuggestionAddoption2textBox->Text="Option 2";
			 SuggestionAddOption3textBox->Text="Option 3";
			 SuggestionAddOption4textBox->Text="Option 4";
			 SuggestionAddOption4checkBox->Checked=false;
			 SuggestionAddOption1checkBox->Checked=false;
			 SuggestionAddOption2checkBox->Checked=false;
			 SuggestionAddOption3checkBox->Checked=false;
		 }
private: System::Void deleteradioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 SuggestionADDpanel->Hide();
			 SuggestionPastpanel->Hide();
			 SuggestionDeletepanel->Show();
			 SuggestionDeletelistBox->Items->Clear();
			 if(ds_id!=-1)
			 {
				if(ModulecomboBox->Text!="Module")
				{
					//updating Questions list
					try
					{
						connection->Open();
						command->Connection=connection;
						query="Select * from Quizzes Where DataStructureID="+ds_id+" and ModuleID="+module_id+";";
						command->CommandText=query;
						OleDbDataReader ^reader=command->ExecuteReader();
						while(reader->Read())
						{

							String ^ques=reader->GetString(1);
							SuggestionDeletelistBox->Items->Add(ques);

						}

						connection->Close();

					}
					catch (Exception ^e)
					{
						MessageBox::Show(e->Message,"Error While reading Quizzes Table for DELETE");

					}
				}
			 }
		 }
private: System::Void ModulecomboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Getting module_id
			 if(ModulecomboBox->Text==""||ModulecomboBox->Text=="Module")
				 return;
			 String ^module=ModulecomboBox->Text;
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query = "Select ModuleID from Modules Where DataStructureID="+ds_id+" and ModuleName='"+module+"' ; ";
				 command->CommandText=query;
				 module_id=Convert::ToInt32(command->ExecuteScalar()->ToString());



				 connection->Close();

				 //Updating Questions in Delete list box
				 SuggestionDeletelistBox->Items->Clear();
				 if(ds_id!=-1)
				 {
					 if(ModulecomboBox->Text!="Module"&&ModulecomboBox->Text!="")
					 {
						 //updating Questions list
						 try
						 {
							 connection->Open();
							 command->Connection=connection;
							 query="Select * from Quizzes Where DataStructureID="+ds_id+" and ModuleID="+module_id+";";
							 command->CommandText=query;
							 OleDbDataReader ^reader=command->ExecuteReader();
							 while(reader->Read())
							 {

								 String ^ques=reader->GetString(1);
								 SuggestionDeletelistBox->Items->Add(ques);

							 }

							 connection->Close();

						 }
						 catch (Exception ^e)
						 {
							 MessageBox::Show(e->Message,"Error While reading Quizzes Table for DELETE(Inside Module combobox Change)");

						 }
					 }
				 }

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while reading data from Modules Table in module combobox change");
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 LinkedList1 ^newForm = gcnew LinkedList1();
			 newForm->username = username;
			 this->Hide();
			 newForm->ShowDialog();
			 this->Show();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Sorting ^newForm = gcnew Sorting();
			 newForm->username = username;
			 this->Hide();
			 newForm->ShowDialog();
			 this->Show();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 Queue_Home ^newForm = gcnew Queue_Home();
			 newForm->username = username;
			 this->Hide();
			 newForm->ShowDialog();
			 this->Show();
		 }
private: System::Void btnArrays_Click(System::Object^  sender, System::EventArgs^  e) {
			 Arrays ^newForm = gcnew Arrays();
			 newForm->username = username;
			 this->Hide();
			 newForm->ShowDialog();
			 //MessageBox::Show("Came Here");
			 this->Show();
		 }
private: System::Void btnSearching_Click(System::Object^  sender, System::EventArgs^  e) {
			 Searching ^newForm = gcnew Searching();
			 newForm->username = username;
			 this->Hide();
			 newForm->ShowDialog();
			 this->Show();
		 }
private: System::Void btnStacks_Click(System::Object^  sender, System::EventArgs^  e) {
			 Stack_Main ^newForm = gcnew Stack_Main();
			 newForm->username = username;
			 this->Hide();
			 newForm->ShowDialog();
			 this->Show();
		 }
private: System::Void SuggestionDeletebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionDeletelistBox->SelectedIndex==-1)
				 return;
			 String ^ques=SuggestionDeletelistBox->SelectedItem->ToString();
			 if(ques=="")
				 return;
			 //Checking if delete already suggested by same user
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Select * from [Suggestion] Where [DS]="+ds_id+" and [Module]="+module_id+";";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 //MessageBox::Show("Reached here");
				 while(reader->Read())
				 {

					 if(ques==reader->GetString(2))
					 {
						 MessageBox::Show("Already Suggested for deletion by you","Suggest Delete");
						 connection->Close();
						 return;
					 }
				
				 }
				connection->Close();
			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error While reading Suggestions Table for DELETE Duplication Checking");

			 }
			 String ^input=Microsoft::VisualBasic::Interaction::InputBox(L"Enter Reason:","Suggestion","",500,500);
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
				MessageBox::Show("Reason is mandatory","Suggestion Delete");
				return;
			 }
			 //Push Suggestion to DB
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query = "INSERT INTO [Suggestion] ([Type], [Question],[Status],[Username],[DS],[Module],[Reason],[ReasonD],Option1,Option2,Option3,Option4) VALUES ('DELETE','"+ques+"', 'Pending','"+username+"',"+ds_id+","+module_id+",'-','"+input+"','-','-','-','-'); ";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 connection->Close();
				 MessageBox::Show("Successfully Added to Suggestions");

			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show(e->Message,"Error while writing data to Suggestion Table(DELETE)");
			 }

		 }
private: System::Void DSSuggestionsbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(isapproved=="False"&&designation=="prof")
			 {
				 MessageBox::Show("'Professor status not yet verified by Admin","Restricted");
				 return;

			 }
			 DSLinkpanel->Hide();
			 Suggestionpanel->Show();
			 SuggestionADDpanel->Hide();
			 SuggestionPastpanel->Show();
			 SuggestionDeletepanel->Hide();
			 PastSuggestionradioButton->Checked=true;
			
		 }
private: System::Void SuggestionDSbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 DSLinkpanel->Show();
			 Suggestionpanel->Hide();
		 }
private: System::Void HeaderForumbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Homepanel->Hide();
			 //Profilepanel->Hide();
			 //DSpanel->Hide();
			 // outputpanel->Show();
			
			/* HeaderStatusPanelpictureBox3->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox1->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox2->BackColor=Color::Black;
			 HeaderStatusPanelpictureBox4->BackColor=Color::Red;
			 HeaderHomebutton->BackColor=Color::Black;
			 HeaderDSButton->BackColor=Color::Black;
			 HeaderForumbutton->BackColor=Color::Gray;
			 HeaderProfilebutton->BackColor=Color::Black;*/

			  DiscussionForum_Main ^newForm = gcnew DiscussionForum_Main();
			  newForm->username = username;
			  this->Hide();
			  newForm->ShowDialog();
			  this->Show();
		 }
private: System::Void Homepanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void AdminPagebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void btnGraphs_Click(System::Object^  sender, System::EventArgs^  e) {
			Graphs_Home ^form=gcnew Graphs_Home;
			form->username=username;
			this->Hide();
			form->ShowDialog();
			this->Show();
		 }
private: System::Void btnHeaps_Click(System::Object^  sender, System::EventArgs^  e) {
			 Heap ^form=gcnew Heap;
			 form->username=username;
			 this->Hide();
			 form->ShowDialog();
			 this->Show();
		 }
private: System::Void btnTrees_Click(System::Object^  sender, System::EventArgs^  e) {
			 BST_mainpage ^form=gcnew BST_mainpage;
			 form->username=username;
			 this->Hide();
			 form->ShowDialog();
			 this->Show();
		 }
private: System::Void SuggestionAddQuestiontextBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddQuestiontextBox->Text=="Question")
			 {
				SuggestionAddQuestiontextBox->Text="";
				SuggestionAddQuestiontextBox->Focus();
				SuggestionAddQuestiontextBox->Select();
			 
			 }
		 }
private: System::Void SuggestionAddQuestiontextBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddQuestiontextBox->Text=="")
			 {
				 SuggestionAddQuestiontextBox->Text="Question";
				 

			 }
		 }
private: System::Void SuggestionAddOption1textBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddOption1textBox->Text=="Option 1")
			 {
				 SuggestionAddOption1textBox->Text="";
				 SuggestionAddOption1textBox->Focus();
				 SuggestionAddOption1textBox->Select();
			 }

		 }
private: System::Void SuggestionAddOption1textBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddOption1textBox->Text=="")
			 {
				 SuggestionAddOption1textBox->Text="Option 1";
				 
			 }
		 }
private: System::Void SuggestionAddOption3textBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddOption3textBox->Text=="Option 3")
			 {
				 SuggestionAddOption3textBox->Text="";
				 SuggestionAddOption3textBox->Focus();
				 SuggestionAddOption3textBox->Select();
			 }
			 
		 }
private: System::Void SuggestionAddOption3textBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddOption3textBox->Text=="")
			 {
				 SuggestionAddOption3textBox->Text="Option 3";

			 }
			
		 }
private: System::Void SuggestionAddoption2textBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddoption2textBox->Text=="Option 2")
			 {
				 SuggestionAddoption2textBox->Text="";
				 SuggestionAddoption2textBox->Focus();
				 SuggestionAddoption2textBox->Select();
			 }
		 }
private: System::Void SuggestionAddoption2textBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddoption2textBox->Text=="")
			 {
				 SuggestionAddoption2textBox->Text="Option 2";

			 }
		 }
private: System::Void SuggestionAddOption4textBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddOption4textBox->Text=="Option 4")
			 {
				 SuggestionAddOption4textBox->Text="";
				 SuggestionAddOption4textBox->Focus();
				 SuggestionAddOption4textBox->Select();
			 }
		 }
private: System::Void SuggestionAddOption4textBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(SuggestionAddOption4textBox->Text=="")
			 {
				 SuggestionAddOption4textBox->Text="Option 4";

			 }
		 }
private: System::Void SuggestionADDpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}