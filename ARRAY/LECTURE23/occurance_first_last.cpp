#include<iostream>
#include<algorithm>
#include<utility>
std :: pair<int,int> occurance (int arr[],int n,int key)
{
     int start=0,end=n-1,mid,first=-1;
     while(start<=end)
     {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
            
            
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }

      
     int  last=-1;
     start=0,end=n-1;
     while(start<=end)
     {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            last=mid;
            start =mid+1;
            
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }
     return {first,last};
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
    std ::cout<<"enter the elements you want to find first and last occurance in array:";
    std ::cin>>key;
   
  
   std :: pair<int,int>result= occurance(arr,n,key);
    std ::cout<<"first and last occurance of "<<key<< " at index : ("<<result.first<<","<<result.second<<")";
   return 0;
}