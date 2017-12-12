#ifndef MAINUIEXCEPTIONS_H
#define MAINUIEXCEPTIONS_H
#include <string>

using namespace std;

class MainUIExceptions
{
    public:

        MainUIExceptions(string message);
        string getMessage();

    private:
        string message;
};

#endif // MAINUIEXCEPTIONS_H
