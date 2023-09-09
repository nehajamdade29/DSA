#include<iostream>
using namespace std;
class student
{
    public:
    int step(int number)
    {
        return (number+8)/3%5*5;
    }

};
int main()
{
    student obj;
    int a;
    cin>>a;
    cout<<obj.step(a);
    
}
