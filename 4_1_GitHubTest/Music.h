#pragma once
class Music
{
private:
	char title[16];
	char artist[16];
	char genre[16];
	Music * mNext;

public:
	Music(void);
	~Music(void);

	char * getTitle();
	void setTitle(char * newTitle);
	char * getArtist();
	void setArtist(char * newArtist);
	char * getGenre();
	void setGenre(char * newGenre);
	Music * getNext();
	void setNext(Music * newNext);
};

