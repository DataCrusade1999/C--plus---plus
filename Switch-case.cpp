#include<iostream>
using namespace std;
string getdayname(int a)
{
    switch (a)
    {
    case 1:
    return "Monday";
    break;
    case 2:
    return "Tuesday";
    break;
    case 3:
    return "Wednesday";
    break;
    case 4:
    return "Thursday";
    break;
    case 5:
    return "Friday";
    break;
    case 6:
    return "Saturday";
    break;
    case 0:
    return "Sunday";
    break;
    default:
    return "Invalid Choice";
    break;
    }
}
int main()
{
    int a;
    cout<<"Enter Your Day Number?"<<endl;
    cin>>a;
    cout<<getdayname(a);
    return 0;
}