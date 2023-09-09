#include<iostream>
using namespace std;
class student
{
public:
int num(int T, int N)
{
return T-N;}
};
int main()
{ student obj;
    int T,N;
    cin>>T>>N;
    cout<<obj.num(T,N);

}
