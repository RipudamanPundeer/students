#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    int roll_no{0};
    vector <int> marks;
    int temp{0};
    string st_name;
    double avg{0.0};
    cout<<"Enter the name of the student"<<endl;
    getline(cin,st_name);

    cout<<"Enter roll number of student "<<endl;
    cin>>roll_no;

    cout<<"Enter the marks between 0 to 100 (enter negative number to exit)"<<endl;
    cin>>temp;

    while(temp>0)
    {
        marks.push_back(temp);
        cout<<"Enter the marks between 0 to 100 (enter negative number to exit)"<<endl;
        cin>>temp;
    }
    
    for(int i{0};i<marks.size();i++)
    {
        avg=avg+marks.at(i);
    }
    cout<<"NAME: "<<st_name<<"\n Roll no: "<<roll_no<<"\nAverage marks:"<< avg/marks.size()<<endl;
}