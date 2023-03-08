#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact =1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ans=(factorial(n)/(factorial (r)*factorial(n-r)));
    return ans;
}
int main()
{
    cout<<"Enter n and r"<<endl;
    int n,r;
    cin>>n>>r;
    int answer=nCr(n,r);
    cout<<"nCr of the given number is "<<answer<<endl;
}
