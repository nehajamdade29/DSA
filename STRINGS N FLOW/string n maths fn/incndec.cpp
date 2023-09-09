#include<iostream>
#include<vector>
using namespace std;
class res
{
    public:
    vector<int> var(int X,int Y)
    {
        --X,++Y;
        vector<int> r;
        r.push_back(X);
      r.push_back(Y);
        return r;

    }

};
int main()
{
    res objp;
    int X,Y;
    cin>>X>>Y;
    vector<int>s=objp.var(X,Y);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }






}