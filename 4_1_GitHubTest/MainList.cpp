#include "MainList.h"
#include "Music.h"

#include <iostream>
using namespace std;

MainList::MainList(void)
{
	pHead = NULL;
}


MainList::~MainList(void)
{
}

bool MainList::insertMusic( char * title, char * artist, char * genre )
{
	return true;
}

bool MainList::deleteMusic( char * str, int mode )
{
	return true;
}

void MainList::findMusicBy( Music * dstPtr, char * str, int mode )
{
	
}
