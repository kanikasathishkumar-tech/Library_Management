#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int bookId, string bookTitle, string bookAuthor) {
        id = bookId;
        title = bookTitle;
        author = bookAuthor;
        isIssued = false;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook() {
        int id;
        string title, author;

        cout << "\nEnter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        books.push_back(Book(id, title, author));
        cout << "\nBook added successfully!\n";
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "\nNo books available in the library.\n";
            return;
        }

        cout << "\n----- Book List -----\n";
        for (int i = 0; i < books.size(); i++) {
            cout << "\nBook ID: " << books[i].id;
            cout << "\nTitle: " << books[i].title;
            cout << "\nAuthor: " << books[i].author;
            cout << "\nStatus: " << (books[i].isIssued ? "Issued" : "Available") << endl;
        }
    }

    void issueBook() {
        int id;
        cout << "\nEnter Book ID to issue: ";
        cin >> id;

        for (int i = 0; i < books.size(); i++) {
            if (books[i].id == id) {
                if (books[i].isIssued) {
                    cout << "\nBook is already issued.\n";
                } else {
                    books[i].isIssued = true;
                    cout << "\nBook issued successfully!\n";
                }
                return;
            }
        }

        cout << "\nBook not found.\n";
    }

    void returnBook() {
        int id;
        cout << "\nEnter Book ID to return: ";
        cin >> id;

        for (int i = 0; i < books.size(); i++) {
            if (books[i].id == id) {
                if (!books[i].isIssued) {
                    cout << "\nThis book was not issued.\n";
                } else {
                    books[i].isIssued = false;
                    cout << "\nBook returned successfully!\n";
                }
                return;
            }
        }

        cout << "\nBook not found.\n";
    }

    void searchBook() {
        string keyword;
        cin.ignore();

        cout << "\nEnter title or author to search: ";
        getline(cin, keyword);

        bool found = false;

        cout << "\n----- Search Results -----\n";
        for (int i = 0; i < books.size(); i++) {
            if (books[i].title == keyword || books[i].author == keyword) {
                cout << "\nBook ID: " << books[i].id;
                cout << "\nTitle: " << books[i].title;
                cout << "\nAuthor: " << books[i].author;
                cout << "\nStatus: " << (books[i].isIssued ? "Issued" : "Available") << endl;
                found = true;
            }
        }

        if (!found) {
            cout << "\nNo matching book found.\n";
        }
    }
};

int main() {
    Library library;
    int choice;

    do {
        cout << "\n====================================";
        cout << "\n     LIBRARY MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Search Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            library.addBook();
            break;
        case 2:
            library.displayBooks();
            break;
        case 3:
            library.issueBook();
            break;
        case 4:
            library.returnBook();
            break;
        case 5:
            library.searchBook();
            break;
        case 6:
            cout << "\nThank you for using Library Management System!\n";
            break;
        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}