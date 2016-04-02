#include "StdAfx.h"
#include <cstdlib>
#include <iostream>
#include "book.h"
using namespace std;

int menu_case()
{
	int menu;
    cout << "Choose the case: \n" << endl;
    cout << "1. Enter quantity of the boooks in the library\n"
         << "2. Add new book to the library\n"
         << "3. Find information about book by number\n"
         << "4. Show the list of books\n"
         << "5. Exit\n" << endl;
    cout << ">>>";
	fflush(stdin);
    cin >> menu;
	return menu;
}

void main()
{
	
	book **Lib;
	int n;
	int i=0;
	
	int menu = menu_case();
	do
	switch (menu)
	
	{
		case 1:
			{
			cout<<"Enter the quantity of books:";
			cin >> n;
			Lib=new book*[n];
            cout << "It can be only "; cout<< n; cout<< " books in the library" << endl;
			break;
			}
		case 2:
			{
				book * p = new book();
				p->Set();
				Lib[i]=p;
				delete p;
				i++;
				break;
			}
		
       case 3:
		   {
            cout << "Enter the number of the book:";
			cin >> i;
			cout << "Choosen book is:" << endl;
			cout << Lib[i];
            break;
		   }
       case 4:
		   {
		   int i,j;
            cout << "List of the books in the library" << endl;
			for (i=0, j=0; i<n; i++, j++)
			{
				cout << j;
				cout << ". ";
				cout << Lib[i]; 
				cout << ";"<< endl;
			}
			break;
		   }
            
        case 5:
			{
            cout << "Exit the library..." << endl;
            exit(EXIT_SUCCESS);
            break;
			}
		default:
			cerr << "You made invalid case." << endl;
            exit(EXIT_FAILURE);
	}
	while(i!=5);
}
	
