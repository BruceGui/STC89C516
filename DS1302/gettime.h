#ifndef TIME_H
#define TIME_H

//#ifndef TYPE
//#define TYPE
//
//typedef unsigned int  uint;
//typedef unsigned char unsigned char;
//
//#endif

unsigned char dtime[7][2]={	    
                     {0x20,0x20},	//�� ʮλ�͸�λ
					 {0x20,0x20},	//�� ʮλ�͸�λ
					 {0x20,0x20},	//ʱ ʮλ�͸�λ
					 {0x20,0x20},	//�� ʮλ�͸�λ
					 {0x20,0x20},	//�� ʮλ�͸�λ
					 {0x20,0x20},	//�� ʮλ�͸�λ
					 {0x20,0x20}	//�� ʮλ�͸�λ
                 	};

struct S_TIME
{
	unsigned char SEC;
	unsigned char MIN;
	unsigned char HR;
	unsigned char DATE;
	unsigned char MONTH;
	unsigned char DAY;
	unsigned char YEAR;
}TIME;


void GetTime();
void DS1302_WByte(unsigned char);
void DS1302_WData(unsigned char nAddr, unsigned char ndata);
unsigned char DS1302_RByte();
unsigned char DS1302_RData(unsigned char nAddr);


#endif