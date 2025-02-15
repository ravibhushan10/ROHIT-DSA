// finding the element in increasing sorted array
#include<iostream>
int Binary_search(int arr[],int n,int key)
{
    int start=0,end=n-1,mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(void)
{
    int n;
    int arr[1000];
   std :: cout<<"Enter the size of array:";
    std ::cin>>n;
    std ::cout<<"Enter the  elements of array:";
    for(int i=0;i<n;i++)
    {
        std ::cin>>arr[i];
    }


    // Sorting our array by insertion sort
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
               std :: swap(arr[j],arr[j-1]);
            }
        }
    }
    // printing sorted array
    std ::cout<<"your sorte array is:";
    for(int i=0;i<n;i++)
    {
        std ::cout<<arr[i]<<" ";
    }
    std ::cout<<std ::endl;

    
    int key;
    std ::cout<<"enter the elements you want of find:";
    std ::cin>>key;

   int result=Binary_search(arr,n,key);

if(result!=-1)
{
    std ::cout<<"elements is found at index:"<<result;
}
else{
    std ::cout<<"element is not found:";
}
   return 0;
}