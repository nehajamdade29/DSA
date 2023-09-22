#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;

    for(int r=0;r<n;r++)
    { int x=0;
        for(int c=0;c<(2*n)-1;c++)
        {
            if(c<n-r-1)
            {
                cout<<" ";
            }
    else if(x<2*r+1)
            {
                cout<<"*";
                x++;

            }
            else
            {
                cout<<" ";
            }
        } cout<<endl;
    }
}