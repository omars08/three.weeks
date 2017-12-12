#include "MainUIExceptions.h"
#include <string>

using namespace std;

MainUIExceptions::MainUIExceptions(string message)
{
    this->message = message;
}
string MainUIExceptions::getMessage()
{
    return message;
}
