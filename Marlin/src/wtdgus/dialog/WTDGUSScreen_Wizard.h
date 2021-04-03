/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_WIZARD_H
#define WTDUGSSCREEN_WIZARD_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// ���ò˵� 
class DGUS_Screen_Wizard : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);
private:
	void GotoNext(void);

};

#endif
