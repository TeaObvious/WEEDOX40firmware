/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_WIFISETTING_H
#define WTDUGSSCREEN_WIFISETTING_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// �������ò˵� 
class DGUS_Screen_WifiSetting : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);
};

#endif
