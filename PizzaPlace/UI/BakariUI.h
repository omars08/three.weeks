#ifndef BAKARIUI_H
#define BAKARIUI_H
#include <string>
#include <fstream>
using namespace std;
class BakariUI
{
    public:
        BakariUI();
        void bakara();



    private:
    bool check;
    string line;
    string select;
    ifstream fif;
    ofstream fout;
    private:
};

#endif // BAKARIUI_H
