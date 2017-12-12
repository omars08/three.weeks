#include "BakerStatus.h"
#include <string>
#include <iostream>
using namespace std;
BakerStatus::BakerStatus()
{
    //ctor
}

void BakerStatus::FlaggingOrders()
{
    cout << "What order do you want to mark as ready: ";
    cin >> input;

    int TempNumOne = input.size();
    char Filename[100];
    for (int a=0;a<=TempNumOne;a++)
        {
            Filename[a]=input[a];
            cout << input[a];
        }
    cout << "*************************";
    cin >> input;

}
