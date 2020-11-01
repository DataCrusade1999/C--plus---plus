#include<iostream>
using namespace std;

void max(int a,int b,int c)
{
    if (a>=b&&a>=c)
    {
        cout<< a <<" is greater than "<< b <<" and " << c <<endl;
    }
    else if(b>=a&&b>=c)
    {
        cout<< b <<" is greater than "<< c <<" and "<< a <<endl;
    }
    else
    {
        cout<< c <<" is greater than "<< a <<" and " << b <<endl;
    }
    
}
int main()
{
    int x=3;
    if(x>3 && x<10)
    {
        cout<<"Greater than 3"<<endl;
    }
    else if (x>3 || x<10)
    {
        cout<<"x is greater than 10"<<endl;
    }
    if (x==3)
    {
        cout<<"But x is not 3"<<endl;
    }
    else
    {
        cout<<"Less than 3"<<endl;
    }
    max(2,3,2);
    return 0;
}