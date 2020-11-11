#include<iostream>
using namespace std;

class Chef
{
    public:
    void makechicken()
    {
        cout<<"Chef makes chicken"<<endl;
    }
    void makesalad()
    {
        cout<<"Chef makes salad"<<endl;
    }
    void makesomething()
    {
        cout<<"Chef is making something"<<endl;
    }

};
class Ichef : public Chef
{
    public:
    void makepasta()
    {
        cout<<"IChef Makes pasta"<<endl;
    }
    void makesomething()//Overriding a method
    {
        cout<<"IChef is making ribs"<<endl;
    }


};
int main()
{
    Chef chef;
    chef.makechicken();
    chef.makesomething();

    Ichef khef;
    khef.makechicken();
    khef.makepasta();
    khef.makesomething();

    return 0;

}