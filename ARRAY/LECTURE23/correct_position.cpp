#include<iostream>
int correctposition(int arr[],int n,int key)
{
    int start=0, end=n-1,mid,index=n;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==key)
        {
            index=mid;
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
           
        }
        else{
              index=mid;
              end=mid-1;
        }
        
    }
    return index;
}
int main(void)
{
  int n,arr[100];
    std ::cout<<"enter the size of array:";
    std ::cin>>n;
    std ::cout<<"enter the elements of arry:";
    for(int i=0;i<n;i++)
    {
       std :: cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
              std ::swap(arr[j],arr[j-1]);
            }
        }
    }
    std ::cout<<"sorted arry is:";
    for(int i=0;i<n;i++)
    {
       std :: cout<<arr[i]<<" ";
    }
    std ::cout<<std ::endl;

   int key;
    std ::cout<<"enter the elements to find correct position:";
    std ::cin>>key;

    std ::cout<<"The correct position of "<<key<<"is :"<<correctposition(arr,n,key);
   return 0;
}