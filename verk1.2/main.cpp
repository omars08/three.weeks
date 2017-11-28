#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
string line;
ofstream fout;

    fout.open("DataTextFile.txt", ios::app); //mun alltaf skrifa aftast.

        do
        {

        fout << line << endl;

        getline(cin, line);


        }while(line[0] != '\\'); //ef stafurinn \ er fyrsti [0] í streng.
        fout.close();

    return 0;
}
