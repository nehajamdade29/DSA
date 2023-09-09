#include<iostream>
#include<vector>
using namespace std;
class student
{
    public:
    vector<int> var(int a, int b)
    {
        vector<int> r={a+b,a-b,a*b,a/b};
        return r;
    }
};
int main()
{ student obj;
    int a,b;
    cin>>a>>b;
    vector<int> p=obj.var(a,b);
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<" ";
    }
}