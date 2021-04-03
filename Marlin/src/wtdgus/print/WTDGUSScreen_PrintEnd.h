/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_PRINTEND_H
#define WTDUGSSCREEN_PRINTEND_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// ��ӡ��ɲ˵� 
class DGUS_Screen_PrintEnd : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);
	void ShowFilename(const char* fname);
private:
	uint8_t count;
};

#endif

