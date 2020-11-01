#include<iostream>
using namespace std;
int main()
{
    int a,b,result;
    char operation;
    cout<<"Enter the first number?"<<endl;
    cin>>a;
    cout<<"Enter the second number?"<<endl;
    cin>>b;
    cout<<"Enter the operation?"<<endl;
    cin>>operation;

    if(operation=='+')
    {
        result=a+b;
    }
    else if(operation=='-')
    {
        result=a-b;
    }
    else if(operation=='/')
    {
        result=a/b;
    }
    else if(operation=='*')
    {
        result=a*b;
    }
    else
    {
        cout<<"Invalid operand or oprators"<<endl;
    }
    

    cout<<"Your result is"<<endl;
    cout<<result<<endl;
    return 0;
}