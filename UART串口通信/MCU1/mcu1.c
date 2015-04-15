#include <reg51.h>

typedef unsigned char uchar;
typedef unsigned int  uint;

void delay(uint);
void uart_init();
void uart_send(uint);
void keyscan();

uint temp;

void main()
{
	uart_init();
	while(1)
	{
		keyscan();
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

void keyscan()
{
    P2=0xfe;
    temp=P2;
    temp=temp&0xf0;
    while(temp!=0xf0)
    {
      delay(5);
      temp=P2;
      temp=temp&0xf0;
      while(temp!=0xf0)
      {
       	temp=P2;
      	switch(temp)
       {
        case 0xee: uart_send(4);
         break;
        case 0xde: uart_send(4);
         break;
        case 0xbe: uart_send(4);
         break;
        case 0x7e: uart_send(4);
         break;
       }
      while(temp!=0xf0)
       {
        temp=P2;
        temp=temp&0xf0;
       }
      }
     }
}


void uart_send(uint ch)
{
	SBUF = ch;
	while(!TI);
	TI = 0;
}

void delay(uint time)
{
	while(time--);
}