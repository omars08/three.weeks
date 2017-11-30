#ifndef SUPERHERO_H
#define SUPERHERO_H

#include <string>


class Superhero
{
    public:
        Superhero(string name, int age, char superpower);
        void set_name();
        void set_age();
        void set_superpower();



    private:
    string name;
    int age;
    char superpower;

};

#endif // SUPERHERO_H
