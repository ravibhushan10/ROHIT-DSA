// check year in leep or not
#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"enter the year:";
    cin>>y;
    if(y%400==0)
    {
        cout<<"leap year"<<endl;
        return 0;
    }
    else if(y%4==0 && y%100!=0)
    {
        cout<<" leap year";
        return 0;
    }
    else
    cout<<"not leap year:";
    return 0;
}