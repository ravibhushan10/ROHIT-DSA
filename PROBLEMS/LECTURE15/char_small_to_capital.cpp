// convert the character from small to capital
#include <iostream>
#include <cmath>
using namespace std;
char convert(char letter)
{
//   char ans=letter-32;
char ans=letter-'a'+'A';
  return ans;
}
int main()
{
    char alphabate;
    cout<<"enter your alphabate:";
    cin>>alphabate;
    cout<<"your converted alphabate is:"<<convert(alphabate);
return 0;
}