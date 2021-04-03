/**
* Copyright (C) 2020 Wiibooxtech Perron
*/

/**
* WEEDO ����ָ��
* ���巢����ӡ����ָ���W��ͷ�������λ����
* W1   ������ӡ��ʼ
* W2   ������ӡ����
* W3   ������ӡ��ֹ
* W4   ������ӡ��ͣ
* W5   ������ӡ�ָ�
* W6   SPARK������
* W7   SPARK�ѶϿ�
* W106 ��ʾ�������ؽ���
* W107 �ر��������ؽ���
* W108 ��ʾ���ش������
* W109 ����DGUS
* W110 ��ʾDGUS��������
* W111 ��ʾDGUS������
* W112 ��ʾDGUS SD����
* W113 ��ʾDGUS׼������
* W114 ��ʾDGUS���ý���
* W116 ��ʾDGUS��˿�������
* W117 ��ʾDGUS��˿ж�ؽ���
* W118 ��ʾDGUS��ӡ����
* W119 ��ʾDGUS������Ϣ����
* W120 ��ʾDGUS��ʾ��Ϣ����
* W121 ��ʾDGUS��ƽ����
* W122 ��ʾDGUS���Ƚ���
* W123 ��ʾDGUS�汾��Ϣ����
* W124 ��ʾDGUS�߼����ý���
* W125 ��ʾDGUS WIFI���ý���
* W126 ��ʾDGUS��ӡ��������
* W127 ��ʾDGUS�Զ��ػ�����
* W128 ��ʾDGUS��ӡ���ý���
* W129 ��ʾDGUS����ػ�����
* W130 ��ʾDGUS�ָ���ӡ����
* W131 ��ʾDGUS�ָ��������ý���
* W132 ��ʾ�����ص���Ϣ��ʾ���� 
* W133 ��ʾ�޷��ص���Ϣ��ʾ����
* W134 ��ʾZOFFSET����
* W135 ��ʾ���̲��Խ���
* W136 ��ʾ�����Լ����
* W201 ��ѯ��ӡ��״̬������ ��ӡ��״̬, ���ڴ�ӡ���ļ��� �Ѵ�ӡʱ�䣬 ��ӡ���ļ��ֽ���
* W202 �������ļ���������ݣ���ʱ��Ч
* W203 ��ӡ����������
* W204 ����ESP32��IP��ַ�ַ�������δ�������磬�򷵻�Disconnected
* W205 ����ESP32�����к��ַ���
* W206 ����ESP32�Ĺ̼��汾�ַ���
* W207 ����ESP32���豸�����ַ���
* W208 ����ESP32״̬��Ϣ�ַ���
* W209 ȡ����ӡ
* W210 ���ӹ���Ĭ��WIFI��
* W211 ����ͷ0����
* W212 �ر���ͷ0����
* W213 WEEDO��״̬ 
* W214 �򿪿��˷���
* W215 �رտ��˷���
* W216 ���������SD��gcode�ļ�
* W217 ��SD��gcode�ļ��ж�ȡ�����������������ڴ�
* W218 ������AP��
* W219 AP�ź�ǿ��
* W220 ����jpg����
* W221 ����jpg���ݿ�ʼ
* W222 ����jpg���ݽ���
* W223 ����GCode��Ϣ
* W224 ��˿��ͣ
* W225 ����SoftEndstop
* W226 �ر���ͷXYƫ�ôֵ��뾫������
* W227 �ر���ͷXYƫ�þ�������
* W228 �ָ���ͷXYƫ�ôֵ��뾫������
* W230 �����ļ�����
* W231 �����ļ���ʼ
* W232 �����ļ�����
* W299 �رյ�Դ
* W300 ����WIFI��ssid
* W301 ����WIFI��pwd
* W302 ����WIFI����
* W303 ����NDisk�ļ�ҳ��
* W304 NDisk�б�ʼ
* W305 NDisk�ļ���
* W306 NDisk�ļ��б����
* W307 NDisk�ļ�������
* W308 NDisk�ļ����
* W309 NDisk�ļ������
* W310 NDisk�ļ�����
* W311 NDisk�ļ���˿����
* W312 NDisk�ļ��¶�
* W313 NDisk�ļ���ӡʱ��
* W314 NDisk�ļ���Ϣ����
* W315 NDisk�б��и���
* W316 ���ڴ�ӡ�ļ���
* W317 NDisk MinX
* W318 NDisk MaxX
* W999 WIFICAM����
*
*
* ��ӡ�����������ָ���WTCMD:��ͷ�������дӢ�ĵ���
* WTCMD:CONFIG		ESP32����smart configģʽ
* WTCMD:IP			��ȡESP32��IP��ַ
* WTCMD:RESTART		ESP32��������
* WTCMD:VERSION		��ȡESP32��Ӳ���͹̼��汾
* WTCMD:OTADEFAULT	��Ĭ����ַOTA����
* WTCMD:OTAURI		��ָ����ַOTA����
* WTCMD:OTAFORCE	��ָ������OTA��ָ���汾
* WTCMD:WIFIDEFAULT	���ӹ���Ĭ��WIFI��
* WTCMD:JOIN		���ӵ�ָ����WIFI��
*
*/

