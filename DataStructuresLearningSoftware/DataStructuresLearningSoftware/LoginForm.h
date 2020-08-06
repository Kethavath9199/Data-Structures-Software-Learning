#pragma once
#include<string.h>
#include <string>
#include "Homepage.h"
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include "AdminForm.h"
//#include "easendmailobj.tlh"
//#include <tchar.h>
//#include <msclr/marshal.h>







namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;
	//using namespace EASendMailObjLib;
	//using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		OleDb::OleDbConnection ^connection;
		OleDb::OleDbCommand ^command;
		String ^email_code;
		String ^username_r;
		String	^firstname_r;
		String	^lastname_r;
		String	^designation_r;
		String	^email_r;
		String	^securityquestion_r;
		String	^securityanswer_r;
		String	^password_r;
		String ^username_f;
		String ^password_f;
		String ^email_code_f;
		String ^ans_f;

	private: System::Windows::Forms::Panel^  RegisterSecuritypanel;
	public: 

	private: System::Windows::Forms::PictureBox^  registerSecuritypictureBox;
	public: 

	private: System::Windows::Forms::TextBox^  RegisterSecurityAnswertextBox;

	private: System::Windows::Forms::ComboBox^  RegisterSecuritycomboBox;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  RegisterPasswordpictureBox;
	private: System::Windows::Forms::TextBox^  registerPasswordtextBox;
	private: System::Windows::Forms::TextBox^  RegisterUsernametextBox;
	private: System::Windows::Forms::CheckBox^  RegisterpasswordcheckBox;
	private: System::Windows::Forms::Button^  RegisterVerificationResendbutton;
			 String ^query;
		

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
		public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
	
			command=gcnew OleDbCommand;
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
				MessageBox::Show(ex->Message,"Error while connecting to DB from Login Page");

			}
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
					RegisterSecuritycomboBox->Items->Add(ques);

				}
				//command->Dispose();
				connection->Close();
			}
			catch (Exception ^ex)
			{
				MessageBox::Show(ex->Message,"Error while reading data (Security Questions) from LoginPage");
			}

			loginpanel->Show();
			ForgotPasswordpanel->Hide();
			Registerpanel->Hide();
			UsernameTextBox->Select();
			RegisterStatuslabel->Hide();
			RegisterVerificationStatuslabel->Hide();
			ForgotPasswordUsernameErrorlabel->Hide();
			ForgotPasswordEmailradiobutton->Select();
			ForgotPasswordEmailErrorLabel->Hide();
			ForgotPasswordQuestionErrorLabel->Hide();
			ForgotPasswordEmailCodeErrorlabel->Hide();
			ChangePasswordErrorlabel->Hide();
			ChangePasswordcheckBox->Checked = true;
			

			//Initialising global variables
			forgotpasswordusername=0;
			registerdetailspanel1 = 0;		//Global variable
			registerdetailspanel2 = 0;
			registerdetailspanel3 = 0;
			registerdetailspanel4 = 0;
			registerverificationpanel = 0;
			forgotpassword_email="";
			emailcode_flag = false;	

			UsernameTextBox->Focus();
			UsernameTextBox->SelectAll();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  headerpanel;
	protected:
	private: System::Windows::Forms::Panel^  loginpanel;
	private: System::Windows::Forms::PictureBox^  LogoPicturebox;

	private: System::Windows::Forms::Button^  closebutton;
	private: System::Windows::Forms::Panel^  UsernameDesignpanel;

	private: System::Windows::Forms::PictureBox^  Usernamepicturebox;

	private: System::Windows::Forms::TextBox^  UsernameTextBox;
	private: System::Windows::Forms::Panel^  PasswordDesignPanel;

	private: System::Windows::Forms::PictureBox^  PasswordPictureBox;
	private: System::Windows::Forms::TextBox^  PasswordTextBox;
	private: System::Windows::Forms::CheckBox^  LoginPagePasswordShowcheckBox;


	private: System::Windows::Forms::PictureBox^  LoginpictureBox;

	private: System::Windows::Forms::PictureBox^  ForgotPasswordPicturebox;

	private: System::Windows::Forms::Button^  LoginButton;

	private: System::Windows::Forms::Button^  ForgotPasswordButton;
	private: System::Windows::Forms::Button^  GuestLoginButton;
	private: System::Windows::Forms::Button^  RegisterButton;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  ForgotPasswordpanel;
	private: System::Windows::Forms::Panel^  ForgotPasswordUsernamepanel;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  ForgotPasswordUsernamepictureBox;
	private: System::Windows::Forms::TextBox^  ForgotPasswordUsernametextBox;


	private: System::Windows::Forms::Label^  ForgotPasswordHeaderlabel;
	private: System::Windows::Forms::PictureBox^  ForgotPasswordHomepictureBox;

	private: System::Windows::Forms::PictureBox^  ForgotPasswordNextpictureBox;

	private: System::Windows::Forms::PictureBox^  ForgotPasswordBackpictureBox;

	private: System::Windows::Forms::Button^  ForgotPasswordHomebutton;

	private: System::Windows::Forms::Button^  ForgotPasswordNextbutton;

	private: System::Windows::Forms::Button^  ForgotPasswordBackbutton;
	private: System::Windows::Forms::Panel^  ForgotPasswordVerificationpanel;
	private: System::Windows::Forms::RadioButton^  ForgotPasswordQuestionradiobutton;

	private: System::Windows::Forms::RadioButton^  ForgotPasswordEmailradiobutton;
	private: System::Windows::Forms::Label^  ForgotPasswordVerificationlabel;
	private: System::Windows::Forms::Panel^  ForgotPasswordEmailpanel;
	private: System::Windows::Forms::Panel^  ForgotPasswordEmailDesignpanel;
	private: System::Windows::Forms::PictureBox^  ForgotPasswordEmailpictureBox;
	private: System::Windows::Forms::TextBox^  ForgotPasswordEmailtextBox;
	private: System::Windows::Forms::PictureBox^  ForgotPasswordVerificationHomepicturebox;
	private: System::Windows::Forms::PictureBox^  ForgotPasswordVerificationNextpicturebox;
	private: System::Windows::Forms::PictureBox^  ForgotPasswordVerificationBackpicturebox;
	private: System::Windows::Forms::Button^  ForgotPasswordVerificationHomebutton;
	private: System::Windows::Forms::Button^  ForgotPasswordVerificationBackbutton;
	private: System::Windows::Forms::Button^  ForgotPasswordVerificationNextbutton;
	private: System::Windows::Forms::Label^  ForgotPasswordEmailErrorLabel;

	private: System::Windows::Forms::Label^  ForgotPasswordEmailLabel1;
	private: System::Windows::Forms::Panel^  ForgotPasswordQuestionpanel;
	private: System::Windows::Forms::Label^  ForgotPasswordSecurityQuestionlabel;
	private: System::Windows::Forms::Label^  ForgotPasswordQuestionlabel;
	private: System::Windows::Forms::Panel^  ForgotPasswordAnswerDesignpanel;

	private: System::Windows::Forms::PictureBox^  ForgotPasswordAnswerpictureBox;
	private: System::Windows::Forms::TextBox^  ForgotPasswordAnswertextBox;
private: System::Windows::Forms::Label^  ForgotPasswordQuestionErrorLabel;

	private: System::Windows::Forms::Panel^  ChangePasswordpanel;
	private: System::Windows::Forms::CheckBox^  ChangePasswordcheckBox;
private: System::Windows::Forms::Label^  ChangePasswordErrorlabel;

	private: System::Windows::Forms::Panel^  ChangePasswordConfirmPasswordDesignpanel;
	private: System::Windows::Forms::PictureBox^  ChangePasswordConfirmPasswordpictureBox;
	private: System::Windows::Forms::TextBox^  ChangePasswordConfirmPasswordtextBox;
	private: System::Windows::Forms::Panel^  ChangePasswordNewPasswordDesignpanel;
	private: System::Windows::Forms::PictureBox^  ChangePasswordNewPasswordpictureBox;
	private: System::Windows::Forms::TextBox^  ChangePasswordNewPasswordtextBox;
private: System::Windows::Forms::PictureBox^  ChangePasswordHomepictureBox;
private: System::Windows::Forms::Button^  ChangePasswordHomebutton;
private: System::Windows::Forms::Button^  PasswordChangeChangebutton;
private: System::Windows::Forms::Panel^  Registerpanel;
private: System::Windows::Forms::Panel^  RegisterDetailspanel;
private: System::Windows::Forms::Panel^  RegisterFirstNameDesignpanel;

private: System::Windows::Forms::PictureBox^  RegisterFirstNamepictureBox;







private: System::Windows::Forms::Label^  RegisterHeaderlabel;


private: System::Windows::Forms::PictureBox^  ReigsterHeaderpictureBox;
private: System::Windows::Forms::PictureBox^  RegisterHomepictureBox;



private: System::Windows::Forms::Button^  RegisterRegisterbutton;

private: System::Windows::Forms::RadioButton^  RegisterStudentradioButton;


private: System::Windows::Forms::Label^  Registertypelabel;
private: System::Windows::Forms::Panel^  RegisterUsernameDesignpanel;



private: System::Windows::Forms::PictureBox^  RegisterUsernamepictureBox;
private: System::Windows::Forms::TextBox^  RegisterEmailtextBox;



private: System::Windows::Forms::Panel^  RegisterEmailDesignpanel;
private: System::Windows::Forms::PictureBox^  RegisterEmailpictureBox;
private: System::Windows::Forms::TextBox^  RegisterLastNametextBox;


private: System::Windows::Forms::Panel^  RegisterLastNameDesignpanel;
private: System::Windows::Forms::PictureBox^  RegisterLastNamepictureBox;
private: System::Windows::Forms::TextBox^  RegisterFirstNametextBox;


private: System::Windows::Forms::PictureBox^  RegisterTeacherpictureBox;

private: System::Windows::Forms::PictureBox^  RegisterStudentpictureBox;

private: System::Windows::Forms::RadioButton^  RegisterTeacherradioButton;
private: System::Windows::Forms::Button^  RegisterHomebutton;
private: System::Windows::Forms::Panel^  RegisterVerificationpanel;
private: System::Windows::Forms::Label^  RegitsterVerificationlabel1;
private: System::Windows::Forms::Label^  RegisterVerificationStatuslabel;

private: System::Windows::Forms::Button^  RegisterVerificationBackbutton;





private: System::Windows::Forms::Panel^  RegisterVerificationDesignpanel;
private: System::Windows::Forms::PictureBox^  RegisterVerificationpictureBox;
private: System::Windows::Forms::TextBox^  RegisterVerificationtextBox;
private: System::Windows::Forms::Label^  RegitsterVerificationlabel2;
private: System::Windows::Forms::Button^  RegisterVerificationVerifybutton;
private: System::Windows::Forms::Label^  RegisterStatuslabel;
private: System::Windows::Forms::Label^  ForgotPasswordUsernameErrorlabel;
private: System::Windows::Forms::Panel^  ForgotPasswordEmailCodepanel;

private: System::Windows::Forms::Panel^  ForgotPasswordEmailCodeDesignpanel;
private: System::Windows::Forms::TextBox^  ForgotPasswordEmailCodetextBox;


private: System::Windows::Forms::Label^  ForgotPasswordEmailCodeErrorlabel;

