#include "LibraryCard.h"

size_t LibraryCard::cardIdIncrementer = 0;

LibraryCard::LibraryCard(Library* library, Borrower* borrower)
{
	this->library = library;
	this->borrower = borrower;
	cardId = cardIdIncrementer++;
}

LibraryCard::~LibraryCard()
{
	delete library, borrower;
}

