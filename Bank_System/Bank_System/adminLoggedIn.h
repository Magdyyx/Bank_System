#pragma once

namespace BankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminLoggedIn
	/// </summary>
	public ref class adminLoggedIn : public System::Windows::Forms::Form
	{
	public:
		adminLoggedIn(void)
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
		~adminLoggedIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ add_bank_btn;
	private: System::Windows::Forms::Panel^ panel_add_bank;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ bank_address_input;
	private: System::Windows::Forms::Button^ add_bank_save;
	private: System::Windows::Forms::Label^ bank_address_text;




	private: System::Windows::Forms::TextBox^ bank_name_input;


	private: System::Windows::Forms::Label^ bank_name_text;

	private: System::Windows::Forms::Label^ user_name;
	private: System::Windows::Forms::Button^ log_out;
	private: System::Windows::Forms::Button^ add_bank_branch_btn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::TextBox^ bank_code_input;

	private: System::Windows::Forms::Label^ bank_code_text;
	private: System::Windows::Forms::Label^ add_new_bank_text;
	private: System::Windows::Forms::Panel^ panel_add_branch;
	private: System::Windows::Forms::Label^ add_bank_branch_text;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ branch_address_input;
	private: System::Windows::Forms::Button^ add_branch_save;


	private: System::Windows::Forms::Label^ branch_address_text;

	private: System::Windows::Forms::TextBox^ branch_name_input;

	private: System::Windows::Forms::Label^ branch_name_text;



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
			this->add_bank_btn = (gcnew System::Windows::Forms::Button());
			this->panel_add_bank = (gcnew System::Windows::Forms::Panel());
			this->add_new_bank_text = (gcnew System::Windows::Forms::Label());
			this->bank_code_input = (gcnew System::Windows::Forms::TextBox());
			this->bank_code_text = (gcnew System::Windows::Forms::Label());
			this->bank_address_input = (gcnew System::Windows::Forms::TextBox());
			this->add_bank_save = (gcnew System::Windows::Forms::Button());
			this->bank_address_text = (gcnew System::Windows::Forms::Label());
			this->bank_name_input = (gcnew System::Windows::Forms::TextBox());
			this->bank_name_text = (gcnew System::Windows::Forms::Label());
			this->user_name = (gcnew System::Windows::Forms::Label());
			this->log_out = (gcnew System::Windows::Forms::Button());
			this->add_bank_branch_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->panel_add_branch = (gcnew System::Windows::Forms::Panel());
			this->add_bank_branch_text = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->branch_address_input = (gcnew System::Windows::Forms::TextBox());
			this->add_branch_save = (gcnew System::Windows::Forms::Button());
			this->branch_address_text = (gcnew System::Windows::Forms::Label());
			this->branch_name_input = (gcnew System::Windows::Forms::TextBox());
			this->branch_name_text = (gcnew System::Windows::Forms::Label());
			this->panel_add_bank->SuspendLayout();
			this->panel_add_branch->SuspendLayout();
			this->SuspendLayout();
			// 
			// add_bank_btn
			// 
			this->add_bank_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_bank_btn->Location = System::Drawing::Point(4, 347);
			this->add_bank_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_bank_btn->Name = L"add_bank_btn";
			this->add_bank_btn->Size = System::Drawing::Size(252, 57);
			this->add_bank_btn->TabIndex = 20;
			this->add_bank_btn->Text = L"Add Bank";
			this->add_bank_btn->UseVisualStyleBackColor = true;
			this->add_bank_btn->Click += gcnew System::EventHandler(this, &adminLoggedIn::add_bank_btn_Click);
			// 
			// panel_add_bank
			// 
			this->panel_add_bank->Controls->Add(this->add_new_bank_text);
			this->panel_add_bank->Controls->Add(this->bank_code_input);
			this->panel_add_bank->Controls->Add(this->bank_code_text);
			this->panel_add_bank->Controls->Add(this->bank_address_input);
			this->panel_add_bank->Controls->Add(this->add_bank_save);
			this->panel_add_bank->Controls->Add(this->bank_address_text);
			this->panel_add_bank->Controls->Add(this->bank_name_input);
			this->panel_add_bank->Controls->Add(this->bank_name_text);
			this->panel_add_bank->Location = System::Drawing::Point(258, 4);
			this->panel_add_bank->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_add_bank->Name = L"panel_add_bank";
			this->panel_add_bank->Size = System::Drawing::Size(1329, 862);
			this->panel_add_bank->TabIndex = 21;
			// 
			// add_new_bank_text
			// 
			this->add_new_bank_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->add_new_bank_text->Location = System::Drawing::Point(367, 30);
			this->add_new_bank_text->Name = L"add_new_bank_text";
			this->add_new_bank_text->Size = System::Drawing::Size(448, 108);
			this->add_new_bank_text->TabIndex = 11;
			this->add_new_bank_text->Text = L"Add New Bank";
			this->add_new_bank_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bank_code_input
			// 
			this->bank_code_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bank_code_input->Location = System::Drawing::Point(403, 476);
			this->bank_code_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bank_code_input->Multiline = true;
			this->bank_code_input->Name = L"bank_code_input";
			this->bank_code_input->Size = System::Drawing::Size(375, 41);
			this->bank_code_input->TabIndex = 10;
			// 
			// bank_code_text
			// 
			this->bank_code_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bank_code_text->Location = System::Drawing::Point(503, 404);
			this->bank_code_text->MinimumSize = System::Drawing::Size(100, 50);
			this->bank_code_text->Name = L"bank_code_text";
			this->bank_code_text->Size = System::Drawing::Size(193, 70);
			this->bank_code_text->TabIndex = 9;
			this->bank_code_text->Text = L"Bank Code";
			this->bank_code_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bank_code_text->Click += gcnew System::EventHandler(this, &adminLoggedIn::label2_Click);
			// 
			// bank_address_input
			// 
			this->bank_address_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bank_address_input->Location = System::Drawing::Point(403, 617);
			this->bank_address_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bank_address_input->Multiline = true;
			this->bank_address_input->Name = L"bank_address_input";
			this->bank_address_input->Size = System::Drawing::Size(375, 41);
			this->bank_address_input->TabIndex = 8;
			// 
			// add_bank_save
			// 
			this->add_bank_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_bank_save->Location = System::Drawing::Point(1103, 769);
			this->add_bank_save->Margin = System::Windows::Forms::Padding(51, 50, 51, 50);
			this->add_bank_save->Name = L"add_bank_save";
			this->add_bank_save->Size = System::Drawing::Size(176, 62);
			this->add_bank_save->TabIndex = 7;
			this->add_bank_save->Text = L"Add";
			this->add_bank_save->UseVisualStyleBackColor = true;
			// 
			// bank_address_text
			// 
			this->bank_address_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->bank_address_text->Location = System::Drawing::Point(496, 548);
			this->bank_address_text->MinimumSize = System::Drawing::Size(100, 50);
			this->bank_address_text->Name = L"bank_address_text";
			this->bank_address_text->Size = System::Drawing::Size(200, 50);
			this->bank_address_text->TabIndex = 3;
			this->bank_address_text->Text = L"Address";
			this->bank_address_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bank_name_input
			// 
			this->bank_name_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bank_name_input->Location = System::Drawing::Point(403, 330);
			this->bank_name_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bank_name_input->Multiline = true;
			this->bank_name_input->Name = L"bank_name_input";
			this->bank_name_input->Size = System::Drawing::Size(375, 41);
			this->bank_name_input->TabIndex = 2;
			// 
			// bank_name_text
			// 
			this->bank_name_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bank_name_text->Location = System::Drawing::Point(503, 258);
			this->bank_name_text->MinimumSize = System::Drawing::Size(100, 50);
			this->bank_name_text->Name = L"bank_name_text";
			this->bank_name_text->Size = System::Drawing::Size(193, 70);
			this->bank_name_text->TabIndex = 1;
			this->bank_name_text->Text = L"Bank Name";
			this->bank_name_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// user_name
			// 
			this->user_name->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name->Location = System::Drawing::Point(4, 78);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(252, 44);
			this->user_name->TabIndex = 25;
			this->user_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// log_out
			// 
			this->log_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log_out->Location = System::Drawing::Point(4, 805);
			this->log_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->log_out->Name = L"log_out";
			this->log_out->Size = System::Drawing::Size(252, 57);
			this->log_out->TabIndex = 24;
			this->log_out->Text = L"Log Out";
			this->log_out->UseVisualStyleBackColor = true;
			// 
			// add_bank_branch_btn
			// 
			this->add_bank_branch_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_bank_branch_btn->Location = System::Drawing::Point(4, 436);
			this->add_bank_branch_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_bank_branch_btn->Name = L"add_bank_branch_btn";
			this->add_bank_branch_btn->Size = System::Drawing::Size(252, 57);
			this->add_bank_branch_btn->TabIndex = 23;
			this->add_bank_branch_btn->Text = L"Add Bank Branch";
			this->add_bank_branch_btn->UseVisualStyleBackColor = true;
			this->add_bank_branch_btn->Click += gcnew System::EventHandler(this, &adminLoggedIn::add_bank_branch_btn_Click);
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 44);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Welcome";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(1, 4);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(256, 861);
			this->listView1->TabIndex = 19;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// panel_add_branch
			// 
			this->panel_add_branch->Controls->Add(this->add_bank_branch_text);
			this->panel_add_branch->Controls->Add(this->textBox1);
			this->panel_add_branch->Controls->Add(this->label3);
			this->panel_add_branch->Controls->Add(this->branch_address_input);
			this->panel_add_branch->Controls->Add(this->add_branch_save);
			this->panel_add_branch->Controls->Add(this->branch_address_text);
			this->panel_add_branch->Controls->Add(this->branch_name_input);
			this->panel_add_branch->Controls->Add(this->branch_name_text);
			this->panel_add_branch->Location = System::Drawing::Point(258, 4);
			this->panel_add_branch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_add_branch->Name = L"panel_add_branch";
			this->panel_add_branch->Size = System::Drawing::Size(1329, 862);
			this->panel_add_branch->TabIndex = 26;
			this->panel_add_branch->Visible = false;
			// 
			// add_bank_branch_text
			// 
			this->add_bank_branch_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->add_bank_branch_text->Location = System::Drawing::Point(367, 30);
			this->add_bank_branch_text->Name = L"add_bank_branch_text";
			this->add_bank_branch_text->Size = System::Drawing::Size(448, 108);
			this->add_bank_branch_text->TabIndex = 11;
			this->add_bank_branch_text->Text = L"Add New Bank Branch";
			this->add_bank_branch_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(403, 476);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(375, 41);
			this->textBox1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(503, 404);
			this->label3->MinimumSize = System::Drawing::Size(100, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 70);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Bank Code";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// branch_address_input
			// 
			this->branch_address_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->branch_address_input->Location = System::Drawing::Point(403, 617);
			this->branch_address_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->branch_address_input->Multiline = true;
			this->branch_address_input->Name = L"branch_address_input";
			this->branch_address_input->Size = System::Drawing::Size(375, 41);
			this->branch_address_input->TabIndex = 8;
			// 
			// add_branch_save
			// 
			this->add_branch_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_branch_save->Location = System::Drawing::Point(1103, 769);
			this->add_branch_save->Margin = System::Windows::Forms::Padding(51, 50, 51, 50);
			this->add_branch_save->Name = L"add_branch_save";
			this->add_branch_save->Size = System::Drawing::Size(176, 62);
			this->add_branch_save->TabIndex = 7;
			this->add_branch_save->Text = L"Add";
			this->add_branch_save->UseVisualStyleBackColor = true;
			// 
			// branch_address_text
			// 
			this->branch_address_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->branch_address_text->Location = System::Drawing::Point(496, 548);
			this->branch_address_text->MinimumSize = System::Drawing::Size(100, 50);
			this->branch_address_text->Name = L"branch_address_text";
			this->branch_address_text->Size = System::Drawing::Size(200, 50);
			this->branch_address_text->TabIndex = 3;
			this->branch_address_text->Text = L"Address";
			this->branch_address_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// branch_name_input
			// 
			this->branch_name_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->branch_name_input->Location = System::Drawing::Point(403, 330);
			this->branch_name_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->branch_name_input->Multiline = true;
			this->branch_name_input->Name = L"branch_name_input";
			this->branch_name_input->Size = System::Drawing::Size(375, 41);
			this->branch_name_input->TabIndex = 2;
			// 
			// branch_name_text
			// 
			this->branch_name_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->branch_name_text->Location = System::Drawing::Point(503, 258);
			this->branch_name_text->MinimumSize = System::Drawing::Size(100, 50);
			this->branch_name_text->Name = L"branch_name_text";
			this->branch_name_text->Size = System::Drawing::Size(193, 70);
			this->branch_name_text->TabIndex = 1;
			this->branch_name_text->Text = L"Branch Name";
			this->branch_name_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// adminLoggedIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1588, 865);
			this->Controls->Add(this->panel_add_branch);
			this->Controls->Add(this->add_bank_btn);
			this->Controls->Add(this->panel_add_bank);
			this->Controls->Add(this->user_name);
			this->Controls->Add(this->log_out);
			this->Controls->Add(this->add_bank_branch_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"adminLoggedIn";
			this->Text = L"adminLoggedIn";
			this->Load += gcnew System::EventHandler(this, &adminLoggedIn::adminLoggedIn_Load);
			this->panel_add_bank->ResumeLayout(false);
			this->panel_add_bank->PerformLayout();
			this->panel_add_branch->ResumeLayout(false);
			this->panel_add_branch->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void add_bank_branch_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_add_branch->Visible = true;
	panel_add_bank->Visible = false;

}

private: System::Void add_bank_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_add_bank->Visible = true;
	panel_add_branch->Visible = false;

}
private: System::Void adminLoggedIn_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
