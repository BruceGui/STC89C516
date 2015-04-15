#include <reg51.h>
#include <intrins.h>
#include "delay.h"

/*sbit delayButton = P3^7;
sbit sound = P2^0; */

uchar keyValue;

void keyScan();
uint keyHandle();

void main()
{
	while(1)
	{
		/*if(!delayButton)
		{
			delay(10);
			while(!delayButton);
			sound = 0;
		}
		sound = 1; */
		keyScan();
		P1 = ~keyHandle();
	}
}

void keyScan()
{
	/*P3 = P3|0xF8;
	if((P3&0xF8) != 0xF8)
	{
		//delay(10);
		if((P3&0xF8) != 0xF8)
		{
			keyValue = P3&0xF8;
		}
	}*/

	/*uchar readcode = 0x00;
	uchar scancode = 0x00;

	P3 = 0xF0;
	if((P3&0xF0) != 0xF0)
	{
		delay(10);
		P3 = 0xF0;
		if((P3&0xF0) != 0xF0)
		{
			scancode = 0xFE;
			while(scancode != 0xEF)
			{
				P3 = scancode;
				if((P3&0xF0) != 0xF0)
				{
				//	while((P3&0xF0) != 0xF0);
					readcode = P3&0xF0;
					scancode = scancode&0x0F;
					keyValue = scancode + readcode;
					return ;
				}
				else
				{
					scancode = _crol_(scancode, 1);
				}
			}
		}
		else
		{
			return ;
		}
	}
	else
	{
		return ;
	} 

	uchar h;
	uchar l;

	P3 = 0xF0;
	if((P3&0xF0) != 0xF0)
	{
		delay(10);
		if((P3&0xF0) != 0xF0)
		{
			h = P3&0xF0;
			P3 = 0x0F;
			l = P3&0x0F;
			keyValue = h | l;	
		}
	}*/

	uchar x,y; 
  P3=0xf0;                              //P3��ֵ0xf0
  if((P3&0xf0)!=0xf0)                   //�жϸ�4λ�Ƿ�Ϊȫ1����4λȫ1����û�������£�

    {
      delay(20);                        //��ʱȥ������һ��Ϊ5ms��10ms�����ڻ�е����ĵ������ã������ڱպ�ʱ���������ȶ��ؽ�ͨ��
	                                    //���ڱպ�˲�������һ�����Ķ�����������������һ�ΰ����������Σ�
      if((P3&0xf0)!=0xf0)               //������ܼ�⵽�м��̰���ȥ 
        {
		  x=P3&0xf0;                    //��ȡP3������
          P3=0x0f;                      //��ת��P3��ֵ0x0f             
          y=P3&0x0f;                    //��ȡP3������
          keyValue=x|y;                 //�õ�ɨ����
        }
    }
}
/*
uchar keyScan()  
{
  uchar scode=0x00;//ɨ����
  uchar rcode=0x00;//������
  
  P3=0xf0;
  if((P3&0xf0)!=0xf0)                   //�жϸ�4λ�Ƿ�Ϊȫ1����4λȫ1����û�������£�

    {
      delay(20);                        //��ʱȥ������һ��Ϊ5ms��10ms�����ڻ�е����ĵ������ã������ڱպ�ʱ���������ȶ��ؽ�ͨ��
	                                    //���ڱպ�˲�������һ�����Ķ�����������������һ�ΰ����������Σ�
      P3=0xf0;
      if((P3&0xf0)!=0xf0)               //���ܼ�⵽�м��̰���ȥ������ɨ��
        {
		 
          scode=0xfe;                   //��ɨ����
          while(scode!=0xef)            //���û��ɨ���꣬����ɨ��
             {
               P3=scode;                //��ɨ����
               if((P3&0xf0)!=0xf0)      //��⵽��
                 {
                    rcode=P3;           //����P3�ڵ�״̬
                    rcode=rcode & 0xf0; //���ɷ������4λ
                    scode=scode & 0x0f; //���ɷ������4λ
                    keyValue=scode + rcode;//���ؼ��̱���, ������������ɨ�躯��������ִ�е�return����ʱ��ͷ��أ����������䶼����ִ�У���
					return keyValue;					 
                 }
               else
                 {
                   scode=(scode<<1)|0x01;//��λ��������һ��ɨ����,˳��0xfe>>0xfd>>0xfb>>0xf7>>0xef
				   //scode = _crol(scode, 1)_
				   					     //��ɨ����Ϊ0xefʱ���ж�����scode!=0xeΪ�� ������while ѭ��
                 }
				
             }
           return(0);  //û�м�⵽����0
        }
      else             //û�м��̰���ȥ����һ����һ������ 
        {
         return(0);    //û�м�⵽����0
        }
    }
  else  //û�м��̰���ȥ
    {
     return(0);  //û�м�⵽����0
    }
}*/

uint keyHandle()
{
	switch(keyValue)
	{
		case 0xee:{return(0);break;}	   //��Ӧ����S1
	   case 0xde:{return(1);break;}	   //��Ӧ����S2	
	   case 0xbe:{return(2);break;}	   //��Ӧ����S3	
	   case 0x7e:{return(3);break;}	   //��Ӧ����S4	
	   case 0xed:{return(4);break;}	   //��Ӧ����S5	
	   case 0xdd:{return(5);break;}	   //��Ӧ����S6	
	   case 0xbd:{return(6);break;}	   //��Ӧ����S7	
	   case 0x7d:{return(7);break;}	   //��Ӧ����S8	
	   case 0xeb:{return(8);break;}	   //��Ӧ����S9	
	   case 0xdb:{return(9);break;}	   //��Ӧ����S10	
	   case 0xbb:{return(10);break;}   //��Ӧ����S11	
	   case 0x7b:{return(11);break;}   //��Ӧ����S12
	   case 0xe7:{return(12);break;}   //��Ӧ����S13	
	   case 0xd7:{return(13);break;}   //��Ӧ����S14	
	   case 0xb7:{return(14);break;}   //��Ӧ����S15	
	   case 0x77:{return(15);break;}   //��Ӧ����S16
	   default:{break;}	
	}
}