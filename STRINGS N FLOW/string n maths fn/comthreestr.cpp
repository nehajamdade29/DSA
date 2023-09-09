#include<iostream>
using namespace std;
class soln
{
    public:
    bool xyz(string str1,string str2,string str3)
    {
        return str1==str2&& str1==str3;
    }

};
int main()
{ soln obj;
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    cout<<obj.xyz(str1,str2,str3);
    

}