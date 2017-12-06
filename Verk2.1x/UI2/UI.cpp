#include "UI.h"
#include "Repositorie.h"
#include <iostream>
using namespace std;
UI::UI()
{
    //ctor
}


void UI::Interface()
{
    bool check = true;
    cout << "1.Do you wish to add a salary record? " << endl;
    cout << "2.Do you wish to get all salary records for given SSN? " << endl;
    cout << "3.Do you wish to get a total Salary for a given year and a given SSN? " << endl;
    cout << "4.Do you wish to get the name of the highest earning employee? " << endl;


    while(check == true){
    cout << endl << "Input number: ";
    cin >> number;
    try{
        if(number > 4 || number < 1)
        {
            throw number;
        }
        else if(number == 1)
        {
            cout << "To the Salary record";
            check = false;
        }
        else if(number == 2)
        {
            cout << " ";
        }
    }
    catch(int e){
        cout << number << " Is not a valid number! Pick 1-4";
        }
    }

}
