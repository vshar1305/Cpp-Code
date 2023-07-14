#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool isPalindrome(char name[],int size)
{
    int start=0;
    int end=size-1;
     
     while(start<=end)
     {
        if(toLowerCase(name[start])==toLowerCase(name[end]))
        {
            return true;
        }
        start++;
        end--;
     }
    return false;
}
int main()
{
    char name [20];
    int size;

    cout<<"Enter the size of an Character Array"<<endl;
    cin>>size;

    cout<<"Enter the Character Array"<<endl;
    cin>>name;

    if(isPalindrome(name,size))
    {
        cout<<"The Character Array Is palindrome"<<endl;
    }
    else
    {
        cout<<"Character Array Is Not Palindrome"<<endl;
    }
}