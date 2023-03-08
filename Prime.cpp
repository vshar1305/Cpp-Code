#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    cout<<"Enter any number"<<endl;
    int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"The given number is Prime "<<endl;
    }
    else
    {
        cout<<"The given number is not Prime "<<endl;
    }
}
