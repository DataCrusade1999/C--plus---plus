#include<iostream>

using namespace std;
int main()
{
    string placeholder="short story";
    int number;
    number=64;
    cout << "This is a  " <<placeholder<<endl;// If you want to append at the end use this method
    cout << "It used to be a very long story just "<< number << " days ago" <<endl;
    cout << "but somehow it became a short one" <<endl;
    cout << "whatever happend to long story " <<endl;
    cout <<"=====================================================\n"<<endl;
    cout <<"changing version of the story mid way below\n"<<endl;
    cout <<"=====================================================\n"<<endl;
    number=365;
    placeholder="long story";
    cout <<"This is a "<< placeholder <<endl;
    cout << "It used to be a very "<< placeholder  <<  number <<" days ago" <<endl;
    cout << "but somehow it became a short one" <<endl;
    cout << "whatever happend to long story " <<endl;
}