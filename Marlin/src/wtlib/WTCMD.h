/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

#ifndef WTCMD_H
#define WTCMD_H

#include "stdint.h"

#define SPARK_IDLE		0
#define SPARK_PAUSED	1
#define SPARK_PRINTING	2
#define SPARK_LOST		3

#define HOST_WIIBUILDER	0
#define HOST_SPARK		1

#define WIFI_UNKNOWN	0
#define WIFI_OFF		1
#define WIFI_OK			2

enum WT_STATUS : char 
{
	WS_IDLE = 0, 
	WS_PRINTING = 1,
	WS_PAUSE = 2,
	WS_ABORT = 3,
	WS_FINISH = 4,
    WS_UPLOADING = 5,
    WS_ERROR = 6
};

enum WT_MAIN_ACTION : char
{
	WMA_IDLE = 0,
	WMA_PAUSE = 1,
	WMA_RESUME = 2
};

extern WT_STATUS wt_machineStatus;

extern WT_MAIN_ACTION wt_mainloop_action;

#ifdef AUTOPOWEROFF
void setup_autopoweroffpin();
#endif

extern uint8_t progress_bar_percent;

void WTCMD_Process();

// ESP32����smart configģʽ
void WT_Set_SmartConfig();

// ��ȡESP32��IP��ַ
void WT_Get_IP();

// ESP32��������
void WT_ESP32_Restart();

// ��ȡESP32��Ӳ���͹̼��汾
void WT_Get_ESP32Version();

// ��Ĭ����ַOTA����
void WT_OTA_Default();

// ��ָ����ַOTA����
void WT_OTA_URI(const char * uri);

// ��ָ������OTA��ָ���汾
void WT_OTA_Force(const char * uri, const char * ver);

// ���ӹ���Ĭ��WIFI��
void WT_WIFI_Default();

// ���ӵ�ָ����WIFI��
void WT_WIFI_Join();

// �رյ�Դ
void wt_PowerOff();

// ֹͣSD����ӡ
void wt_sdcard_stop();

// ��ͣSD����ӡ
void wt_sdcard_pause(bool showMessage = true);

// �ָ�SD����ӡ
void wt_sdcard_resume();

// ����ͷ���·���
void wt_OpenExtruder0Fan();

// �ر���ͷ���·���
void wt_CloseExtruder0Fan();

// �򿪿��˷���
void wt_OpenAirFan();

// �رտ��˷���
void wt_CloseAirFan();

// WEEDO������״̬
void WT_TB_STATE();

// ��ȡ������AP��
void WT_AP_NAME();

// ��Spark������ͣ��ӡ����
void wt_online_pause();

// ��Spark���ͻָ���ӡ����
void wt_online_resume();

// ��Spark����ȡ����ӡ����
void wt_online_cancel();

// ��ȡ����ģʽ
uint8_t wt_get_hostmode(void);

// ��������ģʽ
void wt_set_hostmode(const uint8_t mode);

// restart
void wt_restart();

// send buffer count
void wt_echo_buffer_count();

// get machine status
void GetMachineStatus();

// ��WIFIͨѶ���ݷ���������1
void wifi_debug(const char* message, bool incoming);

// request ndisk page count
void wt_ndisk_read_page_count(void);

// read ndisk file page
void wt_ndisk_read_page();

// read ndisk file info
void wt_ndisk_read_fileinfo(void);

// print ndisk selected file
void wt_ndisk_print(void);

void host_action_start(void);

void host_action_finish(void);

// main loop action
void wt_loopaction(void);

#endif

