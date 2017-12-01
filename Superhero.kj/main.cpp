#include <iostream>
#include <string>
#include <Heroes.h>
using namespace std;

int main()
{

                                             /// Declaring arguments

    char answer;
    char answer2;
    Heroes fahero;                                          /// Making a check if there's a empty string
    Heroes hero;                                            /// Making the main Class
    cout << "Do you want to get a hero?(y/n) ";             ///Deciding if you want to input or display archived
    cin >> answer;                                          ///Getting yes or no
        if(answer == 'n'){                                  ///Goes into the make a hero section
            cout << "Make a Hero buddy do it in order of name/age/SUPERPOWER(f,g,h,n) ";
            cin >> hero;                                                                   /// >> is overloaded and takes in all arguments
            cout << hero;                                                                  /// << is also overloaded and writes out arguments fixed
            cout << "Would you like to put your hero into my amazing text file?(y/n) ";
            cin >> answer2;                                                                /// yes or no
        if(answer2 == 'y'){
            hero.put_hero_in_file();                                                 /// Saves hero in a text file
            }
            cout << "Do you want to insert more heroes inside the folder?(y/n) ";
            cin >> answer2;                                                                 /// Binary files begin
            while(answer2 != 'n'){
                hero.binary_file_input();
                cout << "continue?(y/n)";
                cin >> answer2;
            }
    }
        else if (answer == 'y'){                                                                 /// Goes into display heroes section
            hero.get_wannabe_hero();                                                            /// Displays all heroes who are saved inside a text file
    }


    return 0;
}
