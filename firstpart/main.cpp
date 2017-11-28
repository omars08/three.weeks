#include <iostream>
#include <fstream>

using namespace std;
const int maxsize = 10;

int main()
{
    string line;
    int counter = 0;
    char answer;
    ifstream fin;
    fin.open("Readme.txt", ios::app); // 'append'- all output will be added (appended) to the end of the file.
    while(!fin.eof()) // while output end of line.
    {

        answer = '\0'; //nullifying the 'y' char for each loop.
        getline(fin, line); // reads the end of a line.
        cout << line << endl;
        counter++; // important to read the amount of lines
        if(counter == maxsize)
        {
            while(!((answer == 'y') || (answer == 'Y')))
            {
                cout << "Do you want to continue?(y/n) ";
                cin >> answer;
            }
            counter = 0;
        }
        if(answer == 'n' || answer == 'N')
        {
            break;
        }

    }
    fin.close();

    return 0;
}