private: System::Windows::Forms::Label^  ForgotPasswordEmailCodelabel;
private: System::Windows::Forms::PictureBox^  ForgotPasswordEmailCodepictureBox;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->headerpanel = (gcnew System::Windows::Forms::Panel());
			this->closebutton = (gcnew System::Windows::Forms::Button());
			this->loginpanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GuestLoginButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->LoginpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordPicturebox = (gcnew System::Windows::Forms::PictureBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->ForgotPasswordButton = (gcnew System::Windows::Forms::Button());
			this->LoginPagePasswordShowcheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->PasswordDesignPanel = (gcnew System::Windows::Forms::Panel());
			this->PasswordPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UsernameDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->Usernamepicturebox = (gcnew System::Windows::Forms::PictureBox());
			this->UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LogoPicturebox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordpanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordUsernamepanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordUsernameErrorlabel = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordHomepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordNextpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordBackpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordHomebutton = (gcnew System::Windows::Forms::Button());
			this->ForgotPasswordNextbutton = (gcnew System::Windows::Forms::Button());
			this->ForgotPasswordBackbutton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordUsernamepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordUsernametextBox = (gcnew System::Windows::Forms::TextBox());
			this->ForgotPasswordVerificationpanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordQuestionpanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordQuestionErrorLabel = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordSecurityQuestionlabel = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordQuestionlabel = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordAnswerDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordAnswerpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordAnswertextBox = (gcnew System::Windows::Forms::TextBox());
			this->ForgotPasswordEmailpanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordEmailErrorLabel = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordEmailLabel1 = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordEmailDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordEmailpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordEmailtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ForgotPasswordEmailCodepanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordEmailCodeDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->ForgotPasswordEmailCodepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordEmailCodetextBox = (gcnew System::Windows::Forms::TextBox());
			this->ForgotPasswordEmailCodeErrorlabel = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordEmailCodelabel = (gcnew System::Windows::Forms::Label());
			this->ForgotPasswordVerificationHomepicturebox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordVerificationNextpicturebox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordVerificationBackpicturebox = (gcnew System::Windows::Forms::PictureBox());
			this->ForgotPasswordVerificationHomebutton = (gcnew System::Windows::Forms::Button());
			this->ForgotPasswordVerificationBackbutton = (gcnew System::Windows::Forms::Button());
			this->ForgotPasswordVerificationNextbutton = (gcnew System::Windows::Forms::Button());
			this->ForgotPasswordQuestionradiobutton = (gcnew System::Windows::Forms::RadioButton());
			this->ForgotPasswordEmailradiobutton = (gcnew System::Windows::Forms::RadioButton());
			this->ForgotPasswordVerificationlabel = (gcnew System::Windows::Forms::Label());
			this->ChangePasswordpanel = (gcnew System::Windows::Forms::Panel());
			this->ChangePasswordHomepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ChangePasswordHomebutton = (gcnew System::Windows::Forms::Button());
			this->PasswordChangeChangebutton = (gcnew System::Windows::Forms::Button());
			this->ChangePasswordcheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ChangePasswordErrorlabel = (gcnew System::Windows::Forms::Label());
			this->ChangePasswordConfirmPasswordDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->ChangePasswordConfirmPasswordpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ChangePasswordConfirmPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ChangePasswordNewPasswordDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->ChangePasswordNewPasswordpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ChangePasswordNewPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ForgotPasswordHeaderlabel = (gcnew System::Windows::Forms::Label());
			this->Registerpanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterVerificationpanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterVerificationResendbutton = (gcnew System::Windows::Forms::Button());
			this->RegisterVerificationVerifybutton = (gcnew System::Windows::Forms::Button());
			this->RegisterVerificationStatuslabel = (gcnew System::Windows::Forms::Label());
			this->RegisterVerificationBackbutton = (gcnew System::Windows::Forms::Button());
			this->RegisterVerificationDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterVerificationpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterVerificationtextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegitsterVerificationlabel2 = (gcnew System::Windows::Forms::Label());
			this->RegitsterVerificationlabel1 = (gcnew System::Windows::Forms::Label());
			this->RegisterDetailspanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterpasswordcheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->RegisterPasswordpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->registerPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterSecuritypanel = (gcnew System::Windows::Forms::Panel());
			this->registerSecuritypictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterSecurityAnswertextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterSecuritycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->RegisterStatuslabel = (gcnew System::Windows::Forms::Label());
			this->RegisterTeacherpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterStudentpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterTeacherradioButton = (gcnew System::Windows::Forms::RadioButton());
			this->RegisterRegisterbutton = (gcnew System::Windows::Forms::Button());
			this->RegisterStudentradioButton = (gcnew System::Windows::Forms::RadioButton());
			this->RegisterUsernameDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterEmailtextBox = (gcnew System::Windows::Forms::TextBox());
			this->Registertypelabel = (gcnew System::Windows::Forms::Label());
			this->RegisterUsernamepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterEmailDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterEmailpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterLastNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterLastNameDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterLastNamepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterFirstNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterFirstNameDesignpanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterFirstNamepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterUsernametextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterHomebutton = (gcnew System::Windows::Forms::Button());
			this->RegisterHomepictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ReigsterHeaderpictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterHeaderlabel = (gcnew System::Windows::Forms::Label());
			this->headerpanel->SuspendLayout();
			this->loginpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LoginpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordPicturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PasswordPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Usernamepicturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LogoPicturebox))->BeginInit();
			this->ForgotPasswordpanel->SuspendLayout();
			this->ForgotPasswordUsernamepanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordHomepictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordNextpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordBackpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordUsernamepictureBox))->BeginInit();
			this->ForgotPasswordVerificationpanel->SuspendLayout();
			this->ForgotPasswordQuestionpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordAnswerpictureBox))->BeginInit();
			this->ForgotPasswordEmailpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordEmailpictureBox))->BeginInit();
			this->ForgotPasswordEmailCodepanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordEmailCodepictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordVerificationHomepicturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordVerificationNextpicturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordVerificationBackpicturebox))->BeginInit();
			this->ChangePasswordpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ChangePasswordHomepictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ChangePasswordConfirmPasswordpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ChangePasswordNewPasswordpictureBox))->BeginInit();
			this->Registerpanel->SuspendLayout();
			this->RegisterVerificationpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterVerificationpictureBox))->BeginInit();
			this->RegisterDetailspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterPasswordpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerSecuritypictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterTeacherpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterStudentpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterUsernamepictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterEmailpictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterLastNamepictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterFirstNamepictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterHomepictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ReigsterHeaderpictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// headerpanel
			// 
			this->headerpanel->BackColor = System::Drawing::Color::Black;
			this->headerpanel->Controls->Add(this->closebutton);
			this->headerpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->headerpanel->Location = System::Drawing::Point(0, 0);
			this->headerpanel->Margin = System::Windows::Forms::Padding(0);
			this->headerpanel->Name = L"headerpanel";
			this->headerpanel->Size = System::Drawing::Size(786, 37);
			this->headerpanel->TabIndex = 0;
			// 
			// closebutton
			// 
			this->closebutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->closebutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"closebutton.BackgroundImage")));
			this->closebutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closebutton->Location = System::Drawing::Point(746, 0);
			this->closebutton->Margin = System::Windows::Forms::Padding(0);
			this->closebutton->Name = L"closebutton";
			this->closebutton->Size = System::Drawing::Size(40, 37);
			this->closebutton->TabIndex = 0;
			this->closebutton->UseVisualStyleBackColor = false;
			this->closebutton->Click += gcnew System::EventHandler(this, &LoginForm::closebutton_Click);
			// 
			// loginpanel
			// 
			this->loginpanel->BackColor = System::Drawing::Color::AliceBlue;
			this->loginpanel->Controls->Add(this->pictureBox2);
			this->loginpanel->Controls->Add(this->pictureBox1);
			this->loginpanel->Controls->Add(this->GuestLoginButton);
			this->loginpanel->Controls->Add(this->RegisterButton);
			this->loginpanel->Controls->Add(this->LoginpictureBox);
			this->loginpanel->Controls->Add(this->ForgotPasswordPicturebox);
			this->loginpanel->Controls->Add(this->LoginButton);
			this->loginpanel->Controls->Add(this->ForgotPasswordButton);
			this->loginpanel->Controls->Add(this->LoginPagePasswordShowcheckBox);
			this->loginpanel->Controls->Add(this->PasswordDesignPanel);
			this->loginpanel->Controls->Add(this->PasswordPictureBox);
			this->loginpanel->Controls->Add(this->PasswordTextBox);
			this->loginpanel->Controls->Add(this->UsernameDesignpanel);
			this->loginpanel->Controls->Add(this->Usernamepicturebox);
			this->loginpanel->Controls->Add(this->UsernameTextBox);
			this->loginpanel->Controls->Add(this->LogoPicturebox);
			this->loginpanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->loginpanel->Location = System::Drawing::Point(0, 37);
			this->loginpanel->Margin = System::Windows::Forms::Padding(0);
			this->loginpanel->Name = L"loginpanel";
			this->loginpanel->Size = System::Drawing::Size(786, 583);
			this->loginpanel->TabIndex = 1;
			this->loginpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::loginpanel_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(179, 533);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 40);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(179, 477);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 41);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// GuestLoginButton
			// 
			this->GuestLoginButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->GuestLoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GuestLoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GuestLoginButton->Location = System::Drawing::Point(230, 533);
			this->GuestLoginButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->GuestLoginButton->Name = L"GuestLoginButton";
			this->GuestLoginButton->Size = System::Drawing::Size(385, 40);
			this->GuestLoginButton->TabIndex = 13;
			this->GuestLoginButton->Text = L"Guest Login";
			this->GuestLoginButton->UseVisualStyleBackColor = false;
			this->GuestLoginButton->Click += gcnew System::EventHandler(this, &LoginForm::GuestLoginButton_Click);
			this->GuestLoginButton->Enter += gcnew System::EventHandler(this, &LoginForm::GuestLoginButton_Enter);
			this->GuestLoginButton->Leave += gcnew System::EventHandler(this, &LoginForm::GuestLoginButton_Leave);
			this->GuestLoginButton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::GuestLoginButton_MouseEnter);
			this->GuestLoginButton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::GuestLoginButton_MouseLeave);
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RegisterButton->Location = System::Drawing::Point(230, 478);
			this->RegisterButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(385, 40);
			this->RegisterButton->TabIndex = 12;
			this->RegisterButton->Text = L"New User \? Sign Up";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &LoginForm::RegisterButton_Click);
			this->RegisterButton->Enter += gcnew System::EventHandler(this, &LoginForm::RegisterButton_Enter);
			this->RegisterButton->Leave += gcnew System::EventHandler(this, &LoginForm::RegisterButton_Leave);
			this->RegisterButton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::RegisterButton_MouseEnter);
			this->RegisterButton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::RegisterButton_MouseLeave);
			// 
			// LoginpictureBox
			// 
			this->LoginpictureBox->BackColor = System::Drawing::Color::AliceBlue;
			this->LoginpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"LoginpictureBox.BackgroundImage")));
			this->LoginpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LoginpictureBox->Location = System::Drawing::Point(557, 405);
			this->LoginpictureBox->Margin = System::Windows::Forms::Padding(0);
			this->LoginpictureBox->Name = L"LoginpictureBox";
			this->LoginpictureBox->Size = System::Drawing::Size(57, 58);
			this->LoginpictureBox->TabIndex = 11;
			this->LoginpictureBox->TabStop = false;
			this->LoginpictureBox->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox2_Click);
			// 
			// ForgotPasswordPicturebox
			// 
			this->ForgotPasswordPicturebox->BackColor = System::Drawing::Color::AliceBlue;
			this->ForgotPasswordPicturebox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordPicturebox.BackgroundImage")));
			this->ForgotPasswordPicturebox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordPicturebox->Location = System::Drawing::Point(179, 403);
			this->ForgotPasswordPicturebox->Margin = System::Windows::Forms::Padding(0);
			this->ForgotPasswordPicturebox->Name = L"ForgotPasswordPicturebox";
			this->ForgotPasswordPicturebox->Size = System::Drawing::Size(58, 58);
			this->ForgotPasswordPicturebox->TabIndex = 10;
			this->ForgotPasswordPicturebox->TabStop = false;
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->LoginButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginButton->FlatAppearance->BorderSize = 0;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(428, 405);
			this->LoginButton->Margin = System::Windows::Forms::Padding(0);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(130, 58);
			this->LoginButton->TabIndex = 9;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &LoginForm::LoginButton_Click);
			this->LoginButton->Enter += gcnew System::EventHandler(this, &LoginForm::LoginButton_Enter);
			this->LoginButton->Leave += gcnew System::EventHandler(this, &LoginForm::LoginButton_Leave);
			this->LoginButton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::LoginButton_MouseEnter);
			this->LoginButton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::LoginButton_MouseLeave);
			// 
			// ForgotPasswordButton
			// 
			this->ForgotPasswordButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ForgotPasswordButton->FlatAppearance->BorderSize = 0;
			this->ForgotPasswordButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ForgotPasswordButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordButton->Location = System::Drawing::Point(238, 405);
			this->ForgotPasswordButton->Margin = System::Windows::Forms::Padding(0);
			this->ForgotPasswordButton->Name = L"ForgotPasswordButton";
			this->ForgotPasswordButton->Size = System::Drawing::Size(150, 58);
			this->ForgotPasswordButton->TabIndex = 8;
			this->ForgotPasswordButton->Text = L"Forgot Password";
			this->ForgotPasswordButton->UseVisualStyleBackColor = false;
			this->ForgotPasswordButton->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordButton_Click);
			this->ForgotPasswordButton->Enter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordButton_Enter);
			this->ForgotPasswordButton->Leave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordButton_Leave);
			this->ForgotPasswordButton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordButton_MouseEnter);
			this->ForgotPasswordButton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordButton_MouseLeave);
			// 
			// LoginPagePasswordShowcheckBox
			// 
			this->LoginPagePasswordShowcheckBox->AutoSize = true;
			this->LoginPagePasswordShowcheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LoginPagePasswordShowcheckBox->ForeColor = System::Drawing::Color::Black;
			this->LoginPagePasswordShowcheckBox->Location = System::Drawing::Point(491, 362);
			this->LoginPagePasswordShowcheckBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->LoginPagePasswordShowcheckBox->Name = L"LoginPagePasswordShowcheckBox";
			this->LoginPagePasswordShowcheckBox->Size = System::Drawing::Size(139, 21);
			this->LoginPagePasswordShowcheckBox->TabIndex = 7;
			this->LoginPagePasswordShowcheckBox->Text = L"Show Password";
			this->LoginPagePasswordShowcheckBox->UseVisualStyleBackColor = true;
			this->LoginPagePasswordShowcheckBox->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::LoginPagePasswordShowcheckBox_CheckedChanged);
			// 
			// PasswordDesignPanel
			// 
			this->PasswordDesignPanel->BackColor = System::Drawing::Color::Black;
			this->PasswordDesignPanel->Location = System::Drawing::Point(179, 344);
			this->PasswordDesignPanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PasswordDesignPanel->Name = L"PasswordDesignPanel";
			this->PasswordDesignPanel->Size = System::Drawing::Size(435, 1);
			this->PasswordDesignPanel->TabIndex = 6;
			this->PasswordDesignPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::panel2_Paint);
			// 
			// PasswordPictureBox
			// 
			this->PasswordPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PasswordPictureBox.BackgroundImage")));
			this->PasswordPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PasswordPictureBox->Location = System::Drawing::Point(179, 294);
			this->PasswordPictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PasswordPictureBox->Name = L"PasswordPictureBox";
			this->PasswordPictureBox->Size = System::Drawing::Size(50, 49);
			this->PasswordPictureBox->TabIndex = 5;
			this->PasswordPictureBox->TabStop = false;
			this->PasswordPictureBox->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox3_Click);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->PasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->PasswordTextBox->Location = System::Drawing::Point(234, 321);
			this->PasswordTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(380, 25);
			this->PasswordTextBox->TabIndex = 4;
			this->PasswordTextBox->Text = L"Password";
			this->PasswordTextBox->Click += gcnew System::EventHandler(this, &LoginForm::PasswordTextBox_Click);
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &LoginForm::PasswordTextBox_TextChanged);
			this->PasswordTextBox->MouseEnter += gcnew System::EventHandler(this, &LoginForm::PasswordTextBox_MouseEnter);
			this->PasswordTextBox->MouseLeave += gcnew System::EventHandler(this, &LoginForm::PasswordTextBox_MouseLeave);
			// 
			// UsernameDesignpanel
			// 
			this->UsernameDesignpanel->BackColor = System::Drawing::Color::Black;
			this->UsernameDesignpanel->Location = System::Drawing::Point(179, 273);
			this->UsernameDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->UsernameDesignpanel->Name = L"UsernameDesignpanel";
			this->UsernameDesignpanel->Size = System::Drawing::Size(435, 1);
			this->UsernameDesignpanel->TabIndex = 3;
			// 
			// Usernamepicturebox
			// 
			this->Usernamepicturebox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Usernamepicturebox.BackgroundImage")));
			this->Usernamepicturebox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Usernamepicturebox->Location = System::Drawing::Point(179, 223);
			this->Usernamepicturebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Usernamepicturebox->Name = L"Usernamepicturebox";
			this->Usernamepicturebox->Size = System::Drawing::Size(50, 49);
			this->Usernamepicturebox->TabIndex = 2;
			this->Usernamepicturebox->TabStop = false;
			// 
			// UsernameTextBox
			// 
			this->UsernameTextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->UsernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UsernameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UsernameTextBox->ForeColor = System::Drawing::Color::Black;
			this->UsernameTextBox->Location = System::Drawing::Point(234, 249);
			this->UsernameTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->UsernameTextBox->Name = L"UsernameTextBox";
			this->UsernameTextBox->Size = System::Drawing::Size(380, 25);
			this->UsernameTextBox->TabIndex = 1;
			this->UsernameTextBox->Text = L"Username";
			this->UsernameTextBox->Click += gcnew System::EventHandler(this, &LoginForm::UsernameTextBox_Click);
			this->UsernameTextBox->MouseEnter += gcnew System::EventHandler(this, &LoginForm::UsernameTextBox_MouseEnter);
			this->UsernameTextBox->MouseLeave += gcnew System::EventHandler(this, &LoginForm::UsernameTextBox_MouseLeave);
			// 
			// LogoPicturebox
			// 
			this->LogoPicturebox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"LogoPicturebox.BackgroundImage")));
			this->LogoPicturebox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LogoPicturebox->Location = System::Drawing::Point(308, 11);
			this->LogoPicturebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->LogoPicturebox->Name = L"LogoPicturebox";
			this->LogoPicturebox->Size = System::Drawing::Size(188, 193);
			this->LogoPicturebox->TabIndex = 0;
			this->LogoPicturebox->TabStop = false;
			// 
			// ForgotPasswordpanel
			// 
			this->ForgotPasswordpanel->BackColor = System::Drawing::Color::AliceBlue;
			this->ForgotPasswordpanel->Controls->Add(this->ForgotPasswordUsernamepanel);
			this->ForgotPasswordpanel->Controls->Add(this->ForgotPasswordVerificationpanel);
			this->ForgotPasswordpanel->Controls->Add(this->ChangePasswordpanel);
			this->ForgotPasswordpanel->Controls->Add(this->ForgotPasswordHeaderlabel);
			this->ForgotPasswordpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ForgotPasswordpanel->Location = System::Drawing::Point(0, 37);
			this->ForgotPasswordpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordpanel->Name = L"ForgotPasswordpanel";
			this->ForgotPasswordpanel->Size = System::Drawing::Size(786, 583);
			this->ForgotPasswordpanel->TabIndex = 18;
			// 
			// ForgotPasswordUsernamepanel
			// 
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordUsernameErrorlabel);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordHomepictureBox);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordNextpictureBox);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordBackpictureBox);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordHomebutton);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordNextbutton);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordBackbutton);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->panel2);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordUsernamepictureBox);
			this->ForgotPasswordUsernamepanel->Controls->Add(this->ForgotPasswordUsernametextBox);
			this->ForgotPasswordUsernamepanel->Location = System::Drawing::Point(20, 92);
			this->ForgotPasswordUsernamepanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordUsernamepanel->Name = L"ForgotPasswordUsernamepanel";
			this->ForgotPasswordUsernamepanel->Size = System::Drawing::Size(746, 463);
			this->ForgotPasswordUsernamepanel->TabIndex = 1;
			// 
			// ForgotPasswordUsernameErrorlabel
			// 
			this->ForgotPasswordUsernameErrorlabel->AutoSize = true;
			this->ForgotPasswordUsernameErrorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordUsernameErrorlabel->ForeColor = System::Drawing::Color::Red;
			this->ForgotPasswordUsernameErrorlabel->Location = System::Drawing::Point(179, 92);
			this->ForgotPasswordUsernameErrorlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordUsernameErrorlabel->Name = L"ForgotPasswordUsernameErrorlabel";
			this->ForgotPasswordUsernameErrorlabel->Size = System::Drawing::Size(112, 20);
			this->ForgotPasswordUsernameErrorlabel->TabIndex = 9;
			this->ForgotPasswordUsernameErrorlabel->Text = L"Error Display";
			// 
			// ForgotPasswordHomepictureBox
			// 
			this->ForgotPasswordHomepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordHomepictureBox->Location = System::Drawing::Point(564, 402);
			this->ForgotPasswordHomepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordHomepictureBox->Name = L"ForgotPasswordHomepictureBox";
			this->ForgotPasswordHomepictureBox->Size = System::Drawing::Size(46, 40);
			this->ForgotPasswordHomepictureBox->TabIndex = 8;
			this->ForgotPasswordHomepictureBox->TabStop = false;
			// 
			// ForgotPasswordNextpictureBox
			// 
			this->ForgotPasswordNextpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordNextpictureBox.BackgroundImage")));
			this->ForgotPasswordNextpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordNextpictureBox->Location = System::Drawing::Point(530, 251);
			this->ForgotPasswordNextpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordNextpictureBox->Name = L"ForgotPasswordNextpictureBox";
			this->ForgotPasswordNextpictureBox->Size = System::Drawing::Size(40, 39);
			this->ForgotPasswordNextpictureBox->TabIndex = 7;
			this->ForgotPasswordNextpictureBox->TabStop = false;
			// 
			// ForgotPasswordBackpictureBox
			// 
			this->ForgotPasswordBackpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordBackpictureBox.BackgroundImage")));
			this->ForgotPasswordBackpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordBackpictureBox->Location = System::Drawing::Point(184, 251);
			this->ForgotPasswordBackpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordBackpictureBox->Name = L"ForgotPasswordBackpictureBox";
			this->ForgotPasswordBackpictureBox->Size = System::Drawing::Size(43, 39);
			this->ForgotPasswordBackpictureBox->TabIndex = 6;
			this->ForgotPasswordBackpictureBox->TabStop = false;
			// 
			// ForgotPasswordHomebutton
			// 
			this->ForgotPasswordHomebutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ForgotPasswordHomebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ForgotPasswordHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordHomebutton->Location = System::Drawing::Point(615, 402);
			this->ForgotPasswordHomebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordHomebutton->Name = L"ForgotPasswordHomebutton";
			this->ForgotPasswordHomebutton->Size = System::Drawing::Size(115, 40);
			this->ForgotPasswordHomebutton->TabIndex = 5;
			this->ForgotPasswordHomebutton->Text = L"Login Page";
			this->ForgotPasswordHomebutton->UseVisualStyleBackColor = false;
			this->ForgotPasswordHomebutton->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordHomebutton_Click);
			this->ForgotPasswordHomebutton->Enter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordHomebutton_Enter);
			this->ForgotPasswordHomebutton->Leave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordHomebutton_Leave);
			this->ForgotPasswordHomebutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordHomebutton_MouseEnter);
			this->ForgotPasswordHomebutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordHomebutton_MouseLeave);
			// 
			// ForgotPasswordNextbutton
			// 
			this->ForgotPasswordNextbutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ForgotPasswordNextbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ForgotPasswordNextbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordNextbutton->Location = System::Drawing::Point(415, 251);
			this->ForgotPasswordNextbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordNextbutton->Name = L"ForgotPasswordNextbutton";
			this->ForgotPasswordNextbutton->Size = System::Drawing::Size(110, 38);
			this->ForgotPasswordNextbutton->TabIndex = 4;
			this->ForgotPasswordNextbutton->Text = L"Next";
			this->ForgotPasswordNextbutton->UseVisualStyleBackColor = false;
			this->ForgotPasswordNextbutton->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordNextbutton_Click);
			this->ForgotPasswordNextbutton->Enter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordNextbutton_Enter);
			this->ForgotPasswordNextbutton->Leave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordNextbutton_Leave);
			this->ForgotPasswordNextbutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordNextbutton_MouseEnter);
			this->ForgotPasswordNextbutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordNextbutton_MouseLeave);
			// 
			// ForgotPasswordBackbutton
			// 
			this->ForgotPasswordBackbutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ForgotPasswordBackbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ForgotPasswordBackbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordBackbutton->Location = System::Drawing::Point(231, 251);
			this->ForgotPasswordBackbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordBackbutton->Name = L"ForgotPasswordBackbutton";
			this->ForgotPasswordBackbutton->Size = System::Drawing::Size(117, 38);
			this->ForgotPasswordBackbutton->TabIndex = 3;
			this->ForgotPasswordBackbutton->Text = L"Back";
			this->ForgotPasswordBackbutton->UseVisualStyleBackColor = false;
			this->ForgotPasswordBackbutton->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordBackbutton_Click);
			this->ForgotPasswordBackbutton->Enter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordBackbutton_Enter);
			this->ForgotPasswordBackbutton->Leave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordBackbutton_Leave);
			this->ForgotPasswordBackbutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordBackbutton_MouseEnter);
			this->ForgotPasswordBackbutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordBackbutton_MouseLeave);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(184, 188);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(386, 1);
			this->panel2->TabIndex = 2;
			// 
			// ForgotPasswordUsernamepictureBox
			// 
			this->ForgotPasswordUsernamepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordUsernamepictureBox.BackgroundImage")));
			this->ForgotPasswordUsernamepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordUsernamepictureBox->Location = System::Drawing::Point(184, 148);
			this->ForgotPasswordUsernamepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordUsernamepictureBox->Name = L"ForgotPasswordUsernamepictureBox";
			this->ForgotPasswordUsernamepictureBox->Size = System::Drawing::Size(34, 35);
			this->ForgotPasswordUsernamepictureBox->TabIndex = 1;
			this->ForgotPasswordUsernamepictureBox->TabStop = false;
			// 
			// ForgotPasswordUsernametextBox
			// 
			this->ForgotPasswordUsernametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ForgotPasswordUsernametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ForgotPasswordUsernametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordUsernametextBox->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordUsernametextBox->Location = System::Drawing::Point(223, 157);
			this->ForgotPasswordUsernametextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordUsernametextBox->Name = L"ForgotPasswordUsernametextBox";
			this->ForgotPasswordUsernametextBox->Size = System::Drawing::Size(346, 25);
			this->ForgotPasswordUsernametextBox->TabIndex = 0;
			this->ForgotPasswordUsernametextBox->Text = L"Enter Registered Username";
			this->ForgotPasswordUsernametextBox->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordUsernametextBox_Click);
			this->ForgotPasswordUsernametextBox->TextChanged += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordUsernametextBox_TextChanged);
			this->ForgotPasswordUsernametextBox->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordUsernametextBox_MouseEnter);
			this->ForgotPasswordUsernametextBox->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordUsernametextBox_MouseLeave);
			// 
			// ForgotPasswordVerificationpanel
			// 
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordQuestionpanel);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordEmailpanel);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordEmailCodepanel);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordVerificationHomepicturebox);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordVerificationNextpicturebox);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordVerificationBackpicturebox);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordVerificationHomebutton);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordVerificationBackbutton);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordVerificationNextbutton);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordQuestionradiobutton);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordEmailradiobutton);
			this->ForgotPasswordVerificationpanel->Controls->Add(this->ForgotPasswordVerificationlabel);
			this->ForgotPasswordVerificationpanel->Location = System::Drawing::Point(20, 92);
			this->ForgotPasswordVerificationpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordVerificationpanel->Name = L"ForgotPasswordVerificationpanel";
			this->ForgotPasswordVerificationpanel->Size = System::Drawing::Size(746, 463);
			this->ForgotPasswordVerificationpanel->TabIndex = 11;
			// 
			// ForgotPasswordQuestionpanel
			// 
			this->ForgotPasswordQuestionpanel->Controls->Add(this->ForgotPasswordQuestionErrorLabel);
			this->ForgotPasswordQuestionpanel->Controls->Add(this->ForgotPasswordSecurityQuestionlabel);
			this->ForgotPasswordQuestionpanel->Controls->Add(this->ForgotPasswordQuestionlabel);
			this->ForgotPasswordQuestionpanel->Controls->Add(this->ForgotPasswordAnswerDesignpanel);
			this->ForgotPasswordQuestionpanel->Controls->Add(this->ForgotPasswordAnswerpictureBox);
			this->ForgotPasswordQuestionpanel->Controls->Add(this->ForgotPasswordAnswertextBox);
			this->ForgotPasswordQuestionpanel->Location = System::Drawing::Point(17, 159);
			this->ForgotPasswordQuestionpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordQuestionpanel->Name = L"ForgotPasswordQuestionpanel";
			this->ForgotPasswordQuestionpanel->Size = System::Drawing::Size(712, 145);
			this->ForgotPasswordQuestionpanel->TabIndex = 11;
			this->ForgotPasswordQuestionpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::ForgotPasswordQuestionpanel_Paint);
			// 
			// ForgotPasswordQuestionErrorLabel
			// 
			this->ForgotPasswordQuestionErrorLabel->AutoSize = true;
			this->ForgotPasswordQuestionErrorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordQuestionErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->ForgotPasswordQuestionErrorLabel->Location = System::Drawing::Point(11, 43);
			this->ForgotPasswordQuestionErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordQuestionErrorLabel->Name = L"ForgotPasswordQuestionErrorLabel";
			this->ForgotPasswordQuestionErrorLabel->Size = System::Drawing::Size(99, 20);
			this->ForgotPasswordQuestionErrorLabel->TabIndex = 5;
			this->ForgotPasswordQuestionErrorLabel->Text = L"Error Display";
			// 
			// ForgotPasswordSecurityQuestionlabel
			// 
			this->ForgotPasswordSecurityQuestionlabel->AutoSize = true;
			this->ForgotPasswordSecurityQuestionlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordSecurityQuestionlabel->ForeColor = System::Drawing::Color::Navy;
			this->ForgotPasswordSecurityQuestionlabel->Location = System::Drawing::Point(84, 11);
			this->ForgotPasswordSecurityQuestionlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordSecurityQuestionlabel->Name = L"ForgotPasswordSecurityQuestionlabel";
			this->ForgotPasswordSecurityQuestionlabel->Size = System::Drawing::Size(134, 20);
			this->ForgotPasswordSecurityQuestionlabel->TabIndex = 4;
			this->ForgotPasswordSecurityQuestionlabel->Text = L"Security Question";
			// 
			// ForgotPasswordQuestionlabel
			// 
			this->ForgotPasswordQuestionlabel->AutoSize = true;
			this->ForgotPasswordQuestionlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordQuestionlabel->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordQuestionlabel->Location = System::Drawing::Point(11, 11);
			this->ForgotPasswordQuestionlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordQuestionlabel->Name = L"ForgotPasswordQuestionlabel";
			this->ForgotPasswordQuestionlabel->Size = System::Drawing::Size(81, 20);
			this->ForgotPasswordQuestionlabel->TabIndex = 3;
			this->ForgotPasswordQuestionlabel->Text = L"Question: ";
			// 
			// ForgotPasswordAnswerDesignpanel
			// 
			this->ForgotPasswordAnswerDesignpanel->BackColor = System::Drawing::Color::Black;
			this->ForgotPasswordAnswerDesignpanel->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordAnswerDesignpanel->Location = System::Drawing::Point(120, 125);
			this->ForgotPasswordAnswerDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordAnswerDesignpanel->Name = L"ForgotPasswordAnswerDesignpanel";
			this->ForgotPasswordAnswerDesignpanel->Size = System::Drawing::Size(473, 1);
			this->ForgotPasswordAnswerDesignpanel->TabIndex = 2;
			// 
			// ForgotPasswordAnswerpictureBox
			// 
			this->ForgotPasswordAnswerpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordAnswerpictureBox.BackgroundImage")));
			this->ForgotPasswordAnswerpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordAnswerpictureBox->Location = System::Drawing::Point(120, 80);
			this->ForgotPasswordAnswerpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordAnswerpictureBox->Name = L"ForgotPasswordAnswerpictureBox";
			this->ForgotPasswordAnswerpictureBox->Size = System::Drawing::Size(44, 40);
			this->ForgotPasswordAnswerpictureBox->TabIndex = 1;
			this->ForgotPasswordAnswerpictureBox->TabStop = false;
			// 
			// ForgotPasswordAnswertextBox
			// 
			this->ForgotPasswordAnswertextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ForgotPasswordAnswertextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ForgotPasswordAnswertextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordAnswertextBox->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordAnswertextBox->Location = System::Drawing::Point(169, 98);
			this->ForgotPasswordAnswertextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordAnswertextBox->Name = L"ForgotPasswordAnswertextBox";
			this->ForgotPasswordAnswertextBox->Size = System::Drawing::Size(424, 21);
			this->ForgotPasswordAnswertextBox->TabIndex = 0;
			this->ForgotPasswordAnswertextBox->Text = L"Answer";
			// 
			// ForgotPasswordEmailpanel
			// 
			this->ForgotPasswordEmailpanel->Controls->Add(this->ForgotPasswordEmailErrorLabel);
			this->ForgotPasswordEmailpanel->Controls->Add(this->ForgotPasswordEmailLabel1);
			this->ForgotPasswordEmailpanel->Controls->Add(this->ForgotPasswordEmailDesignpanel);
			this->ForgotPasswordEmailpanel->Controls->Add(this->ForgotPasswordEmailpictureBox);
			this->ForgotPasswordEmailpanel->Controls->Add(this->ForgotPasswordEmailtextBox);
			this->ForgotPasswordEmailpanel->Location = System::Drawing::Point(17, 158);
			this->ForgotPasswordEmailpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailpanel->Name = L"ForgotPasswordEmailpanel";
			this->ForgotPasswordEmailpanel->Size = System::Drawing::Size(712, 145);
			this->ForgotPasswordEmailpanel->TabIndex = 4;
			// 
			// ForgotPasswordEmailErrorLabel
			// 
			this->ForgotPasswordEmailErrorLabel->AutoSize = true;
			this->ForgotPasswordEmailErrorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordEmailErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->ForgotPasswordEmailErrorLabel->Location = System::Drawing::Point(13, 45);
			this->ForgotPasswordEmailErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordEmailErrorLabel->Name = L"ForgotPasswordEmailErrorLabel";
			this->ForgotPasswordEmailErrorLabel->Size = System::Drawing::Size(99, 20);
			this->ForgotPasswordEmailErrorLabel->TabIndex = 4;
			this->ForgotPasswordEmailErrorLabel->Text = L"Error Display";
			// 
			// ForgotPasswordEmailLabel1
			// 
			this->ForgotPasswordEmailLabel1->AutoSize = true;
			this->ForgotPasswordEmailLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordEmailLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ForgotPasswordEmailLabel1->Location = System::Drawing::Point(11, 11);
			this->ForgotPasswordEmailLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordEmailLabel1->Name = L"ForgotPasswordEmailLabel1";
			this->ForgotPasswordEmailLabel1->Size = System::Drawing::Size(330, 20);
			this->ForgotPasswordEmailLabel1->TabIndex = 3;
			this->ForgotPasswordEmailLabel1->Text = L"An email with security code will be sent to mail";
			// 
			// ForgotPasswordEmailDesignpanel
			// 
			this->ForgotPasswordEmailDesignpanel->BackColor = System::Drawing::Color::Black;
			this->ForgotPasswordEmailDesignpanel->Location = System::Drawing::Point(120, 132);
			this->ForgotPasswordEmailDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailDesignpanel->Name = L"ForgotPasswordEmailDesignpanel";
			this->ForgotPasswordEmailDesignpanel->Size = System::Drawing::Size(473, 1);
			this->ForgotPasswordEmailDesignpanel->TabIndex = 2;
			// 
			// ForgotPasswordEmailpictureBox
			// 
			this->ForgotPasswordEmailpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordEmailpictureBox.BackgroundImage")));
			this->ForgotPasswordEmailpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordEmailpictureBox->Location = System::Drawing::Point(120, 88);
			this->ForgotPasswordEmailpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailpictureBox->Name = L"ForgotPasswordEmailpictureBox";
			this->ForgotPasswordEmailpictureBox->Size = System::Drawing::Size(44, 40);
			this->ForgotPasswordEmailpictureBox->TabIndex = 1;
			this->ForgotPasswordEmailpictureBox->TabStop = false;
			// 
			// ForgotPasswordEmailtextBox
			// 
			this->ForgotPasswordEmailtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ForgotPasswordEmailtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ForgotPasswordEmailtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordEmailtextBox->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordEmailtextBox->Location = System::Drawing::Point(169, 106);
			this->ForgotPasswordEmailtextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailtextBox->Name = L"ForgotPasswordEmailtextBox";
			this->ForgotPasswordEmailtextBox->Size = System::Drawing::Size(424, 23);
			this->ForgotPasswordEmailtextBox->TabIndex = 0;
			this->ForgotPasswordEmailtextBox->Text = L"Enter registered email";
			// 
			// ForgotPasswordEmailCodepanel
			// 
			this->ForgotPasswordEmailCodepanel->Controls->Add(this->ForgotPasswordEmailCodeDesignpanel);
			this->ForgotPasswordEmailCodepanel->Controls->Add(this->ForgotPasswordEmailCodepictureBox);
			this->ForgotPasswordEmailCodepanel->Controls->Add(this->ForgotPasswordEmailCodetextBox);
			this->ForgotPasswordEmailCodepanel->Controls->Add(this->ForgotPasswordEmailCodeErrorlabel);
			this->ForgotPasswordEmailCodepanel->Controls->Add(this->ForgotPasswordEmailCodelabel);
			this->ForgotPasswordEmailCodepanel->Location = System::Drawing::Point(17, 158);
			this->ForgotPasswordEmailCodepanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailCodepanel->Name = L"ForgotPasswordEmailCodepanel";
			this->ForgotPasswordEmailCodepanel->Size = System::Drawing::Size(712, 145);
			this->ForgotPasswordEmailCodepanel->TabIndex = 12;
			// 
			// ForgotPasswordEmailCodeDesignpanel
			// 
			this->ForgotPasswordEmailCodeDesignpanel->BackColor = System::Drawing::Color::Black;
			this->ForgotPasswordEmailCodeDesignpanel->Location = System::Drawing::Point(193, 127);
			this->ForgotPasswordEmailCodeDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailCodeDesignpanel->Name = L"ForgotPasswordEmailCodeDesignpanel";
			this->ForgotPasswordEmailCodeDesignpanel->Size = System::Drawing::Size(334, 1);
			this->ForgotPasswordEmailCodeDesignpanel->TabIndex = 4;
			this->ForgotPasswordEmailCodeDesignpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::panel3_Paint);
			// 
			// ForgotPasswordEmailCodepictureBox
			// 
			this->ForgotPasswordEmailCodepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordEmailCodepictureBox.BackgroundImage")));
			this->ForgotPasswordEmailCodepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordEmailCodepictureBox->Location = System::Drawing::Point(193, 79);
			this->ForgotPasswordEmailCodepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailCodepictureBox->Name = L"ForgotPasswordEmailCodepictureBox";
			this->ForgotPasswordEmailCodepictureBox->Size = System::Drawing::Size(45, 43);
			this->ForgotPasswordEmailCodepictureBox->TabIndex = 3;
			this->ForgotPasswordEmailCodepictureBox->TabStop = false;
			this->ForgotPasswordEmailCodepictureBox->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox3_Click_2);
			// 
			// ForgotPasswordEmailCodetextBox
			// 
			this->ForgotPasswordEmailCodetextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ForgotPasswordEmailCodetextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ForgotPasswordEmailCodetextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordEmailCodetextBox->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordEmailCodetextBox->Location = System::Drawing::Point(242, 103);
			this->ForgotPasswordEmailCodetextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailCodetextBox->Name = L"ForgotPasswordEmailCodetextBox";
			this->ForgotPasswordEmailCodetextBox->Size = System::Drawing::Size(285, 21);
			this->ForgotPasswordEmailCodetextBox->TabIndex = 2;
			this->ForgotPasswordEmailCodetextBox->Text = L"Code";
			// 
			// ForgotPasswordEmailCodeErrorlabel
			// 
			this->ForgotPasswordEmailCodeErrorlabel->AutoSize = true;
			this->ForgotPasswordEmailCodeErrorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordEmailCodeErrorlabel->ForeColor = System::Drawing::Color::Red;
			this->ForgotPasswordEmailCodeErrorlabel->Location = System::Drawing::Point(12, 34);
			this->ForgotPasswordEmailCodeErrorlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordEmailCodeErrorlabel->Name = L"ForgotPasswordEmailCodeErrorlabel";
			this->ForgotPasswordEmailCodeErrorlabel->Size = System::Drawing::Size(88, 17);
			this->ForgotPasswordEmailCodeErrorlabel->TabIndex = 1;
			this->ForgotPasswordEmailCodeErrorlabel->Text = L"Error display";
			// 
			// ForgotPasswordEmailCodelabel
			// 
			this->ForgotPasswordEmailCodelabel->AutoSize = true;
			this->ForgotPasswordEmailCodelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordEmailCodelabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ForgotPasswordEmailCodelabel->Location = System::Drawing::Point(11, 11);
			this->ForgotPasswordEmailCodelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordEmailCodelabel->Name = L"ForgotPasswordEmailCodelabel";
			this->ForgotPasswordEmailCodelabel->Size = System::Drawing::Size(266, 20);
			this->ForgotPasswordEmailCodelabel->TabIndex = 0;
			this->ForgotPasswordEmailCodelabel->Text = L"Enter the security code sent to email";
			// 
			// ForgotPasswordVerificationHomepicturebox
			// 
			this->ForgotPasswordVerificationHomepicturebox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordVerificationHomepicturebox.BackgroundImage")));
			this->ForgotPasswordVerificationHomepicturebox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordVerificationHomepicturebox->Location = System::Drawing::Point(580, 402);
			this->ForgotPasswordVerificationHomepicturebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordVerificationHomepicturebox->Name = L"ForgotPasswordVerificationHomepicturebox";
			this->ForgotPasswordVerificationHomepicturebox->Size = System::Drawing::Size(44, 46);
			this->ForgotPasswordVerificationHomepicturebox->TabIndex = 10;
			this->ForgotPasswordVerificationHomepicturebox->TabStop = false;
			// 
			// ForgotPasswordVerificationNextpicturebox
			// 
			this->ForgotPasswordVerificationNextpicturebox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordVerificationNextpicturebox.BackgroundImage")));
			this->ForgotPasswordVerificationNextpicturebox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordVerificationNextpicturebox->Location = System::Drawing::Point(566, 311);
			this->ForgotPasswordVerificationNextpicturebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordVerificationNextpicturebox->Name = L"ForgotPasswordVerificationNextpicturebox";
			this->ForgotPasswordVerificationNextpicturebox->Size = System::Drawing::Size(45, 46);
			this->ForgotPasswordVerificationNextpicturebox->TabIndex = 9;
			this->ForgotPasswordVerificationNextpicturebox->TabStop = false;
			// 
			// ForgotPasswordVerificationBackpicturebox
			// 
			this->ForgotPasswordVerificationBackpicturebox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ForgotPasswordVerificationBackpicturebox.BackgroundImage")));
			this->ForgotPasswordVerificationBackpicturebox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForgotPasswordVerificationBackpicturebox->Location = System::Drawing::Point(137, 313);
			this->ForgotPasswordVerificationBackpicturebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordVerificationBackpicturebox->Name = L"ForgotPasswordVerificationBackpicturebox";
			this->ForgotPasswordVerificationBackpicturebox->Size = System::Drawing::Size(41, 44);
			this->ForgotPasswordVerificationBackpicturebox->TabIndex = 8;
			this->ForgotPasswordVerificationBackpicturebox->TabStop = false;
			// 
			// ForgotPasswordVerificationHomebutton
			// 
			this->ForgotPasswordVerificationHomebutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ForgotPasswordVerificationHomebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ForgotPasswordVerificationHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordVerificationHomebutton->Location = System::Drawing::Point(628, 402);
			this->ForgotPasswordVerificationHomebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordVerificationHomebutton->Name = L"ForgotPasswordVerificationHomebutton";
			this->ForgotPasswordVerificationHomebutton->Size = System::Drawing::Size(108, 46);
			this->ForgotPasswordVerificationHomebutton->TabIndex = 7;
			this->ForgotPasswordVerificationHomebutton->Text = L"Login Page";
			this->ForgotPasswordVerificationHomebutton->UseVisualStyleBackColor = false;
			this->ForgotPasswordVerificationHomebutton->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationHomebutton_Click);
			this->ForgotPasswordVerificationHomebutton->Enter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationHomebutton_Enter);
			this->ForgotPasswordVerificationHomebutton->Leave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationHomebutton_Leave);
			this->ForgotPasswordVerificationHomebutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationHomebutton_MouseEnter);
			this->ForgotPasswordVerificationHomebutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationHomebutton_MouseLeave);
			// 
			// ForgotPasswordVerificationBackbutton
			// 
			this->ForgotPasswordVerificationBackbutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ForgotPasswordVerificationBackbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ForgotPasswordVerificationBackbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordVerificationBackbutton->Location = System::Drawing::Point(183, 313);
			this->ForgotPasswordVerificationBackbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordVerificationBackbutton->Name = L"ForgotPasswordVerificationBackbutton";
			this->ForgotPasswordVerificationBackbutton->Size = System::Drawing::Size(102, 46);
			this->ForgotPasswordVerificationBackbutton->TabIndex = 6;
			this->ForgotPasswordVerificationBackbutton->Text = L"Back";
			this->ForgotPasswordVerificationBackbutton->UseVisualStyleBackColor = false;
			this->ForgotPasswordVerificationBackbutton->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationBackbutton_Click);
			this->ForgotPasswordVerificationBackbutton->Enter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationBackbutton_Enter);
			this->ForgotPasswordVerificationBackbutton->Leave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationBackbutton_Leave);
			this->ForgotPasswordVerificationBackbutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationBackbutton_MouseEnter);
			this->ForgotPasswordVerificationBackbutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationBackbutton_MouseLeave);
			// 
			// ForgotPasswordVerificationNextbutton
			// 
			this->ForgotPasswordVerificationNextbutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ForgotPasswordVerificationNextbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ForgotPasswordVerificationNextbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordVerificationNextbutton->Location = System::Drawing::Point(457, 311);
			this->ForgotPasswordVerificationNextbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordVerificationNextbutton->Name = L"ForgotPasswordVerificationNextbutton";
			this->ForgotPasswordVerificationNextbutton->Size = System::Drawing::Size(104, 46);
			this->ForgotPasswordVerificationNextbutton->TabIndex = 5;
			this->ForgotPasswordVerificationNextbutton->Text = L"Next";
			this->ForgotPasswordVerificationNextbutton->UseVisualStyleBackColor = false;
			this->ForgotPasswordVerificationNextbutton->Click += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationNextbutton_Click);
			this->ForgotPasswordVerificationNextbutton->Enter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationNextbutton_Enter);
			this->ForgotPasswordVerificationNextbutton->Leave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationNextbutton_Leave);
			this->ForgotPasswordVerificationNextbutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationNextbutton_MouseEnter);
			this->ForgotPasswordVerificationNextbutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordVerificationNextbutton_MouseLeave);
			// 
			// ForgotPasswordQuestionradiobutton
			// 
			this->ForgotPasswordQuestionradiobutton->AutoSize = true;
			this->ForgotPasswordQuestionradiobutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordQuestionradiobutton->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordQuestionradiobutton->Location = System::Drawing::Point(17, 115);
			this->ForgotPasswordQuestionradiobutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordQuestionradiobutton->Name = L"ForgotPasswordQuestionradiobutton";
			this->ForgotPasswordQuestionradiobutton->Size = System::Drawing::Size(152, 24);
			this->ForgotPasswordQuestionradiobutton->TabIndex = 3;
			this->ForgotPasswordQuestionradiobutton->TabStop = true;
			this->ForgotPasswordQuestionradiobutton->Text = L"Security Question";
			this->ForgotPasswordQuestionradiobutton->UseVisualStyleBackColor = true;
			this->ForgotPasswordQuestionradiobutton->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::ForgotPassworQuestionradiobutton_CheckedChanged);
			// 
			// ForgotPasswordEmailradiobutton
			// 
			this->ForgotPasswordEmailradiobutton->AutoSize = true;
			this->ForgotPasswordEmailradiobutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordEmailradiobutton->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordEmailradiobutton->Location = System::Drawing::Point(17, 79);
			this->ForgotPasswordEmailradiobutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ForgotPasswordEmailradiobutton->Name = L"ForgotPasswordEmailradiobutton";
			this->ForgotPasswordEmailradiobutton->Size = System::Drawing::Size(149, 24);
			this->ForgotPasswordEmailradiobutton->TabIndex = 1;
			this->ForgotPasswordEmailradiobutton->TabStop = true;
			this->ForgotPasswordEmailradiobutton->Text = L"Email Verification";
			this->ForgotPasswordEmailradiobutton->UseVisualStyleBackColor = true;
			this->ForgotPasswordEmailradiobutton->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::ForgotPasswordEmailradiobutton_CheckedChanged);
			// 
			// ForgotPasswordVerificationlabel
			// 
			this->ForgotPasswordVerificationlabel->AutoSize = true;
			this->ForgotPasswordVerificationlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordVerificationlabel->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordVerificationlabel->Location = System::Drawing::Point(14, 37);
			this->ForgotPasswordVerificationlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordVerificationlabel->Name = L"ForgotPasswordVerificationlabel";
			this->ForgotPasswordVerificationlabel->Size = System::Drawing::Size(481, 24);
			this->ForgotPasswordVerificationlabel->TabIndex = 0;
			this->ForgotPasswordVerificationlabel->Text = L"Select one of the following methods to verify your identity";
			// 
			// ChangePasswordpanel
			// 
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordHomepictureBox);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordHomebutton);
			this->ChangePasswordpanel->Controls->Add(this->PasswordChangeChangebutton);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordcheckBox);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordErrorlabel);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordConfirmPasswordDesignpanel);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordConfirmPasswordpictureBox);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordConfirmPasswordtextBox);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordNewPasswordDesignpanel);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordNewPasswordpictureBox);
			this->ChangePasswordpanel->Controls->Add(this->ChangePasswordNewPasswordtextBox);
			this->ChangePasswordpanel->Location = System::Drawing::Point(20, 92);
			this->ChangePasswordpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordpanel->Name = L"ChangePasswordpanel";
			this->ChangePasswordpanel->Size = System::Drawing::Size(746, 463);
			this->ChangePasswordpanel->TabIndex = 13;
			this->ChangePasswordpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::ChangePasswordpanel_Paint);
			// 
			// ChangePasswordHomepictureBox
			// 
			this->ChangePasswordHomepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ChangePasswordHomepictureBox.BackgroundImage")));
			this->ChangePasswordHomepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ChangePasswordHomepictureBox->Location = System::Drawing::Point(563, 402);
			this->ChangePasswordHomepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordHomepictureBox->Name = L"ChangePasswordHomepictureBox";
			this->ChangePasswordHomepictureBox->Size = System::Drawing::Size(47, 50);
			this->ChangePasswordHomepictureBox->TabIndex = 11;
			this->ChangePasswordHomepictureBox->TabStop = false;
			// 
			// ChangePasswordHomebutton
			// 
			this->ChangePasswordHomebutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ChangePasswordHomebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ChangePasswordHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangePasswordHomebutton->Location = System::Drawing::Point(615, 402);
			this->ChangePasswordHomebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordHomebutton->Name = L"ChangePasswordHomebutton";
			this->ChangePasswordHomebutton->Size = System::Drawing::Size(122, 50);
			this->ChangePasswordHomebutton->TabIndex = 9;
			this->ChangePasswordHomebutton->Text = L"Login Page";
			this->ChangePasswordHomebutton->UseVisualStyleBackColor = false;
			this->ChangePasswordHomebutton->Click += gcnew System::EventHandler(this, &LoginForm::ChangePasswordHomebutton_Click);
			this->ChangePasswordHomebutton->Enter += gcnew System::EventHandler(this, &LoginForm::ChangePasswordHomebutton_Enter);
			this->ChangePasswordHomebutton->Leave += gcnew System::EventHandler(this, &LoginForm::ChangePasswordHomebutton_Leave);
			this->ChangePasswordHomebutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::ChangePasswordHomebutton_MouseEnter);
			this->ChangePasswordHomebutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::ChangePasswordHomebutton_MouseLeave);
			// 
			// PasswordChangeChangebutton
			// 
			this->PasswordChangeChangebutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->PasswordChangeChangebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->PasswordChangeChangebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PasswordChangeChangebutton->Location = System::Drawing::Point(466, 292);
			this->PasswordChangeChangebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PasswordChangeChangebutton->Name = L"PasswordChangeChangebutton";
			this->PasswordChangeChangebutton->Size = System::Drawing::Size(120, 43);
			this->PasswordChangeChangebutton->TabIndex = 8;
			this->PasswordChangeChangebutton->Text = L"Change";
			this->PasswordChangeChangebutton->UseVisualStyleBackColor = false;
			this->PasswordChangeChangebutton->Click += gcnew System::EventHandler(this, &LoginForm::PasswordChangeChangebutton_Click);
			this->PasswordChangeChangebutton->Enter += gcnew System::EventHandler(this, &LoginForm::PasswordChangeChangebutton_Enter);
			this->PasswordChangeChangebutton->Leave += gcnew System::EventHandler(this, &LoginForm::PasswordChangeChangebutton_Leave);
			this->PasswordChangeChangebutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::PasswordChangeChangebutton_MouseEnter);
			this->PasswordChangeChangebutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::PasswordChangeChangebutton_MouseLeave);
			// 
			// ChangePasswordcheckBox
			// 
			this->ChangePasswordcheckBox->AutoSize = true;
			this->ChangePasswordcheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangePasswordcheckBox->ForeColor = System::Drawing::Color::Black;
			this->ChangePasswordcheckBox->Location = System::Drawing::Point(451, 251);
			this->ChangePasswordcheckBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordcheckBox->Name = L"ChangePasswordcheckBox";
			this->ChangePasswordcheckBox->Size = System::Drawing::Size(149, 22);
			this->ChangePasswordcheckBox->TabIndex = 7;
			this->ChangePasswordcheckBox->Text = L"Show Password";
			this->ChangePasswordcheckBox->UseVisualStyleBackColor = true;
			this->ChangePasswordcheckBox->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::ChangePasswordcheckBox_CheckedChanged);
			// 
			// ChangePasswordErrorlabel
			// 
			this->ChangePasswordErrorlabel->AutoSize = true;
			this->ChangePasswordErrorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangePasswordErrorlabel->ForeColor = System::Drawing::Color::Red;
			this->ChangePasswordErrorlabel->Location = System::Drawing::Point(162, 72);
			this->ChangePasswordErrorlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ChangePasswordErrorlabel->Name = L"ChangePasswordErrorlabel";
			this->ChangePasswordErrorlabel->Size = System::Drawing::Size(96, 20);
			this->ChangePasswordErrorlabel->TabIndex = 6;
			this->ChangePasswordErrorlabel->Text = L"Error display";
			// 
			// ChangePasswordConfirmPasswordDesignpanel
			// 
			this->ChangePasswordConfirmPasswordDesignpanel->BackColor = System::Drawing::Color::Black;
			this->ChangePasswordConfirmPasswordDesignpanel->Location = System::Drawing::Point(166, 229);
			this->ChangePasswordConfirmPasswordDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordConfirmPasswordDesignpanel->Name = L"ChangePasswordConfirmPasswordDesignpanel";
			this->ChangePasswordConfirmPasswordDesignpanel->Size = System::Drawing::Size(420, 1);
			this->ChangePasswordConfirmPasswordDesignpanel->TabIndex = 5;
			// 
			// ChangePasswordConfirmPasswordpictureBox
			// 
			this->ChangePasswordConfirmPasswordpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ChangePasswordConfirmPasswordpictureBox.BackgroundImage")));
			this->ChangePasswordConfirmPasswordpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ChangePasswordConfirmPasswordpictureBox->Location = System::Drawing::Point(166, 180);
			this->ChangePasswordConfirmPasswordpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordConfirmPasswordpictureBox->Name = L"ChangePasswordConfirmPasswordpictureBox";
			this->ChangePasswordConfirmPasswordpictureBox->Size = System::Drawing::Size(46, 44);
			this->ChangePasswordConfirmPasswordpictureBox->TabIndex = 4;
			this->ChangePasswordConfirmPasswordpictureBox->TabStop = false;
			// 
			// ChangePasswordConfirmPasswordtextBox
			// 
			this->ChangePasswordConfirmPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ChangePasswordConfirmPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ChangePasswordConfirmPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangePasswordConfirmPasswordtextBox->ForeColor = System::Drawing::Color::Black;
			this->ChangePasswordConfirmPasswordtextBox->Location = System::Drawing::Point(214, 204);
			this->ChangePasswordConfirmPasswordtextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordConfirmPasswordtextBox->Name = L"ChangePasswordConfirmPasswordtextBox";
			this->ChangePasswordConfirmPasswordtextBox->Size = System::Drawing::Size(369, 21);
			this->ChangePasswordConfirmPasswordtextBox->TabIndex = 3;
			this->ChangePasswordConfirmPasswordtextBox->Text = L"Confirm Password";
			// 
			// ChangePasswordNewPasswordDesignpanel
			// 
			this->ChangePasswordNewPasswordDesignpanel->BackColor = System::Drawing::Color::Black;
			this->ChangePasswordNewPasswordDesignpanel->Location = System::Drawing::Point(166, 156);
			this->ChangePasswordNewPasswordDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordNewPasswordDesignpanel->Name = L"ChangePasswordNewPasswordDesignpanel";
			this->ChangePasswordNewPasswordDesignpanel->Size = System::Drawing::Size(420, 1);
			this->ChangePasswordNewPasswordDesignpanel->TabIndex = 2;
			// 
			// ChangePasswordNewPasswordpictureBox
			// 
			this->ChangePasswordNewPasswordpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ChangePasswordNewPasswordpictureBox.BackgroundImage")));
			this->ChangePasswordNewPasswordpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ChangePasswordNewPasswordpictureBox->Location = System::Drawing::Point(166, 107);
			this->ChangePasswordNewPasswordpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordNewPasswordpictureBox->Name = L"ChangePasswordNewPasswordpictureBox";
			this->ChangePasswordNewPasswordpictureBox->Size = System::Drawing::Size(46, 44);
			this->ChangePasswordNewPasswordpictureBox->TabIndex = 1;
			this->ChangePasswordNewPasswordpictureBox->TabStop = false;
			// 
			// ChangePasswordNewPasswordtextBox
			// 
			this->ChangePasswordNewPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->ChangePasswordNewPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ChangePasswordNewPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangePasswordNewPasswordtextBox->ForeColor = System::Drawing::Color::Black;
			this->ChangePasswordNewPasswordtextBox->Location = System::Drawing::Point(214, 131);
			this->ChangePasswordNewPasswordtextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChangePasswordNewPasswordtextBox->Name = L"ChangePasswordNewPasswordtextBox";
			this->ChangePasswordNewPasswordtextBox->Size = System::Drawing::Size(369, 21);
			this->ChangePasswordNewPasswordtextBox->TabIndex = 0;
			this->ChangePasswordNewPasswordtextBox->Text = L"New Password";
			// 
			// ForgotPasswordHeaderlabel
			// 
			this->ForgotPasswordHeaderlabel->AutoSize = true;
			this->ForgotPasswordHeaderlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForgotPasswordHeaderlabel->ForeColor = System::Drawing::Color::Black;
			this->ForgotPasswordHeaderlabel->Location = System::Drawing::Point(278, 30);
			this->ForgotPasswordHeaderlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ForgotPasswordHeaderlabel->Name = L"ForgotPasswordHeaderlabel";
			this->ForgotPasswordHeaderlabel->Size = System::Drawing::Size(262, 37);
			this->ForgotPasswordHeaderlabel->TabIndex = 0;
			this->ForgotPasswordHeaderlabel->Text = L"Password Reset";
			// 
			// Registerpanel
			// 
			this->Registerpanel->BackColor = System::Drawing::Color::AliceBlue;
			this->Registerpanel->Controls->Add(this->RegisterDetailspanel);
			this->Registerpanel->Controls->Add(this->RegisterVerificationpanel);
			this->Registerpanel->Controls->Add(this->RegisterHomebutton);
			this->Registerpanel->Controls->Add(this->RegisterHomepictureBox);
			this->Registerpanel->Controls->Add(this->ReigsterHeaderpictureBox);
			this->Registerpanel->Controls->Add(this->RegisterHeaderlabel);
			this->Registerpanel->Location = System::Drawing::Point(0, 37);
			this->Registerpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Registerpanel->Name = L"Registerpanel";
			this->Registerpanel->Size = System::Drawing::Size(786, 583);
			this->Registerpanel->TabIndex = 19;
			// 
			// RegisterVerificationpanel
			// 
			this->RegisterVerificationpanel->Controls->Add(this->RegisterVerificationResendbutton);
			this->RegisterVerificationpanel->Controls->Add(this->RegisterVerificationVerifybutton);
			this->RegisterVerificationpanel->Controls->Add(this->RegisterVerificationStatuslabel);
			this->RegisterVerificationpanel->Controls->Add(this->RegisterVerificationBackbutton);
			this->RegisterVerificationpanel->Controls->Add(this->RegisterVerificationDesignpanel);
			this->RegisterVerificationpanel->Controls->Add(this->RegisterVerificationpictureBox);
			this->RegisterVerificationpanel->Controls->Add(this->RegisterVerificationtextBox);
			this->RegisterVerificationpanel->Controls->Add(this->RegitsterVerificationlabel2);
			this->RegisterVerificationpanel->Controls->Add(this->RegitsterVerificationlabel1);
			this->RegisterVerificationpanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterVerificationpanel->Location = System::Drawing::Point(20, 70);
			this->RegisterVerificationpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterVerificationpanel->Name = L"RegisterVerificationpanel";
			this->RegisterVerificationpanel->Size = System::Drawing::Size(745, 437);
			this->RegisterVerificationpanel->TabIndex = 20;
			// 
			// RegisterVerificationResendbutton
			// 
			this->RegisterVerificationResendbutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->RegisterVerificationResendbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterVerificationResendbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterVerificationResendbutton->Location = System::Drawing::Point(449, 310);
			this->RegisterVerificationResendbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterVerificationResendbutton->Name = L"RegisterVerificationResendbutton";
			this->RegisterVerificationResendbutton->Size = System::Drawing::Size(111, 41);
			this->RegisterVerificationResendbutton->TabIndex = 9;
			this->RegisterVerificationResendbutton->Text = L"Resend";
			this->RegisterVerificationResendbutton->UseVisualStyleBackColor = false;
			this->RegisterVerificationResendbutton->Click += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationResendbutton_Click);
			this->RegisterVerificationResendbutton->Enter += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationResendbutton_Enter);
			this->RegisterVerificationResendbutton->Leave += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationResendbutton_Leave);
			this->RegisterVerificationResendbutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationResendbutton_MouseEnter);
			this->RegisterVerificationResendbutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationResendbutton_MouseLeave);
			// 
			// RegisterVerificationVerifybutton
			// 
			this->RegisterVerificationVerifybutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->RegisterVerificationVerifybutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterVerificationVerifybutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterVerificationVerifybutton->Location = System::Drawing::Point(449, 254);
			this->RegisterVerificationVerifybutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterVerificationVerifybutton->Name = L"RegisterVerificationVerifybutton";
			this->RegisterVerificationVerifybutton->Size = System::Drawing::Size(111, 41);
			this->RegisterVerificationVerifybutton->TabIndex = 8;
			this->RegisterVerificationVerifybutton->Text = L"Verify";
			this->RegisterVerificationVerifybutton->UseVisualStyleBackColor = false;
			this->RegisterVerificationVerifybutton->Click += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationVerifybutton_Click);
			this->RegisterVerificationVerifybutton->Enter += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationVerifybutton_Enter);
			this->RegisterVerificationVerifybutton->Leave += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationVerifybutton_Leave);
			this->RegisterVerificationVerifybutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationVerifybutton_MouseEnter);
			this->RegisterVerificationVerifybutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationVerifybutton_MouseLeave);
			// 
			// RegisterVerificationStatuslabel
			// 
			this->RegisterVerificationStatuslabel->AutoSize = true;
			this->RegisterVerificationStatuslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterVerificationStatuslabel->ForeColor = System::Drawing::Color::Red;
			this->RegisterVerificationStatuslabel->Location = System::Drawing::Point(13, 84);
			this->RegisterVerificationStatuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->RegisterVerificationStatuslabel->Name = L"RegisterVerificationStatuslabel";
			this->RegisterVerificationStatuslabel->Size = System::Drawing::Size(123, 24);
			this->RegisterVerificationStatuslabel->TabIndex = 7;
			this->RegisterVerificationStatuslabel->Text = L"Status display";
			// 
			// RegisterVerificationBackbutton
			// 
			this->RegisterVerificationBackbutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->RegisterVerificationBackbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterVerificationBackbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterVerificationBackbutton->Location = System::Drawing::Point(185, 251);
			this->RegisterVerificationBackbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterVerificationBackbutton->Name = L"RegisterVerificationBackbutton";
			this->RegisterVerificationBackbutton->Size = System::Drawing::Size(111, 41);
			this->RegisterVerificationBackbutton->TabIndex = 6;
			this->RegisterVerificationBackbutton->Text = L"Back";
			this->RegisterVerificationBackbutton->UseVisualStyleBackColor = false;
			this->RegisterVerificationBackbutton->Click += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationBackbutton_Click);
			this->RegisterVerificationBackbutton->Enter += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationBackbutton_Enter);
			this->RegisterVerificationBackbutton->Leave += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationBackbutton_Leave);
			this->RegisterVerificationBackbutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationBackbutton_MouseEnter);
			this->RegisterVerificationBackbutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationBackbutton_MouseLeave);
			// 
			// RegisterVerificationDesignpanel
			// 
			this->RegisterVerificationDesignpanel->BackColor = System::Drawing::Color::Black;
			this->RegisterVerificationDesignpanel->Location = System::Drawing::Point(185, 212);
			this->RegisterVerificationDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterVerificationDesignpanel->Name = L"RegisterVerificationDesignpanel";
			this->RegisterVerificationDesignpanel->Size = System::Drawing::Size(375, 1);
			this->RegisterVerificationDesignpanel->TabIndex = 4;
			// 
			// RegisterVerificationpictureBox
			// 
			this->RegisterVerificationpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterVerificationpictureBox.BackgroundImage")));
			this->RegisterVerificationpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterVerificationpictureBox->Location = System::Drawing::Point(185, 163);
			this->RegisterVerificationpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterVerificationpictureBox->Name = L"RegisterVerificationpictureBox";
			this->RegisterVerificationpictureBox->Size = System::Drawing::Size(44, 44);
			this->RegisterVerificationpictureBox->TabIndex = 3;
			this->RegisterVerificationpictureBox->TabStop = false;
			// 
			// RegisterVerificationtextBox
			// 
			this->RegisterVerificationtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->RegisterVerificationtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterVerificationtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterVerificationtextBox->ForeColor = System::Drawing::Color::Black;
			this->RegisterVerificationtextBox->Location = System::Drawing::Point(230, 182);
			this->RegisterVerificationtextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterVerificationtextBox->Name = L"RegisterVerificationtextBox";
			this->RegisterVerificationtextBox->Size = System::Drawing::Size(330, 25);
			this->RegisterVerificationtextBox->TabIndex = 2;
			this->RegisterVerificationtextBox->Text = L"Code";
			this->RegisterVerificationtextBox->Click += gcnew System::EventHandler(this, &LoginForm::RegisterVerificationtextBox_Click);
			// 
			// RegitsterVerificationlabel2
			// 
			this->RegitsterVerificationlabel2->AutoSize = true;
			this->RegitsterVerificationlabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegitsterVerificationlabel2->ForeColor = System::Drawing::Color::Blue;
			this->RegitsterVerificationlabel2->Location = System::Drawing::Point(13, 54);
			this->RegitsterVerificationlabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->RegitsterVerificationlabel2->Name = L"RegitsterVerificationlabel2";
			this->RegitsterVerificationlabel2->Size = System::Drawing::Size(425, 24);
			this->RegitsterVerificationlabel2->TabIndex = 1;
			this->RegitsterVerificationlabel2->Text = L"Type the security code sent to your email address";
			// 
			// RegitsterVerificationlabel1
			// 
			this->RegitsterVerificationlabel1->AutoSize = true;
			this->RegitsterVerificationlabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegitsterVerificationlabel1->ForeColor = System::Drawing::Color::Black;
			this->RegitsterVerificationlabel1->Location = System::Drawing::Point(12, 17);
			this->RegitsterVerificationlabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->RegitsterVerificationlabel1->Name = L"RegitsterVerificationlabel1";
			this->RegitsterVerificationlabel1->Size = System::Drawing::Size(190, 29);
			this->RegitsterVerificationlabel1->TabIndex = 0;
			this->RegitsterVerificationlabel1->Text = L"Verify your email";
			// 
			// RegisterDetailspanel
			// 
			this->RegisterDetailspanel->Controls->Add(this->RegisterpasswordcheckBox);
			this->RegisterDetailspanel->Controls->Add(this->panel1);
			this->RegisterDetailspanel->Controls->Add(this->RegisterPasswordpictureBox);
			this->RegisterDetailspanel->Controls->Add(this->registerPasswordtextBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterSecuritypanel);
			this->RegisterDetailspanel->Controls->Add(this->registerSecuritypictureBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterSecurityAnswertextBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterSecuritycomboBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterStatuslabel);
			this->RegisterDetailspanel->Controls->Add(this->RegisterTeacherpictureBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterStudentpictureBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterTeacherradioButton);
			this->RegisterDetailspanel->Controls->Add(this->RegisterRegisterbutton);
			this->RegisterDetailspanel->Controls->Add(this->RegisterStudentradioButton);
			this->RegisterDetailspanel->Controls->Add(this->RegisterUsernameDesignpanel);
			this->RegisterDetailspanel->Controls->Add(this->RegisterEmailtextBox);
			this->RegisterDetailspanel->Controls->Add(this->Registertypelabel);
			this->RegisterDetailspanel->Controls->Add(this->RegisterUsernamepictureBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterEmailDesignpanel);
			this->RegisterDetailspanel->Controls->Add(this->RegisterEmailpictureBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterLastNametextBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterLastNameDesignpanel);
			this->RegisterDetailspanel->Controls->Add(this->RegisterLastNamepictureBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterFirstNametextBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterFirstNameDesignpanel);
			this->RegisterDetailspanel->Controls->Add(this->RegisterFirstNamepictureBox);
			this->RegisterDetailspanel->Controls->Add(this->RegisterUsernametextBox);
			this->RegisterDetailspanel->Location = System::Drawing::Point(20, 63);
			this->RegisterDetailspanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterDetailspanel->Name = L"RegisterDetailspanel";
			this->RegisterDetailspanel->Size = System::Drawing::Size(745, 454);
			this->RegisterDetailspanel->TabIndex = 1;
			this->RegisterDetailspanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::RegisterDetailspanel_Paint);
			// 
			// RegisterpasswordcheckBox
			// 
			this->RegisterpasswordcheckBox->AutoSize = true;
			this->RegisterpasswordcheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterpasswordcheckBox->ForeColor = System::Drawing::Color::Black;
			this->RegisterpasswordcheckBox->Location = System::Drawing::Point(619, 100);
			this->RegisterpasswordcheckBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterpasswordcheckBox->Name = L"RegisterpasswordcheckBox";
			this->RegisterpasswordcheckBox->Size = System::Drawing::Size(126, 21);
			this->RegisterpasswordcheckBox->TabIndex = 27;
			this->RegisterpasswordcheckBox->Text = L"Show Password";
			this->RegisterpasswordcheckBox->UseVisualStyleBackColor = true;
			this->RegisterpasswordcheckBox->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::RegisterpasswordcheckBox_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(437, 84);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(291, 1);
			this->panel1->TabIndex = 26;
			// 
			// RegisterPasswordpictureBox
			// 
			this->RegisterPasswordpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterPasswordpictureBox.BackgroundImage")));
			this->RegisterPasswordpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterPasswordpictureBox->Location = System::Drawing::Point(437, 37);
			this->RegisterPasswordpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterPasswordpictureBox->Name = L"RegisterPasswordpictureBox";
			this->RegisterPasswordpictureBox->Size = System::Drawing::Size(43, 43);
			this->RegisterPasswordpictureBox->TabIndex = 25;
			this->RegisterPasswordpictureBox->TabStop = false;
			// 
			// registerPasswordtextBox
			// 
			this->registerPasswordtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->registerPasswordtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->registerPasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerPasswordtextBox->ForeColor = System::Drawing::Color::Black;
			this->registerPasswordtextBox->Location = System::Drawing::Point(484, 54);
			this->registerPasswordtextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->registerPasswordtextBox->Name = L"registerPasswordtextBox";
			this->registerPasswordtextBox->Size = System::Drawing::Size(244, 25);
			this->registerPasswordtextBox->TabIndex = 24;
			this->registerPasswordtextBox->Text = L"Password";
			this->registerPasswordtextBox->MouseEnter += gcnew System::EventHandler(this, &LoginForm::registerPasswordtextBox_MouseEnter);
			this->registerPasswordtextBox->MouseLeave += gcnew System::EventHandler(this, &LoginForm::registerPasswordtextBox_MouseLeave);
			// 
			// RegisterSecuritypanel
			// 
			this->RegisterSecuritypanel->BackColor = System::Drawing::Color::Black;
			this->RegisterSecuritypanel->Location = System::Drawing::Point(16, 368);
			this->RegisterSecuritypanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterSecuritypanel->Name = L"RegisterSecuritypanel";
			this->RegisterSecuritypanel->Size = System::Drawing::Size(402, 1);
			this->RegisterSecuritypanel->TabIndex = 23;
			// 
			// registerSecuritypictureBox
			// 
			this->registerSecuritypictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"registerSecuritypictureBox.BackgroundImage")));
			this->registerSecuritypictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->registerSecuritypictureBox->Location = System::Drawing::Point(16, 321);
			this->registerSecuritypictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->registerSecuritypictureBox->Name = L"registerSecuritypictureBox";
			this->registerSecuritypictureBox->Size = System::Drawing::Size(43, 42);
			this->registerSecuritypictureBox->TabIndex = 22;
			this->registerSecuritypictureBox->TabStop = false;
			// 
			// RegisterSecurityAnswertextBox
			// 
			this->RegisterSecurityAnswertextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->RegisterSecurityAnswertextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterSecurityAnswertextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterSecurityAnswertextBox->ForeColor = System::Drawing::Color::Black;
			this->RegisterSecurityAnswertextBox->Location = System::Drawing::Point(64, 338);
			this->RegisterSecurityAnswertextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterSecurityAnswertextBox->Name = L"RegisterSecurityAnswertextBox";
			this->RegisterSecurityAnswertextBox->Size = System::Drawing::Size(355, 25);
			this->RegisterSecurityAnswertextBox->TabIndex = 21;
			this->RegisterSecurityAnswertextBox->Text = L"Answer";
			// 
			// RegisterSecuritycomboBox
			// 
			this->RegisterSecuritycomboBox->BackColor = System::Drawing::Color::Black;
			this->RegisterSecuritycomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RegisterSecuritycomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterSecuritycomboBox->ForeColor = System::Drawing::Color::White;
			this->RegisterSecuritycomboBox->Location = System::Drawing::Point(64, 288);
			this->RegisterSecuritycomboBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterSecuritycomboBox->Name = L"RegisterSecuritycomboBox";
			this->RegisterSecuritycomboBox->Size = System::Drawing::Size(617, 28);
			this->RegisterSecuritycomboBox->Sorted = true;
			this->RegisterSecuritycomboBox->TabIndex = 20;
			// 
			// RegisterStatuslabel
			// 
			this->RegisterStatuslabel->AutoSize = true;
			this->RegisterStatuslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RegisterStatuslabel->ForeColor = System::Drawing::Color::Red;
			this->RegisterStatuslabel->Location = System::Drawing::Point(13, 6);
			this->RegisterStatuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->RegisterStatuslabel->Name = L"RegisterStatuslabel";
			this->RegisterStatuslabel->Size = System::Drawing::Size(109, 20);
			this->RegisterStatuslabel->TabIndex = 19;
			this->RegisterStatuslabel->Text = L"Error display";
			// 
			// RegisterTeacherpictureBox
			// 
			this->RegisterTeacherpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterTeacherpictureBox.BackgroundImage")));
			this->RegisterTeacherpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterTeacherpictureBox->Location = System::Drawing::Point(375, 406);
			this->RegisterTeacherpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterTeacherpictureBox->Name = L"RegisterTeacherpictureBox";
			this->RegisterTeacherpictureBox->Size = System::Drawing::Size(44, 46);
			this->RegisterTeacherpictureBox->TabIndex = 18;
			this->RegisterTeacherpictureBox->TabStop = false;
			// 
			// RegisterStudentpictureBox
			// 
			this->RegisterStudentpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterStudentpictureBox.BackgroundImage")));
			this->RegisterStudentpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterStudentpictureBox->Location = System::Drawing::Point(110, 406);
			this->RegisterStudentpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterStudentpictureBox->Name = L"RegisterStudentpictureBox";
			this->RegisterStudentpictureBox->Size = System::Drawing::Size(44, 46);
			this->RegisterStudentpictureBox->TabIndex = 17;
			this->RegisterStudentpictureBox->TabStop = false;
			// 
			// RegisterTeacherradioButton
			// 
			this->RegisterTeacherradioButton->AutoSize = true;
			this->RegisterTeacherradioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterTeacherradioButton->ForeColor = System::Drawing::Color::Black;
			this->RegisterTeacherradioButton->Location = System::Drawing::Point(263, 415);
			this->RegisterTeacherradioButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterTeacherradioButton->Name = L"RegisterTeacherradioButton";
			this->RegisterTeacherradioButton->Size = System::Drawing::Size(107, 28);
			this->RegisterTeacherradioButton->TabIndex = 16;
			this->RegisterTeacherradioButton->TabStop = true;
			this->RegisterTeacherradioButton->Text = L"Professor";
			this->RegisterTeacherradioButton->UseVisualStyleBackColor = true;
			// 
			// RegisterRegisterbutton
			// 
			this->RegisterRegisterbutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->RegisterRegisterbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterRegisterbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterRegisterbutton->Location = System::Drawing::Point(632, 400);
			this->RegisterRegisterbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterRegisterbutton->Name = L"RegisterRegisterbutton";
			this->RegisterRegisterbutton->Size = System::Drawing::Size(100, 44);
			this->RegisterRegisterbutton->TabIndex = 15;
			this->RegisterRegisterbutton->Text = L"Register";
			this->RegisterRegisterbutton->UseVisualStyleBackColor = false;
			this->RegisterRegisterbutton->Click += gcnew System::EventHandler(this, &LoginForm::RegisterRegisterbutton_Click);
			this->RegisterRegisterbutton->Enter += gcnew System::EventHandler(this, &LoginForm::RegisterRegisterbutton_Enter);
			this->RegisterRegisterbutton->Leave += gcnew System::EventHandler(this, &LoginForm::RegisterRegisterbutton_Leave);
			this->RegisterRegisterbutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::RegisterRegisterbutton_MouseEnter);
			this->RegisterRegisterbutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::RegisterRegisterbutton_MouseLeave);
			// 
			// RegisterStudentradioButton
			// 
			this->RegisterStudentradioButton->AutoSize = true;
			this->RegisterStudentradioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterStudentradioButton->ForeColor = System::Drawing::Color::Black;
			this->RegisterStudentradioButton->Location = System::Drawing::Point(16, 415);
			this->RegisterStudentradioButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterStudentradioButton->Name = L"RegisterStudentradioButton";
			this->RegisterStudentradioButton->Size = System::Drawing::Size(92, 28);
			this->RegisterStudentradioButton->TabIndex = 13;
			this->RegisterStudentradioButton->TabStop = true;
			this->RegisterStudentradioButton->Text = L"Student";
			this->RegisterStudentradioButton->UseVisualStyleBackColor = true;
			// 
			// RegisterUsernameDesignpanel
			// 
			this->RegisterUsernameDesignpanel->BackColor = System::Drawing::Color::Black;
			this->RegisterUsernameDesignpanel->ForeColor = System::Drawing::Color::Black;
			this->RegisterUsernameDesignpanel->Location = System::Drawing::Point(16, 84);
			this->RegisterUsernameDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterUsernameDesignpanel->Name = L"RegisterUsernameDesignpanel";
			this->RegisterUsernameDesignpanel->Size = System::Drawing::Size(291, 1);
			this->RegisterUsernameDesignpanel->TabIndex = 11;
			// 
			// RegisterEmailtextBox
			// 
			this->RegisterEmailtextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->RegisterEmailtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterEmailtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterEmailtextBox->ForeColor = System::Drawing::Color::Black;
			this->RegisterEmailtextBox->Location = System::Drawing::Point(64, 245);
			this->RegisterEmailtextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterEmailtextBox->Name = L"RegisterEmailtextBox";
			this->RegisterEmailtextBox->Size = System::Drawing::Size(355, 25);
			this->RegisterEmailtextBox->TabIndex = 9;
			this->RegisterEmailtextBox->Text = L"Email";
			this->RegisterEmailtextBox->Click += gcnew System::EventHandler(this, &LoginForm::RegisterEmailtextBox_Click);
			// 
			// Registertypelabel
			// 
			this->Registertypelabel->AutoSize = true;
			this->Registertypelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Registertypelabel->ForeColor = System::Drawing::Color::Black;
			this->Registertypelabel->Location = System::Drawing::Point(12, 368);
			this->Registertypelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Registertypelabel->Name = L"Registertypelabel";
			this->Registertypelabel->Size = System::Drawing::Size(138, 26);
			this->Registertypelabel->TabIndex = 12;
			this->Registertypelabel->Text = L"Account type";
			// 
			// RegisterUsernamepictureBox
			// 
			this->RegisterUsernamepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterUsernamepictureBox.BackgroundImage")));
			this->RegisterUsernamepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterUsernamepictureBox->Location = System::Drawing::Point(16, 37);
			this->RegisterUsernamepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterUsernamepictureBox->Name = L"RegisterUsernamepictureBox";
			this->RegisterUsernamepictureBox->Size = System::Drawing::Size(43, 43);
			this->RegisterUsernamepictureBox->TabIndex = 10;
			this->RegisterUsernamepictureBox->TabStop = false;
			// 
			// RegisterEmailDesignpanel
			// 
			this->RegisterEmailDesignpanel->BackColor = System::Drawing::Color::Black;
			this->RegisterEmailDesignpanel->Location = System::Drawing::Point(16, 275);
			this->RegisterEmailDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterEmailDesignpanel->Name = L"RegisterEmailDesignpanel";
			this->RegisterEmailDesignpanel->Size = System::Drawing::Size(402, 1);
			this->RegisterEmailDesignpanel->TabIndex = 8;
			// 
			// RegisterEmailpictureBox
			// 
			this->RegisterEmailpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterEmailpictureBox.BackgroundImage")));
			this->RegisterEmailpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterEmailpictureBox->Location = System::Drawing::Point(16, 227);
			this->RegisterEmailpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterEmailpictureBox->Name = L"RegisterEmailpictureBox";
			this->RegisterEmailpictureBox->Size = System::Drawing::Size(43, 43);
			this->RegisterEmailpictureBox->TabIndex = 7;
			this->RegisterEmailpictureBox->TabStop = false;
			// 
			// RegisterLastNametextBox
			// 
			this->RegisterLastNametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->RegisterLastNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterLastNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterLastNametextBox->ForeColor = System::Drawing::Color::Black;
			this->RegisterLastNametextBox->Location = System::Drawing::Point(64, 183);
			this->RegisterLastNametextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterLastNametextBox->Name = L"RegisterLastNametextBox";
			this->RegisterLastNametextBox->Size = System::Drawing::Size(355, 25);
			this->RegisterLastNametextBox->TabIndex = 6;
			this->RegisterLastNametextBox->Text = L"Last Name (Optional)";
			this->RegisterLastNametextBox->Click += gcnew System::EventHandler(this, &LoginForm::RegisterLastNametextBox_Click);
			// 
			// RegisterLastNameDesignpanel
			// 
			this->RegisterLastNameDesignpanel->BackColor = System::Drawing::Color::Black;
			this->RegisterLastNameDesignpanel->Location = System::Drawing::Point(16, 213);
			this->RegisterLastNameDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterLastNameDesignpanel->Name = L"RegisterLastNameDesignpanel";
			this->RegisterLastNameDesignpanel->Size = System::Drawing::Size(402, 1);
			this->RegisterLastNameDesignpanel->TabIndex = 5;
			// 
			// RegisterLastNamepictureBox
			// 
			this->RegisterLastNamepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterLastNamepictureBox.BackgroundImage")));
			this->RegisterLastNamepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterLastNamepictureBox->Location = System::Drawing::Point(16, 165);
			this->RegisterLastNamepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterLastNamepictureBox->Name = L"RegisterLastNamepictureBox";
			this->RegisterLastNamepictureBox->Size = System::Drawing::Size(43, 43);
			this->RegisterLastNamepictureBox->TabIndex = 4;
			this->RegisterLastNamepictureBox->TabStop = false;
			// 
			// RegisterFirstNametextBox
			// 
			this->RegisterFirstNametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->RegisterFirstNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterFirstNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterFirstNametextBox->ForeColor = System::Drawing::Color::Black;
			this->RegisterFirstNametextBox->Location = System::Drawing::Point(64, 120);
			this->RegisterFirstNametextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterFirstNametextBox->Name = L"RegisterFirstNametextBox";
			this->RegisterFirstNametextBox->Size = System::Drawing::Size(355, 25);
			this->RegisterFirstNametextBox->TabIndex = 3;
			this->RegisterFirstNametextBox->Text = L"First Name";
			this->RegisterFirstNametextBox->Click += gcnew System::EventHandler(this, &LoginForm::RegisterFirstNametextBox_Click);
			// 
			// RegisterFirstNameDesignpanel
			// 
			this->RegisterFirstNameDesignpanel->BackColor = System::Drawing::Color::Black;
			this->RegisterFirstNameDesignpanel->Location = System::Drawing::Point(16, 150);
			this->RegisterFirstNameDesignpanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterFirstNameDesignpanel->Name = L"RegisterFirstNameDesignpanel";
			this->RegisterFirstNameDesignpanel->Size = System::Drawing::Size(402, 1);
			this->RegisterFirstNameDesignpanel->TabIndex = 2;
			// 
			// RegisterFirstNamepictureBox
			// 
			this->RegisterFirstNamepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterFirstNamepictureBox.BackgroundImage")));
			this->RegisterFirstNamepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterFirstNamepictureBox->Location = System::Drawing::Point(16, 102);
			this->RegisterFirstNamepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterFirstNamepictureBox->Name = L"RegisterFirstNamepictureBox";
			this->RegisterFirstNamepictureBox->Size = System::Drawing::Size(43, 43);
			this->RegisterFirstNamepictureBox->TabIndex = 1;
			this->RegisterFirstNamepictureBox->TabStop = false;
			this->RegisterFirstNamepictureBox->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox3_Click_1);
			// 
			// RegisterUsernametextBox
			// 
			this->RegisterUsernametextBox->BackColor = System::Drawing::Color::AliceBlue;
			this->RegisterUsernametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterUsernametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterUsernametextBox->ForeColor = System::Drawing::Color::Black;
			this->RegisterUsernametextBox->Location = System::Drawing::Point(64, 54);
			this->RegisterUsernametextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterUsernametextBox->Name = L"RegisterUsernametextBox";
			this->RegisterUsernametextBox->Size = System::Drawing::Size(244, 25);
			this->RegisterUsernametextBox->TabIndex = 0;
			this->RegisterUsernametextBox->Text = L"Username";
			this->RegisterUsernametextBox->Click += gcnew System::EventHandler(this, &LoginForm::RegisterUsernametextBox_Click);
			// 
			// RegisterHomebutton
			// 
			this->RegisterHomebutton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->RegisterHomebutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterHomebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RegisterHomebutton->Location = System::Drawing::Point(641, 524);
			this->RegisterHomebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterHomebutton->Name = L"RegisterHomebutton";
			this->RegisterHomebutton->Size = System::Drawing::Size(111, 48);
			this->RegisterHomebutton->TabIndex = 16;
			this->RegisterHomebutton->Text = L"Login Page";
			this->RegisterHomebutton->UseVisualStyleBackColor = false;
			this->RegisterHomebutton->Click += gcnew System::EventHandler(this, &LoginForm::RegisterHomebutton_Click);
			this->RegisterHomebutton->Enter += gcnew System::EventHandler(this, &LoginForm::RegisterHomebutton_Enter);
			this->RegisterHomebutton->Leave += gcnew System::EventHandler(this, &LoginForm::RegisterHomebutton_Leave);
			this->RegisterHomebutton->MouseEnter += gcnew System::EventHandler(this, &LoginForm::RegisterHomebutton_MouseEnter);
			this->RegisterHomebutton->MouseLeave += gcnew System::EventHandler(this, &LoginForm::RegisterHomebutton_MouseLeave);
			// 
			// RegisterHomepictureBox
			// 
			this->RegisterHomepictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"RegisterHomepictureBox.BackgroundImage")));
			this->RegisterHomepictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RegisterHomepictureBox->Location = System::Drawing::Point(589, 523);
			this->RegisterHomepictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RegisterHomepictureBox->Name = L"RegisterHomepictureBox";
			this->RegisterHomepictureBox->Size = System::Drawing::Size(48, 50);
			this->RegisterHomepictureBox->TabIndex = 4;
			this->RegisterHomepictureBox->TabStop = false;
			// 
			// ReigsterHeaderpictureBox
			// 
			this->ReigsterHeaderpictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ReigsterHeaderpictureBox.BackgroundImage")));
			this->ReigsterHeaderpictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ReigsterHeaderpictureBox->Location = System::Drawing::Point(37, 2);
			this->ReigsterHeaderpictureBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ReigsterHeaderpictureBox->Name = L"ReigsterHeaderpictureBox";
			this->ReigsterHeaderpictureBox->Size = System::Drawing::Size(62, 56);
			this->ReigsterHeaderpictureBox->TabIndex = 2;
			this->ReigsterHeaderpictureBox->TabStop = false;
			// 
			// RegisterHeaderlabel
			// 
			this->RegisterHeaderlabel->AutoSize = true;
			this->RegisterHeaderlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterHeaderlabel->ForeColor = System::Drawing::Color::Black;
			this->RegisterHeaderlabel->Location = System::Drawing::Point(103, 11);
			this->RegisterHeaderlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->RegisterHeaderlabel->Name = L"RegisterHeaderlabel";
			this->RegisterHeaderlabel->Size = System::Drawing::Size(130, 36);
			this->RegisterHeaderlabel->TabIndex = 0;
			this->RegisterHeaderlabel->Text = L"Sign Up";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 620);
			this->Controls->Add(this->Registerpanel);
			this->Controls->Add(this->loginpanel);
			this->Controls->Add(this->ForgotPasswordpanel);
			this->Controls->Add(this->headerpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->headerpanel->ResumeLayout(false);
			this->loginpanel->ResumeLayout(false);
			this->loginpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LoginpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordPicturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PasswordPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Usernamepicturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LogoPicturebox))->EndInit();
			this->ForgotPasswordpanel->ResumeLayout(false);
			this->ForgotPasswordpanel->PerformLayout();
			this->ForgotPasswordUsernamepanel->ResumeLayout(false);
			this->ForgotPasswordUsernamepanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordHomepictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordNextpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordBackpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordUsernamepictureBox))->EndInit();
			this->ForgotPasswordVerificationpanel->ResumeLayout(false);
			this->ForgotPasswordVerificationpanel->PerformLayout();
			this->ForgotPasswordQuestionpanel->ResumeLayout(false);
			this->ForgotPasswordQuestionpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordAnswerpictureBox))->EndInit();
			this->ForgotPasswordEmailpanel->ResumeLayout(false);
			this->ForgotPasswordEmailpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordEmailpictureBox))->EndInit();
			this->ForgotPasswordEmailCodepanel->ResumeLayout(false);
			this->ForgotPasswordEmailCodepanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordEmailCodepictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordVerificationHomepicturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordVerificationNextpicturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ForgotPasswordVerificationBackpicturebox))->EndInit();
			this->ChangePasswordpanel->ResumeLayout(false);
			this->ChangePasswordpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ChangePasswordHomepictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ChangePasswordConfirmPasswordpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ChangePasswordNewPasswordpictureBox))->EndInit();
			this->Registerpanel->ResumeLayout(false);
			this->Registerpanel->PerformLayout();
			this->RegisterVerificationpanel->ResumeLayout(false);
			this->RegisterVerificationpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterVerificationpictureBox))->EndInit();
			this->RegisterDetailspanel->ResumeLayout(false);
			this->RegisterDetailspanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterPasswordpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerSecuritypictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterTeacherpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterStudentpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterUsernamepictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterEmailpictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterLastNamepictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterFirstNamepictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->RegisterHomepictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ReigsterHeaderpictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void loginpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ForgotPassworQuestionradiobutton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (ForgotPasswordEmailradiobutton->Checked == true)
			 {
				 ForgotPasswordEmailpanel->Show();
				 ForgotPasswordEmailCodepanel->Hide();
				 ForgotPasswordQuestionpanel->Hide();
				 ForgotPasswordEmailCodetextBox->Text = "Code";
				 ForgotPasswordQuestionErrorLabel->Hide();
				 ForgotPasswordEmailCodeErrorlabel->Hide();
				 ForgotPasswordAnswertextBox->Text = "Answer";
				 emailcode_flag = false;
			 }
			 else
			 {
				 ForgotPasswordQuestionpanel->Show();
				 ForgotPasswordEmailpanel->Hide();
				 ForgotPasswordEmailCodepanel->Hide();
				 ForgotPasswordEmailCodetextBox->Text = "Code";
				 ForgotPasswordEmailErrorLabel->Hide();
				 ForgotPasswordEmailCodeErrorlabel->Hide();
				 ForgotPasswordEmailtextBox->Text = "Enter Registered email";
				 emailcode_flag = false;
			 }
}
private: System::Void ForgotPasswordQuestionpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void ChangePasswordcheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (ChangePasswordcheckBox->Checked)
			 {
				 ChangePasswordNewPasswordtextBox->PasswordChar = '\0';
				 ChangePasswordConfirmPasswordtextBox->PasswordChar = '\0';

			 }
			 else
			 {
				 ChangePasswordNewPasswordtextBox->PasswordChar = '*';
				 ChangePasswordConfirmPasswordtextBox->PasswordChar = '*';
			 }
}
private: System::Void pictureBox3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void closebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void UsernameTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 static int count = 1;
			 if (count)
			 {
				 UsernameTextBox->Text = "";
				 count--;
			 }
}

private: System::Void LoginPagePasswordShowcheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (LoginPagePasswordShowcheckBox->Checked)
			 {
				 PasswordTextBox->PasswordChar = '\0';

			 }
			 else
			 {
				 PasswordTextBox->PasswordChar = '*';
			 }
}
private: System::Void PasswordTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 static int count = 1;
			 if (count)
			 {
				 if (LoginPagePasswordShowcheckBox->Checked == false)
				 {
					 PasswordTextBox->PasswordChar = '*';
				 }
				 PasswordTextBox->Text = "";
				 count--;
			 }
			 
}

		 int forgotpasswordusername;	//Global variable

private: System::Void ForgotPasswordButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordpanel->Show();
			 ForgotPasswordUsernametextBox->Focus();
			 ForgotPasswordUsernametextBox->Select();
			 loginpanel->Hide();
			 Registerpanel->Hide();
			 ForgotPasswordUsernamepanel->Show();
			 ForgotPasswordVerificationpanel->Hide();
			 ChangePasswordpanel->Hide();
			 forgotpasswordusername = 1;

}
private: System::Void ForgotPasswordUsernametextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (forgotpasswordusername)
			 {
				 ForgotPasswordUsernametextBox->Clear();
				 forgotpasswordusername--;
			 }
			 

}
private: System::Void ForgotPasswordBackbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordUsernametextBox->Text = "Enter Registered Username";
			 ForgotPasswordUsernameErrorlabel->Hide();
			 ForgotPasswordEmailErrorLabel->Hide();
			 ForgotPasswordEmailCodeErrorlabel->Hide();
			 ForgotPasswordQuestionErrorLabel->Hide();
			 ForgotPasswordEmailtextBox->Text = "Enter Registered email";
			 ForgotPasswordAnswertextBox->Text = "Answer";
			 ForgotPasswordEmailCodetextBox->Text = "Code";
			 ChangePasswordNewPasswordtextBox->Text = "New Password";
			 ChangePasswordConfirmPasswordtextBox->Text = "Confirm Password";
			 UsernameTextBox->Clear();
			 PasswordTextBox->Clear();
			 UsernameTextBox->Select();
			 loginpanel->Show();
			 Registerpanel->Hide();
			 ForgotPasswordpanel->Hide();
}
private: System::Void PasswordTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (LoginPagePasswordShowcheckBox->Checked == false)
			 {
				 PasswordTextBox->PasswordChar = '*';
			 }
}

		 int registerdetailspanel1 ;		//Global variable
		 int registerdetailspanel2 ;
		 int registerdetailspanel3 ;
		 int registerdetailspanel4 ;

