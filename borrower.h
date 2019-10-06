#pragma once

#include "book.h"
#include <iostream>
#include <string>
#include <vector>

class Borrower
{
protected:
	std::vector<Book> booksOwned;
	static size_t borrowerID;
	std::string borrowerName;
	size_t borrowerAge;
public:
	Borrower(std::string borrowerName, size_t borrowerAge);
	~Borrower() = default;
	std::string getBorrowerName() { return borrowerName; };
	size_t getBorrowerAge() { return borrowerAge; };

	void printBorrowedBooks();
	void borrowBook(const Book &book);
	void returnBook(const Book &book);

	friend class LibraryCard;

	Borrower(const Borrower&) = delete;
	Borrower operator=(const Borrower&) = delete;
};
