#ifndef INIT_H
#define INIT_H����򿪴˾�
#define  LCD_DataPortH P1     //��8λ���ݿ�,8λģʽ��ֻʹ�ø�8λ
  
#define White          0xFFFF
#define Black          0x0000
#define Blue           0x001F
#define Blue2          0x051F
#define Red            0xF800
#define Magenta        0xF81F
#define Green          0x07E0
#define Cyan           0x7FFF
#define Yellow         0xFFE0

sbit shiliu=P2^4;
sbit LCD_REST=P2^3;		//��λ
sbit LCD_CS=P2^5;		//Ƭѡ
sbit LCD_RD =P2^2;		     //������
sbit LCD_WR=P2^1;
sbit LCD_RS=P2^0;		//����/����ѡ��

sbit DCLK	   =    P3^0;   
sbit CS        =    P3^1;
sbit DIN       =    P3^2;	
sbit DOUT      =    P3^3;																						   
sbit Penirq       =    P3^4;   //��ⴥ������Ӧ�ź�

void spistar();
void WriteCharTo7843(unsigned char num);
unsigned int ReadFromCharFrom7843();
static void LCD_SetPos(unsigned int x0,unsigned int x1,unsigned int y0,unsigned int y1);
void delayms(int count);
void LCD_Writ_Bus(char VH,char VL);
void Lcd_Write_Com(char VH,char VL);
void Lcd_Write_Data(char VH,char VL);
void Address_set(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2);
void Lcd_Init(void);
void Pant(int dcolor);
void draw_rec(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2, int dcolor);
void LCD_PutChar(unsigned short x, unsigned short y, char c, unsigned int fColor, unsigned int bColor);
void Write_Data_U16(unsigned int y);
void LCD_PutString(unsigned short x, unsigned short y, unsigned char *s, unsigned int fColor, unsigned int bColor);
void Write_Cmd_Data (unsigned char x,unsigned int y);
void Write_Data(char YH,char YL);
void Write_Cmd(char YH,char YL);

#endif