private: System::Void RegisterButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegisterpasswordcheckBox->Checked=true;
			 ForgotPasswordpanel->Hide();
			 loginpanel->Hide();
			 Registerpanel->Show();
			 RegisterDetailspanel->Show();
			 RegisterVerificationpanel->Hide();
			 RegisterStudentradioButton->Select();
			 RegisterUsernametextBox->Focus();
			 RegisterUsernametextBox->SelectAll();
			 registerdetailspanel1 = 1;		
			 registerdetailspanel2 = 1;
			 registerdetailspanel3 = 1;
			 registerdetailspanel4 = 1;
}
private: System::Void RegisterHomebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegisterFirstNametextBox->Text = "First Name";
			 RegisterLastNametextBox->Text = "Last Name (Optional)";
			 RegisterEmailtextBox->Text = "Email";
			 RegisterUsernametextBox->Text = "Username";
			 RegisterSecuritycomboBox->Text="Security Question";
			 RegisterSecurityAnswertextBox->Text="Answer";
			 RegisterVerificationtextBox->Text = "Code";
			 registerPasswordtextBox->Text="Password";
			 RegisterStudentradioButton->Select();
			 ForgotPasswordpanel->Hide();
			 loginpanel->Show();
			 UsernameTextBox->Clear();
			 PasswordTextBox->Clear();
			 UsernameTextBox->Select();
			 Registerpanel->Hide();
}

		 int registerverificationpanel; //Global variable
