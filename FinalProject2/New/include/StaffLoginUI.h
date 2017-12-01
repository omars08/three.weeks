#ifndef STAFFLOGINUI_H
#define STAFFLOGINUI_H
#include <string>
using namespace std;


class StaffLoginUI
{
    public:
        StaffLoginUI();
        StaffLoginUI(string login_name);
        virtual ~StaffLoginUI();
        void print_staff_login();
        bool check_login_name(string login_name);
        string get_login_name();
        friend istream& operator >> (istream& in, StaffLoginUI& stafflogin);
        friend ostream& operator << (ostream& out, const StaffLoginUI& stafflogin);


    private:
        string login_name;
};

#endif // STAFFLOGINUI_H
