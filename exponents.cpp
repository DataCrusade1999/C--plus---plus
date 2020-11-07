#include<iostream>
using namespace std;
int exp(int base,int power)
{
    int result=1;
    for(int i=0;i<power;i++)
    {
        result=result*base;
    }
    return result;
}
int main()
{
    cout<<exp(4,2);
    return 0;
}