private: System::Void RegisterRegisterbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegisterStatuslabel->Hide();
			 //Variables Declaration
			 String^ first_name = RegisterFirstNametextBox->Text;
			 String^ last_name = RegisterLastNametextBox->Text;
			 String^ email = RegisterEmailtextBox->Text;
			 String^ username = RegisterUsernametextBox->Text;
			 String ^ques=RegisterSecuritycomboBox->Text;
			 String ^ans=RegisterSecurityAnswertextBox->Text;
			 String ^pass=registerPasswordtextBox->Text;
			 int len1 = first_name->Length;
			 int len3 = email->Length;
			 int len4 = username->Length;
			 bool flag = true;

			 //Check Validity of information
			 //Checking empty fields

			 if (len4 == 0)			//username empty
			 {
				 RegisterStatuslabel->Text = "Username field can't be empty";
				 RegisterStatuslabel->Show();
				 return;
			 }
			 if (len1 == 0)		//First name empty
			 {
				 RegisterStatuslabel->Text = "First Name field can't be empty";
				 RegisterStatuslabel->Show();
				 return;
			 }

			 if (len3 == 0)			//Email empty
			 {
				 RegisterStatuslabel->Text = "Email field can't be empty";
				 RegisterStatuslabel->Show();
				 return;
			 }

			 if(ques=="Security Question")
			 {
				 RegisterStatuslabel->Text = "Select a Security Question";
				 RegisterStatuslabel->Show();
				 return;

			 }

			 if(ans->Length==0)
			 {
				 RegisterStatuslabel->Text = "Answer field can't be empty";
				 RegisterStatuslabel->Show();
				 return;

			 }
			 if(pass->Length==0)
			 {
				 RegisterStatuslabel->Text = "Enter a password";
				 RegisterStatuslabel->Show();
				 return;

			 }

			 

			 //Preliminary tests
			 //Checking Validity of first name
			 for (int i = 0; i < len1; i++)
			 {
				 if (!(isalpha(first_name[i])))		//Wrong firstname
				 {
					 RegisterStatuslabel->Text = "First Name contains non-valid character";
					 RegisterStatuslabel->Show();
					 return;
				 }

				 
			 }

			 //Checking Validity of last name
			 if (last_name == "Last Name (Optional)")
			 {
				 last_name = "";
			 }
			 int len2 = last_name->Length;

			 
			 for (int i = 0; i < len2; i++)
			 {
				 if (!(isalpha(last_name[i])))		//Wrong lastname
				 {
					 RegisterStatuslabel->Text = "Last Name contains non-valid character";
					 RegisterStatuslabel->Show();
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
				 if (!((isalnum(email[i])) || email[i] == '.' || email[i] == '@' || email[i] == '-' || email[i] == '_'))
				 {
					 RegisterStatuslabel->Text = "Email contains non-valid character";
					 RegisterStatuslabel->Show();
					 return;
				 }
				 if (email[i] == '@')
				 {
					 if (i == 0)
					 {
						 RegisterStatuslabel->Text = "'@' should be preceeded by atleast 1 character";
						 RegisterStatuslabel->Show();
						 return;
					 }
					 count++;
				 }
				 if (count > 1)		//More than 1 '@'
				 {
					 RegisterStatuslabel->Text = "Email contains multiple '@'";
					 RegisterStatuslabel->Show();
					 return;
				 }
				 if (count == 1 && count1==0 && email[i]!='.' && email[i]!='@')
				 {
					 count2++;
				 }
				 
				 if (count == 1 && email[i] == '.')
				 {
					 if (count2 == 0)
					 {
						 RegisterStatuslabel->Text = "Wrong trail after '@'";
						 RegisterStatuslabel->Show();
						 return;
					 }
					 count1++;
				 }

				 /*if (count1 > 1)		//More than 1 '.' after '@'
				 {
					 RegisterStatuslabel->Text = "Email contains multiple '.' after '@'";
					 RegisterStatuslabel->Show();
					 return;
				 }*/
				 if (count1 && email[i]!='.')
				 {
					 count3++;
				 }
			 }

			 if (!count)
			 {
				 RegisterStatuslabel->Text = "Email does not contain '@'";
				 RegisterStatuslabel->Show();
				 return;
			 }

			 if (!count1)
			 {
				 RegisterStatuslabel->Text = "Email does not contain '.' after '@'";
				 RegisterStatuslabel->Show();
				 return;
			 }

			 if (!count3)
			 {
				 RegisterStatuslabel->Text = "'.' should be followed by atleast 1 character";
				 RegisterStatuslabel->Show();
				 return;
			 }

			 //Checking Validity of department
			 //Checking Validity of username
			 if (username == "Username")
			 {
				 RegisterStatuslabel->Text = "Default string can't be used as a Username";
				 RegisterStatuslabel->Show();
				 return;
			 }
			 if (username == "guest")
			 {
				 RegisterStatuslabel->Text = "Username not available";
				 RegisterStatuslabel->Show();
				 return;
			 }
			 for (int i = 0; i < len4; i++)
			 {
				 if (!(isalnum(username[i])))		//Wrong username
				 {
					 RegisterStatuslabel->Text = "Username contains non-valid character (Should be alnum)";
					 RegisterStatuslabel->Show();
					 return;
				 }


			 }

			 //Checking validity of Password
			 if(pass=="Password")
			 {
				 RegisterStatuslabel->Text = "Default string can't be used as a Password";
				 RegisterStatuslabel->Show();
				 return;
			 }
			 int pass_len=pass->Length;
			 for(int i=0;i<pass_len;i++)
			 {
				 if(pass[i]==' '||pass[i]=='	')
				 {
					 RegisterStatuslabel->Text = "Password contains a non valid character (Whitespace)";
					 RegisterStatuslabel->Show();
					 return;
				 }
			 }
			 if(ans=="Answer")
			 {
				MessageBox::Show("You have not changed the default 'Answer' String for Security Answer","Warning");
			 }

			 //Check for duplicate email and username in database and proceed for verification

			 try
			 {
				connection->Open();
				command->Connection=connection;
				query="Select * from Users where Username ='"+username+"';";
				command->CommandText=query;
				OleDbDataReader ^reader=command->ExecuteReader();
				int n=0;
				while(reader->Read())
				{
					n++;
				}
				if(n)
				{
					RegisterStatuslabel->Text = "Username already exists";
					RegisterStatuslabel->Show();
					connection->Close();
					return;
				}
				connection->Close();
				connection->Open();
				OleDbCommand ^command2=gcnew OleDbCommand;
				command2->Connection=connection;

				
				query="Select * from Users where Email ='"+email+"';";
				command2->CommandText=query;
				reader=command2->ExecuteReader();
				while(reader->Read())
				{
					n++;
				}
				if(n)
				{
					RegisterStatuslabel->Text = "Email already registered with another User";
					RegisterStatuslabel->Show();
					connection->Close();
					return;
				}
				connection->Close();

			 }
			 catch (Exception ^e)
			 {
			 	MessageBox::Show(e->Message,"Error while checking duplicate email and username in Register section");
			 }
			 



			 //Proceeding to email verification if success
			 //Send a code to email and verify
			 
			 String ^code2="";

			 srand((unsigned)time(0)); 
			 int random_integer; 
			 int lowest=1000, highest=9999; 
			 int range=(highest-lowest)+1; 
			 random_integer = lowest+int(range*rand()/(RAND_MAX + 1.0));
			 code2=""+random_integer+"";

			 int num=0;	
			 num+=SendEmail(email,"Hello "+username+"\r\nVerification Code for Registration: "+code2+"\r\n\r\nCheers\r\nTeam DSlearning", "Email verification Code for DS Learning S/W");
			 if(num)
			 {
				 RegisterVerificationpanel->Show();
				 RegisterDetailspanel->Hide();
				 RegisterVerificationtextBox->Focus();
				 RegisterVerificationtextBox->Select();
				 registerverificationpanel = 1;
				 email_code=code2;
				 username_r=username;
				 firstname_r=first_name;
				 lastname_r=last_name;
				 email_r=email;
				 if(RegisterStudentradioButton->Checked==true)
				 {

					designation_r="stud";
				 }
				 else
				 {
					designation_r="prof";
				 }
				 password_r=pass;
				 securityquestion_r=ques;
				 securityanswer_r=ans;

			 }
			 else
			 {
				 MessageBox::Show("Email verification currently not available","Registration");
			 }
			
			 

}

