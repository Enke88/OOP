#include "StdAfx.h"
#include "book.h"
	
book::book()
{
	strcpy(name,"");
	strcpy(author,"");
	f=0;
}

void book::View()
{
	cout << name << endl;
	cout << author << endl;
	if (f==1)
		cout << "Book is given" << endl;
	else
		cout<< "Book is avaliable" << endl;
}
void book::Set()
{
	cout << "Enter the title, please:";
	cin.getline(name, sizeof(name));
	cout << "Enter the author, please:";
	cin.getline(author, sizeof(author));
	f = rand() % 2;
}