#include "borrower.h"
#include "book.h"
#include <algorithm>

size_t Borrower::borrowerID = 0;

Borrower::Borrower(std::string borrowerName, size_t borrowerAge)
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
	} else {
		booksOwned.push_back(book);
	}
}

void Borrower::returnBook(const Book &book)
{
	
}