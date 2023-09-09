#include<iostream>
using namespace std;
class xyz
{
    public:
    double distbwpts(double x1,double x2,double y1, double y2)
    {
        return (x2-x1)+(y2-y1);
    }
};
int main()
{
    xyz obj;
    double x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    cout<<obj.distbwpts(x1,x2,y1,y2);
}