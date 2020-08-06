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
	/// Summary for Quiz
	/// </summary>
	public ref class Quiz : public System::Windows::Forms::UserControl
	{
	public:
		Quiz(void)
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
		~Quiz()
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
			this->mainPanel->Size = System::Drawing::Size(1088, 631);
			this->mainPanel->TabIndex = 0;
			this->mainPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Quiz::panel1_Paint);
			// 
			// Quiz
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Controls->Add(this->mainPanel);
			this->Name = L"Quiz";
			this->Size = System::Drawing::Size(1088, 631);
			this->Load += gcnew System::EventHandler(this, &Quiz::Quiz_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	public: String ^username;
			int ds_id, numQuestions, questionId;
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

	private: System::Void Quiz_Load(System::Object^  sender, System::EventArgs^  e) {
				 mainPanel->BackColor = Color::AliceBlue;

				 numQuestions = 5;
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
				 String ^ readString = "SELECT * FROM Quizzes WHERE DataStructureID="+ds_id;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();

				 while(reader->Read()){
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

				 numQuestions = numQuestions < questionList.Count ? numQuestions : questionList.Count;

				 if(numQuestions == 0) {
					 MessageBox::Show("Sorry There are No Questions Available for this Module , try again later!");

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

				 Label ^confirmTest = gcnew Label();
				 confirmTest->Text = "Are you ready to take the test?";
				 confirmTest->Font = gcnew Drawing::Font("Comic Sans MS", 12, FontStyle::Regular);
				 confirmTest->Size = Drawing::Size(300, 20);
				 confirmTest->Location = Drawing::Point((mainPanel->Size.Width-confirmTest->Size.Width)/2, mainPanel->Size.Height/2);
				 mainPanel->Controls->Add(confirmTest);

				 Button ^btnConfirm = gcnew Button();
				 btnConfirm->Text = "Take Test";
				 btnConfirm->Font = gcnew Drawing::Font("Comic Sans MS", 12, FontStyle::Regular);
				 btnConfirm->Size = Drawing::Size(150, 30);
				 btnConfirm->Location = Drawing::Point((mainPanel->Size.Width-btnConfirm->Size.Width)/2 - 30, (mainPanel->Size.Height/2)+30);
				 btnConfirm->Cursor = Cursors::Hand;
				 btnConfirm->BackColor = Color::LightSkyBlue;
				 btnConfirm->FlatAppearance->BorderSize = 0;
				 btnConfirm->FlatStyle = FlatStyle::Popup;
				 btnConfirm->Click  += gcnew EventHandler(this, &Quiz::btnConfirm_Click);
				 mainPanel->Controls->Add(btnConfirm);
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

	public: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
				questionId++;

				mainPanel->Controls->Clear();
				display();
			}

	public: System::Void btnPrevious_Click(System::Object^  sender, System::EventArgs^  e) {
				questionId--;

				mainPanel->Controls->Clear();
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

				bool isPresent = false;
				int new_score, present_score;

				OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				DB_Connection->Open();
				// MessageBox::Show(username);
				// MessageBox::Show(Convert::ToString(ds_id));
				String ^readString = "SELECT * FROM UserProgress WHERE UserName='"+username+"' AND DataStructureID="+ds_id;
				// MessageBox::Show("yes");
				OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				//MessageBox::Show("yes");
				// MessageBox::Show("ayayyayya");
				OleDbDataReader ^ reader = cmd->ExecuteReader();
				// MessageBox::Show("yes");
				if(reader->Read()){
					isPresent = true;
					present_score = reader->GetInt32(3);
					new_score = score > present_score ? score : present_score;
				}

				// MessageBox::Show("yes");

				if(isPresent){
					// MessageBox::Show("hdsasdsasadsaauh");
					// Update database
					String ^updateString = "UPDATE UserProgress SET Score=" + new_score + " WHERE UserName='" + username + "' AND DataStructureID="+ds_id;
					OleDb::OleDbCommand ^command = gcnew OleDb::OleDbCommand(updateString, DB_Connection);
					command->ExecuteScalar();
					DB_Connection->Close();
				}
				else{
					// Insert into database
					// MessageBox::Show("hdsauh");
					String ^insertString = "INSERT INTO [UserProgress] ([UserName], [DataStructureID],[Score]) VALUES ('"+username+"',"+ds_id+", "+score+"); ";
					OleDb::OleDbCommand ^command = gcnew OleDb::OleDbCommand(insertString, DB_Connection);
					command->ExecuteNonQuery();
					DB_Connection->Close();
				}

				Label ^newLabel = gcnew Label();
				newLabel->Text = "You scored "+Convert::ToString(score)+" out of "+Convert::ToString(maxScore)+".";
				newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 12, FontStyle::Regular);
				newLabel->Size = Drawing::Size(200, 20);
				newLabel->Location = Drawing::Point((mainPanel->Size.Width-newLabel->Size.Width)/2, (mainPanel->Size.Height-newLabel->Size.Height)/2);
				mainPanel->Controls->Add(newLabel);
			}

	public: void display(){
				mainPanel->Controls->Clear();

				Label ^question = gcnew Label();
				question->Text = "Ques " + Convert::ToString(questionId+1) + ". " + questionList[questionId];
				question->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				int w = mainPanel->Size.Width - 40;
				Debug::WriteLine(System::Windows::Forms::TextRenderer::MeasureText(question->Text, 
					question->Font).Width);
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
				checkAList[questionId]->Click  += gcnew EventHandler(this, &Quiz::checkA_Click);


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
				checkBList[questionId]->Click  += gcnew EventHandler(this, &Quiz::checkB_Click);


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
				checkCList[questionId]->Click  += gcnew EventHandler(this, &Quiz::checkC_Click);


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
				checkDList[questionId]->Click  += gcnew EventHandler(this, &Quiz::checkD_Click);


				if(questionId > 0){
					Button ^btnPrevious = gcnew Button();
					btnPrevious->Text = "Previous";
					btnPrevious->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					btnPrevious->Size = Drawing::Size(100, 30);
					btnPrevious->Location = Drawing::Point(20, mainPanel->Size.Height-btnPrevious->Size.Height-20);
					btnPrevious->Click += gcnew EventHandler(this, &Quiz::btnPrevious_Click);
					btnPrevious->Cursor = Cursors::Hand;
					btnPrevious->BackColor = Color::LightSkyBlue;
					btnPrevious->FlatAppearance->BorderSize = 0;
					btnPrevious->FlatStyle = FlatStyle::Popup;
					mainPanel->Controls->Add(btnPrevious);
				}

				Button ^btnSubmit = gcnew Button();
				btnSubmit->Text = "Submit";
				btnSubmit->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				btnSubmit->Size = Drawing::Size(100, 30);
				btnSubmit->Location = Drawing::Point(mainPanel->Size.Width-btnSubmit->Size.Width-20, mainPanel->Size.Height-btnSubmit->Size.Height-20);
				btnSubmit->Click += gcnew EventHandler(this, &Quiz::btnSubmit_Click);
				btnSubmit->Cursor = Cursors::Hand;
				btnSubmit->BackColor = Color::LightSkyBlue;
				btnSubmit->FlatAppearance->BorderSize = 0;
				btnSubmit->FlatStyle = FlatStyle::Popup;
				mainPanel->Controls->Add(btnSubmit);

				if(questionId < numQuestions-1){
					Button ^btnNext = gcnew Button();
					btnNext->Text = "Next";
					btnNext->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
					btnNext->Size = Drawing::Size(100, 30);
					btnNext->Location = Drawing::Point(mainPanel->Size.Width-btnNext->Size.Width-btnSubmit->Size.Width-30, mainPanel->Size.Height-btnSubmit->Size.Height-20);
					btnNext->Click += gcnew EventHandler(this, &Quiz::btnNext_Click);
					btnNext->Cursor = Cursors::Hand;
					btnNext->BackColor = Color::LightSkyBlue;
					btnNext->FlatAppearance->BorderSize = 0;
					btnNext->FlatStyle = FlatStyle::Popup;
					mainPanel->Controls->Add(btnNext);
				}
			}

	public: System::Void btnConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
				 display();
			 }

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			}
			
	};
}
