/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_MESSAGE_RETURN_H
#define WTDUGSSCREEN_MESSAGE_RETURN_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// ��ʾ��Ϣ�˵� 
class DGUS_Screen_Message_Return : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

	void Title(const char* title);
	void Button(const char* title);
	void ShowText(const char* title);
	void Line(const char* title);

	// void Title_P(const char* title);
	// void Button_P(const char* title);
	// void ShowText_P(const char* title);
	// void Line_P(const char* title);
};

#endif
