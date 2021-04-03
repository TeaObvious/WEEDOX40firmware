/**
* Copyright (C) 2019 Wiibooxtech Perron
*/


#ifndef __PACKET_H
#define __PACKET_H

#define START_BYTE 0xEB
#define END_BYTE 0x0A
#define MAX_PACKET_PAYLOAD 255
#define OUT_PACKET_PAYLOAD 96

#include <stdio.h>

typedef enum {
	PS_START  = 0,
	PS_LEN = 1,
	PS_PAYLOAD = 2,
	PS_CRC = 3,
	PS_END = 4
} PacketStatusEnum;

typedef enum {
	RC_EXIST = 0xEB,
	RC_OK = 0x80,
	RC_CRC_MISMATCH = 0x81,
	RC_BUFFER_OVERFLOW = 0x82,
	RC_CMD_UNSUPPORTED = 0x83,
	RC_CMD_ExecFail = 0x84,
	RC_PACKET_ERROR = 0x85,
	RC_PACKET_NOEND = 0x86
} ResponseCode;

/// ͨѶ���ݰ�������
class Packet
{
	protected:
		uint8_t length = 0; /// The current length of the payload (data[0] if raw packets)
		uint8_t crc; /// The CRC of the current contents of the payload (data[-1] of raw packets)

		ResponseCode rcode; // Have any errors cropped up during processing?
		PacketStatusEnum state = PS_START;
		uint8_t i;
		//uint8_t BUFFER_SIZE = MAX_PACKET_PAYLOAD;
	
		void error(ResponseCode error_code_in);
	
	public:

		uint8_t payload[MAX_PACKET_PAYLOAD]; /// Data payload (starts at data[2] of raw packet)

		/// Append a byte and update the CRC
		void appendByte(uint8_t data);
		/// Reset this packet to an empty state
		void Reset(void);
		/// Return Packet error
		char Get_Error(void);

		/// <summary>
		/// �������ݰ�״̬
		/// </summary>
		/// <returns>PacketStatusEnum.</returns>
		PacketStatusEnum State(void) { return state; };
		/// Set CmdBuffer
		//void SetCmdBuffer(CmdBuffer *cmdBuffer);

		char port;

};


/// �������ݰ�
class OutPacket : public Packet
{
public:
	//OutPacket(void);
	void Send(void);

private:
	uint8_t buffer[OUT_PACKET_PAYLOAD];
};

/// �������ݰ�
class InPacket : public Packet
{
	public:
		//InPacket(void);
		void Receiver(uint8_t data);
		void SetOutPacket(OutPacket* op) { outp = op;};
		void SendCommand(char cmd);

        volatile int filelength;
        volatile int received;
		
	private:
		volatile uint8_t expected_length;
		volatile uint8_t send_payload_index;
		OutPacket* outp;
	
		void PayloadProcess(void);

		void Process_State(void);

		void Process_BeginWrite(void);

		void Process_WritePage(void);

		void Process_EndWrite(void);

		void Process_Version(void);

		void Process_Temperature(void);

		void Process_Print(void);

		void Process_Filelist(void);

		void Process_Filedelete(void);

		void Process_GCode(void);

		void Process_Unknown(void);

		void Proess_WifiSetting(void);

		void Process_Reboot(void);

		void Process_GetIP(void);

		void Process_GetESP32HV(void);

		void Process_GetESP32FV(void);

		void Process_GetESP32NAME(void);

		void Process_GetESP32Serial(void);

		void Process_AbortPrinting(void);

        void Process_FileLength(void);
};


#endif

