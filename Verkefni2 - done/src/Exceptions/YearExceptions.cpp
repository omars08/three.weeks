#include "YearExceptions.h"
#include <string>

YearExceptions::YearExceptions(string message)
{
    this->message = message;
}
string YearExceptions::getMessage()
{
    return message;
}
