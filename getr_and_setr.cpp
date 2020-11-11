#include<iostream>
using namespace std;
class Movie
{
    private:
    string rating;
    public:
    string title;
    string director;

    Movie(string atitle,string adirector,string arating)
    {
        title=atitle;
        director=adirector;
        setrating(arating);
    }
    void setrating(string arating)
    {
        if(arating=="G"||arating=="PG-13"||arating=="NR")
        {
            rating=arating;

        }
        else
        {
            rating="NR";
        }
        
        
    }
    string getrating()
    {
        return rating;
    }
};
int main()
{
    Movie Avengers("The Avengers","Joss Whedon","PG-13");
    Avengers.setrating("Dog");
    cout<<Avengers.getrating()<<endl;
    return 0;

}