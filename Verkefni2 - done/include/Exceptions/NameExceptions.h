#ifndef NAMEEXCEPTIONS_H
#define NAMEEXCEPTIONS_H
#include <string>
using namespace std;

class NameExceptions
{
    public:
        NameExceptions();
        NameExceptions(string message);
        string getMessage();
        void setName(string name);
        string getName();
        bool nameValid(const string& name);
    protected:

    private:
        string message;
        string name;
};

#endif // NAMEEXCEPTIONS_H
