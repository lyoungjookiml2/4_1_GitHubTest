#include "Music.h"
#include <iostream>
#include <cstring>
using namespace std;

#pragma warning (disable : 4996)

Music::Music(void)
{
	memset(title, 0, 16);
	memset(artist, 0, 16);
	memset(genre, 0, 16);
}

Music::~Music(void)
{
}

char * Music::getTitle()
{
	return title;
}

void Music::setTitle(char * newTitle)
{
	strcpy(title, newTitle);
}

char * Music::getArtist()
{
	return artist;
}

void Music::setArtist(char * newArtist)
{
	strcpy(title, newArtist);
}

char * Music::getGenre()
{
	return genre;
}

void Music::setGenre(char * newGenre)
{
	strcpy(title, newGenre);
}