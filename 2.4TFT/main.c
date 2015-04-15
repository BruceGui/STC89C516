#include <reg52.h>
#include <intrins.h>
#include "init.h"

void PutGB3232(unsigned short x, unsigned short  y, unsigned int fColor,unsigned int bColor);

unsigned char code one [] = {
0xC0,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x40,0x00,0x90,0x00,0x60,0x80,0x00,0x00,
0x70,0x40,0x01,0x00,0x40,0x00,0x00,0x00,0x64,0x60,0xA0,0x00,0x00,0x08,0x00,0x80,
0x00,0x00,0x02,0x00,0x04,0x40,0x00,0x00,0x00,0x24,0x02,0x00,0x00,0x00,0x10,0x00,
0x00,0x00,0x00,0x00,0x08,0xA0,0x00,0x40,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x20,
0x0A,0xA0,0x08,0x00,0x00,0x00,0x01,0x00,0x10,0x88,0x00,0x00,0x08,0x01,0x20,0x20,
0x20,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x22,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x20,0x00,0x80,0x00,0x10,0x00,0x00,0x00,0x00,0x80,0x04,0x00,0x03,0xFF,0xF8,0x00,
0x03,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

void main()
{
	unsigned short m;
	shiliu=1;
	spistar();  //模拟spi初始化
	Lcd_Init();   //tft初始化
	LCD_CS =0;  //打开LCD片选使能	
 	Pant(Yellow);	//清屏
	PutGB3232 (34, 45, Cyan, Yellow);
	while (1)
	{
		delayms (120);	
	}
}

void PutGB3232(unsigned short x, unsigned short  y, unsigned int fColor,unsigned int bColor)
{
	unsigned int i,j;

	Address_set(x, x + 31, y, y + 31);

 
    	for(i=0;i<128;i++) 
		{
			unsigned short m=one[i];
			for(j=0;j<8;j++) 
			{
				if((m&0x80)==0x80) 
				{
					Write_Data_U16(fColor);
				}
				else 
				{
					Write_Data_U16(bColor);
				}
				m<<=1;
			} 
	}
}  
 	
 