#include "borrower.h"
#include "book.h"
#include <iostream>
#include <string>

unsigned short Borrower::borrowerID = 0;

// Overloading the left bit shift operator for outputting the borrower information
std::ostream &operator<<(std::ostream out, const Borrower &borrower)
{
	out << "Borrower name: " << borrower.borrowerName << "\nBorrower age: " << borrower.borrowerAge;
	return out;
}

Borrower::Borrower(std::string borrowerName, short borrowerAge)
{
	this->borrowerName = borrowerName;
	this->borrowerAge = borrowerAge;
	borrowerID++;
}

void Borrower::printBorrowedBooks()
{
	if (booksOwned.empty()) {
		std::cout << borrowerName << " books: " << '\n';

		for (short bookIter = 1; bookIter <= booksOwned.size(); bookIter++) {
			std::cout << bookIter << ": " << booksOwned[bookIter - 1].bookName << '\n';
		}
	} else {
		std::cout << borrowerName << " currently has no borrowed books." << '\n';
	}
}

void Borrower::borrowBook(const Book &book)
{
	if (booksOwned.size() > 5) {
		std::cout << "A borrower cannot sign out more than 5 books at a time!" << std::endl;
		return;
	} else {
		booksOwned.push_back(book);
	}
}

void Borrower::returnBook(const Book &book)
{
	// Find the index of the book argument in the books owned vector
	for (short bookIter = 0; bookIter < booksOwned.size(); bookIter++) {
		if (booksOwned[bookIter].bookID == book.bookID) {
			booksOwned.erase(booksOwned.begin() + bookIter);
			return;
		}
	}

	std::cerr << "The borrower has never borrowed " << book.bookName << ". You cannot return it!" << '\n';
}