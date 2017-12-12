#include "SSNExceptions.h"
#include <string>

using namespace std;

SSNExceptions::SSNExceptions(string message){
    this-> message = message;
}

string SSNExceptions::getMessage()
{
    return message;
}

