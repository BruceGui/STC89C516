#include <reg52.h>
#include <intrins.h>
#include "gettime.h"

sbit DS1302_SCLK = P1^0;
sbit DS1302_IO   = P1^1;
sbit DS1302_RST  = P1^2;

void DS1302_WByte(uchar ndata)
{
	uchar i;
	for(i = 0; i < 8; i ++)
	{
		DS1302_IO   = (bit)(ndata&0x01);
		DS1302_SCLK = 1;
		_nop_();
		DS1302_SCLK = 0;
		ndata >>= 1;
	}
}

uchar DS1302_RByte()
{
	uchar i, ndata;
	for(i = 0; i < 8; i ++)
	{
		DS1302_IO = 1;
		ndata >>= 1;
		if(DS1302_IO)
		{
			ndata |= 0x80;
		}
		DS1302_SCLK = 1;
		_nop_();
		DS1302_SCLK = 0;
	}
	return ndata;
}

void DS1302_WData(uchar nAddr, uchar ndata)
{
	DS1302_RST  = 0;
	DS1302_SCLK = 0;
	DS1302_RST  = 1;
	DS1302_WByte(nAddr);
	DS1302_WByte(ndata);
	DS1302_SCLK = 1;
	DS1302_RST  = 0;
}

uchar DS1302_RData(uchar nAddr)
{
    uchar ndata;
 	DS1302_RST=0;
	DS1302_SCLK=0;
	DS1302_RST=1;
    DS1302_WByte(nAddr);       /* ��ַ������ */
    ndata = DS1302_RByte();    /* ��1Byte���� */
    DS1302_SCLK=1;
	DS1302_RST=0;
    return(ndata);
}

void GetTime()
{
		TIME.SEC	= DS1302_RData(0x81);    //��DS1302��ȡ������
        dtime[0][0]=(TIME.SEC>>4)+0x30;      //ʮλ
		dtime[0][1]=(TIME.SEC&0x0F)+0x30;    //��λ   

		TIME.MIN	= DS1302_RData(0x83);    //��DS1302��ȡ������
        dtime[1][0]=(TIME.MIN>>4)+0x30;      //ʮλ  
		dtime[1][1]=(TIME.MIN&0x0F)+0x30;    //��λ

		TIME.HR		= DS1302_RData(0x85);    //��DS1302��ȡʱ����
        dtime[2][0]=(TIME.HR>>4)+0x30;       //ʮλ  
		dtime[2][1]=(TIME.HR&0x0F)+0x30;     //��λ

		TIME.DATE	= DS1302_RData(0x87);    //��DS1302��ȡ������
        dtime[3][0]=(TIME.DATE>>4)+0x30;     //ʮλ  
		dtime[3][1]=(TIME.DATE&0x0F)+0x30;   //��λ

		TIME.MONTH	= DS1302_RData(0x89);    //��DS1302��ȡ������
        dtime[4][0]=(TIME.MONTH>>4)+0x30;    //ʮλ  
		dtime[4][1]=(TIME.MONTH&0x0F)+0x30;  //��λ

		TIME.DAY	= DS1302_RData(0x8b);    //��DS1302��ȡ��������
        dtime[5][0]=(TIME.DAY>>4)+0x30;      //ʮλ  
		dtime[5][1]=(TIME.DAY&0x0F)+0x30;    //��λ

		TIME.YEAR	= DS1302_RData(0x8d);    //��DS1302��ȡ������
        dtime[6][0]=(TIME.YEAR>>4)+0x30;     //ʮλ  
		dtime[6][1]=(TIME.YEAR&0x0F)+0x30; 
}