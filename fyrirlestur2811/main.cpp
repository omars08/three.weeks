#include <iostream>
#include <fstream>

using namespace std;

class DataClass{

private:
    int i;
    double d;
    string str;
    char c;

    bool verbose;

public:
   DataClass(){
    i = 0;
    d = 0.0;
    str = "";
    c = ' ';

    verbose = true;
   }

   friend istream& operator >> (istream& in, DataClass& data){
   if(data.verbose){
   cout << "Enter integer:";
   }
   in >> data.i;
   if(data.verbose){
   cout << "Enter double:  ";
   }
   in >> data.d;
   if(data.verbose){
   cout << "Enter string: ";
   }
   in >> data.str;
   if(data.verbose){
   cout << "Enter char: ";
   }
   in >> data.c;


   return in;
   }

   friend ostream operator >> (ostream& out, const DataClass& data){
   out << "Integer: " << data.i << endl;
   out << "Double: " << data.d << endl;
   out << "String: " << data.str << endl;
   out << "Char: " << data.c << endl;

   return out;
   }


};

int main()
{

    DataClass data;
    data.setVerbos
    DataClass data2;

    cin >> data;
ofstream fout;

fout.open("binary_file_DataClass.dat");
    fout << data;

    cout << data;
    fout.close())
    ifstream fin;
    fin.open("binary_file_DataClass.dat");
        if(fin.is_open()){
            fin >> data2;

        }
        else{
            cout << "File could not open";
        }


    return 0;
}
