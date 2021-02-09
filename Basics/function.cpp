//fuctions in c++ is just like functions in c almost 
//copycat apart from the general syntax😁😁.
#include<iostream>
#include<string>
using namespace std;
void name()
{
    string name;
    cout<<"Enter Your Name:";
    getline(cin,name);
    cout<<"Hello "<<name<<endl;
}
void age(int num,string behaviour)
{
    cout<<"Your Age Is "<< num<<endl;
    cout<<"Your behaviour is "<<behaviour<<endl;

}
int main()
{
    string behaviour;
    cout<<"Enter your behaviour"<<endl;
    getline(cin,behaviour);
    name();
    age(21,behaviour);

    return 0;
}