#include<iostream>
using namespace std;
class Solution {
public:
	long factorial(int fact) {
		// Your code goes here
        int r=1;
        for(int i=1;i<=fact;++i)
        {
            r *=i;
        }
        return r;
	}
};

int main()
{
    Solution obj;
    int fact;
    cin>>fact;
    cout<<obj.factorial(fact);
}