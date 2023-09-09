#include<iostream>
using namespace std;
class Soln
{
    public:
    bool leapyr(int year)
    {
        if((year%4==0 && year%100!=0)|| year%400==0)
        return true;
        else
        return false;
    }
};
int main()
{
    Soln obj;
    int year;
    cin>>year;
    cout<<obj.leapyr(year);



}