#include "WTCMD.h"
#include "../gcode/parser.h"
#include "../HAL/STM32F1/watchdog.h"
#include "../sd/cardreader.h"
#include "../module/printcounter.h"
#include "../libs/duration_t.h"
#include "../module/planner.h"
#include "../module/temperature.h"
#include "../module/configuration_store.h"
#include "../MarlinCore.h"
#include "../feature/host_actions.h"
#ifdef DGUS_LCD
#include "../wtdgus/WTDGUSManager.h"
#include "../wtdgus/WTDGUSSerial.h"
#endif
#include "../module/probe.h"
#include "../module/stepper.h"
#include "WTGcodeinfo.h"
#include "WTUtilty.h"
#include "../../gcode/gcode.h"
#include "../libs/nozzle.h"
#include "../feature/pause.h"
#include "../module/endstops.h"

#if ENABLED(POWER_LOSS_RECOVERY)
  #include "../../feature/powerloss.h"
#endif

#if HAS_FILAMENT_SENSOR
  #include "../feature/runout.h"
#endif

#define ACTION_ON_PAUSE		"pause"
#define ACTION_ON_PAUSED	"paused"
#define ACTION_ON_RESUME	"resume"
#define ACTION_ON_CANCEL	"cancel"
#define ACTION_ON_DISCONNECT	"disconnect"
#define ACTION_ON_RUNOUT	"runout"

#define SD_CONFIG_FILE		"config.sav"

WT_STATUS wt_machineStatus = WS_IDLE;

WT_MAIN_ACTION wt_mainloop_action = WT_MAIN_ACTION::WMA_IDLE;

uint8_t wt_onlineprinting = SPARK_LOST;		// 0 = not printing, 1 = paused, 2 = printing, 3 = lost
//extern Buzzer buzzer;

#ifdef WIFISUPPORT
char ipAddress[16];
char esp32_name[12];
char esp32_hardware[8];
char esp32_version[8];
char esp32_message[22];
char esp32_serial[16];
uint8_t wifiStatus = WIFI_UNKNOWN;
bool isOTAUpdating = false;
char tb_state[20];
char esp32_ap[32];
uint8_t esp32_signal = 0;
#endif

#ifdef SDSUPPORT
char uploadFilename[FILENAME_LENGTH];
#endif

char wifi_ssid[30];
char wifi_pwd[30];
char parsedString[30];

uint8_t progress_bar_percent;

extern xyze_pos_t resume_position;
static float resume_nozzle0, resume_nozzle1, resume_bed;
static feedRate_t resume_feedrate;

static void wt_pause_print();
static void wt_resume_print();

static void ParseStringArg(char* buffer, uint8_t bufferlen)
{
	uint8_t plen = strlen(parser.string_arg);
	if (plen > 0 && bufferlen > 0)
	{
		memset(buffer, 0, bufferlen);
		strncpy(buffer, parser.string_arg, plen < (bufferlen - 1) ? plen : (bufferlen - 1));
	}
}

// ESP32����smart configģʽ
void WT_Set_SmartConfig()
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	wifiStatus = WIFI_OFF;
	SERIAL_ECHOLNPGM("WTCMD:CONFIG");
	PORT_RESTORE();
	#endif
}

// ��ȡESP32��IP��ַ
void WT_Get_IP()
{
	#ifdef WIFISUPPORT
	if (wifiStatus != WIFI_OK)
	{
		PORT_REDIRECT(1);
		SERIAL_ECHOLNPGM("WTCMD:IP");
		PORT_RESTORE();
	}
	#endif
}

// ESP32��������
void WT_ESP32_Restart()
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("WTCMD:RESTART");
	PORT_RESTORE();
	#endif
}

// ��ȡESP32��Ӳ���͹̼��汾
void WT_Get_ESP32Version()
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("WTCMD:VERSION");
	PORT_RESTORE();
	#endif
}

// ��Ĭ����ַOTA����
void WT_OTA_Default()
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("WTCMD:OTADEFAULT");
	PORT_RESTORE();
	#endif
}

// ��ָ����ַOTA����
void WT_OTA_URI(const char * uri)
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPAIR("WTCMD:OTAURI ", uri);
	PORT_RESTORE();
	#endif
}

// ��ָ������OTA��ָ���汾
void WT_OTA_Force(const char * uri, const char * ver)
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	SERIAL_ECHOPGM("WTCMD:OTAFORCE ");
	SERIAL_ECHO(uri);
	SERIAL_ECHOPGM(" ");
	SERIAL_ECHOLN(ver);
	PORT_RESTORE();
	#endif
}

// ���ӹ���Ĭ��WIFI��
void WT_WIFI_Default()
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("WTCMD:WIFIDEFAULT");
	PORT_RESTORE();
	#endif
}

// ���ӵ�ָ����WIFI��
void WT_WIFI_Join()
{
	#ifdef WIFISUPPORT
	PORT_REDIRECT(1);
	SERIAL_EOL();
	SERIAL_ECHOPGM("WTCMD:JOIN ");
	SERIAL_ECHOPAIR("SSID:", wifi_ssid);
	SERIAL_ECHOLNPAIR(" PWD:", wifi_pwd);
	PORT_RESTORE();
	#endif
}

