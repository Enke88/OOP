#include "StdAfx.h"
#include <string.h>
#include <iostream>

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