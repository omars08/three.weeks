#ifndef SALARYEXCEPTIONS_H
#define SALARYEXCEPTIONS_H
#include <string>
using namespace std;

class SalaryExceptions
{
    public:
        SalaryExceptions(string message);
        string getMessage();

    private:
        string message;
};


#endif // SALARYEXCEPTIONS_H