// WEEDO������״̬
void WT_TB_STATE()
{
	PORT_REDIRECT(1);
	SERIAL_EOL();
	SERIAL_ECHOLNPGM("WTCMD:TBSTATE ");
	PORT_RESTORE();
}

// ��ȡ������AP��
void WT_AP_NAME()
{
	PORT_REDIRECT(1);
	SERIAL_EOL();
	SERIAL_ECHOLNPGM("WTCMD:WIFIAP ");
	PORT_RESTORE();
}

static void ParseTBState()
{
	ParseStringArg(tb_state, 20);
}

static void ParseAPName()
{
	ParseStringArg(esp32_ap, 32);
}

void GetMachineStatus()
{
	SERIAL_ECHOPGM("MStatus:");
	SERIAL_ECHO(wt_machineStatus);

	SERIAL_ECHOPGM(" MFile:");
	#ifdef SDSUPPORT
	card.printFilename();
	#endif

	char buffer[21];
	duration_t elapsed = print_job_timer.duration();
	elapsed.toString(buffer);

	SERIAL_ECHOPGM(" MTime:");
	SERIAL_ECHO(buffer);

	SERIAL_ECHOPGM(" MPercent:");
	#ifdef SDSUPPORT
	card.report_status();
	#endif

	SERIAL_EOL();

}

static void ParseIPAddress()
{
	#ifdef WIFISUPPORT
	char* tempS;
	tempS = parser.string_arg;

	if (strstr(tempS, "OFF") != NULL)
	{
		strcpy(ipAddress, "OFF");
		wifiStatus = WIFI_OFF;
	}
	else
	{
		strcpy(ipAddress, tempS);
		wifiStatus = WIFI_OK;
	}

	#endif
}

void wt_OpenExtruder0Fan()
{
	digitalWrite(E0_AUTO_FAN_PIN, HIGH);
}

void wt_CloseExtruder0Fan()
{
	digitalWrite(E0_AUTO_FAN_PIN, LOW);
}

void wt_OpenAirFan()
{
#if MB(WEEDO_61B)
	digitalWrite(AIR_FAN_PIN, HIGH);
#endif
}

void wt_CloseAirFan()
{
#if MB(WEEDO_61B)
	digitalWrite(AIR_FAN_PIN, LOW);
#endif
}
void wt_PowerOff()
{
	#ifdef DGUS_LCD
	dserial.LoadScreen(SCREEN_POWER_OFF);
	#endif
	SERIAL_ECHOLNPGM("power off...");
	while (1)
	{
		digitalWrite(POWEROFF_PIN, HIGH);
		delay(500);
		digitalWrite(POWEROFF_PIN, LOW);
		delay(500);

#if ENABLED(USE_WATCHDOG)
		HAL_watchdog_refresh();
#endif
	}
}

void wt_sdcard_stop()
{
	#ifdef DGUS_LCD
	dgus.ShowNoRetrunMessage(MMSG_SDCARD_STOP[wtvar_language]);
	#endif
	card.endFilePrint();
	print_job_timer.stop();

	#if ENABLED(POWER_LOSS_RECOVERY)
      recovery.purge();
    #endif

	wait_for_heatup = false;

	wtvar_gohome = 1;
	(void)settings.save();

	wt_restart();
}

void wt_sdcard_pause(bool showMessage)
{
	#ifdef DGUS_LCD
	if (showMessage)
		dgus.ShowNoRetrunMessage(MMSG_SDCARD_PAUSE[wtvar_language]);
	#endif

	card.pauseSDPrint();
	print_job_timer.pause();

	#if ENABLED(POWER_LOSS_RECOVERY)
      if (recovery.enabled) recovery.save(true);
    #endif

	#if ENABLED(PARK_HEAD_ON_PAUSE)
	 queue.enqueue_now_P(PSTR("M125"));
	#endif

	#ifdef DGUS_LCD
	dgus.EnableMessageNoReturnAutoGoback();
	#endif

	wt_machineStatus = WS_PAUSE;
	wt_mainloop_action = WMA_PAUSE;	
}

void wt_sdcard_resume()
{
	dgus.ShowNoRetrunMessage(MMSG_SDCARD_RESUME[wtvar_language]);

	wt_resume_print();

	card.startFileprint();
	print_job_timer.start();

	planner.synchronize();

	dgus.GotoPrintingMenu();

	wt_machineStatus = WS_PRINTING;

  	#ifdef ACTION_ON_RESUMED
    host_action_resumed();
  	#endif
}

void wt_spark_begin()
{
	wt_onlineprinting = SPARK_PRINTING;
	print_job_timer.start();

	#ifdef DGUS_LCD
	dgus.GotoPrintingMenu();
	#endif

	wt_machineStatus = WS_PRINTING;
}

void wt_spark_end()
{
	wt_machineStatus = WS_FINISH;
	wt_onlineprinting = SPARK_IDLE;
	print_job_timer.stop();

	#ifdef DGUS_LCD
	dgus.GotoPrintEndMenu();
	#endif
}

void wt_spark_cancel()
{
	wt_sdcard_stop();
}

void wt_spark_pause()
{
	print_job_timer.pause();

	wt_machineStatus = WS_PAUSE;
	wt_onlineprinting = SPARK_PAUSED;

	#ifdef DGUS_LCD
	dgus.GotoPrintingMenu();
	#endif

	wt_mainloop_action = WMA_PAUSE;	
}

