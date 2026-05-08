# 📚 Library Management System

A console-based Library Management System built in **C++** as part of the Thiranex internship program. This application allows users to manage books in a library through a simple text-based menu interface.

---

## 🚀 Features

- **Add Book** — Register a new book with a unique ID, title, and author name
- **Display All Books** — View the complete list of books along with their availability status
- **Issue Book** — Mark a book as issued to a user
- **Return Book** — Mark a previously issued book as returned and available
- **Search Book** — Search for books by title or author name

---

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP), Classes, Vectors, Loops

---

## 📁 Project Structure

```
Library_Management/
│
└── library.cpp       # Main source file containing all logic
```

---

## ⚙️ How to Compile and Run

### Prerequisites
- A C++ compiler (e.g., `g++` via GCC or MinGW)

### Steps

**1. Clone the repository:**
```bash
git clone https://github.com/kanikasathishkumar-tech/Library_Management.git
cd Library_Management
```

**2. Compile the program:**
```bash
g++ library.cpp -o library
```

**3. Run the program:**
```bash
./library        # On Linux/macOS
library.exe      # On Windows
```

---

## 🖥️ Usage

Once the program runs, a menu will appear:

```
====================================
     LIBRARY MANAGEMENT SYSTEM
====================================
1. Add Book
2. Display All Books
3. Issue Book
4. Return Book
5. Search Book
6. Exit
Enter your choice:
```

Follow the on-screen prompts to enter book details or perform actions.

---

## 📌 Sample Interaction

```
Enter your choice: 1

Enter Book ID: 101
Enter Book Title: The Alchemist
Enter Author Name: Paulo Coelho

Book added successfully!
```

---

# 🧠 OOP Concepts Used

- **`Book` class** — Stores book ID, title, author, and issued status
- **`Library` class** — Manages a collection of books and provides all operations
- **Encapsulation** — Book data is managed through class methods
- **Vectors** — Used to dynamically store the list of books


## 📄 License

This project is open-source and available for educational purposes.
