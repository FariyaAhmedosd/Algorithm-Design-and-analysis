#include<iostream>
using namespace std;
int arr[10],n,low,high,target;
bool binary_search(int arr[],int n,int low,int high,int target)
{
    if(low>high)
    {
        return false;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target)
    {
        return true;
    }
    else if(arr[mid]>target)
        return binary_search(arr,n,low,mid-1,target);
    else
        return binary_search(arr,n,mid+1,high,target);
}
int main()
{
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" Before sorting array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    cout<<"After sorting array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter searching element: ";
    cin>>target;
 if(binary_search(arr,n,0,n-1,target))
   {
       cout<<"Element is present";
   }
   else
   {
    cout<<"Element is not present";
   }
   return 0;
}


