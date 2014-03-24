#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "MainList.h"

void menu1();
void menu2();

int main()
{
	MainList list;
	int num = 0;

	//////////////////////////////////////////////////////////////////////////
	// user input for menu 1st
	//////////////////////////////////////////////////////////////////////////
	menu1();
	for(num = -1; !((num<4) && (num>0));)
	{
		cout << "Choose from above : ";
		cin >> num;
	}
	fflush(stdin);

	//////////////////////////////////////////////////////////////////////////
	// process
	//////////////////////////////////////////////////////////////////////////
	switch(num)
	{
	case 1:		//insert new music
		
		break;
	case 2:		//delete music
		
		break;
	case 3:		//find music
		
		system("cls");
		menu2();
		for(num = -1; !((num < 4) && (num > 0));)
		{
			cout << "Find music by : ";
			cin >> num;
		}

		break;
	default:	// exception
		cout << "Menu 1st Choose Error" << endl;
		return -1;
	}

	return 0;
}

void menu1()
{
	cout << "[ Youngjoo's Music Finder ]" << endl;
	cout << "(1) insert new music" << endl;
	cout << "(2) delete music" << endl;
	cout << "(3) find music" << endl;
}

void menu2()
{
	cout << "[ Youngjoo's Music Finder ]" << endl;
	cout << "(1) title" << endl;
	cout << "(2) artist" << endl;
	cout << "(3) genre" << endl;
}