private: System::Void RegisterUsernametextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (registerdetailspanel1)
			 {
				 //MessageBox::Show("Got here");
				 RegisterUsernametextBox->Clear();
				 registerdetailspanel1--;
			 }
}

private: System::Void RegisterFirstNametextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (registerdetailspanel2)
			 {
				 RegisterFirstNametextBox->Clear();
				 registerdetailspanel2--;
			 }
}
private: System::Void RegisterLastNametextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (registerdetailspanel3)
			 {
				 RegisterLastNametextBox->Clear();
				 registerdetailspanel3--;
			 }
}
private: System::Void RegisterEmailtextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (registerdetailspanel4)
			 {
				 RegisterEmailtextBox->Clear();
				 registerdetailspanel4--;
			 }
}
private: System::Void RegisterVerificationtextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (registerverificationpanel)
			 {
				 RegisterVerificationtextBox->Clear();
				 registerverificationpanel--;
			 }
}
private: System::Void RegisterVerificationBackbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationtextBox->Text = "Code";
			 RegisterVerificationStatuslabel->Hide();
			 RegisterDetailspanel->Show();
			 RegisterVerificationpanel->Hide();
}
private: System::Void RegisterVerificationVerifybutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Check if the code entered is correct
			 RegisterVerificationStatuslabel->Hide();
			 if(RegisterVerificationtextBox->Text==email_code)
			 {
				 try
				 {
					 connection->Open();
					 command->Connection=connection;
					 query = "INSERT INTO [Users] ([UserName], FirstName, [Password], [Email], IsApproved, [Designation] , SecurityQuestion, SecurityAnswer, LastName,[Status],[Reason],[LStatus]) VALUES ('"+username_r+"', '"+firstname_r+"', '"+password_r+"', '"+email_r+"', 0,'"+designation_r+"', '"+securityquestion_r+"', '"+securityanswer_r+"', '"+lastname_r+"','Pending','-','Unlocked'); ";
					command->CommandText=query;
					 command->ExecuteNonQuery();
					 connection->Close();
					 MessageBox::Show("Registered Successfully","Success");
					 //Reload loginpage
					 System::Object ^sender;
					 System::EventArgs ^e;
					 this->RegisterHomebutton_Click(sender,e);
				 }
				 catch (Exception ^ e)
				 {
				 	MessageBox::Show(e->Message,"Error while writing data to DB (registration)");
				 }
			}
			 else
			 {
				RegisterVerificationStatuslabel->Text="Incorrect Code";
				RegisterVerificationStatuslabel->Show();

			 }
			 //If success then add to database
			 //Maybe extra admin approval required for professors
			 //CODE
}
private: System::Void ForgotPasswordHomebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordUsernametextBox->Text = "Enter Registered Username";
			 ForgotPasswordUsernameErrorlabel->Hide();
			 ForgotPasswordEmailErrorLabel->Hide();
			 ForgotPasswordEmailCodeErrorlabel->Hide();
			 ForgotPasswordQuestionErrorLabel->Hide();
			 ChangePasswordErrorlabel->Hide();
			 ForgotPasswordEmailtextBox->Text = "Enter Registered email";
			 ForgotPasswordAnswertextBox->Text = "Answer";
			 ForgotPasswordEmailCodetextBox->Text = "Code";
			 ChangePasswordNewPasswordtextBox->Text = "New Password";
			 ChangePasswordConfirmPasswordtextBox->Text = "Confirm Password";
			 ChangePasswordcheckBox->Checked = true;
			 UsernameTextBox->Clear();
			 PasswordTextBox->Clear();
			 UsernameTextBox->Select();
			 loginpanel->Show();
			 Registerpanel->Hide();
			 ForgotPasswordpanel->Hide();
}

		 String^ forgotpassword_email;		//Global Variable

