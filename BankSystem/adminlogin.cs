using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BankSystem
{
    public partial class adminlogin : Form
    {
        public adminlogin()
        {
            InitializeComponent();
        }


        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            emplogin emplogin = new emplogin();
            emplogin.Show();
            this.Hide();
        }

        private void button3_Click_1(object sender, EventArgs e)
        {
            customerlogin customerlogin = new customerlogin();
            customerlogin.Show();
            this.Hide();

        }

        private void button4_Click_1(object sender, EventArgs e)
        {
            adminaddbank adminaddbank = new adminaddbank();
            adminaddbank.Show();
            this.Hide();
        }
    }
}
