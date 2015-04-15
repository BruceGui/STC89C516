#include <reg52.h>
#include <intrins.h>
#include "eeprom.h"

void delay(uint);

void main()
{
	uchar temp;                   //�����м����
   temp=read_word(0xa0,0);       //��I2C����a0�ĵ�0����ַ�������ݸ���temp
   write_word(0xa0,0,temp+1);    //��I2C����a0�ĵ�0����ַдtemp+1
   delay(100);                   //��ʱ  
   while(1)                      //��ѭ��
    {
	  temp=read_word(0xa0,0);    //�ӵ�0����ַ����һ������
	  delay(100);                //��ʱ
      P1=~temp;                  //�����ݵ�P1����ʾ
	}
}

void delay(uint time)
{
	uint i = 110;
	while(time --)
	{
		while(i --);
		i = 110;
	}
}