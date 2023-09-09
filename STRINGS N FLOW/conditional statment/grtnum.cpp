#include<iostream>
using namespace std;
class soln
{
    public:
    int greaternum(int a,int b)
    {
        if(a>b)
        return a;
        else
        return b;
    }

};
int main()
{soln obj;
    int a,b;
    cin>>a>>b;
    cout<<obj.greaternum(a,b);

}