private: System::Void ForgotPasswordNextbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordUsernameErrorlabel->Hide();
			 String^ email = "";
			 String ^ques;
			 String ^ans;
			 String^ username = ForgotPasswordUsernametextBox->Text;
			 int num=0;

			 if(username=="guest")
			 {
				 ForgotPasswordUsernameErrorlabel->Text="Username not found";
				 ForgotPasswordUsernameErrorlabel->Show();
				 return; 
			 }
			 //Check for username in the DB
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query = "Select * From Users Where UserName= '"+username+"'; ";
				 command->CommandText=query;
				 OleDbDataReader ^reader=command->ExecuteReader();
				 while(reader->Read())
				 {	//If found also retrieve email and security question of that user
					 email=reader->GetString(4);
					 ques=reader->GetString(15);
					 ans=reader->GetString(16);
					 num++;

				 }
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Error while validating Username in forgot password");
			 }

			 if(!num)		//username not found
			 {
				 ForgotPasswordUsernameErrorlabel->Text="Username not found";
				 ForgotPasswordUsernameErrorlabel->Show();
				 return;

			 }
			 

			 
			//	Proceed further
			 forgotpassword_email = email;
			 ForgotPasswordSecurityQuestionlabel->Text=ques;
			 ForgotPasswordEmailpanel->Show();
			 ForgotPasswordEmailtextBox->Focus();
			 ForgotPasswordEmailtextBox->SelectAll();
			 ForgotPasswordVerificationpanel->Show();
			 ForgotPasswordQuestionpanel->Hide();
			 ForgotPasswordEmailCodepanel->Hide();
			 ForgotPasswordUsernamepanel->Hide();
			 ChangePasswordpanel->Hide();
			 username_f=username;
			 ans_f=ans;


}
private: System::Void ForgotPasswordEmailradiobutton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 /*if (ForgotPasswordEmailradiobutton->Checked == true)
			 {
				 ForgotPasswordEmailpanel->Show();
			 }
			 else
			 {
				 ForgotPasswordQuestionpanel->Show();
			 }*/
}
private: System::Void ForgotPasswordVerificationBackbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 ForgotPasswordEmailErrorLabel->Hide();
			 ForgotPasswordEmailCodeErrorlabel->Hide();
			 ForgotPasswordQuestionErrorLabel->Hide();
			 ChangePasswordErrorlabel->Hide();
			 ForgotPasswordEmailtextBox->Text = "Enter Registered email";
			 ForgotPasswordAnswertextBox->Text = "Answer";
			 ForgotPasswordEmailCodetextBox->Text = "Code";
			 ChangePasswordNewPasswordtextBox->Text = "New Password";
			 ChangePasswordConfirmPasswordtextBox->Text = "Confirm Password";
			 ChangePasswordcheckBox->Checked = true;
			 ForgotPasswordUsernamepanel->Show();
			 ForgotPasswordVerificationpanel->Hide();
			 ChangePasswordpanel->Hide();
}

		 bool emailcode_flag;		//Global variable

private: System::Void ForgotPasswordVerificationNextbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordEmailErrorLabel->Hide();
			 ForgotPasswordEmailCodeErrorlabel->Hide();
			 ForgotPasswordQuestionErrorLabel->Hide();
			 if (ForgotPasswordEmailradiobutton->Checked == true)		//Email verification
			 {
				 
				 if (emailcode_flag)		//Email Code panel is active
				 {
					 String^ code = ForgotPasswordEmailCodetextBox->Text;
					 //Check the code
					 if(code!=email_code_f)
					 {

						 ForgotPasswordEmailCodeErrorlabel->Text="Incorrect Code";
						 ForgotPasswordEmailCodeErrorlabel->Show();
						 return;
					 }
					 
					 //If right then move to change password panel
					 ChangePasswordpanel->Show();
					 ForgotPasswordVerificationpanel->Hide();
					 ForgotPasswordUsernamepanel->Hide();
					 emailcode_flag = false;
					 ChangePasswordNewPasswordtextBox->Focus();
					 ChangePasswordNewPasswordtextBox->Select();
					 return;

				 }
				 
				 
				 String^ email = ForgotPasswordEmailtextBox->Text;
				 //Compare with user email
				 if(email!=forgotpassword_email)	//Wrong email entered
				 {
					 ForgotPasswordEmailErrorLabel->Text="Incorrect email";
					 ForgotPasswordEmailErrorLabel->Show();
					 return;
				 }

				 //Email matches-> user needs to enter security code sent to mail
				 
				 //****send code to mail****
				 String ^code2="";

				 srand((unsigned)time(0)); 
				 int random_integer; 
				 int lowest=1000, highest=9999; 
				 int range=(highest-lowest)+1; 
				 random_integer = lowest+int(range*rand()/(RAND_MAX + 1.0));
				 code2=""+random_integer+"";

				 int num=0;	
				 num+=SendEmail(forgotpassword_email,"Hello "+username_f+"\r\nVerification Code for Reset Password: "+code2+"\r\n\r\nCheers\r\nTeam DSlearning", "Reset Password Verification for DS Learning S/W");
				 if(num)
				 {
					 //MessageBox::Show("Code Resent","Registeration");
					 email_code_f=code2;
					 ForgotPasswordEmailCodepanel->Show();
					 emailcode_flag = true;
					 ForgotPasswordQuestionpanel->Hide();
					 ForgotPasswordEmailpanel->Hide();
					 ForgotPasswordEmailCodetextBox->Focus();
					 ForgotPasswordEmailCodetextBox->Select();
				 }
				 else
				 {
					 return;

				 }

				 }
			 else				//Security question panel
			 {
				 
				 

				 String ^ans=ForgotPasswordAnswertextBox->Text;

				 //Compare answer and proceed 
				 if(ans!=ans_f)	//Answer doesn't match
				 {
					 ForgotPasswordQuestionErrorLabel->Text="Incorrect Answer";
					 ForgotPasswordQuestionErrorLabel->Show();
					 return;

				 }

				 //Success
				 ChangePasswordpanel->Show();
				 ForgotPasswordVerificationpanel->Hide();
				 ForgotPasswordUsernamepanel->Hide();
				 emailcode_flag = false;
				 ChangePasswordNewPasswordtextBox->Focus();
				 ChangePasswordNewPasswordtextBox->Select();
				 return;

			 
				 
			 }
}
private: System::Void pictureBox3_Click_2(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void PasswordChangeChangebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ pass1 = ChangePasswordNewPasswordtextBox->Text;
			 String ^pass2 = ChangePasswordConfirmPasswordtextBox->Text;
			 int len1, len2;
			 len1 = pass1->Length;
			 len2 = pass2->Length;
			 if (len1 == 0 || len2 == 0)	//Empty field
			 {
				 ChangePasswordErrorlabel->Text = "One of the fields in empty";
				 ChangePasswordErrorlabel->Show();
				 return;
			 }

			 if (len1 != len2)	//New password and confirm password don't match
			 {
				 ChangePasswordErrorlabel->Text = "Passwords don't match";
				 ChangePasswordErrorlabel->Show();
				 return;
			 }

			 for (int i = 0; i < len1; i++)		//New password and confirm password don't match
			 {
				 if (pass1[i] != pass2[i])
				 {
					 ChangePasswordErrorlabel->Text = "Passwords don't match";
					 ChangePasswordErrorlabel->Show();
					 return;
				 }
			 }

			 if (len1 < 3)		//Minimum length for password is 3
			 {
				 ChangePasswordErrorlabel->Text = "Password must be at least 3 characters long";
				 ChangePasswordErrorlabel->Show();
				 return;
			 }

			 for (int i = 0; i < len1; i++)
			 {
				 if (!isalnum(pass1[i]))		//invalid character in password
				 {
					 ChangePasswordErrorlabel->Text = "Password can contain only alpha-numerics";
					 ChangePasswordErrorlabel->Show();
					 return;
				 }
			 }

			 //Store the new password in db after encryting

			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [Password]= '"+pass1+"' where UserName= '"+username_f+"';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 //command->Dispose();
				 connection->Close();
			 }
			 catch (Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message,"Error while Changing Password from Login Page");
				 return;
			 }

			

			 MessageBox::Show("Password changed successfully");
			 //move to login page
			 ForgotPasswordUsernametextBox->Text = "Enter Registered Username";
			 ForgotPasswordUsernameErrorlabel->Hide();
			 ForgotPasswordEmailErrorLabel->Hide();
			 ForgotPasswordEmailCodeErrorlabel->Hide();
			 ForgotPasswordQuestionErrorLabel->Hide();
			 ChangePasswordErrorlabel->Hide();
			 ForgotPasswordEmailtextBox->Text = "Enter Registered email";
			 ForgotPasswordAnswertextBox->Text = "Answer";
			 ForgotPasswordEmailCodetextBox->Text = "Code";
			 ChangePasswordNewPasswordtextBox->Text = "New Password";
			 ChangePasswordConfirmPasswordtextBox->Text = "Confirm Password";
			 ChangePasswordcheckBox->Checked = true;
			 UsernameTextBox->Clear();
			 PasswordTextBox->Clear();
			 UsernameTextBox->Select();
			 loginpanel->Show();
			 Registerpanel->Hide();
			 ForgotPasswordpanel->Hide();

}
private: System::Void ChangePasswordHomebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordUsernametextBox->Text = "Enter Registered Username";
			 ForgotPasswordUsernameErrorlabel->Hide();
			 ForgotPasswordEmailErrorLabel->Hide();
			 ForgotPasswordEmailCodeErrorlabel->Hide();
			 ForgotPasswordQuestionErrorLabel->Hide();
			 ChangePasswordErrorlabel->Hide();
			 ForgotPasswordEmailtextBox->Text = "Enter Registered email";
			 ForgotPasswordAnswertextBox->Text = "Answer";
			 ForgotPasswordEmailCodetextBox->Text = "Code";
			 ChangePasswordNewPasswordtextBox->Text = "New Password";
			 ChangePasswordConfirmPasswordtextBox->Text = "Confirm Password";
			 ChangePasswordcheckBox->Checked = true;
			 UsernameTextBox->Clear();
			 PasswordTextBox->Clear();
			 UsernameTextBox->Select();
			 loginpanel->Show();
			 Registerpanel->Hide();
			 ForgotPasswordpanel->Hide();
}
private: System::Void LoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^username=UsernameTextBox->Text;
			 String ^password=PasswordTextBox->Text;
			 if(username=="guest")
			 {
				 MessageBox::Show("Incorrect Username","Login");
				 return;
			 }

			 try
			 {
				connection->Open();
				command->Connection=connection;
				query = "Select * From Users where UserName = '"+username+"'; ";
				command->CommandText=query;
				OleDbDataReader ^reader=command->ExecuteReader();
				int n=0;
				while(reader->Read())
				{n++;
					String ^pass=reader->GetString(3);
					String ^lstatus=reader->GetString(22);
					String ^designation=reader->GetString(7);
					if(pass==password)
					{	

						//connection->Close();
						if(lstatus=="Locked")
						{
							MessageBox::Show("Account locked by Admin","Login");
							break;
						}
						if(designation!="admin")
						{
							Homepage ^form= gcnew Homepage;

							form->vartextBox->Text=username;
							//MessageBox::Show(form->username);
							//MessageBox::Show("True");
							this->Hide();
							form->ShowDialog();
							this->Show();
							UsernameTextBox->Text="";
							PasswordTextBox->Text="";
							UsernameTextBox->Focus();
							UsernameTextBox->Select();

							break;
						}
						else
						{
							AdminForm ^form= gcnew AdminForm;

							form->vartextBox->Text=username;
							//MessageBox::Show(form->username);
							//MessageBox::Show("True");
							this->Hide();
							form->ShowDialog();
							this->Show();
							UsernameTextBox->Text="";
							PasswordTextBox->Text="";
							UsernameTextBox->Focus();
							UsernameTextBox->Select();
						}
						

					}
					else
					{
						MessageBox::Show("Incorrect Password","Login");
						connection->Close();
						break;
					}
					

				}

				connection->Close();
				if(!n)
				{

					MessageBox::Show("Incorrect Username","Login");
				}
				/*else
				{
					//this->Show();
					UsernameTextBox->Text="";
					PasswordTextBox->Text="";
					UsernameTextBox->Focus();
					UsernameTextBox->Select();
				}*/
				
				
			 }
			 catch (Exception ^ e)
			 {
			 	MessageBox::Show(e->Message,"Error while connecting to DB on Login Click");
			 }
			}
private: System::Void RegisterDetailspanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void RegisterpasswordcheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (RegisterpasswordcheckBox->Checked)
			 {
				 registerPasswordtextBox->PasswordChar = '\0';

			 }
			 else
			 {
				 registerPasswordtextBox->PasswordChar = '*';
			 }
		 }
private: System::Void RegisterVerificationResendbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Send a code to email and verify

			 String ^code2="";

			 srand((unsigned)time(0)); 
			 int random_integer; 
			 int lowest=1000, highest=9999; 
			 int range=(highest-lowest)+1; 
			 random_integer = lowest+int(range*rand()/(RAND_MAX + 1.0));
			 code2=""+random_integer+"";

			 int num=0;	
			 num+=SendEmail(email_r,"Hello "+username_r+"\r\nVerification Code for Registration: "+code2+"\r\n\r\nCheers\r\nTeam DSlearning", "Email verification Code for DS Learning S/W");
			 if(num)
			 {
				MessageBox::Show("Code Resent","Registeration");
				email_code=code2;
			 }
		 }
private: System::Void ForgotPasswordVerificationHomebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordUsernametextBox->Text = "Enter Registered Username";
			 ForgotPasswordUsernameErrorlabel->Hide();
			 ForgotPasswordEmailErrorLabel->Hide();
			 ForgotPasswordEmailCodeErrorlabel->Hide();
			 ForgotPasswordQuestionErrorLabel->Hide();
			 ChangePasswordErrorlabel->Hide();
			 ForgotPasswordEmailtextBox->Text = "Enter Registered email";
			 ForgotPasswordAnswertextBox->Text = "Answer";
			 ForgotPasswordEmailCodetextBox->Text = "Code";
			 ChangePasswordNewPasswordtextBox->Text = "New Password";
			 ChangePasswordConfirmPasswordtextBox->Text = "Confirm Password";
			 ChangePasswordcheckBox->Checked = true;
			 UsernameTextBox->Clear();
			 PasswordTextBox->Clear();
			 UsernameTextBox->Select();
			 loginpanel->Show();
			 Registerpanel->Hide();
			 ForgotPasswordpanel->Hide();
			 UsernameTextBox->Focus();
			 UsernameTextBox->SelectAll();
		 }
private: System::Void GuestLoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^st;
			 try
			 {
				connection->Open();
				command->Connection=connection;
				query="Select [LStatus] from [Users] where UserName='guest';";
				command->CommandText=query;
				st=command->ExecuteScalar()->ToString();
				connection->Close();
				if(st=="Locked")
				{
					MessageBox::Show("Guest Logins are currently Locked","Guest Login");
					return;
				}
			 }
			 catch (Exception ^ e)
			 {
			 	MessageBox::Show(e->Message,"Error while checking Lstatus of Guest");
			 }
			///Reset guest progress
			 try
			 {
				 connection->Open();
				 command->Connection=connection;
				 query="Update Users Set [ArraysProgress]= 0, [LinkedListProgress]=0,[SearchingProgress]=0,[SortingProgress]=0,[StacksProgress]=0,[QueuesProgress]=0 where UserName= 'guest';";
				 command->CommandText=query;
				 command->ExecuteNonQuery();
				 connection->Close();
				
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show(e->Message,"Error while Resetting stats of Guest");
			 }
			 
			 Homepage ^form= gcnew Homepage;
			 form->vartextBox->Text="guest";
			 //MessageBox::Show(form->username);
			 //this->Visible=false;
			 this->Hide();
			 form->ShowDialog();
			 this->Show();
			 UsernameTextBox->Text="";
			 PasswordTextBox->Text="";
			 UsernameTextBox->Focus();
			 UsernameTextBox->Select();
		 }
private: System::Void UsernameTextBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(UsernameTextBox->Text=="Username")
			 {UsernameTextBox->Clear();
			 UsernameTextBox->Focus();
			 UsernameTextBox->Select();
			 }
		 }
private: System::Void UsernameTextBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(UsernameTextBox->Text=="")
				 UsernameTextBox->Text="Username";
		 }
private: System::Void PasswordTextBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(PasswordTextBox->Text=="Password")
			 {PasswordTextBox->Clear();
			 PasswordTextBox->Focus();
			 PasswordTextBox->Select();
			 }
		 }
private: System::Void PasswordTextBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void ForgotPasswordUsernametextBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(ForgotPasswordUsernametextBox->Text=="Enter Registered Username")
			 {
				ForgotPasswordUsernametextBox->Clear();
				ForgotPasswordUsernametextBox->Focus();
				ForgotPasswordUsernametextBox->Select();
			 
			 }
		 }
private: System::Void ForgotPasswordUsernametextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ForgotPasswordUsernametextBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(ForgotPasswordUsernametextBox->Text=="")
			 {
				ForgotPasswordUsernametextBox->Text="Enter Registered Username";
			 }
		 }
private: System::Void LoginButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 LoginButton->BackColor=Color::LightYellow;
		 }
private: System::Void LoginButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 LoginButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordButton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterButton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void GuestLoginButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 GuestLoginButton->BackColor=Color::LightYellow;
		 }
private: System::Void GuestLoginButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		 GuestLoginButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void LoginButton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 LoginButton->BackColor=Color::LightYellow;
		 }
private: System::Void LoginButton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 LoginButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordButton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordButton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordButton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterButton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterButton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterButton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void GuestLoginButton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 GuestLoginButton->BackColor=Color::LightYellow;
		 }
private: System::Void GuestLoginButton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 GuestLoginButton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordBackbutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordBackbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordBackbutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordBackbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordBackbutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordBackbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordBackbutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordBackbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordNextbutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordNextbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordNextbutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordNextbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordNextbutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordNextbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordNextbutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordNextbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordHomebutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordHomebutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordHomebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordHomebutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordHomebutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordHomebutton->BackColor=Color::CornflowerBlue;
		 }

private: System::Void ForgotPasswordVerificationBackbutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationBackbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordVerificationBackbutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationBackbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordVerificationBackbutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationBackbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordVerificationBackbutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationBackbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordVerificationNextbutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationNextbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordVerificationNextbutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationNextbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordVerificationNextbutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationNextbutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordVerificationNextbutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationNextbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordVerificationHomebutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordVerificationHomebutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationHomebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ForgotPasswordVerificationHomebutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void ForgotPasswordVerificationHomebutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ForgotPasswordVerificationHomebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void PasswordChangeChangebutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 PasswordChangeChangebutton->BackColor=Color::LightYellow;
		 }
private: System::Void PasswordChangeChangebutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 PasswordChangeChangebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void PasswordChangeChangebutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 PasswordChangeChangebutton->BackColor=Color::LightYellow;
		 }
private: System::Void PasswordChangeChangebutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 PasswordChangeChangebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ChangePasswordHomebutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 ChangePasswordHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void ChangePasswordHomebutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 ChangePasswordHomebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ChangePasswordHomebutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ChangePasswordHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void ChangePasswordHomebutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ChangePasswordHomebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterRegisterbutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterRegisterbutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterRegisterbutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterRegisterbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterHomebutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterHomebutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterHomebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterHomebutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterHomebutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterHomebutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterHomebutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterRegisterbutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterRegisterbutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterRegisterbutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterRegisterbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterVerificationBackbutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationBackbutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterVerificationBackbutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationBackbutton->BackColor=Color::CornflowerBlue;
		 }

private: System::Void RegisterVerificationBackbutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationBackbutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterVerificationBackbutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationBackbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterVerificationVerifybutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationVerifybutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterVerificationVerifybutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationVerifybutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterVerificationVerifybutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationVerifybutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterVerificationVerifybutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationVerifybutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterVerificationResendbutton_Enter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationResendbutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterVerificationResendbutton_Leave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationResendbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void RegisterVerificationResendbutton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationResendbutton->BackColor=Color::LightYellow;
		 }
private: System::Void RegisterVerificationResendbutton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 RegisterVerificationResendbutton->BackColor=Color::CornflowerBlue;
		 }
private: System::Void ChangePasswordpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void registerPasswordtextBox_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if(registerPasswordtextBox->Text=="Password")
			 {
				registerPasswordtextBox->Text="";
				registerPasswordtextBox->Focus();
				registerPasswordtextBox->Select();
			 }
		 }
private: System::Void registerPasswordtextBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if(registerPasswordtextBox->Text=="")
				 registerPasswordtextBox->Text="Password";
		 }
};
}