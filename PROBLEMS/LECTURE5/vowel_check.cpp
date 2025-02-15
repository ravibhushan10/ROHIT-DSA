#include<iostream>
int main(void)
{
    char c;
    std ::cout<<"enter the character:";
    std ::cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        std ::cout<<c<<": is vowel";
    }
    else 
    {
        std ::cout<<c<<": is consonant";
    }
   return 0;
}