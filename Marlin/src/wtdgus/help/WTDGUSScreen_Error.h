/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_ERROR_H
#define WTDUGSSCREEN_ERROR_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// ������Ϣ�˵� 
class DGUS_Screen_Error : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

	void Title(const char* title);
	void ShowText(const char* title);

	// void Title_P(const char* title);
	// void ShowText_P(const char* title);

private:
	int16_t temp_nozzle0;
	int16_t temp_bed;
};

#endif