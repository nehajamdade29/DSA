#include<iostream>
using namespace std;
class soln
{
    public:
    int sumofthree(int A,int B,int C)
    {
        return A+B+C;
    }
};
int main()
{
    soln obj;
    int A,B,C;
    cin>>A>>B>>C;
    cout<<obj.sumofthree(A,B,C);
}