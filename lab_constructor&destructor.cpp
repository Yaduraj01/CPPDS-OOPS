#include <iostream>
using namespace std;

class date {
    int d;
    int m;
    int y;

    date(){};                               //constructor for no parameters passed
    date(int dd, int mm, int yy)           //constructor - parameterised
    {
        cout<< "Constructor called" << endl;
        d = dd;
        m = mm;
        y = yy;
    }

    ~date()                                       //destrcutor (used to relasing memory)
    {                                             
        cout<< "Destructor called" << endl ;       
    };
    /*the scope of the class will be valid until the closing curly brace of the function the class variable is called is in reached*/
};

main()
{
    date d1(25,04,23), d2(d1), d3;

    for(;;)
    {
        int i;
        date d5;
        /*the scope of d5is within these curly baces*/
    }

}