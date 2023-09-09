#include<iostream>
using namespace std;
class Solution {
public:
    string daysOfWeek(int num) {
        // Your code goes here
         num>=0;
        string day="";
        switch(num){
            case 1:day="Monday";break;
            case 2:day="Tuesday";break;
            case 3:day="Wednesday";break;
            case 4:day="Thursday";break;
            case 5:day="Friday";break;
            case 6:day="Saturday";break;
            case 7:day="Sunday";break;
            default:day="wrong input";
        }
        return day;
    }
};

int main()
{
    Solution obj;
    int num;
    cin>>num;
    cout<<obj.daysOfWeek(num);
}