void wt_spark_resume()
{
	#ifdef DGUS_LCD
	dgus.ShowNoRetrunMessage(MMSG_SDCARD_RESUME[wtvar_language]);
	#endif

	wt_resume_print();
	print_job_timer.start();

	planner.synchronize();

	wt_machineStatus = WS_PRINTING;
	wt_onlineprinting = SPARK_PRINTING;

	#ifdef DGUS_LCD
	dgus.GotoPrintingMenu();
	#endif
}

// ��Spark������ͣ��ӡ����
void wt_online_pause()
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("//action:" ACTION_ON_PAUSE);
	PORT_RESTORE();

	#ifdef DGUS_LCD
	dgus.ShowNoRetrunMessage(MMSG_SDCARD_PAUSE[wtvar_language]);
	#endif
}

// ��Spark���ͻָ���ӡ����
void wt_online_resume()
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("//action:" ACTION_ON_RESUME);
	PORT_RESTORE();
}

// ��Spark����ȡ����ӡ����
void wt_online_cancel()
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("//action:" ACTION_ON_CANCEL);
	PORT_RESTORE();

	#ifdef DGUS_LCD
	dgus.ShowNoRetrunMessage(MMSG_SDCARD_STOP[wtvar_language]);
	#endif
}

// �������������SD��gcode�ļ�
void wt_save_config()
{
	if (!card.openNewFileWrite((char*)SD_CONFIG_FILE))
	{
		SERIAL_ECHOLNPGM("config file open fail!");

		#ifdef DGUS_LCD
		dgus.ShowLog(MMSG_CONFIG_OPEN_FAIL[wtvar_language]);
		#endif
		return;
	}

	char buffer[100];

	ZERO(buffer);
	sprintf(buffer, ";%s config data begin", MACHINE_NAME);
	if (!card.write_line(buffer))
	{
		SERIAL_ECHOLNPGM("Write to config save file fail.");
		#ifdef DGUS_LCD
		dgus.ShowLog(MMSG_CONFIG_WRITE_FAIL[wtvar_language]);
		#endif
		goto END;
	}

	ZERO(buffer);
	sprintf(buffer, "M218 T1 X%.2f Y%.2f Z%.2f",
					 LINEAR_UNIT(hotend_offset[1].x),
					 LINEAR_UNIT(hotend_offset[1].y),
					 LINEAR_UNIT(hotend_offset[1].z));
	if (!card.write_line(buffer))
	{
		SERIAL_ECHOLNPGM("Write to config save file fail.");
		#ifdef DGUS_LCD
		dgus.ShowLog(MMSG_CONFIG_WRITE_FAIL[wtvar_language]);
		#endif
		goto END;
	}

	ZERO(buffer);
	sprintf(buffer, "M851 X%.2f Y%.2f Z%.2f",
					 LINEAR_UNIT(probe.offset_xy.x),
					 LINEAR_UNIT(probe.offset_xy.y),
					 probe.offset.z);
	if (!card.write_line(buffer))
	{
		SERIAL_ECHOLNPGM("Write to config save file fail.");
		#ifdef DGUS_LCD
		dgus.ShowLog(MMSG_CONFIG_WRITE_FAIL[wtvar_language]);
		#endif
		goto END;
	}

	ZERO(buffer);
	sprintf(buffer, "M907 X%ld Y%ld Z%ld E%ld",
					 stepper.motor_current_setting[0],
					 stepper.motor_current_setting[1],
					 stepper.motor_current_setting[2],
					 stepper.motor_current_setting[3]);
	if (!card.write_line(buffer))
	{
		SERIAL_ECHOLNPGM("Write to config save file fail.");
		#ifdef DGUS_LCD
		dgus.ShowLog(MMSG_CONFIG_WRITE_FAIL[wtvar_language]);
		#endif
		goto END;
	}

	ZERO(buffer);
	sprintf(buffer, ";%s config data end", MACHINE_NAME);
	if (!card.write_line(buffer))
	{
		SERIAL_ECHOLNPGM("Write to config save file fail.");
		#ifdef DGUS_LCD
		dgus.ShowLog(MMSG_CONFIG_WRITE_FAIL[wtvar_language]);
		#endif
		goto END;
	}

	SERIAL_ECHOLNPGM("Parameters saved successfully.");
	#ifdef DGUS_LCD
	dgus.ShowLog(MMSG_CONFIG_SAVE_OK[wtvar_language]);
	#endif


END:
	card.closefile();
}

