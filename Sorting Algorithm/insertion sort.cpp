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
 void insertion_sort()
 {
     for(int i=1;i<n;i++)
     {
         int key=arr[i];
         int j=i-1;
         while(key<arr[j]&&j>=0)
         {
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=key;
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
    insertion_sort();
    cout<<"After sorting elements are: ";
    print();

}
