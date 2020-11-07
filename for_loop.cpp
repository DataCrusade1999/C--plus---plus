#include<iostream>
using namespace std;
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"C++ is awesome"<<endl;
    }
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>array[i]; 
    }
    cout<<"The elements of the array are"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
    
}