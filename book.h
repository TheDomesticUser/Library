#pragma once

#include <iostream>
#include <string>

class Book
{
private:
	static size_t bookID;
	std::string bookName;
	std::string bookAuthor;
	std::string bookGenre;
	size_t bookNumberOfPages;
	size_t bookYearOfRelease;
public:
	Book(std::string bookName, std::string bookAuthor, std::string bookGenre, size_t bookNumberOfPages, size_t bookYearOfRelease);
	~Book() = default;
	
	friend class Borrower;
};
