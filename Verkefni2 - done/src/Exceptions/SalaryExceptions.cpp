#include "SalaryExceptions.h"


SalaryExceptions::SalaryExceptions(string message)
{
    this->message = message;
}
string SalaryExceptions::getMessage()
{
    return message;
}
