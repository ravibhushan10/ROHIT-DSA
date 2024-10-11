// Search an element in an arry
#include<iostream>
using namespace std;
int main()
{
    int find;
    int index=-1;
    cout<<"enter the elements to find in arry:"<<endl;
    cin>>find;
    int arr[5]={3,5,7,8,1};
    for(int i=0;i<5;i=i+1)
    {
        if(find==arr[i])
        {
            index= i;
            break;
        }
    }
    if(index!=-1)
    {
        cout<<"element found at index :"<<index<<endl;
    }
    else{
        cout<<"element is not present an array."<<endl;
    }
return 0;
}