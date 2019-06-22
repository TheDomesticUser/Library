#include "library.h"
#include "book.h"
#include <iostream>
#include <string>

Library::Library(std::string libraryName, std::string libraryAddress, std::string libraryPhoneNumber, unsigned short libraryAge, unsigned short maxAmountOfBooks)
{
	this->libraryName = libraryName;
	this->libraryAddress = libraryAddress;
	this->libraryPhoneNumber = libraryPhoneNumber;
	this->libraryAge = libraryAge;
	this->maxAmountOfBooks = maxAmountOfBooks;
}

void Library::addBook(const Book book)
{
	if (libraryBooks.size() >= maxAmountOfBooks) {
		std::cout << "The library " << libraryName << ", with its max amount of books of " << maxAmountOfBooks
			<< ", cannot hold any more books!";
	} else {
		libraryBooks.push_back(book);
	}
}

// Overload the << operator for Library class, printing out all the information inside
std::ostream &operator<<(std::ostream &out, const Library &library)
{
	out << "The name is " << library.libraryName << "\nThe address is " << library.libraryAddress <<
		"\nThe phone number is " << library.libraryPhoneNumber << "\nThe age is " << library.libraryAge <<
		"The max number of books it can hold is " << library.maxAmountOfBooks;
	return out;
}