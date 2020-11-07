#include<iostream>
using namespace std;
int main()
{
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Accessing the element by indexing"<<endl;
    cout<<array[0][2]<<endl;//0th row's 2nd element
    cout<<"Accessing the element using nested for loops"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout<<array[i][j]<<"\t"<<endl;
        }
        cout<<endl;    
    }
    return 0;
}