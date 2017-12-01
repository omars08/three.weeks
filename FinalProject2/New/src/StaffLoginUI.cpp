#include "StaffLoginUI.h"
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

StaffLoginUI::StaffLoginUI(){
    login_name = "";
}

StaffLoginUI::StaffLoginUI(string login_name){
    this->login_name = login_name;
}

StaffLoginUI::~StaffLoginUI()
{
    //dtor
}

bool StaffLoginUI::check_login_name(string login_name){
    if(login_name != "admin"){
        return false;
    }
    return true;
}
istream& operator >> (istream& in, StaffLoginUI& stafflogin){
    cout << "Login name: " << endl;
    in >> stafflogin.login_name;

    return in;
}
ostream& operator << (ostream& out, const StaffLoginUI& stafflogin){
    out << stafflogin.login_name;

    return out;
}
