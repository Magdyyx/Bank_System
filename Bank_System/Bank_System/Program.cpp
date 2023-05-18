#include "Customer_LoggedIn.h"
#include "adminLoggedIn.h"
#include "employee_loggedIn.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of the SignUp form and run it
    BankSystem::Customer_LoggedIn^ Customer_LoggedIn = gcnew BankSystem::Customer_LoggedIn();
    BankSystem::adminLoggedIn^ Admin_LoggedIn = gcnew BankSystem::adminLoggedIn();
    BankSystem::employee_loggedIn^ Employee_LoggedIn = gcnew BankSystem::employee_loggedIn();

    Application::Run(Customer_LoggedIn);
    Application::Run(Admin_LoggedIn);
    Application::Run(Employee_LoggedIn);

    return 0;
}