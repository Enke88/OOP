#include "book.h"

book::book()
{
	strcpy(name, "");
	strcpy(author, "");
	f = 0;
}
void book::View()
{
	cout << name << ", ";
	cout << author << endl;
	if (f == 1)
		cout << "Book is given" << endl;
	else
		cout << "Book is avaliable" << endl;
}
void book::Set()
{
	cout << "Enter the title, please:";
	cin >> name;
	cout << "\n";
	cout << "Enter the author, please:";
	cin >>author;
	f = rand() % 2;
}
