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
	book **Lib=NULL;
	int n;
	int i=0;
	int menu = menu_case();
	do
	{
		switch (menu)

		{
		case 1:
		{
			cout << "Enter the quantity of books:";
			cin >> n;
			Lib = new book*[n];
			cout << "It can be only " << n << " books in the library" << endl;
			for (int i = 0; i < n; i++)
			{
				Lib[i] = NULL;
			}
			break;
		}
		case 2:
		{
			for (i = 0; i < n; i++)
			{
				if (Lib[i] != NULL)
					delete Lib[i];
				book * p = new book();
				p->Set();
				Lib[i] = p;
			}
			break;
		}

		case 3:
		{
			cout << "Enter the number of the book:";
			cin >> i;
			cout << "Choosen book is:" << endl;
			Lib[i]->View();
			break;
		}
		case 4:
		{
			int i=0, j;
			cout << "List of the books in the library" << endl;
			
				for (i = 0, j = 1; i < n; i++, j++)
				{
					cout << j;
					cout << ". ";
					if (Lib[i] != NULL)
						Lib[i]->View();
					else
						cout << "NULL";
					cout << ";" << endl;
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
		menu = menu_case();
	}
	while(i!=5);
}
	
