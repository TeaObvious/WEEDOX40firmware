/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_LANGUAGE_H
#define WTDUGSSCREEN_LANGUAGE_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// ���ò˵� 
class DGUS_Screen_Language : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

private:
    void ShowPrePage(void);
	void ShowNextPage(void);
	void ShowPage(void);
    void SetLanguage(uint8_t langid);

    uint8_t pageid = 0;
};

#endif
