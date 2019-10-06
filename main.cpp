#include "library.h"
#include "book.h"
#include "borrower.h"
#include <iostream>
#include <string>
#include <limits>
#include <vector>

int main()
{
	std::cout << "What do you want to do?" << '\n';



	Book book1("Diary of a Wimpy Kid", "Jeff Kinney", "Comedy", 217, 2007);
	Book book2("Percy Jackson: The Sea of Monsters", "Rick Riordan", "Adventure", 250, 2006);
	Book book3("Timmy Failure", "Stephan Pastis", "Comedy", 301, 2003);
	Book book4("Moby-Dick", "Herman Melville", "Adventure", 585, 1851);

	Library library1("Library", "Address", "613-663-1323", 20, 2000);
	

	return 0;
}