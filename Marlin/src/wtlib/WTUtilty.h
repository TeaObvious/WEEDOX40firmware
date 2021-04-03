#ifndef WT_UTILTY_H
#define WT_UTILTY_H

#include <stdbool.h>

bool startsWith(const char *str1, const char *str2);

uint16_t hexStringConvert(const char *hexStr, uint8_t *pBinArray);

// �������ַ�����ָ���ַ�����Ӧ��ֵ
uint8_t extractFront(const char* source, char* ident, char* valString);

// utf8תunicode
int Utf8ToUnicode(const char* pInput, char* pOutput);

// �汾�Ƚ�
bool VersionCompare(char* oldVersion, char* newVersion);

#endif