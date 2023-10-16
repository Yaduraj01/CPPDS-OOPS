#include <iostream>
using namespace std;

/*class cube
{
    public:
    double height = 2.0 ;
    double width = 3.0 ;
    double length = 5.0 ;

    double volume()
    {
        double v;
        v = height*width*length;
        return v;
    }
    void disp_vol(double vol)
    {
        cout << "volume: " << vol << endl;
    }

};

main()
{
    cube c;
    double vol = c.volume();
    c.disp_vol(vol);
}*/

//disp date using class

class date()
{
    int date;
    int month;
    int year;

    bool is leap()
    {
        if(year % 4==0 || year % 100==0 && year % 400==0)
        {
            return 1;
        }
        else:
            return 0;
    }

    void disp_date()
    {
        return date;
    }

    void dis_mon()
    {
        char *mon_names[12] = {'Jan','feb','mar','apr','may','june','july','aug','sept','nov','dec'};
        return mon_names[month];
    }
}

main()
{
    
}


















































































