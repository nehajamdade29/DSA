#include<iostream>
using namespace std;
class mon
{
    public:
void uppinc(int n)
{
    for(int r=1;r<n;r++)
    {
        for(int c=1;c<=n-r;c++)
        {cout<<c;
        }
        cout<<endl;
    }
}
};
int main()
{
    mon obj;
    int n;
    cin>>n;
    obj.uppinc(n);
}

