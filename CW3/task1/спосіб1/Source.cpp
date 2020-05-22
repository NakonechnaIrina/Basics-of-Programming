Ira, [22.05.20 12:52]
[Переслано от Andriy]
#include <iostream>
#include <fstream>
#include <list>

using namespace std;
struct Book {
    string name;
    string author;
    int year;
    string genre;
};

int main() {
    ifstream fin("in1.txt");
    list<Book> books;
    while (true) {
        Book book;
        getline(fin, book.name);
        getline(fin, book.author);
        string temp;
        getline(fin, temp);
        book.year = stoi(temp);
        getline(fin, book.genre);
        books.push_back(book);
        if (fin.eof()) {
            break;
        }
    }
    fin.close();
    books.sort([](const Book& book1, const Book& book2) {
        if (book1.genre == book2.genre) {
            return book1.name < book2.name;
        }
        return book1.name < book2.genre;
        });
    ofstream fout("out2.txt");
    Book oldestBook;
    oldestBook.year = 1000000;
    for (auto i : books) {
        if (i.year < oldestBook.year) {
            oldestBook = i;
        }
        fout << i.name << " " << i.author << " " << i.year << " " << i.genre << "\n";
    }
    fout.close();
    cout << "Найстаріша книга це " << oldestBook.name << " " << oldestBook.author << " " << oldestBook.year << " "
        << oldestBook.genre << "\n";
    return 0;
}