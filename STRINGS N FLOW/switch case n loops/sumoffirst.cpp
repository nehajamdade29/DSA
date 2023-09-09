#include<iostream>
using namespace std;
class Solution {
public:
    int sumOfNaturalNumbers(int n) {
        // Your code goes here
        return (n*(n+1))/2;
    }
};

int main()
{
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.sumOfNaturalNumbers(n);
}
