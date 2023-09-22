#include<iostream>
using namespace std;
class sol
{
    public:
    void revhalf(int n)
    {
        for(int r=0;r<=n;r++)
        {
            for(int c=0;c<n-r;c++)
            {
                cout<<"*";
            }cout<<endl;
        }
    }
};
int main()
{
    sol obj;
    int n;
    cin>>n;
    obj.revhalf(n);

}
