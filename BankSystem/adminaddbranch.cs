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
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace BankSystem
{
    public partial class adminaddbranch : Form
    {
        public adminaddbranch()
        {
            InitializeComponent();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            adminaddbank adminaddbank = new adminaddbank();
            adminaddbank.Show();
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
            SqlConnection cn = new SqlConnection(@"Data Source=DESKTOP-5G3H0IA;Initial Catalog=Bank_System;Integrated Security=True");
            cn.Open();
            SqlCommand MyCommand = new SqlCommand("INSERT INTO Branch (BranchNumber, Address, BankCode) VALUES (@BranchNumber, @Address, @BankCode)", cn);
            MyCommand.Parameters.AddWithValue("@BranchNumber", textBox1.Text.ToString());
            MyCommand.Parameters.AddWithValue("@Address", textBox3.Text.ToString());
            MyCommand.Parameters.AddWithValue("@BankCode", textBox2.Text);
            MyCommand.ExecuteNonQuery();
            cn.Close();
            MessageBox.Show("Branch Added Successfully");
        }
    }
}
