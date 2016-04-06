#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class book
{
	char name[30];
	char author[30];
	int f;
public:
	book();
	void View();
	void Set();
};
