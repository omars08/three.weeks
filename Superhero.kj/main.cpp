#include <iostream>
#include <string>
#include <Heroes.h>
using namespace std;

int main()
{
    string nafn = "";
    int age = 0;
    char power;
    char answer;
    char answer2;
    Heroes fahero;
    Heroes hero (nafn,age,power);
    cout << "Do you want to get a hero?(y/n) ";
    cin >> answer;
    if(answer == 'n')
    {
        cout << hero;
        cin >> hero;
        hero.fixdis();
        hero.display();
        cout << "Would you like to put your hero into my amazing text file?(y/n) ";
        cin >> answer2;

        if(answer2 == 'y')
        {
            hero.put_shit_heroe_in_file();
        }
    }
    else if (answer == 'y'){
    hero.get_wannabe_hero();
    }


    return 0;
}
