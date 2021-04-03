/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_POWEROFF_H
#define WTDUGSSCREEN_POWEROFF_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// �Զ��ػ��˵�
class DGUS_Screen_PowerOff : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

private:
	int deadtime;
};

#endif

