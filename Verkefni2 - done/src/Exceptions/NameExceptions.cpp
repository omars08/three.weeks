#include "NameExceptions.h"

NameExceptions::NameExceptions()
{

}
NameExceptions::NameExceptions(string message)
{
    this->message = message;
}
string NameExceptions::getMessage()
{
    return message;
}
bool NameExceptions::nameValid(const string& name)
{
    for(int i = 0; i < name.size(); i++){
        if(isalpha(name[i]) == false){
            return false;
        }
    }
    return true;
}
string NameExceptions::getName()
{
    return name;
}
void NameExceptions::setName(string name)
{
    this->name = name;
}
