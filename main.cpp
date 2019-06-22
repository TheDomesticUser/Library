#include "library.h"
#include "book.h"
#include "borrower.h"
#include <iostream>
#include <string>
#include <limits>
#include <vector>

int main()
{

	Library library1("Library", "Address", "613-666-6969", 20, 2000);

	Book book1("Diary of a Wimpy Kid", "Jeff Kinney", "Comedy", 217, 15);
	Book book2("Percy Jackson: The Sea of Monsters", "Rick Riordan", "Adventure", 250, 10);
	Book book3("Timmy Failure", "Stephan Pastis", "Comedy", 301, 12);

	Borrower borrower1("John Doe", 25);

	borrower1.borrowBook(book1);
	borrower1.borrowBook(book2);

	borrower1.printBorrowedBooks();

	borrower1.returnBook(book1);

	borrower1.printBorrowedBooks();


	std::cout << "Press ENTER to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return 0;
}