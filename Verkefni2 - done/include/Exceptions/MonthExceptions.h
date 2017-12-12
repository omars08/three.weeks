#ifndef MONTHEXCEPTIONS_H
#define MONTHEXCEPTIONS_H
#include <string>
using namespace std;

class MonthExceptions
{
    public:
        MonthExceptions(string message);
        string getMessage();

    private:
        string message;
};


#endif // MONTHEXCEPTIONS_H
