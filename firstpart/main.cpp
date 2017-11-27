#include <iostream>
#include <fstream>

using namespace std;
const int maxsize = 10;

int main()
{
    string line;
    int counter = 0;
    char answer;
    ifstream fif;
    fif.open("Readme.txt", ios::app);
    while(!fif.eof()) // while output end of line.
    {

    answer = 'x'; //nullifying the 'y' char for each loop.
    getline(fif,line); // reads the end of a line.
    cout << line << endl;
    counter++; // important to read the amount of lines
        if(counter == maxsize)
        {
            while(answer != 'y')
            {
            cout << "Do you want to continue?(y/n) ";
            cin >> answer;
            if(answer == 'n')
            {
                break;
            }

            }
            counter = 0;
        }
        if(answer == 'n')
        {
            break;
        }

    }
    fif.close();

    return 0;
}
