#pragma once

#include "library.h"
#include "borrower.h"
class LibraryCard
{
	Library* library;
	Borrower* borrower;
	size_t cardId;
	static size_t cardIdIncrementer;
public:
	LibraryCard(Library* library, Borrower* borrower);
	~LibraryCard();
	
	LibraryCard(const Library&) = delete;
	LibraryCard& operator=(const Library&) = delete;
};

