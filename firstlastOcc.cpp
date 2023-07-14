#include<iostream>
using namespace std;

int firstOccurence (int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key)
        {
            end=end-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccurence (int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=end-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    cout<<"Enter the size of an Array you want to enter"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the Array"<<endl;
    int arr[100];
    input(arr,size);
    cout<<"Enter the key you want to search"<<endl;
    int key;
    cin>>key;

    cout<<"The First occurence of the key "<<firstOccurence(arr,size,key)<<endl;
    cout<<"The last occurence of the key "<<lastOccurence(arr,size,key)<<endl;

}