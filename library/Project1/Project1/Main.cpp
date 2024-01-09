#include "Home.h"
#include "Login.h"
#include "Register.h"
#include "AdminForm.h"
#include "MemberForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project1::Home Home;
	Home.ShowDialog();
	User^ user = nullptr;
	while (true) {
		Project1::Login Login;
		Login.ShowDialog();
		if (Login.check_register == 1) {
			Project1::Register Register;
			Register.ShowDialog();
			if (Register.check_login == 1) {
				continue;
			}
		}
		user = Login.user;
		if (user != nullptr) {
			break;
		}
		if (Login.DialogResult == System::Windows::Forms::DialogResult::Cancel) {
			break;
		}
	}
	if (user->type_user == "Admin") {
		Project1::AdminForm Admin;
		Admin.ShowDialog();
	}
	else {
		Project1::MemberForm Member;
		Member.ShowDialog();
	}
	
}