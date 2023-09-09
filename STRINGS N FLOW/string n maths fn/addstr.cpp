#include<iostream>
using namespace std;
class han
{
    public:
    string xyz(string x1,string x2)
    {
        return x1+x2;

    }

};
int main()
{
    han obj;
    string x1,x2;
    cin>>x1>>x2;
    cout<<obj.xyz(x1,x2);
}