#ifndef SSNEXCEPTIONS_H
#define SSNEXCEPTIONS_H
#include <string>
using namespace std;

class SSNExceptions
{
    public:
        SSNExceptions(string message);
        string getMessage();

    private:
        string message;
};

#endif // SSNEXCEPTIONS_H
