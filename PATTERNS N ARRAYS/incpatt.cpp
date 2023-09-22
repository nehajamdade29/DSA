#include<iostream>
using namespace std;
class num{
    public:
    void incnum(int n)
{
    for(int r=1;r<n;r++)
    {
        for(int c=1;c<=r;c++)
        {cout<<c<<" ";
        }
        cout<<endl;
    }
}
};
int main()
{
    num obj;
    int n;
    cin>>n;
    obj.incnum(n);

};

