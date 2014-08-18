#pragma once

namespace ExcelProjectApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exitButton;
	private: System::Windows::Forms::Label^  heatMapTemplateLabel;
	private: System::Windows::Forms::Button^  heatmapFileButton;
	private: System::Windows::Forms::TextBox^  heatmapTemplateTextBox;
	private: System::Windows::Forms::TextBox^  dataLowtextBox;
	private: System::Windows::Forms::Button^  dataLowButton;
	private: System::Windows::Forms::Label^  dataLowLabel;
	private: System::Windows::Forms::TextBox^  dataMedtextBox;
	private: System::Windows::Forms::Button^  dataMedButton;
	private: System::Windows::Forms::Label^  dataMedLabel;


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
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->heatMapTemplateLabel = (gcnew System::Windows::Forms::Label());
			this->heatmapFileButton = (gcnew System::Windows::Forms::Button());
			this->heatmapTemplateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dataLowtextBox = (gcnew System::Windows::Forms::TextBox());
			this->dataLowButton = (gcnew System::Windows::Forms::Button());
			this->dataLowLabel = (gcnew System::Windows::Forms::Label());
			this->dataMedtextBox = (gcnew System::Windows::Forms::TextBox());
			this->dataMedButton = (gcnew System::Windows::Forms::Button());
			this->dataMedLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(12, 524);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(193, 85);
			this->exitButton->TabIndex = 0;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// heatMapTemplateLabel
			// 
			this->heatMapTemplateLabel->AutoSize = true;
			this->heatMapTemplateLabel->Location = System::Drawing::Point(39, 30);
			this->heatMapTemplateLabel->Name = L"heatMapTemplateLabel";
			this->heatMapTemplateLabel->Size = System::Drawing::Size(145, 13);
			this->heatMapTemplateLabel->TabIndex = 1;
			this->heatMapTemplateLabel->Text = L"Choose a heatmap template: ";
			// 
			// heatmapFileButton
			// 
			this->heatmapFileButton->Location = System::Drawing::Point(446, 46);
			this->heatmapFileButton->Name = L"heatmapFileButton";
			this->heatmapFileButton->Size = System::Drawing::Size(75, 23);
			this->heatmapFileButton->TabIndex = 2;
			this->heatmapFileButton->Text = L"Browse";
			this->heatmapFileButton->UseVisualStyleBackColor = true;
			this->heatmapFileButton->Click += gcnew System::EventHandler(this, &MyForm::heatmapFileButton_Click);
			// 
			// heatmapTemplateTextBox
			// 
			this->heatmapTemplateTextBox->Location = System::Drawing::Point(42, 49);
			this->heatmapTemplateTextBox->Name = L"heatmapTemplateTextBox";
			this->heatmapTemplateTextBox->ReadOnly = true;
			this->heatmapTemplateTextBox->Size = System::Drawing::Size(398, 20);
			this->heatmapTemplateTextBox->TabIndex = 3;
			// 
			// dataLowtextBox
			// 
			this->dataLowtextBox->Location = System::Drawing::Point(42, 100);
			this->dataLowtextBox->Name = L"dataLowtextBox";
			this->dataLowtextBox->ReadOnly = true;
			this->dataLowtextBox->Size = System::Drawing::Size(398, 20);
			this->dataLowtextBox->TabIndex = 4;
			// 
			// dataLowButton
			// 
			this->dataLowButton->Location = System::Drawing::Point(446, 97);
			this->dataLowButton->Name = L"dataLowButton";
			this->dataLowButton->Size = System::Drawing::Size(75, 23);
			this->dataLowButton->TabIndex = 5;
			this->dataLowButton->Text = L"Browse";
			this->dataLowButton->UseVisualStyleBackColor = true;
			this->dataLowButton->Click += gcnew System::EventHandler(this, &MyForm::dataLowButton_Click);
			// 
			// dataLowLabel
			// 
			this->dataLowLabel->AutoSize = true;
			this->dataLowLabel->Location = System::Drawing::Point(39, 84);
			this->dataLowLabel->Name = L"dataLowLabel";
			this->dataLowLabel->Size = System::Drawing::Size(153, 13);
			this->dataLowLabel->TabIndex = 6;
			this->dataLowLabel->Text = L"Choose the low machine data: ";
			// 
			// dataMedtextBox
			// 
			this->dataMedtextBox->Location = System::Drawing::Point(42, 145);
			this->dataMedtextBox->Name = L"dataMedtextBox";
			this->dataMedtextBox->ReadOnly = true;
			this->dataMedtextBox->Size = System::Drawing::Size(398, 20);
			this->dataMedtextBox->TabIndex = 7;
			// 
			// dataMedButton
			// 
			this->dataMedButton->Location = System::Drawing::Point(446, 141);
			this->dataMedButton->Name = L"dataMedButton";
			this->dataMedButton->Size = System::Drawing::Size(75, 23);
			this->dataMedButton->TabIndex = 8;
			this->dataMedButton->Text = L"Browse";
			this->dataMedButton->UseVisualStyleBackColor = true;
			this->dataMedButton->Click += gcnew System::EventHandler(this, &MyForm::dataMedButton_Click);
			// 
			// dataMedLabel
			// 
			this->dataMedLabel->AutoSize = true;
			this->dataMedLabel->Location = System::Drawing::Point(39, 129);
			this->dataMedLabel->Name = L"dataMedLabel";
			this->dataMedLabel->Size = System::Drawing::Size(157, 13);
			this->dataMedLabel->TabIndex = 9;
			this->dataMedLabel->Text = L"Choose the med machine data: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 621);
			this->Controls->Add(this->dataMedLabel);
			this->Controls->Add(this->dataMedButton);
			this->Controls->Add(this->dataMedtextBox);
			this->Controls->Add(this->dataLowLabel);
			this->Controls->Add(this->dataLowButton);
			this->Controls->Add(this->dataLowtextBox);
			this->Controls->Add(this->heatmapTemplateTextBox);
			this->Controls->Add(this->heatmapFileButton);
			this->Controls->Add(this->heatMapTemplateLabel);
			this->Controls->Add(this->exitButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }

	private: System::Void heatmapFileButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 
				 openFileDialog1->Filter = "pdf files |*.PDF";

				 // Show the Dialog.
				 // If the user clicked OK in the dialog end a file was selected, open it.
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 String^ fileName = System::IO::Path::GetFileName(openFileDialog1->FileName);
					 String^ path = System::IO::Path::GetDirectoryName(openFileDialog1->FileName);
					 //MessageBox::Show(path = path+"\\"+fileName,"Directory");
					 path = path+"\\"+fileName;
					 heatmapTemplateTextBox->Text = heatmapTemplateTextBox->Text + " " + path + " ";
				}
			 }

