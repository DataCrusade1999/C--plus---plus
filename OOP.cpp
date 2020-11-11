#include<iostream>
using namespace std;
class Books
{
    public:
    string title;
    string author;
    int pages;
    Books(string atitle,string Aauthor,int apages){ 
        title=atitle;
        author=Aauthor;
        pages=apages;
    }
    Books()
    {
        title="No title";
        author="No author";
        pages=0;
    }

    bool pagenum()
    {
        if (pages>300)
        {
            return true;
        }
        return false;
    }

};
int main()
{
    Books book1("Harry Potter","JK Rowling",500);

    Books book2("Lord of the Rings","Tolkein",700);
    
    Books book3;
    cout<<book3.title<<endl;

    cout<<book1.title<<endl;
    cout<<book2.author<<endl;
    cout<<book2.title<<endl;

    cout<<book1.pagenum()<<endl;
    cout<<book2.pagenum()<<endl;
    cout<<book3.pagenum()<<endl;
    

    return 0;
}