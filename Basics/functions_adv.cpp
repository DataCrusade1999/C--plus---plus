#include<iostream>
using namespace std;

int cube(int number)
{
    return number*number*number;
}
int main()
{
    int number;
    cout<<"Enter a number?"<<endl;
    cin>>number;
    cout<<cube(number);
    return 0;
}