#include<iostream>
using namespace std;
class sad
{
    public:
    bool xyz(string str1,string str2)
    {
        return str1==str2;
    }
};
int main()
{
    sad obj;
    string str1,str2;
    cin>>str1>>str2;
    cout<<obj.xyz(str1,str2);

}
