#include <iostream>
#include <fstream>

using namespace std
int maxsize = 10;

int main()
{
    string line;
    int track = 0;
    char answer;
    ifstream fif;
    fif.open("Readme.txt", ios::app);
    while(!fif.eof())
    {

    answer = 'x'; //nullifying the 'y' char for each loop.
    getline(fif,line);
    cout << line << endl;
    track++;
        if(track == maxsize)
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
            track = 0;
        }
        if(answer == 'n')
        {
            break;
        }

    }
    fif.close();

    return 0;
}
