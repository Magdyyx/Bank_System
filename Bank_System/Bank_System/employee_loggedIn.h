#pragma once

namespace BankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for employee_loggedIn
	/// </summary>
	public ref class employee_loggedIn : public System::Windows::Forms::Form
	{
	public:
		employee_loggedIn(void)
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
		~employee_loggedIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ add_cust;
	private: System::Windows::Forms::Panel^ panel_add_customer;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ address_input;
	private: System::Windows::Forms::Button^ add_newCust;


	private: System::Windows::Forms::Label^ address_text;
	private: System::Windows::Forms::TextBox^ username_input;


	private: System::Windows::Forms::Label^ username_text;

	private: System::Windows::Forms::Label^ user_name;
	private: System::Windows::Forms::Button^ log_out;
	private: System::Windows::Forms::Button^ s_l_o_loans;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ s_l_o_customer;
	private: System::Windows::Forms::Button^ panding_loans;
	private: System::Windows::Forms::TextBox^ ssn_input;

	private: System::Windows::Forms::Label^ ssn_text;
	private: System::Windows::Forms::TextBox^ phone_input;


	private: System::Windows::Forms::Label^ phone_text;
	private: System::Windows::Forms::Label^ label2;





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
			this->add_cust = (gcnew System::Windows::Forms::Button());
			this->panel_add_customer = (gcnew System::Windows::Forms::Panel());
			this->address_input = (gcnew System::Windows::Forms::TextBox());
			this->add_newCust = (gcnew System::Windows::Forms::Button());
			this->address_text = (gcnew System::Windows::Forms::Label());
			this->username_input = (gcnew System::Windows::Forms::TextBox());
			this->username_text = (gcnew System::Windows::Forms::Label());
			this->user_name = (gcnew System::Windows::Forms::Label());
			this->log_out = (gcnew System::Windows::Forms::Button());
			this->s_l_o_loans = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->s_l_o_customer = (gcnew System::Windows::Forms::Button());
			this->panding_loans = (gcnew System::Windows::Forms::Button());
			this->ssn_input = (gcnew System::Windows::Forms::TextBox());
			this->ssn_text = (gcnew System::Windows::Forms::Label());
			this->phone_input = (gcnew System::Windows::Forms::TextBox());
			this->phone_text = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel_add_customer->SuspendLayout();
			this->SuspendLayout();
			// 
			// add_cust
			// 
			this->add_cust->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_cust->Location = System::Drawing::Point(4, 274);
			this->add_cust->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_cust->Name = L"add_cust";
			this->add_cust->Size = System::Drawing::Size(303, 57);
			this->add_cust->TabIndex = 20;
			this->add_cust->Text = L"Add Customer";
			this->add_cust->UseVisualStyleBackColor = true;
			// 
			// panel_add_customer
			// 
			this->panel_add_customer->Controls->Add(this->label2);
			this->panel_add_customer->Controls->Add(this->ssn_input);
			this->panel_add_customer->Controls->Add(this->ssn_text);
			this->panel_add_customer->Controls->Add(this->phone_input);
			this->panel_add_customer->Controls->Add(this->phone_text);
			this->panel_add_customer->Controls->Add(this->address_input);
			this->panel_add_customer->Controls->Add(this->add_newCust);
			this->panel_add_customer->Controls->Add(this->address_text);
			this->panel_add_customer->Controls->Add(this->username_input);
			this->panel_add_customer->Controls->Add(this->username_text);
			this->panel_add_customer->Location = System::Drawing::Point(313, 4);
			this->panel_add_customer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_add_customer->Name = L"panel_add_customer";
			this->panel_add_customer->Size = System::Drawing::Size(1272, 864);
			this->panel_add_customer->TabIndex = 21;
			// 
			// address_input
			// 
			this->address_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address_input->Location = System::Drawing::Point(404, 399);
			this->address_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->address_input->Multiline = true;
			this->address_input->Name = L"address_input";
			this->address_input->Size = System::Drawing::Size(375, 41);
			this->address_input->TabIndex = 8;
			// 
			// add_newCust
			// 
			this->add_newCust->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_newCust->Location = System::Drawing::Point(1078, 785);
			this->add_newCust->Margin = System::Windows::Forms::Padding(51, 50, 51, 50);
			this->add_newCust->Name = L"add_newCust";
			this->add_newCust->Size = System::Drawing::Size(176, 62);
			this->add_newCust->TabIndex = 7;
			this->add_newCust->Text = L"Add";
			this->add_newCust->UseVisualStyleBackColor = true;
			this->add_newCust->Click += gcnew System::EventHandler(this, &employee_loggedIn::add_newCust_Click);
			// 
			// address_text
			// 
			this->address_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->address_text->Location = System::Drawing::Point(497, 330);
			this->address_text->MinimumSize = System::Drawing::Size(100, 50);
			this->address_text->Name = L"address_text";
			this->address_text->Size = System::Drawing::Size(200, 50);
			this->address_text->TabIndex = 3;
			this->address_text->Text = L"Address";
			this->address_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// username_input
			// 
			this->username_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_input->Location = System::Drawing::Point(404, 242);
			this->username_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_input->Multiline = true;
			this->username_input->Name = L"username_input";
			this->username_input->Size = System::Drawing::Size(375, 41);
			this->username_input->TabIndex = 2;
			// 
			// username_text
			// 
			this->username_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_text->Location = System::Drawing::Point(504, 170);
			this->username_text->MinimumSize = System::Drawing::Size(100, 50);
			this->username_text->Name = L"username_text";
			this->username_text->Size = System::Drawing::Size(193, 70);
			this->username_text->TabIndex = 1;
			this->username_text->Text = L"User Name";
			this->username_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// user_name
			// 
			this->user_name->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name->Location = System::Drawing::Point(3, 78);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(303, 44);
			this->user_name->TabIndex = 25;
			this->user_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// log_out
			// 
			this->log_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log_out->Location = System::Drawing::Point(4, 804);
			this->log_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->log_out->Name = L"log_out";
			this->log_out->Size = System::Drawing::Size(303, 57);
			this->log_out->TabIndex = 24;
			this->log_out->Text = L"Log Out";
			this->log_out->UseVisualStyleBackColor = true;
			this->log_out->Click += gcnew System::EventHandler(this, &employee_loggedIn::log_out_Click);
			// 
			// s_l_o_loans
			// 
			this->s_l_o_loans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s_l_o_loans->Location = System::Drawing::Point(4, 352);
			this->s_l_o_loans->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->s_l_o_loans->Name = L"s_l_o_loans";
			this->s_l_o_loans->Size = System::Drawing::Size(303, 57);
			this->s_l_o_loans->TabIndex = 23;
			this->s_l_o_loans->Text = L"Show List of Loans";
			this->s_l_o_loans->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 44);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Welcome";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(-4, -3);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(314, 877);
			this->listView1->TabIndex = 19;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// s_l_o_customer
			// 
			this->s_l_o_customer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s_l_o_customer->Location = System::Drawing::Point(4, 430);
			this->s_l_o_customer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->s_l_o_customer->Name = L"s_l_o_customer";
			this->s_l_o_customer->Size = System::Drawing::Size(303, 57);
			this->s_l_o_customer->TabIndex = 26;
			this->s_l_o_customer->Text = L"Show List of Customers";
			this->s_l_o_customer->UseVisualStyleBackColor = true;
			// 
			// panding_loans
			// 
			this->panding_loans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panding_loans->Location = System::Drawing::Point(4, 508);
			this->panding_loans->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panding_loans->Name = L"panding_loans";
			this->panding_loans->Size = System::Drawing::Size(303, 57);
			this->panding_loans->TabIndex = 27;
			this->panding_loans->Text = L"Panding Loans";
			this->panding_loans->UseVisualStyleBackColor = true;
			// 
			// ssn_input
			// 
			this->ssn_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ssn_input->Location = System::Drawing::Point(404, 701);
			this->ssn_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssn_input->Multiline = true;
			this->ssn_input->Name = L"ssn_input";
			this->ssn_input->Size = System::Drawing::Size(375, 41);
			this->ssn_input->TabIndex = 12;
			this->ssn_input->TextChanged += gcnew System::EventHandler(this, &employee_loggedIn::textBox1_TextChanged);
			// 
			// ssn_text
			// 
			this->ssn_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->ssn_text->Location = System::Drawing::Point(497, 632);
			this->ssn_text->MinimumSize = System::Drawing::Size(100, 50);
			this->ssn_text->Name = L"ssn_text";
			this->ssn_text->Size = System::Drawing::Size(200, 50);
			this->ssn_text->TabIndex = 11;
			this->ssn_text->Text = L"SSN";
			this->ssn_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ssn_text->Click += gcnew System::EventHandler(this, &employee_loggedIn::label2_Click);
			// 
			// phone_input
			// 
			this->phone_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_input->Location = System::Drawing::Point(404, 552);
			this->phone_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->phone_input->Multiline = true;
			this->phone_input->Name = L"phone_input";
			this->phone_input->Size = System::Drawing::Size(375, 41);
			this->phone_input->TabIndex = 10;
			this->phone_input->TextChanged += gcnew System::EventHandler(this, &employee_loggedIn::textBox2_TextChanged);
			// 
			// phone_text
			// 
			this->phone_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_text->Location = System::Drawing::Point(504, 480);
			this->phone_text->MinimumSize = System::Drawing::Size(100, 50);
			this->phone_text->Name = L"phone_text";
			this->phone_text->Size = System::Drawing::Size(193, 70);
			this->phone_text->TabIndex = 9;
			this->phone_text->Text = L"Phone No.";
			this->phone_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->phone_text->Click += gcnew System::EventHandler(this, &employee_loggedIn::label3_Click);
			// 
			// label2
			// 
			this->label2->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(272, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(632, 103);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Add New Customer";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// employee_loggedIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1588, 865);
			this->Controls->Add(this->s_l_o_customer);
			this->Controls->Add(this->panding_loans);
			this->Controls->Add(this->add_cust);
			this->Controls->Add(this->panel_add_customer);
			this->Controls->Add(this->user_name);
			this->Controls->Add(this->log_out);
			this->Controls->Add(this->s_l_o_loans);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"employee_loggedIn";
			this->Text = L"employee_loggedIn";
			this->panel_add_customer->ResumeLayout(false);
			this->panel_add_customer->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void add_newCust_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void log_out_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
