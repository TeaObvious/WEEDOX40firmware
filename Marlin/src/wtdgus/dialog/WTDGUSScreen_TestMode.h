/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_TESTMODE_H
#define WTDUGSSCREEN_TESTMODE_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// ������Ϣ�˵� 
class DGUS_Screen_TestMode : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

private:
	void ShowEndstop(void);
};

#endif