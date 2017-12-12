#ifndef YEAREXCEPTIONS_H
#define YEAREXCEPTIONS_H
#include <string>
using namespace std;

class YearExceptions
{
    public:
        YearExceptions(string message);
        string getMessage();
    protected:

    private:
        string message;
};

#endif // YEAREXCEPTIONS_H
