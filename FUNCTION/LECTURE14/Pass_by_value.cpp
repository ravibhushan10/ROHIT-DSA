// // Use of pass by value normal 
// #include<iostream>
// using namespace std;

// void incr(int n) //pass by value i.e. there is no increment in a
// {
//     n++;
//     return ;
// }
// int main()
// {
//   int a=5;
//   incr(a);
//   cout<<a;
// return 0;
// }


// Swapping to two number by pass by value
#include<iostream>
using namespace std;



void swap(int a,int b)  // pass by value i.e.there is no change in value
{
    int c;
    c=a;
    a=b;
    b=c;
    return ;
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"before swapping :"<< a<<" "<< b<<endl;
    swap(a,b);
    cout<<"after swapping:"<< a<<" "<< b<<endl;
    return 0;

}