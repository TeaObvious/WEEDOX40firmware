/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_RESTORE_SETTING_H
#define WTDUGSSCREEN_RESTORE_SETTING_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// �ָ��������ò˵� 
class DGUS_Screen_RestoreSetting : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

private:
	void ShowReport(void);
	void ShowConfirm(void);
	void LoadOperationMenu(void);

	bool restoreConfirm;
};

#endif

