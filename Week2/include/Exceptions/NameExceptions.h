#ifndef NAMEEXCEPTIONS_H
#define NAMEEXCEPTIONS_H
#include <string>
using namespace std;

class NameExceptions
{
    public:
        NameExceptions(string message);
        string getMessage();
    protected:

    private:
        string message;
};

#endif // NAMEEXCEPTIONS_H
