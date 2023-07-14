#include<iostream>
#include<string>
using namespace std;

string removeOccurence(string s, string part)
{
    while(s.length()!=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s,part;
    cout<<"Enter your String"<<endl;
    cin>>s;

    cout<<"Enter your SusString"<<endl;
    cin>>part;

    cout<<"The removed string is\n"<<removeOccurence(s,part)<<endl;
}