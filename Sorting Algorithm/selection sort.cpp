#include<iostream>
using namespace std;
 int arr[10],n;
 void input()
 {
     cout<<"Enter size: ";
     cin>>n;
     cout<<"Enter array elements: ";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
 }
 void selection_sort()
{
   for(int i=0;i<n;i++)
   {
       int min=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[min])
           {
               min=j;
           }
       }
       int temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp;
   }

}
 void print()
    {
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    }
int main()
{
    input();
    cout<<"Before sorting elements are: ";
    print();
    cout<<endl;
    selection_sort();
    cout<<"After sorting elements are: ";
    print();

}

