#include "MonthExceptions.h"

MonthExceptions::MonthExceptions(string message)
{
    this->message = message;
}
string MonthExceptions::getMessage()
{
    return message;
}
