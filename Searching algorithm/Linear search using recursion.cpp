#include<iostream>
using namespace std;
int arr[10],n,k;
bool linear_search(int arr[],int n,int k)
{
    if(n==0)
        return false;
    if(arr[0]==k)
        return true;
    else
        return linear_search(arr+1,n-1,k);

}
int main()
{
    cout<<"Enter size: ";
    cin>>n;
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter searching element: ";
    cin>>k;
   if(linear_search(arr,n,k))
   {
       cout<<"Element is present";
   }
   else
   {
       cout<<"element is not present";
   }
}

