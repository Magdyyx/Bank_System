#pragma once

namespace BankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Customer_LoggedIn
	/// </summary>
	public ref class Customer_LoggedIn : public System::Windows::Forms::Form
	{
	public:
		Customer_LoggedIn(void)
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
		~Customer_LoggedIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ take_loan;
	private: System::Windows::Forms::Panel^ panel_loan;
	private: System::Windows::Forms::Button^ save_amount;
	protected:

	protected:




	private: System::Windows::Forms::Label^ Emp_id;
	private: System::Windows::Forms::TextBox^ amount_input;


	private: System::Windows::Forms::Label^ amount_text;


	private: System::Windows::Forms::ListView^ listView1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ start_operation;
	private: System::Windows::Forms::Button^ log_out;


	private: System::Windows::Forms::Label^ user_name;
	private: System::Windows::Forms::TextBox^ empId_input;
	private: System::Windows::Forms::Label^ take_loan_header;





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
			this->take_loan = (gcnew System::Windows::Forms::Button());
			this->panel_loan = (gcnew System::Windows::Forms::Panel());
			this->empId_input = (gcnew System::Windows::Forms::TextBox());
			this->save_amount = (gcnew System::Windows::Forms::Button());
			this->Emp_id = (gcnew System::Windows::Forms::Label());
			this->amount_input = (gcnew System::Windows::Forms::TextBox());
			this->amount_text = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->start_operation = (gcnew System::Windows::Forms::Button());
			this->log_out = (gcnew System::Windows::Forms::Button());
			this->user_name = (gcnew System::Windows::Forms::Label());
			this->take_loan_header = (gcnew System::Windows::Forms::Label());
			this->panel_loan->SuspendLayout();
			this->SuspendLayout();
			// 
			// take_loan
			// 
			this->take_loan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->take_loan->Location = System::Drawing::Point(3, 343);
			this->take_loan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->take_loan->Name = L"take_loan";
			this->take_loan->Size = System::Drawing::Size(252, 57);
			this->take_loan->TabIndex = 11;
			this->take_loan->Text = L"Take loan";
			this->take_loan->UseVisualStyleBackColor = true;
			this->take_loan->Click += gcnew System::EventHandler(this, &Customer_LoggedIn::take_loan_Click);
			// 
			// panel_loan
			// 
			this->panel_loan->Controls->Add(this->take_loan_header);
			this->panel_loan->Controls->Add(this->empId_input);
			this->panel_loan->Controls->Add(this->save_amount);
			this->panel_loan->Controls->Add(this->Emp_id);
			this->panel_loan->Controls->Add(this->amount_input);
			this->panel_loan->Controls->Add(this->amount_text);
			this->panel_loan->Location = System::Drawing::Point(257, 0);
			this->panel_loan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_loan->Name = L"panel_loan";
			this->panel_loan->Size = System::Drawing::Size(1329, 862);
			this->panel_loan->TabIndex = 13;
			// 
			// empId_input
			// 
			this->empId_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->empId_input->Location = System::Drawing::Point(403, 507);
			this->empId_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->empId_input->Multiline = true;
			this->empId_input->Name = L"empId_input";
			this->empId_input->Size = System::Drawing::Size(375, 41);
			this->empId_input->TabIndex = 8;
			// 
			// save_amount
			// 
			this->save_amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_amount->Location = System::Drawing::Point(1133, 775);
			this->save_amount->Margin = System::Windows::Forms::Padding(51, 50, 51, 50);
			this->save_amount->Name = L"save_amount";
			this->save_amount->Size = System::Drawing::Size(176, 62);
			this->save_amount->TabIndex = 7;
			this->save_amount->Text = L"Save";
			this->save_amount->UseVisualStyleBackColor = true;
			// 
			// Emp_id
			// 
			this->Emp_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->Emp_id->Location = System::Drawing::Point(496, 438);
			this->Emp_id->MinimumSize = System::Drawing::Size(100, 50);
			this->Emp_id->Name = L"Emp_id";
			this->Emp_id->Size = System::Drawing::Size(200, 50);
			this->Emp_id->TabIndex = 3;
			this->Emp_id->Text = L"Employee ID";
			this->Emp_id->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// amount_input
			// 
			this->amount_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount_input->Location = System::Drawing::Point(403, 310);
			this->amount_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->amount_input->Multiline = true;
			this->amount_input->Name = L"amount_input";
			this->amount_input->Size = System::Drawing::Size(375, 41);
			this->amount_input->TabIndex = 2;
			// 
			// amount_text
			// 
			this->amount_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount_text->Location = System::Drawing::Point(503, 238);
			this->amount_text->MinimumSize = System::Drawing::Size(100, 50);
			this->amount_text->Name = L"amount_text";
			this->amount_text->Size = System::Drawing::Size(193, 70);
			this->amount_text->TabIndex = 1;
			this->amount_text->Text = L"Amount";
			this->amount_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(256, 861);
			this->listView1->TabIndex = 10;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 44);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Welcome";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// start_operation
			// 
			this->start_operation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start_operation->Location = System::Drawing::Point(3, 432);
			this->start_operation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->start_operation->Name = L"start_operation";
			this->start_operation->Size = System::Drawing::Size(252, 57);
			this->start_operation->TabIndex = 16;
			this->start_operation->Text = L"Start Operation";
			this->start_operation->UseVisualStyleBackColor = true;
			// 
			// log_out
			// 
			this->log_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log_out->Location = System::Drawing::Point(3, 801);
			this->log_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->log_out->Name = L"log_out";
			this->log_out->Size = System::Drawing::Size(252, 57);
			this->log_out->TabIndex = 17;
			this->log_out->Text = L"Log Out";
			this->log_out->UseVisualStyleBackColor = true;
			// 
			// user_name
			// 
			this->user_name->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name->Location = System::Drawing::Point(3, 74);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(252, 44);
			this->user_name->TabIndex = 18;
			this->user_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// take_loan_header
			// 
			this->take_loan_header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->take_loan_header->Location = System::Drawing::Point(426, 33);
			this->take_loan_header->Name = L"take_loan_header";
			this->take_loan_header->Size = System::Drawing::Size(313, 85);
			this->take_loan_header->TabIndex = 9;
			this->take_loan_header->Text = L"Take loan";
			this->take_loan_header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->take_loan_header->Click += gcnew System::EventHandler(this, &Customer_LoggedIn::take_loan_header_Click);
			// 
			// Customer_LoggedIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1588, 866);
			this->Controls->Add(this->user_name);
			this->Controls->Add(this->log_out);
			this->Controls->Add(this->start_operation);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->take_loan);
			this->Controls->Add(this->panel_loan);
			this->Controls->Add(this->listView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Customer_LoggedIn";
			this->Text = L"Customer_LoggedIn";
			this->panel_loan->ResumeLayout(false);
			this->panel_loan->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void take_loan_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_loan->Visible = true;
}
private: System::Void take_loan_header_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
