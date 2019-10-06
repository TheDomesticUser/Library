#include "book.h"
#include <sstream>

size_t Book::bookID = 0;

Book::Book(std::string bookName, std::string bookAuthor, std::string bookGenre, size_t bookNumberOfPages, size_t bookYearOfRelease)
{
	this->bookName = bookName;
	this->bookAuthor = bookAuthor;
	this->bookGenre = bookGenre;
	this->bookNumberOfPages = bookNumberOfPages;
	this->bookYearOfRelease = bookYearOfRelease;
}
