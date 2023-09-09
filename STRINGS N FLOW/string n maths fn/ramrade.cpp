#include<iostream>
using namespace std;
class point
{
    public:
    int xyz(int a,int b,int c,int d)
    {
        return (a+b+c+d)/4;


    }
};
int main()
{
    point obj;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<obj.xyz(a,b,c,d);
    return 0;
}

