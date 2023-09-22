#include<iostream>
using namespace std;
class Pat
{
    public:
    void starpattern(int n)
    { for(int r=0;r<n;r++)
    {
        for(int c=0;c<r+1;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        
    }
};
int main()
{
Pat obj;
int n;
cin>>n;
obj.starpattern(n);

};