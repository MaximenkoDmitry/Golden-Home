#include "SplashScreen.h"
#include "AuthorizationForm.h"
#include "AdminMenuForm.h"
#include "UserMenuForm.h"
#include "AdminMenuUserForm.h"
#include "Functions.h"
#include <iostream>
#include<string>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GOLDENHOMEPROJECT::SplashScreen _authorizationForm;
	Application::Run(% _authorizationForm);
}

