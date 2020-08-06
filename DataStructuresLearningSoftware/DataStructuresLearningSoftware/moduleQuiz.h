#pragma once

#include <cliext/vector>
#include <time.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Diagnostics;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for moduleQuiz
	/// </summary>
	public ref class moduleQuiz : public System::Windows::Forms::UserControl
	{
	public:
		moduleQuiz(void)
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
		~moduleQuiz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  mainPanel;
	protected: 

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
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// mainPanel
			// 
			this->mainPanel->Location = System::Drawing::Point(0, 0);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(1030, 450);
			this->mainPanel->TabIndex = 0;
			this->mainPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &moduleQuiz::mainPanel_Paint);
			// 
			// moduleQuiz
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Controls->Add(this->mainPanel);
			this->Name = L"moduleQuiz";
			this->Size = System::Drawing::Size(1030, 450);
			this->Load += gcnew System::EventHandler(this, &moduleQuiz::moduleQuiz_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: String ^username, ^update_name;
			int ds_id, numQuestions, questionId, module_id, update_id;
			System::Collections::Generic::List<String ^> questionList;
			System::Collections::Generic::List<String ^> optionAList;
			System::Collections::Generic::List<String ^> optionBList;
			System::Collections::Generic::List<String ^> optionCList;
			System::Collections::Generic::List<String ^> optionDList;
			System::Collections::Generic::List<bool> answerAList;
			System::Collections::Generic::List<bool> answerBList;
			System::Collections::Generic::List<bool> answerCList;
			System::Collections::Generic::List<bool> answerDList;
			// System::Collections::Generic::List<String ^> selectedList;
			System::Collections::Generic::List<CheckBox ^> checkAList;
			System::Collections::Generic::List<CheckBox ^> checkBList;
			System::Collections::Generic::List<CheckBox ^> checkCList;
			System::Collections::Generic::List<CheckBox ^> checkDList;
			System::Collections::Generic::List<bool> selectedAList;
			System::Collections::Generic::List<bool> selectedBList;
			System::Collections::Generic::List<bool> selectedCList;
			System::Collections::Generic::List<bool> selectedDList;
			System::Collections::Generic::List<bool> isMulti;

	public: System::Void moduleQuiz_Load(System::Object^  sender, System::EventArgs^  e) {
				 mainPanel->BackColor = Color::AliceBlue;

				 numQuestions = 1;
				 questionId = 0;

				 // selectedList = gcnew array<String ^>(numQuestions);
				 for(int i = 0; i < numQuestions; i++){
					 checkAList.Add(gcnew CheckBox());
					 checkBList.Add(gcnew CheckBox());
					 checkCList.Add(gcnew CheckBox());
					 checkDList.Add(gcnew CheckBox());
				 }

				 srand((unsigned int)time(0));

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^ readString = "SELECT * FROM Quizzes WHERE DataStructureID="+ds_id+" AND ModuleID="+module_id;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();

				 while(reader->Read()){
					 // MessageBox::Show(reader->GetString(1));
					 questionList.Add(reader->GetString(1));
					 optionAList.Add(reader->GetString(3));
					 optionBList.Add(reader->GetString(4));
					 optionCList.Add(reader->GetString(5));
					 optionDList.Add(reader->GetString(6));
					 answerAList.Add(reader->GetBoolean(7));
					 answerBList.Add(reader->GetBoolean(8));
					 answerCList.Add(reader->GetBoolean(9));
					 answerDList.Add(reader->GetBoolean(10));
				 }

				 if(questionList.Count == 0){
					 MessageBox::Show("There are no questions available for this module.");
					 return;
				 }

				 while(questionList.Count > numQuestions){
					 int id = rand()%questionList.Count;
					 questionList.RemoveAt(id);
					 optionAList.RemoveAt(id);
					 optionBList.RemoveAt(id);
					 optionCList.RemoveAt(id);
					 optionDList.RemoveAt(id);
					 answerAList.RemoveAt(id);
					 answerBList.RemoveAt(id);
					 answerCList.RemoveAt(id);
					 answerDList.RemoveAt(id);
				 }

				 DB_Connection->Close();

				 for(int i = 0; i < numQuestions; i++){
					 isMulti.Add(false);
					 int correctAns = 0;
					 if(answerAList[i]) correctAns++;
					 if(answerBList[i]) correctAns++;
					 if(answerCList[i]) correctAns++;
					 if(answerDList[i]) correctAns++;
					 if(correctAns > 1) isMulti[i] = true;
				 }

				 for(int i = 0; i < numQuestions; i++){
					 selectedAList.Add(false);
					 selectedBList.Add(false);
					 selectedCList.Add(false);
					 selectedDList.Add(false);
				 }

				 display();
			 }

	public: System::Void checkA_Click(System::Object^  sender, System::EventArgs^  e) {
				if(isMulti[questionId]){
					if(checkAList[questionId]->Checked){
						selectedAList[questionId] = true;
					}
					else{
						selectedAList[questionId] = false;
					}
				}
				else{
					if(checkAList[questionId]->Checked){
						selectedAList[questionId] = true;
						selectedBList[questionId] = false;
						selectedCList[questionId] = false;
						selectedDList[questionId] = false;
						checkBList[questionId]->Checked = false;
						checkCList[questionId]->Checked = false;
						checkDList[questionId]->Checked = false;
					}
					else{
						selectedAList[questionId] = false;
					}
				}
			}

	public: System::Void checkB_Click(System::Object^  sender, System::EventArgs^  e) {
				if(isMulti[questionId]){
					if(checkBList[questionId]->Checked){
						selectedBList[questionId] = true;
					}
					else{
						selectedBList[questionId] = false;
					}
				}
				else{
					if(checkBList[questionId]->Checked){
						selectedBList[questionId] = true;
						selectedAList[questionId] = false;
						selectedCList[questionId] = false;
						selectedDList[questionId] = false;
						checkAList[questionId]->Checked = false;
						checkCList[questionId]->Checked = false;
						checkDList[questionId]->Checked = false;
					}
					else{
						selectedBList[questionId] = false;
					}
				}

			}

	public: System::Void checkC_Click(System::Object^  sender, System::EventArgs^  e) {
				if(isMulti[questionId]){
					if(checkCList[questionId]->Checked){
						selectedCList[questionId] = true;
					}
					else{
						selectedCList[questionId] = false;
					}
				}
				else{
					if(checkCList[questionId]->Checked){
						selectedCList[questionId] = true;
						selectedAList[questionId] = false;
						selectedBList[questionId] = false;
						selectedDList[questionId] = false;
						checkAList[questionId]->Checked = false;
						checkBList[questionId]->Checked = false;
						checkDList[questionId]->Checked = false;
					}
					else{
						selectedCList[questionId] = false;
					}
				}

			}

	public: System::Void checkD_Click(System::Object^  sender, System::EventArgs^  e) {
				if(isMulti[questionId]){
					if(checkDList[questionId]->Checked){
						selectedDList[questionId] = true;
					}
					else{
						selectedDList[questionId] = false;
					}
				}
				else{
					if(checkDList[questionId]->Checked){
						selectedDList[questionId] = true;
						selectedAList[questionId] = false;
						selectedBList[questionId] = false;
						selectedCList[questionId] = false;
						checkAList[questionId]->Checked = false;
						checkBList[questionId]->Checked = false;
						checkCList[questionId]->Checked = false;
					}
					else{
						selectedDList[questionId] = false;
					}
				}
			}

	public: System::Void btnRetry_Click(System::Object^  sender, System::EventArgs^  e) {
				questionList.Clear();
				optionAList.Clear();
				optionBList.Clear();
				optionCList.Clear();
				optionDList.Clear();
				answerAList.Clear();
				answerBList.Clear();
				answerCList.Clear();
				answerDList.Clear();
				checkAList.Clear();
				checkBList.Clear();
				checkCList.Clear();
				checkDList.Clear();
				selectedAList.Clear();
				selectedBList.Clear();
				selectedCList.Clear();
				selectedDList.Clear();
				isMulti.Clear();

				mainPanel->BackColor = Color::AliceBlue;

				numQuestions = 1;
				questionId = 0;

				// selectedList = gcnew array<String ^>(numQuestions);
				for(int i = 0; i < numQuestions; i++){
					checkAList.Add(gcnew CheckBox());
					checkBList.Add(gcnew CheckBox());
					checkCList.Add(gcnew CheckBox());
					checkDList.Add(gcnew CheckBox());
				}

				srand((unsigned int)time(0));

				OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				DB_Connection->Open();
				String ^ readString = "SELECT * FROM Quizzes WHERE DataStructureID="+ds_id+" AND ModuleID="+module_id;
				OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				OleDbDataReader ^ reader = cmd->ExecuteReader();

				while(reader->Read()){
					// MessageBox::Show(reader->GetString(1));
					questionList.Add(reader->GetString(1));
					optionAList.Add(reader->GetString(3));
					optionBList.Add(reader->GetString(4));
					optionCList.Add(reader->GetString(5));
					optionDList.Add(reader->GetString(6));
					answerAList.Add(reader->GetBoolean(7));
					answerBList.Add(reader->GetBoolean(8));
					answerCList.Add(reader->GetBoolean(9));
					answerDList.Add(reader->GetBoolean(10));
				}

				while(questionList.Count > numQuestions){
					int id = rand()%questionList.Count;
					questionList.RemoveAt(id);
					optionAList.RemoveAt(id);
					optionBList.RemoveAt(id);
					optionCList.RemoveAt(id);
					optionDList.RemoveAt(id);
					answerAList.RemoveAt(id);
					answerBList.RemoveAt(id);
					answerCList.RemoveAt(id);
					answerDList.RemoveAt(id);
				}

				DB_Connection->Close();

				for(int i = 0; i < numQuestions; i++){
					isMulti.Add(false);
					int correctAns = 0;
					if(answerAList[i]) correctAns++;
					if(answerBList[i]) correctAns++;
					if(answerCList[i]) correctAns++;
					if(answerDList[i]) correctAns++;
					if(correctAns > 1) isMulti[i] = true;
				}

				for(int i = 0; i < numQuestions; i++){
					selectedAList.Add(false);
					selectedBList.Add(false);
					selectedCList.Add(false);
					selectedDList.Add(false);
				}

				display();
			}

	public: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {
				DialogResult result = MessageBox::Show("Are you sure you want to end the test?", "Confirm submission", 
					MessageBoxButtons::YesNo);
				if(result == DialogResult::No){
					return;
				}

				mainPanel->Controls->Clear();

				int score = 0;
				int numMulti = 0;
				int numSingle = 0;
				int maxScore = 0;
				for(int i = 0; i < numQuestions; i++){
					if(isMulti[i]){
						numMulti++;
						maxScore += 4;

						int x = 0;
						int numSelected = 0;
						int numCorrect = 0;
						bool isCorrect = true;

						if(answerAList[i]) numCorrect++;

						if(answerAList[i] && selectedAList[i]){
							x++;
							numSelected++;
						}
						else if(!answerAList[i] && !selectedAList[i]){
							// do nothing
						}
						else if(answerAList[i] && !selectedAList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}

						if(answerBList[i]) numCorrect++;

						if(answerBList[i] && selectedBList[i]){
							x++;
							numSelected++;
						}
						else if(!answerBList[i] && !selectedBList[i]){
							// do nothing
						}
						else if(answerBList[i] && !selectedBList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}

						if(answerCList[i]) numCorrect++;

						if(answerCList[i] && selectedCList[i]){
							x++;
							numSelected++;
						}
						else if(!answerCList[i] && !selectedCList[i]){
							// do nothing
						}
						else if(answerCList[i] && !selectedCList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}

						if(answerDList[i]) numCorrect++;

						if(answerDList[i] && selectedDList[i]){
							x++;
							numSelected++;
						}
						else if(!answerDList[i] && !selectedDList[i]){
							// do nothing
						}
						else if(answerDList[i] && !selectedDList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}

						if(!isCorrect){
							score -= 1;
						}
						else if(numSelected == numCorrect){
							score += 4;
						}
						else score += x;
					}
					else{
						numSingle++;
						maxScore += 4;

						bool isCorrect = true;

						if(answerAList[i] && selectedAList[i]){
							score += 4;
						}
						else if(!answerAList[i] && !selectedAList[i]){
							// do nothing
						}
						else if(answerAList[i] && !selectedAList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}


						if(answerBList[i] && selectedBList[i]){
							score += 4;
						}
						else if(!answerBList[i] && !selectedBList[i]){
							// do nothing
						}
						else if(answerBList[i] && !selectedBList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}


						if(answerCList[i] && selectedCList[i]){
							score += 4;
						}
						else if(!answerCList[i] && !selectedCList[i]){
							// do nothing
						}
						else if(answerCList[i] && !selectedCList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}

						// MessageBox::Show(answerDList[i]+" "+selectedDList[i]);
						if(answerDList[i] && selectedDList[i]){
							score += 4;
						}
						else if(!answerDList[i] && !selectedDList[i]){
							// do nothing
						}
						else if(answerDList[i] && !selectedDList[i]){
							// do nothing
						}
						else{
							isCorrect = false;
						}

						if(!isCorrect) score -= 1;
					}

					// MessageBox::Show(Convert::ToString(score));
				}

				Label ^newLabel = gcnew Label();
				if(score == 4){
					newLabel->Text = "You passed this module";

					int modulesCompleted;

					OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

					DB_Connection->Open();
					String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
					OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
					OleDbDataReader ^ reader = cmd->ExecuteReader();
					if(reader->Read()){
						modulesCompleted = reader->GetInt32(update_id);
					}

					if(module_id >= modulesCompleted){
						modulesCompleted++;
						String ^updateString = "UPDATE Users SET " + update_name +" = " + modulesCompleted + " WHERE UserName='" + username + "'";
						OleDb::OleDbCommand ^command = gcnew OleDb::OleDbCommand(updateString, DB_Connection);
						command->ExecuteScalar();
						DB_Connection->Close();
					}
				}
				else{
					newLabel->Text = "Your answer is incorrect. Please try again.";
				}
				newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 12, FontStyle::Regular);
				newLabel->Size = Drawing::Size(200, 20);
				newLabel->Location = Drawing::Point((mainPanel->Size.Width-newLabel->Size.Width)/2, (mainPanel->Size.Height-newLabel->Size.Height)/2);
				mainPanel->Controls->Add(newLabel);

				Button ^btnRetry = gcnew Button();
				btnRetry->Text = "Retry";
				btnRetry->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				btnRetry->Size = Drawing::Size(100, 30);
				btnRetry->Location = Drawing::Point(mainPanel->Size.Width-btnRetry->Size.Width-20, mainPanel->Size.Height-btnRetry->Size.Height-20);
				btnRetry->Click += gcnew EventHandler(this, &moduleQuiz::btnRetry_Click);
				btnRetry->Cursor = Cursors::Hand;
				btnRetry->BackColor = Color::LightSkyBlue;
				btnRetry->FlatAppearance->BorderSize = 0;
				btnRetry->FlatStyle = FlatStyle::Popup;
				mainPanel->Controls->Add(btnRetry);
			}

	public: void display(){
				mainPanel->Controls->Clear();

				Label ^question = gcnew Label();
				question->Text = "Ques " + Convert::ToString(questionId+1) + ". " + questionList[questionId];
				question->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				int w = mainPanel->Size.Width - 40;
				int h =  (int)ceil((double)System::Windows::Forms::TextRenderer::MeasureText(question->Text, 
					question->Font).Width / (double)w)*((int)ceil(question->Font->Size))*2;
				question->Size = Drawing::Size(w, h);
				question->Location = Drawing::Point(20, 20);
				mainPanel->Controls->Add(question);


				Label ^optionA = gcnew Label();
				optionA->Text = "A. "+optionAList[questionId];
				optionA->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				w = mainPanel->Size.Width - 40;
				h =  (int)ceil((double)System::Windows::Forms::TextRenderer::MeasureText(optionA->Text, 
					optionA->Font).Width / (double)w)*((int)ceil(optionA->Font->Size))*2;
				optionA->Size = Drawing::Size(w, h);
				optionA->Location = Drawing::Point(40, 2*20+question->Size.Height);
				mainPanel->Controls->Add(optionA);

				checkAList[questionId]->Location = Drawing::Point(20, 2*20+question->Size.Height);
				checkAList[questionId]->Cursor = Cursors::Hand;
				mainPanel->Controls->Add(checkAList[questionId]);
				checkAList[questionId]->Tag = questionId;
				checkAList[questionId]->Click  += gcnew EventHandler(this, &moduleQuiz::checkA_Click);


				Label ^optionB = gcnew Label();
				optionB->Text = "B. "+optionBList[questionId];
				optionB->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				w = mainPanel->Size.Width - 40;
				h =  (int)ceil((double)System::Windows::Forms::TextRenderer::MeasureText(optionB->Text, 
					optionB->Font).Width / (double)w)*((int)ceil(optionB->Font->Size))*2;
				optionB->Size = Drawing::Size(w, h);
				optionB->Location = Drawing::Point(40, 3*20+question->Size.Height+optionA->Size.Height);
				mainPanel->Controls->Add(optionB);

				checkBList[questionId]->Location = Drawing::Point(20, 3*20+question->Size.Height +optionA->Size.Height);
				checkBList[questionId]->Cursor = Cursors::Hand;
				mainPanel->Controls->Add(checkBList[questionId]);
				checkBList[questionId]->Tag = questionId;
				checkBList[questionId]->Click  += gcnew EventHandler(this, &moduleQuiz::checkB_Click);


				Label ^optionC = gcnew Label();
				optionC->Text = "C. "+optionCList[questionId];
				optionC->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				w = mainPanel->Size.Width - 40;
				h =  (int)ceil((double)System::Windows::Forms::TextRenderer::MeasureText(optionC->Text, 
					optionC->Font).Width / (double)w)*((int)ceil(optionC->Font->Size))*2;
				optionC->Size = Drawing::Size(w, h);
				optionC->Location = Drawing::Point(40, 4*20+question->Size.Height+optionA->Size.Height+optionB->Size.Height);
				mainPanel->Controls->Add(optionC);


				checkCList[questionId]->Location = Drawing::Point(20, 4*20+question->Size.Height+optionA->Size.Height+optionB->Size.Height);
				checkCList[questionId]->Cursor = Cursors::Hand;
				mainPanel->Controls->Add(checkCList[questionId]);
				checkCList[questionId]->Tag = questionId;
				checkCList[questionId]->Click  += gcnew EventHandler(this, &moduleQuiz::checkC_Click);


				Label ^optionD = gcnew Label();
				optionD->Text = "D. "+optionDList[questionId];
				optionD->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				w = mainPanel->Size.Width - 40;
				h =  (int)ceil((double)System::Windows::Forms::TextRenderer::MeasureText(optionD->Text, 
					optionD->Font).Width / (double)w)*((int)ceil(optionD->Font->Size))*2;
				optionD->Size = Drawing::Size(w, h);
				optionD->Location = Drawing::Point(40, 5*20+question->Size.Height+optionA->Size.Height+optionB->Size.Height+optionC->Size.Height);
				mainPanel->Controls->Add(optionD);

				checkDList[questionId]->Location = Drawing::Point(20, 5*20+question->Size.Height+optionA->Size.Height+optionB->Size.Height+optionC->Size.Height);
				checkDList[questionId]->Cursor = Cursors::Hand;
				mainPanel->Controls->Add(checkDList[questionId]);
				checkDList[questionId]->Tag = questionId;
				checkDList[questionId]->Click  += gcnew EventHandler(this, &moduleQuiz::checkD_Click);

				Button ^btnSubmit = gcnew Button();
				btnSubmit->Text = "Submit";
				btnSubmit->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				btnSubmit->Size = Drawing::Size(100, 30);
				btnSubmit->Location = Drawing::Point(mainPanel->Size.Width-btnSubmit->Size.Width-20, mainPanel->Size.Height-btnSubmit->Size.Height-20);
				btnSubmit->Click += gcnew EventHandler(this, &moduleQuiz::btnSubmit_Click);
				btnSubmit->Cursor = Cursors::Hand;
				btnSubmit->BackColor = Color::LightSkyBlue;
				btnSubmit->FlatAppearance->BorderSize = 0;
				btnSubmit->FlatStyle = FlatStyle::Popup;
				mainPanel->Controls->Add(btnSubmit);

			}
	private: System::Void mainPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
};
}
