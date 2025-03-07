
#include<iostream>
using namespace std;

bool isLeapYear(int year)
{

    return((year%4==0&& year% 100!=0)|| (year%400==0));
}

int ageInSeconds(int birthyear, int currentYear)
{



    int ageInSeconds =0;
    for (int year = birthyear;year<currentYear; ++year)
    {
        if(isLeapYear(year))
        {
            ageInSeconds+= 366*24*60*60 ;
        }
        else{
            ageInSeconds+=365*24*60*60  ;
        }
    }
    return ageInSeconds;
}

int main()
{
    int birthyear, currentyear;
    cout<<"Enter your birthyear ";
    cin>>birthyear;


    cout<<"Enter current year ";
    cin>>currentyear;
    cout<<"Your age in seconds is : " << ageInSeconds(birthyear, currentyear)<<" seconds" <<endl;
    return 0;
}
