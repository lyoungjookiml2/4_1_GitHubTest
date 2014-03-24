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
	Music * pCur = pHead;
	for(pCur = pHead; pCur;)
	{
		pCur = pHead->getNext();
		delete(pHead);
		pHead = pCur;
	}
}

bool MainList::insertMusic( char * title, char * artist, char * genre )
{
	Music * pCur = pHead;
	Music * newNode = new Music;
	newNode->setTitle(title);
	newNode->setArtist(artist);
	newNode->setGenre(genre);
	if(pHead)
	{
		for(pCur = pHead; !pCur->getNext(); pCur = pCur->getNext());
		pCur->setNext(newNode);
	}
	else
		pHead = newNode;
	return true;
}

bool MainList::deleteMusic( char * str, int mode )
{
	return true;
}

void MainList::findMusicBy( Music * dstPtr, char * str, int mode )
{
	
}
