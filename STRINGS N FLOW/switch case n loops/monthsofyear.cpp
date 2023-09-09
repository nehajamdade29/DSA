#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<string> MonthsOfTheYear () {
		// Your code goes here
          vector<string> months = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };
        return months;
	}
};

int main()
{
    Solution obj;
    vector<string> months = obj.MonthsOfTheYear();
    for(int i=0;i<months.size();++i)
    {
        cout<<months[i]<<" ";
    }
}