// ��SD��gcode�ļ��ж�ȡ�����������������ڴ�
void wt_load_config()
{
	if (!card.openSavFileRead((char*)SD_CONFIG_FILE))
	{
		SERIAL_ECHOLNPGM("config file open fail!");
		#ifdef DGUS_LCD
		dgus.ShowLog(MMSG_CONFIG_OPEN_FAIL[wtvar_language]);
		#endif
		return;
	}

	uint8_t sd_count = 0;
	bool card_eof = card.eof();
	bool sd_comment_mode = false;
	uint8_t linecount = 0;
	char buffer[100];

	ZERO(buffer);
	while (!card_eof && linecount < 10)
	{
		const int16_t n = card.get();
		char sd_char = (char)n;
		card_eof = card.eof();

		if (card_eof || n == -1 || sd_char == '\r')
		{	// һ�ж�ȡ����

			buffer[sd_count] = '\0';

			// ��ȡgcodeָ��
			if (!sd_comment_mode)
			{
				queue.enqueue_one_now(buffer);
			}

			ZERO(buffer);

			sd_count = 0; // clear sd line buffer
			linecount++;
			sd_comment_mode = false;
		}
		else if (sd_count >= sizeof(buffer) - 1) 
		{	// �г���

		}
		else 
		{	// ��ȡ�ַ� 
			if (sd_char == ';')
				sd_comment_mode = true;
			else if (sd_char != '\n')
				buffer[sd_count++] = sd_char;
		}
	}

	queue.enqueue_one_now("M500");

	SERIAL_ECHOLNPGM("Parameter recovery succeeded.");
	#ifdef DGUS_LCD
	dgus.ShowLog(MMSG_CONFIG_LOAD_OK[wtvar_language]);
	#endif

	card.closefile();
}

void parse_ndisk_file_info()
{
	if (strlen(parser.string_arg) > 0)
		dgus.NDisk_Add(parser.string_arg);
}

void ParseWifiSignal()
{
	if (parser.seen('S'))
		esp32_signal = parser.value_int();
}

void ParseFileInfo()
{
	gcodeinfo.parse(parser.string_arg);

	char tempbuffer[UNICODE_FILENAME_LENGTH] = {0};
	card.selectFileByName(parser.string_arg);
	uint16_t _len = strlen(card.longFilename) * 2;

    if (_len > 0)
    {
        memcpy(tempbuffer, card.longlongFilename, _len);
    }
    else
    {
        // ���ļ���תΪunicode�ַ���
        _len = strlen(card.filename) * 2;
        Utf8ToUnicode(card.filename, tempbuffer);
    }

	#ifdef DGUS_LCD
	dgus.SetFileInfo(1, tempbuffer, _len);
	#endif
}

void wt_wifi_boot()
{
    if (wt_onlineprinting == SPARK_PRINTING)
    {
        kill(MMSG_WIFI_BOOT_ERROR[wtvar_language], nullptr, true);
    }
}

