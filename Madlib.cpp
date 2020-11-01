#include<iostream>
#include<string>
using namespace std;
int main()
{
    string verb,act,place;
    cout<<"Enter a verb: ";
    getline(cin, verb);
    cout<<"Enter an act: ";
    getline(cin, act);
    cout<<"Enter a place: ";
    getline(cin,place);
    cout<<"get "<< verb <<" here\n";
    cout<<"And "<<act<<" on me\n";
    cout<<"and " <<place<<" me\n";
    return 0;
}