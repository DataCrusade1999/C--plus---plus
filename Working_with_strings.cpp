#include<iostream>
using namespace std;
int main()
{
    string name="Ashutosh Pandey";
    string Animal="Dog";
    string SubString=name.substr(0,8);
    Animal[0]='C';
    Animal[1]='a';
    Animal[2]='t';
    cout<<name<<endl;
    cout<<"Ashutosh\nPandey\n";
    cout<<name.length()<<endl;
    cout<<name.find("Ashutosh",0)<<endl;
    cout<<name.find("Pandey",0)<<endl;
    cout<<name[0]<<endl;
    cout<<Animal<<endl;
    cout<<SubString<<endl;
    return 0;

}