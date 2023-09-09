#include<iostream>
using namespace std;
class han
{
    public:
        int string_length(string str)
        {
            return str.length();
        }
    };
int main()
{
    han obj;
    string str;
    cin>>str;
    cout<<obj.string_length(str);
}