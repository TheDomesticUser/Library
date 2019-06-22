#include "book.h"
#include <sstream>

unsigned short Book::bookID = 0;

Book::Book(std::string bookName, std::string bookAuthor, std::string bookGenre, unsigned short bookNumberOfPages, unsigned short bookAge)
{
	this->bookName = bookName;
	this->bookAuthor = bookAuthor;
	this->bookGenre = bookGenre;
	this->bookNumberOfPages = bookNumberOfPages;
	this->bookAge = bookAge;
}

std::string Book::getBookInfo()
{
	std::stringstream bookInfo;
	bookInfo << bookName << " information:\nAuthor: " << bookAuthor << "\nGenre: " << bookGenre <<
		"\nNumber of pages: " << bookNumberOfPages << "\nAge: " << bookAge;
	return bookInfo.str();
} 