private: System::Void dataLowButton_Click(System::Object^  sender, System::EventArgs^  e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 
			openFileDialog1->Filter = "pdf files |*.PDF";

			// Show the Dialog.
			// If the user clicked OK in the dialog end a file was selected, open it.
			if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ fileName = System::IO::Path::GetFileName(openFileDialog1->FileName);
				String^ path = System::IO::Path::GetDirectoryName(openFileDialog1->FileName);
				//MessageBox::Show(path = path+"\\"+fileName,"Directory");
				path = path+"\\"+fileName;
				dataLowtextBox->Text = heatmapTemplateTextBox->Text + " " + path + " ";
			}
		 }
private: System::Void dataMedButton_Click(System::Object^  sender, System::EventArgs^  e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 
			openFileDialog1->Filter = "pdf files |*.PDF";

			// Show the Dialog.
			// If the user clicked OK in the dialog end a file was selected, open it.
			if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ fileName = System::IO::Path::GetFileName(openFileDialog1->FileName);
				String^ path = System::IO::Path::GetDirectoryName(openFileDialog1->FileName);
				//MessageBox::Show(path = path+"\\"+fileName,"Directory");
				path = path+"\\"+fileName;
				dataMedtextBox->Text = heatmapTemplateTextBox->Text + " " + path + " ";
			}
		 }
};
}
