#include<iostream>
#include<string>
using namespace std;

struct Book
{
    string name;
    string author;
    int year_of_publication;
    string genre;

    Book(string n, string a, int y, string g)
    {
        name = n;
        author = a;
        year_of_publication = y;
        genre = g;
    }

    string getInfo()
    {
        string result = name + ", " + author + ", " + to_string(year_of_publication) + ", " + genre + "\n";
        return result;
    }
};

