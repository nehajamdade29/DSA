#include<iostream>
#include<math.h>
using namespace std;
class soln
{
    public:
    int nthGP(int a,int r,int n)
    {
        return a*pow(r,n-1);
    }
};
int main()
{
    soln obj;
    int a,r,n;
    cin>>a>>r>>n;
    cout<<obj.nthGP(a,r,n);

}