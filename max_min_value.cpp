#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};

int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }

    Student mx;
    mx.marks=INT_MIN;
    Student mn;
    mn.marks=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].marks>mx.marks){
            mx=arr[i];
        }
        
        if(arr[i].marks<mn.marks){
            mn=arr[i];
        }
    }
    
    cout<<"max"<<endl;
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    cout<<"min"<<endl;
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    
    return 0;
}