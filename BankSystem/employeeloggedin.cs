﻿using System;
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
    public partial class employeeloggedin : Form
    {
        public employeeloggedin()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            customerlogin customerlogin = new customerlogin();
            customerlogin.Show();
            this.Hide();
        }

        private void employeeloggedin_Load(object sender, EventArgs e)
        {

        }
    }
}
