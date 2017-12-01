#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string line;                    /// Declares argument
    int track = 0;
    char answer;
    ifstream fif;                      /// Declares output stream
    fif.open("Readme.txt", ios::app); /// opens txt file
    while(!fif.eof())                 ///Runs until end of file
    {
        answer = 'x';                 /// redeclares answer so not to jump through while loop
        getline(fif,line);            /// Gets lines
        cout << line << endl;        /// writes out lines
        track++;                     /// counts lines
        if(track == 10)             ///check if there have been ten lines
        {
            while(answer != 'y')    /// checks if the answer is yes
            {
                cout << "Do you want to continue?(y/n) ";
                cin >> answer;      /// User inputs answer
                if(answer == 'n')   /// checks if no
            {
                break;              /// breaks out of while loop
            }

            }
            track = 0;              /// resets counter to 0
        }
        if(answer == 'n')
        {
            break; /// answer is still 'n' so it breaks out again and program finishes
        }

    }
    fif.close();  /// Closes text file

    return 0;
}
