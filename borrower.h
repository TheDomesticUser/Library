#ifndef BORROWER_H
#define BORROWER_H
#include "book.h"
#include <iostream>
#include <string>
#include <vector>

class Borrower
{
private:
	std::vector<Book> booksOwned;
	static unsigned short borrowerID;
	std::string borrowerName;
	short borrowerAge;
public:
	Borrower(std::string borrowerName, short borrowerAge);
	~Borrower() = default;
	std::string getBorrowerName() { return borrowerName; };
	short getBorrowerAge() { return borrowerAge; };
	friend std::ostream &operator<<(std::ostream, const Borrower &);

	void printBorrowedBooks();
	void borrowBook(const Book &book);
	void returnBook(const Book &book);
};

#endif