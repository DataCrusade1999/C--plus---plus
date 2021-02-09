#include<iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int secret_num=double(rand() % 100),guess,guesscount=1,guesslimit=3;
    string choice;
    do
    {
        cout<<"Enter the number?"<<endl;
        cin>>guess;
        guesscount++;
        cout<<"Do you want a hint? If Yes Then Type y Otherwise Type n"<<endl;
        cin>>choice;
        if (choice=="y")
        {
            cout<<"The Number Is Less Than 100"<<endl;
        }
    } while (guess!=secret_num && guesscount<=guesslimit);
    if (guess==secret_num)
    {
        cout<<"You Win!!";
    }
    else
    {
        cout<<"Sorry But You Lost"<<endl;
        cout<<"The Secret Number Was "<< secret_num <<endl;
    }
    return 0;
}