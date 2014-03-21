#pragma once
#include "Music.h"
class MainList
{
public:
	MainList(void);
	~MainList(void);

	bool insertMusic(char * title, char * artist, char * genre);
	bool deleteMusic(char * str, int mode);
	void findMusicBy(Music * dstPtr, char * str, int mode);

private:
	Music * pHead;
};

