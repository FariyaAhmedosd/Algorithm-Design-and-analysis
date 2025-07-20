#include<iostream>
using namespace std;
    int arr[10],n,temp=0;
    void input()
    {
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    }
    void bubble_sort()
    {
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
    bubble_sort();
    cout<<"After sorting elements are: ";
    print();

}
