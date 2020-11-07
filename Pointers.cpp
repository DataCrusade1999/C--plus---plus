#include<iostream>
using namespace std;
int main()
{
    /* A Pointer is a variable which is capable of storing the memory address of a variable
    Derefrencing a Pointer means accessing the value stored at that particular location */
    int age=21;
    int *pAge=&age;
    string name="Ashutosh Pandey";
    string *pName=&name;

    cout<<pName<<endl;
    cout<<*pName<<endl;
    cout<<pAge<<endl;
    cout<<*pAge<<endl;

    cout<<&age<<endl;

    cout<<*&age<<endl;


    return 0;
}