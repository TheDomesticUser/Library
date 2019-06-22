#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <vector>

class Library
{
private:
	std::vector<Book> libraryBooks;
	std::string libraryName;
	std::string libraryAddress;
	std::string libraryPhoneNumber;
	unsigned short libraryAge;
	unsigned short maxAmountOfBooks;
public:
	Library(std::string libraryName, std::string libraryAddress, std::string libraryPhoneNumber, unsigned short libraryAge, unsigned short maxAmountOfBooks);
	~Library() = default;
	std::string getLibraryName() { return libraryName; };
	std::string getLibraryAddress() { return libraryAddress; };
	std::string getLibraryPhoneNumber() { return libraryPhoneNumber; };
	short getLibraryAge() { return libraryAge; };
	void addBook(const Book);
	friend std::ostream &operator<<(std::ostream &, const Library &);
	friend class Book;
};

#endif