#include <iostream>

using namespace std;

class Book
{
    private:
        string title, author;
        int year;
    public:
        void setTitle(string bookTitle)
        {
            title = bookTitle;
        }
        string getTitle()
        {
            return title;
        }
        void setAuthor(string bookAuthor)
        {
            author = bookAuthor;
        }
        string getAuthor()
        {
            return author;
        }
        void setYear(int bookYear)
        {
            year = bookYear;
        }
        int getYear()
        {
            return year;
        }
        void bookInfo()
        {
            cout << "Title: " << title << endl
                 << "Author: " << author << endl
                 << "Year: " << year << endl;
        }
};

int main()
{
    Book book1;
    string b_title, b_author;
    int b_year;

    cout << "Give me the title: " << endl;
    cin >> b_title;
    cout << "Give me the Author: " << endl;
    cin >> b_author;
    cout << "Give me the year: " << endl;
    cin >> b_year;

    book1.setTitle(b_title);
    book1.setAuthor(b_author);
    book1.setYear(b_year);

    book1.bookInfo();

    return 0;
}