extern uint8_t lcd_status_update_delay;
// W Command Process
void WTCMD_Process()
{
	switch (parser.codenum)
	{
	case 1:		// ������ӡ��ʼ
		wt_spark_begin();
		break;

	case 2:		// ������ӡ����
		wt_spark_end();
		break;

	case 3:		// ������ӡ��ֹ
		wt_spark_cancel();
		break;

	case 4:		// ������ӡ��ͣ
		wt_spark_pause();
		break;

	case 5:		// ������ӡ�ָ�
		wt_spark_resume();
		break;

	case 6:		// SPARK������
		//lcd_setstatusPGM(MMSG_OCTOPRINT_OPEN, -1);
		wt_onlineprinting = SPARK_IDLE;
		#ifdef DGUS_LCD
		dgus.NDisk_Clear();
		#endif
		break;

	case 7:		// SPARK�ѶϿ�
		//lcd_setstatusPGM(MMSG_OCTOPRINT_CLOSE, -1);
		wt_onlineprinting = SPARK_LOST;
		break;

	#ifdef DGUS_LCD
	case 106:		// ��ʾ�������ؽ���
		#ifdef SDSUPPORT
		memset(uploadFilename, 0, FILENAME_LENGTH);
		if (strlen(parser.string_arg) <= FILENAME_LENGTH)
			strcpy(uploadFilename, parser.string_arg);
		else
			strncpy(uploadFilename, parser.string_arg, FILENAME_LENGTH);
		dgus.ShowUploadingMenu(uploadFilename);
		#endif
		
		break;

	case 107:		// �ر��������ؽ���
		dgus.GotoMain();
        wt_machineStatus = WS_IDLE;
		break;

	case 108:		// ��ʾ���ش������
		dgus.ShowUploadFailMenu();
        wt_machineStatus = WS_UPLOADING;
		break;

	case 109:		// ����DGUS
		dgus.ResetScreen();
		break;

	case 110:		// ��ʾDGUS��������
		dgus.GotoBootMenu();
		break;

	case 111:		// ��ʾDGUS������
		dgus.GotoMain();
		break;

	case 112:		// ��ʾDGUS SD����
		dgus.GotoSDMenu();
		break;

	case 113:		// ��ʾDGUS׼������
		dgus.GotoPrepareMenu();
		break;

	case 114:  // ��ʾDGUS���ý���
		dgus.GotoControlMenu();
		break;

	case 116:  // ��ʾDGUS��˿�������
		dgus.GotoLoadFilament(NULL);
		break;

	case 117:  // ��ʾDGUS��˿ж�ؽ���
		dgus.GotoUnloadFilament(NULL);
		break;

	case 118:  // ��ʾDGUS��ӡ����
		dgus.GotoPrintingMenu();
		break;

	case 119:  // ��ʾDGUS������Ϣ����
		dgus.GotoErrorMenu();
		break;

	case 120:  // ��ʾDGUS��ʾ��Ϣ����
		//dgus.GotoMessageMenu();
		break;

	case 121:  // ��ʾDGUS��ƽ����
		dgus.GotoLevelMenu();
		break;

	case 122:  // ��ʾDGUS���Ƚ���
		dgus.GotoPreheatMenu();
		break;

	case 123:  // ��ʾDGUS�汾��Ϣ����
		dgus.GotoMachineInfoMenu();
		break;

	case 124:  // ��ʾDGUS�߼����ý���
		//dgus.GotoAdvanceSettingMenu();
		break;

	case 125:  // ��ʾDGUS WIFI���ý���
		dgus.GotoWifiSettingMenu();
		break;

	case 126:  // ��ʾDGUS��ӡ��������
		dgus.GotoPrintEndMenu();
		break;

	case 127:  // ��ʾDGUS�Զ��ػ�����
		dgus.GotoPowerOffMenu();
		break;

	case 128:  // ��ʾDGUS��ӡ���ý���
		dgus.GotoPrintingSettingMenu();
		break;

	case 129:  // ��ʾDGUS����ػ�����
		dgus.GotoSavePrintingMenu();
		break;

	case 130:  // ��ʾDGUS�ָ���ӡ����
		dgus.GotoResumePrintingMenu();
		break;

	case 131:  // ��ʾDGUS�ָ��������ý���
		dgus.GotoRestoreSettingMenu();
		break;

	case 132:	// ��ʾ�����ص���Ϣ��ʾ����
		//dgus.GotoMessageReturnMenu();
		break;

	case 133:	// ��ʾ�޷��ص���Ϣ��ʾ����
		dgus.GotoMessageNoReturnMenu();
		break;

	case 134:	// ��ʾZOFFSET����
		dgus.GotoZOffsetMenu();
		break;

	case 135:	// ��ʾ���̲��Խ���
		dgus.GotoTestModeMenu();
		break;

	case 136:	// ��ʾ�����Լ����
		dgus.GotoSelfTest();
		break;

	#endif

	case 201:	// ��ѯ��ӡ��״̬������ ��ӡ��״̬, ���ڴ�ӡ���ļ��� �Ѵ�ӡʱ�䣬 ��ӡ���ļ��ֽ���
		GetMachineStatus();
		break;

	case 202:	// �������ļ���������ݣ���ʱ��Ч
		// card.appendFile(parser.string_arg);
		break;

	case 203:	// ��ӡ����������
		wt_restart();
		while (1);
		break;

	case 204:	// ����ESP32��IP��ַ�ַ�������δ�������磬�򷵻�Disconnected
		#ifdef WIFISUPPORT
		ParseIPAddress();
		#endif
		break;

	case 205:	// ����ESP32�����к��ַ���
		#ifdef WIFISUPPORT
		ZERO(esp32_serial);
		if (strlen(parser.string_arg) <= 15)
			strcpy(esp32_serial, parser.string_arg);
		else
			strncpy(esp32_serial, parser.string_arg, 15);
		#endif
		break;

	case 206:	// ����ESP32�Ĺ̼��汾�ַ���
		#ifdef WIFISUPPORT
		memset(esp32_version, 0, 8);
		if (strlen(parser.string_arg) <= 8)
			strcpy(esp32_version, parser.string_arg);
		else
			strncpy(esp32_version, parser.string_arg, 8);
		#endif
		break;

	case 207:	// ����ESP32���豸�����ַ���
		#ifdef WIFISUPPORT
		ZERO(esp32_name);
        ParseStringArg(esp32_name, 12);
		#endif
		break;

	case 208:	// ����ESP32״̬��Ϣ�ַ���
		#ifdef WIFISUPPORT
		ZERO(esp32_message);
        ParseStringArg(esp32_message, 22);
		#endif
		break;

	case 209:		// ȡ����ӡ
		wt_sdcard_stop();
		while (1);
		break;

	case 210:		// ���ӹ���Ĭ��wifi��
		WT_WIFI_Default();
		break;

	case 211:		// W211 ����ͷ0����
		wt_OpenExtruder0Fan();
		break;

	case 212:		// W212 �ر���ͷ0����
		wt_CloseExtruder0Fan();
		break;

	case 213:	// WEEDO��״̬ 
		ParseTBState();
		break;

	case 214:		// �򿪿��˷���
		wt_OpenAirFan();
		break;

	case 215:		// �رտ��˷���
		wt_CloseAirFan();
		break;

	case 216:		// �������������SD��gcode�ļ�
		wt_save_config();
		break;

	case 217:		// ��SD��gcode�ļ��ж�ȡ�����������������ڴ�
		wt_load_config();
		break;

	case 218:		// ������AP��
		ParseAPName();
		break;

	case 219:		// AP�ź�ǿ��
		ParseWifiSignal();
		break;

	case 220:		// ����jpg����
		gcodeinfo.send_jpg_line(parser.string_arg);
		break;

	case 221:		// ����jpg���ݿ�ʼ
		#ifdef DGUS_LCD
		dserial.JPG_Reset();
		dgus.EnablePreviewAction(false);
		#endif
		break;

	case 222:		// ����jpg���ݽ���
		#ifdef DGUS_LCD
		dserial.JPG_Show();
		dgus.EnablePreviewAction(true);
		#endif
		break;

	case 223:		// ����GCode��Ϣ
		ParseFileInfo();
		break;

	case 224:		// ��˿��ͣ
	{
		if (wt_onlineprinting == SPARK_IDLE || wt_onlineprinting == SPARK_LOST)
			wt_sdcard_pause(false);
		else
			wt_online_pause();
		#ifdef DGUS_LCD
		dgus.ShowRunoutMessage();
		#endif
        planner.synchronize();
		PORT_REDIRECT(1);
		SERIAL_ECHOLNPGM("//action:" ACTION_ON_RUNOUT);
		PORT_RESTORE();
        wtvar_runout = 1;
		break;
	}

    case 225:       // ����SoftEndstop
        update_software_endstops(X_AXIS);
        break;

    case 226:       // �ر���ͷXYƫ�ôֵ��뾫������
        hotend_offset[1].x = T1_OFFSET_X;
        hotend_offset[1].y = 0;
        break;

    case 227:       // �ر���ͷXYƫ�þ�������
        hotend_offset[1].x = T1_OFFSET_X + (wtvar_tune_x1 - 3);
        hotend_offset[1].y = 0;
        break;

    case 228:       // �ָ���ͷXYƫ�ôֵ��뾫������
        hotend_offset[1].x = T1_OFFSET_X + (wtvar_tune_x1 - 3) + ((float)wtvar_tune_x2 - 5) / 10;
        hotend_offset[1].y = ((float)wtvar_tune_y - 5) / 10;
        break;

    case 299:       // �رյ�Դ
        wt_PowerOff();
        break;
		
	case 300:		// ����WIFI��ssid
		ZERO(wifi_ssid);
		strcpy(wifi_ssid, parser.string_arg);
		break;

	case 301:		// ����WIFI��pwd
		ZERO(wifi_pwd);
		strcpy(wifi_pwd, parser.string_arg);
		break;

	case 302:			// ����WIFI����
		WT_WIFI_Join();
		break;
	#ifdef DGUS_LCD
	case 303:			// ����NDisk�ļ�ҳ��
		if (parser.seen('P'))
		{
			dgus.ndisk_pagecount = parser.value_int();
			dgus.ndisk_pageload = true;
		}
		break;

	case 304:			// NDisk�б�ʼ
		dgus.NDisk_Clear();
		break;

	case 305:			// NDisk�ļ���
		parse_ndisk_file_info();
		break;

	case 306:			// NDisk�ļ��б����
		dgus.NDisk_Show();
		break;

	case 307:			// NDisk�ļ�������
		ParseStringArg(gcodeinfo.info.machine, 20);
		break;

	case 308:			//NDisk�ļ����
		ParseStringArg(gcodeinfo.info.layerheight, 10);
		break;

	case 309:			// NDisk�ļ������
		ParseStringArg(gcodeinfo.info.density, 10);
		break;

	case 310:			// NDisk�ļ�����
		ParseStringArg(gcodeinfo.info.material, 10);
		break;

	case 311:			// NDisk�ļ���˿����
		ParseStringArg(gcodeinfo.info.filament, 10);
		break;

	case 312:			// NDisk�ļ��¶�
		ParseStringArg(gcodeinfo.info.temp0, 10);
		break;

	case 313:			// NDisk�ļ���ӡʱ��
		ParseStringArg(gcodeinfo.info.totaltime, 10);
		break;

	case 314:			// W314 NDisk�ļ���Ϣ����
		dgus.GotoPreviewMenu(PREVIEW_PARENT_WIFI);
		break;

	case 315:			// NDisk�б��и���
		dgus.ndisk_pageload = false;
		dgus.ndisk_pagecount = 0;
		break;

	case 316:			// ���ڴ�ӡ�ļ���
    {
		char filename_buffer[UNICODE_FILENAME_LENGTH];
		ZERO(filename_buffer);
		uint16_t _len = Utf8ToUnicode(parser.string_arg, filename_buffer);
		dgus.SetFileInfo(1, filename_buffer, _len);
		dgus.jobinfo.remote = true;
		break;
    }

    case 317:           // NDisk MinX
        gcodeinfo.info.x_min = atol(parser.string_arg);
        break;

    case 318:           // NDisk MaxX
        gcodeinfo.info.x_max = atol(parser.string_arg);
        break;
	#endif

    case 999:           // WIFICAM ����
        wt_wifi_boot();
        break;

	default:
		break;

	}

}

