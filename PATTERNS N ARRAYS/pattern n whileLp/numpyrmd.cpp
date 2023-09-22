#include<iostream>
using namespace std;
class mns
{
    public:
    void numpyramid(int n)
{
    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=r;c++)
        {cout<<r;
        }
        cout<<endl;
    }
}
    };
    int main()
    {
        mns obj;
        int n;
        cin>>n;
        obj.numpyramid(n);
    }
  




