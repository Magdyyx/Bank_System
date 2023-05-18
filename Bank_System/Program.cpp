#include "SignUp.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of the SignUp form and run it
    BankSystem::SignUp^ signUpForm = gcnew BankSystem::SignUp();
    Application::Run(signUpForm);

    return 0;
}