#include "NameExceptions.h"


NameExceptions::NameExceptions(string message)
{
    this->message = message;
}
string NameExceptions::getMessage()
{
    return message;
}
