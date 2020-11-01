#include<iostream>
using namespace std;
int main()
{
    int i,array[5]={22,32,42,32,21};
    i=0;
    while (array[i]%2==0)
    {
        cout<<array[i]<<" is even "<<endl;
        i++;
    }
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<8);
    
    return 0;
}