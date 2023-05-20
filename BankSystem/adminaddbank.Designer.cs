namespace BankSystem
{
    partial class adminaddbank
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.save_b_btn = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.b_code_input = new System.Windows.Forms.TextBox();
            this.b_name_input = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.b_address_input = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.listView1 = new System.Windows.Forms.ListView();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // save_b_btn
            // 
            this.save_b_btn.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.save_b_btn.Location = new System.Drawing.Point(1036, 742);
            this.save_b_btn.Name = "save_b_btn";
            this.save_b_btn.Size = new System.Drawing.Size(185, 82);
            this.save_b_btn.TabIndex = 17;
            this.save_b_btn.Text = "Add";
            this.save_b_btn.UseVisualStyleBackColor = true;
            this.save_b_btn.Click += new System.EventHandler(this.button4_Click);
            // 
            // button3
            // 
            this.button3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button3.Location = new System.Drawing.Point(17, 792);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(271, 49);
            this.button3.TabIndex = 16;
            this.button3.Text = "Log out";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2.Location = new System.Drawing.Point(17, 231);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(271, 96);
            this.button2.TabIndex = 15;
            this.button2.Text = "Add a branch";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.Location = new System.Drawing.Point(17, 82);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(271, 96);
            this.button1.TabIndex = 14;
            this.button1.Text = "Add a new bank";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // b_code_input
            // 
            this.b_code_input.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.b_code_input.Location = new System.Drawing.Point(630, 441);
            this.b_code_input.Name = "b_code_input";
            this.b_code_input.Size = new System.Drawing.Size(318, 30);
            this.b_code_input.TabIndex = 13;
            // 
            // b_name_input
            // 
            this.b_name_input.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.b_name_input.Location = new System.Drawing.Point(630, 297);
            this.b_name_input.Name = "b_name_input";
            this.b_name_input.Size = new System.Drawing.Size(318, 30);
            this.b_name_input.TabIndex = 12;
            this.b_name_input.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label3
            // 
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(630, 364);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(318, 74);
            this.label3.TabIndex = 11;
            this.label3.Text = "Bank Code";
            this.label3.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // label2
            // 
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(625, 218);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(313, 76);
            this.label2.TabIndex = 10;
            this.label2.Text = "Bank name";
            this.label2.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label1
            // 
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Underline))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(633, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(315, 76);
            this.label1.TabIndex = 9;
            this.label1.Text = "Add a new bank";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // b_address_input
            // 
            this.b_address_input.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.b_address_input.Location = new System.Drawing.Point(630, 577);
            this.b_address_input.Name = "b_address_input";
            this.b_address_input.Size = new System.Drawing.Size(318, 30);
            this.b_address_input.TabIndex = 19;
            this.b_address_input.TextChanged += new System.EventHandler(this.textBox3_TextChanged);
            // 
            // label4
            // 
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(630, 500);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(318, 74);
            this.label4.TabIndex = 18;
            this.label4.Text = "Address";
            this.label4.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // listView1
            // 
            this.listView1.HideSelection = false;
            this.listView1.Location = new System.Drawing.Point(0, 0);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(306, 860);
            this.listView1.TabIndex = 20;
            this.listView1.UseCompatibleStateImageBehavior = false;
            // 
            // button4
            // 
            this.button4.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button4.Location = new System.Drawing.Point(17, 520);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(271, 96);
            this.button4.TabIndex = 21;
            this.button4.Text = "Delete Branch";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click_1);
            // 
            // button5
            // 
            this.button5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button5.Location = new System.Drawing.Point(17, 375);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(271, 96);
            this.button5.TabIndex = 22;
            this.button5.Text = "Update Branch";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // adminaddbank
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1262, 853);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.b_address_input);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.save_b_btn);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.b_code_input);
            this.Controls.Add(this.b_name_input);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.listView1);
            this.Name = "adminaddbank";
            this.Text = "adminaddbank";
            this.Load += new System.EventHandler(this.adminaddbank_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button save_b_btn;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox b_code_input;
        private System.Windows.Forms.TextBox b_name_input;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox b_address_input;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
    }
}