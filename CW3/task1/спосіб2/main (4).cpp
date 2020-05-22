#include <iostream>
#include <list>
#include <fstream>
#include "Book.cpp"
using namespace std;

list <Book> readFile(string fileName);
void writeFile(string fileName, list<Book> books);


int main() {
    list <Book> books = readFile("../task1/input.txt");
    writeFile("output.txt", books);


    return 0;
}

list <Book> readFile(string fileName)
{
    list <Book> books;
    string line;
    ifstream myFile(fileName);
    while (getline(myFile, line)) {
        

        
       /* string word;
        for (size_t i = 0; i < line.length; i++)
        {
            if (line[i] == ',')
            {
                
            }
            word += line[i];
        }*/
        string delimiter = ">=";
        string name = line.substr(0, line.find(delimiter));
        string author = line.substr(1, line.find(delimiter));
       // int year = stoi(line.substr(2, line.find(delimiter)));
        string genre = line.substr(3, line.find(delimiter));
        Book newBook(name, author, 0, genre);
        books.push_back(newBook);
    }
    myFile.close();
    return books;
}

void writeFile(string fileName, list<Book> books)
{
    ofstream myFile(fileName);
    std::list<Book>::iterator it;
    for (it = books.begin(); it != books.end(); ++it) {
        myFile << it->getInfo();
    }

    myFile.close();
}