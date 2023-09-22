#include<iostream>
using namespace std;
class slo
{
    public:
    void random(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int c=1;c<=n;c++)
            {cout<<i*c<<" ";
            }
            cout<<endl;

        }
    }
};
int main()
{
    slo obj;
    int n;
    cin>>n;
    obj.random(n);
}