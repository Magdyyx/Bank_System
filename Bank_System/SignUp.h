#pragma once

namespace BankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
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
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Panel^ panel_customer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Name_label;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ Address_label;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ Phone_label;
	private: System::Windows::Forms::Button^ Save_button;
	private: System::Windows::Forms::Panel^ panel_emp;
	private: System::Windows::Forms::Button^ save_emp;




	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;











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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->panel_customer = (gcnew System::Windows::Forms::Panel());
			this->panel_emp = (gcnew System::Windows::Forms::Panel());
			this->save_emp = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Save_button = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Address_label = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Phone_label = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_customer->SuspendLayout();
			this->panel_emp->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 56);
			this->button2->TabIndex = 7;
			this->button2->Text = L"SignUp As Employee";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SignUp::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 56);
			this->button1->TabIndex = 6;
			this->button1->Text = L"SignUp As Customer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignUp::button1_Click);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(256, 631);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// panel_customer
			// 
			this->panel_customer->Controls->Add(this->panel_emp);
			this->panel_customer->Controls->Add(this->Save_button);
			this->panel_customer->Controls->Add(this->textBox3);
			this->panel_customer->Controls->Add(this->Address_label);
			this->panel_customer->Controls->Add(this->textBox2);
			this->panel_customer->Controls->Add(this->Phone_label);
			this->panel_customer->Controls->Add(this->textBox1);
			this->panel_customer->Controls->Add(this->Name_label);
			this->panel_customer->Controls->Add(this->label1);
			this->panel_customer->Location = System::Drawing::Point(255, 0);
			this->panel_customer->Name = L"panel_customer";
			this->panel_customer->Size = System::Drawing::Size(666, 631);
			this->panel_customer->TabIndex = 8;
			// 
			// panel_emp
			// 
			this->panel_emp->Controls->Add(this->save_emp);
			this->panel_emp->Controls->Add(this->textBox5);
			this->panel_emp->Controls->Add(this->label3);
			this->panel_emp->Controls->Add(this->textBox6);
			this->panel_emp->Controls->Add(this->label4);
			this->panel_emp->Controls->Add(this->label5);
			this->panel_emp->Location = System::Drawing::Point(1, 0);
			this->panel_emp->Name = L"panel_emp";
			this->panel_emp->Size = System::Drawing::Size(666, 631);
			this->panel_emp->TabIndex = 9;
			this->panel_emp->Visible = false;
			// 
			// save_emp
			// 
			this->save_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_emp->Location = System::Drawing::Point(272, 349);
			this->save_emp->Margin = System::Windows::Forms::Padding(50);
			this->save_emp->Name = L"save_emp";
			this->save_emp->Size = System::Drawing::Size(176, 62);
			this->save_emp->TabIndex = 7;
			this->save_emp->Text = L"Save";
			this->save_emp->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(239, 278);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 22);
			this->textBox5->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(148, 264);
			this->label3->MinimumSize = System::Drawing::Size(100, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 50);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Phone";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(239, 183);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 22);
			this->textBox6->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(148, 169);
			this->label4->MinimumSize = System::Drawing::Size(100, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 50);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Name";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(190, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(282, 32);
			this->label5->TabIndex = 0;
			this->label5->Text = L"SignUp As Employee";
			// 
			// Save_button
			// 
			this->Save_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save_button->Location = System::Drawing::Point(273, 478);
			this->Save_button->Margin = System::Windows::Forms::Padding(50);
			this->Save_button->Name = L"Save_button";
			this->Save_button->Size = System::Drawing::Size(176, 62);
			this->Save_button->TabIndex = 7;
			this->Save_button->Text = L"Save";
			this->Save_button->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(239, 372);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(264, 22);
			this->textBox3->TabIndex = 6;
			// 
			// Address_label
			// 
			this->Address_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Address_label->Location = System::Drawing::Point(148, 358);
			this->Address_label->MinimumSize = System::Drawing::Size(100, 50);
			this->Address_label->Name = L"Address_label";
			this->Address_label->Size = System::Drawing::Size(100, 50);
			this->Address_label->TabIndex = 5;
			this->Address_label->Text = L"Address";
			this->Address_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(239, 278);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 22);
			this->textBox2->TabIndex = 4;
			// 
			// Phone_label
			// 
			this->Phone_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone_label->Location = System::Drawing::Point(148, 264);
			this->Phone_label->MinimumSize = System::Drawing::Size(100, 50);
			this->Phone_label->Name = L"Phone_label";
			this->Phone_label->Size = System::Drawing::Size(100, 50);
			this->Phone_label->TabIndex = 3;
			this->Phone_label->Text = L"Phone";
			this->Phone_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(239, 183);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 22);
			this->textBox1->TabIndex = 2;
			// 
			// Name_label
			// 
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_label->Location = System::Drawing::Point(148, 169);
			this->Name_label->MinimumSize = System::Drawing::Size(100, 50);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(100, 50);
			this->Name_label->TabIndex = 1;
			this->Name_label->Text = L"Name";
			this->Name_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(190, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SignUp As Customer";
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 631);
			this->Controls->Add(this->panel_customer);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->panel_customer->ResumeLayout(false);
			this->panel_customer->PerformLayout();
			this->panel_emp->ResumeLayout(false);
			this->panel_emp->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_customer->Visible = true;
	panel_emp->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_emp->Visible = true;
}
};
}