// restart
void wt_restart()
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("//action:" ACTION_ON_DISCONNECT);
	safe_delay(500);
	nvic_sys_reset();
};

// send buffer count
void wt_echo_buffer_count()
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPAIR_P("BUSP:", BUFSIZE - queue.length);
	PORT_RESTORE();
}

// ��WIFIͨѶ���ݷ���������1
void wifi_debug(const char* message, bool incoming)
{
	if (startsWith(message, "W220")) return;

	if (incoming)
		SERIAL_ECHOLNPAIR_P("wifi in: ", message);
	else
		SERIAL_ECHOLNPAIR_P("wifi out: ", message);
}

// request ndisk page count
// WTCMD:COUNT		��ȡ�����ļ�ҳ��
void wt_ndisk_read_page_count(void)
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("WTCMD:COUNT");
	PORT_RESTORE();
}

// read ndisk file page
// WTCMD:PAGEID		��ȡ�����ļ�ҳ��
void wt_ndisk_read_page()
{
	if (dgus.ndisk_pagecount > 0)
	{
		PORT_REDIRECT(1);
		SERIAL_ECHOLNPAIR_P("WTCMD:PAGEID ", dgus.ndisk_pageid);
		PORT_RESTORE();
	}
	else
	{
		dgus.NDisk_Clear();
		dgus.NDisk_Show();
	}
}

