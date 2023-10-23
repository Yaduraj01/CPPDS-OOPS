#include <iostream>
#include<string.h>
using namespace std;
class cube
{
    public:
    double height;
    double width;
    double length;

    double volume()
    {
        double v;
        v = height*width*length;
        return v;
    }
    void disp_vol(double vol)
    {
        cout << "\nVolume: " << vol << "cm3" << endl;
    }

};

main()
{
    cube c;
    cout << "-----------------Finding the volume of a cube using class-----------------" << endl; 
    cout << "Enter height(in cm): ";
    cin >> c.height;
    cout << "Enter width(in cm): ";
    cin >> c.width;
    cout << "Enter length(in cm): ";
    cin >> c.length;
    double vol = c.volume();
    c.disp_vol(vol);
}


/*class dates {
public:
    int date;
    int month;
    int year;

    // Constructor
    dates(int d, int m, int y) : date(d), month(m), year(y) {}

    bool is_leap() {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            return true;
        }
        return false;
    }

    int disp_date() {
        return date;
    }

    string disp_mon() {
        const char *mon_names[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        return mon_names[month - 1]; // Adjust month index to match array (0-11)
    }
};

int main() {
    int d, m, y;
    cout << "-----------------Date Information-----------------" << std::endl;
    cout << "Enter date: ";
    cin >> d;
    cout << "Enter month (1-12): ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    dates dateObj(d, m, y); // Create an object of the "dates" class

    int dd = dateObj.disp_date();
    string mm = dateObj.disp_mon();
    bool leap = dateObj.is_leap();

    cout << "\nDate is: " << dd << "\nMonth is: " << mm << "\nIs it a leap year? : " << (leap ? "Yes" : "No") << std::endl;

    return 0;
}*/



















































































