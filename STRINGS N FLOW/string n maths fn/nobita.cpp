#include<iostream>
using namespace std;
class student
{public:
int xyz(int A,int B)
{
return A/B;}

};
int main()
{
   student  obj;
int p,q;
cin>>p>>q;
cout<<obj.xyz(p,q);

}
