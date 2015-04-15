#include <reg52.h>

typedef unsigned char  uchar;
typedef unsigned short uint;

void delay(uint time);
void uart_init();
void uart_send_byte(uint dat);

sbit add = P1^7;
sbit cut = P1^6;
uint num = 0;

void main()
{
	uart_init();
   	while(1)
   	{
   		if(!add)
		{
			delay(5);
			while(!add);
			if(num < 255)
			{
				num ++;
			}
			uart_send_byte(num);	
		}
		
		if(!cut)
		{
			delay(5);
			while(!cut);
			if(num > 0)
			{
				num --;
			}
			uart_send_byte(num);	
		}	
   	}
}

void uart_init()
{
	SCON = 0x50;   //���ڵĹ�����ʽ����
	TMOD = 0x20;   //��ʱ�� 1 ������ʽ����
	TH1 = 0xFD;	   //���üĴ�����ֵ ȷ��������
	TL1 = 0xFD;			  
	TR1 = 1;
}

void uart_send_byte (uint dat)
{
	SBUF = dat;
	while (TI == 0);
	TI = 0;	
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