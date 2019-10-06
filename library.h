#pragma once
#include "book.h"
#include <vector>

class Library
{
private:
	std::vector<Book> libraryBooks;
	std::string libraryName;
	std::string libraryAddress;
	std::string libraryPhoneNumber;
	size_t libraryAge;
	size_t maxAmountOfBooks;
public:
	Library(std::string libraryName, std::string libraryAddress, std::string libraryPhoneNumber, size_t libraryAge, size_t maxAmountOfBooks);
	~Library() = default;

	std::string getLibraryName() { return libraryName; };
	std::string getLibraryAddress() { return libraryAddress; };
	std::string getLibraryPhoneNumber() { return libraryPhoneNumber; };
	size_t getLibraryAge() { return libraryAge; };
	void addBook(const Book);

	friend class Book;
	friend class LibraryCard;

	Library(const Library&) = delete;
	Library& operator=(const Library&) = delete;
};
