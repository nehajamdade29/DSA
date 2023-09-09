#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> fibonacci(int n) {
		// Your code goes here
        vector<int> fib;
        
        if (n >= 1)
            fib.push_back(0);
        if (n >= 2)
            fib.push_back(1);

        for (int i = 2; i < n; i++) {
            int num = fib[i - 1] + fib[i - 2];
            fib.push_back(num);
        }

        return fib;
	}
};

int main()
{
    Solution obj;
    int n;
    cin>>n;
    vector<int> r= obj.fibonacci(n);
    
    for(int i=0;i<n;++i)
    {
        cout<<r[i]<<" ";
    }
}