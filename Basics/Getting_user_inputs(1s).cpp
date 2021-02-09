#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"\nEnter your name:";
    getline(cin, name);
    cout<<"\nYour name is "<<name;
    return 0;
}