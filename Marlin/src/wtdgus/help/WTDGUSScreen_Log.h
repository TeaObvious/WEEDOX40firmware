/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_LOG_H
#define WTDUGSSCREEN_LOG_H

#include "WTDGUSScreen_ScrollList.h"
#include "../WTDGUSConfig.h"


// �Զ���ƽ�˵� 
class DGUS_Screen_Log : public DGUS_Screen_ScrollList
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);
    void SetTitle(const char* title);

private:

};

#endif

