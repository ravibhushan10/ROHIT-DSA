//  Print these type of pattern for any number
//      a
//      b b
//      c c c
//      d d d d
//      e e e e e

#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:"<<std ::endl;
    while(true)
    {
    std ::cin>>n;
       if(n>0 && n<=26)
       {
        break;
       }
       else 
       {
         std ::cout<<"please enter the value between (1 to 26:)"<<std ::endl;
       }
    }

    
    for(int row=1;row<=n; row++)
    {
       char name= 'a'+(row-1);
       for(int j=row; j>0;j--)
       {
         std ::cout<<name<<" ";
       }
       std ::cout<<std ::endl;
       
    }
   return 0;
}