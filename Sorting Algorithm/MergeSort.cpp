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
void Merge(int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[m+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void merge_sort(int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        merge_sort(l,m);
        merge_sort(m+1,r);
        Merge(l,m,r);
    }
}
void print()
{
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" " ;
    }
}
int main()
{
    input();
    cout<<"Before sorting array elements are: ";
    print();
    cout<<endl;
    merge_sort(0,n-1);
    cout<<"After sorting elements are: ";
    print();
}
