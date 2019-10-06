#include "library.h"
#include "book.h"
#include <iostream>
#include <string>

Library::Library(std::string libraryName, std::string libraryAddress, std::string libraryPhoneNumber, size_t libraryAge, size_t maxAmountOfBooks)
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