// read ndisk file info
// WTCMD:FILE		��ȡ�����ļ���Ϣ
void wt_ndisk_read_fileinfo(void)
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPAIR_P("WTCMD:FILE ", uploadFilename);
	PORT_RESTORE();
}

// print ndisk selected file
// WTCMD:PRINT		��ӡ�����ļ�
void wt_ndisk_print(void)
{
	PORT_REDIRECT(1);
	SERIAL_ECHOLNPGM("WTCMD:PRINT");
	PORT_RESTORE();
}

void host_action_start()
{
	PORT_REDIRECT(1);
	SERIAL_ECHOPGM("//action:");
  	serialprintPGM(PSTR(ACTION_ON_START));
  	SERIAL_EOL();
	PORT_RESTORE();
}

void host_action_finish()
{
	PORT_REDIRECT(1);
	SERIAL_ECHOPGM("//action:");
  	serialprintPGM(PSTR(ACTION_ON_FINISH));
  	SERIAL_EOL();
	PORT_RESTORE();
}


static void wt_pause_print()
{
	// ���浱ǰλ��
  	resume_position = current_position;

    // ���浱ǰĿ���¶�
    resume_nozzle0 = thermalManager.degTargetHotend(0);

    #if HOTENDS > 1
    resume_nozzle1 = thermalManager.degTargetHotend(1);
    #endif

    #if HAS_HEATED_BED
    resume_bed = thermalManager.degTargetBed();
    #endif

    // �����ٶ�
    resume_feedrate = feedrate_mm_s;

	// �ȴ���ɵ�ǰ����
  	planner.synchronize();

    #if ENABLED(DUAL_X_CARRIAGE)
    const int8_t saved_ext        = active_extruder;
    const bool saved_ext_dup_mode = extruder_duplication_enabled;
    extruder_duplication_enabled = false;
    #endif

	// ��˿�س�
    if (wtvar_runout == 0)
    {
        current_position.e += -PAUSE_PARK_RETRACT_LENGTH / planner.e_factor[active_extruder];
    }
    else
    {   // runout�¼�
        current_position.e += -40 / planner.e_factor[active_extruder];
    }
    line_to_current_position(PAUSE_PARK_RETRACT_FEEDRATE);
	planner.synchronize();

	// �ƶ���ͷ���ȴ�λ��
    endstops.enable(true); 
    homeaxis(X_AXIS);

    #if ENABLED(DUAL_X_CARRIAGE)
    active_extruder = saved_ext;
    extruder_duplication_enabled = saved_ext_dup_mode;
    stepper.set_directions();
    #endif

	#if HAS_FILAMENT_SENSOR
    runout.reset();
    wtvar_runout = 0;
  	#endif
}

static void wt_resume_print()
{
	// �ƶ���ͷ���ȴ�λ��
    endstops.enable(true); 
    homeaxis(X_AXIS);
	
    // �ָ��¶�
    thermalManager.setTargetHotend(resume_nozzle0, 0);
	
    #if HOTENDS > 1
    thermalManager.setTargetHotend(resume_nozzle1, 1);
    #endif

    #if HAS_HEATED_BED
    thermalManager.setTargetBed(resume_bed);
    #endif

	
	bool nozzle_timed_out = false;
	HOTEND_LOOP() {
		nozzle_timed_out |= thermalManager.hotend_idle[e].timed_out;
		thermalManager.reset_hotend_idle_timer(e);
	}

	// ������˿
	if (nozzle_timed_out || thermalManager.hotEnoughToExtrude(active_extruder)) 
		load_filament(0, 0, ADVANCED_PAUSE_PURGE_LENGTH, 0, false, false);

	// If resume_position is negative
	if (resume_position.e < 0) do_pause_e_move(resume_position.e, feedRate_t(PAUSE_PARK_RETRACT_FEEDRATE));

	// Move XY to starting position, then Z
	do_blocking_move_to_xy(resume_position, feedRate_t(NOZZLE_PARK_XY_FEEDRATE));

	// Move Z_AXIS to saved position
	do_blocking_move_to_z(resume_position.z, feedRate_t(NOZZLE_PARK_Z_FEEDRATE));

	// Set extruder to saved position
  	planner.set_e_position_mm((destination.e = current_position.e = resume_position.e));

    // �ָ��ٶ�
    feedrate_mm_s = resume_feedrate;

	#if HAS_FILAMENT_SENSOR
    runout.reset();
  	#endif
}

// main loop action
void wt_loopaction(void)
{
	if (wt_mainloop_action == WMA_IDLE) return;

	if (wt_mainloop_action == WMA_PAUSE)
	{
		if (queue.length > 0) return;
		
		wt_pause_print();

		#ifdef ACTION_ON_RESUMED
		host_action_paused();
		#endif

		wt_mainloop_action = WMA_IDLE;
	}
	else if (wt_mainloop_action == WMA_RESUME)
	{

	}

	
}