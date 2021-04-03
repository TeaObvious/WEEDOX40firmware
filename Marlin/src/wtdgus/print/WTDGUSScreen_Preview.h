/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/*
* DGus ������Ķ���
*/

#ifndef WTDGUSSCREEN_PREVIEW_H
#define WTDGUSSCREEN_PREVIEW_H

#include "../WTDGUSScreenBase.h"
#include "../WTDGUSConfig.h"

// GCode�ļ�Ԥ������
class DGUS_Screen_Preview : public DGUS_Screen_Base
{
public:
	void Init(void);
	void Update(void);
	void KeyProcess(void);

	void enable(bool action);

    // uint16_t selectedindex = 0;
    // wt_fileinfo_t* selectedinfo = NULL;
private:
	bool b_enable;
    bool b_dualmode;

    void do_print(void);
    void move_center(void);
};


#endif