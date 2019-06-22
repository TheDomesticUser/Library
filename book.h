#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book
{
private:
	static unsigned short bookID;
	std::string bookName;
	std::string bookAuthor;
	std::string bookGenre;
	unsigned short bookNumberOfPages;
	unsigned short bookAge;
public:
	Book(std::string bookName, std::string bookAuthor, std::string bookGenre, unsigned short bookNumberOfPages, unsigned short bookAge);
	~Book() = default;
	std::string getBookInfo();
	
	friend class Borrower;
};

#endif BOOK_H