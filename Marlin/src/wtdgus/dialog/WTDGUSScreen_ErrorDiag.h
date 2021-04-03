/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDUGSSCREEN_ERROR_DIALOG_H
#define WTDUGSSCREEN_ERROR_DIALOG_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// ���ò˵� 
class DGUS_Screen_ErrorDiag : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

	void NozzleTempError(void);
	void BedTempError(void);
	void EndStopError(void);

private:
	void ShowDialog(const char* title, const char* line);

	void ShowPage(void);
	void Finish(void);

	uint8_t pageid;
	uint8_t moving;
	int16_t temp_nozzle0;
};

#endif
