// // Use of pass by address normal
// #include<iostream>
// using namespace std;


// void incr(int &n) //pass by address i.e.  increment in a
// {
//     n++;
//     return ;
// }
// int main()
// {
//   int a=5;
//   incr(a);
//   cout<<a;
//   return 0;
// }


// Swapping of two number pass by address
#include<iostream>
using namespace std;

void swap(int &a,int &b)  // pass by address i.e. change in value
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

}