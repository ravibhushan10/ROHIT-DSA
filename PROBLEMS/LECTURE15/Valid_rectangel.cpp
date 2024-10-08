// check rectangle is formed or not of the taking of all four inputs
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int a,b,c,d;
   cout<<"enter the sides of rectangle:"<<endl;
   cin>>a;
   cin>>b;
   cin>>c;
   cin>>d;
if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
{
   cout<<"yes rectangle is formed";
}
else {
   cout<<"no rectangle is not formed";

}
return 0;
}
