#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
class aug
{
    public:
        char grades(vector<double> marks)
        {  double sum = accumulate(marks.begin(), marks.end(), 0.0);
        double avg = sum / marks.size();
        if(avg>=80)
            return 'A';
            else if(60<avg<80)
            return 'B';
            else if(40<avg<60)
            return'C';
            else
            return 'D';

        

        }   
};
int main()
{aug obj;
    vector<double> marks;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        marks.push_back(b);}
cout<<obj.grades()

    

}