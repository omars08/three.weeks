#include <iostream>
#include <fstream>
#include <string>
#include "superhero.h"

using namespace std;

int main(){

Superhero hero1;
ofstream fout;
cout << "Type in your hero's name, age and superpower (f, g, h, n)): ";
cin >> hero1;
cout << endl;

hero1.fileinput();
hero1.print_hero_from_file();

return 0;

}
