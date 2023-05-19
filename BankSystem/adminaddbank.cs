using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BankSystem
{
    public partial class adminaddbank : Form
    {
        SqlConnection sqlConnection = new SqlConnection("Data Source=BODA;Initial Catalog=Bank_System;Integrated Security=True");

        public adminaddbank()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            adminaddbranch adminaddbranch = new adminaddbranch();
            adminaddbranch.Show();
            this.Hide();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            adminlogin adminlogin = new adminlogin();
            adminlogin.Show();
            this.Hide();
        }

        private void button4_Click(object sender, EventArgs e)
        {
<<<<<<< HEAD

            string sql = "insert into Bank(BankName,BankCode,Address) values (@name,@code,@address)";
            SqlCommand cmd = new SqlCommand(sql,sqlConnection);
            cmd.Parameters.AddWithValue("@name", b_name_input.Text);
            cmd.Parameters.AddWithValue("@code", b_code_input.Text);
            cmd.Parameters.AddWithValue("@address", b_address_input.Text);
            sqlConnection.Open();
            cmd.ExecuteNonQuery();
            sqlConnection.Close();
            MessageBox.Show("The bank has been added successfully");
=======
            SqlConnection cn = new SqlConnection(@"Data Source=DESKTOP-5G3H0IA;Initial Catalog=Bank_System;Integrated Security=True");
            cn.Open();
            SqlCommand MyCommand = new SqlCommand("INSERT INTO Bank (BankCode,BankName, Address) VALUES (@BankCode, @BankName, @Address)", cn);
            MyCommand.Parameters.AddWithValue("@BankCode", textBox2.Text);
            MyCommand.Parameters.AddWithValue("@BankName", textBox1.Text.ToString());
            MyCommand.Parameters.AddWithValue("@Address", textBox3.Text.ToString());
            MyCommand.ExecuteNonQuery();
            cn.Close();
            MessageBox.Show("Bank Added Successfully");
>>>>>>> 743881b32eb80b1fec11a102adee50738ebfab79
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void adminaddbank_Load(object sender, EventArgs e)
        {
            
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {


        }
    }
}
