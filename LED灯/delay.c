#include<reg52.h>  //ͷ�ļ�
#include "delay.h"

int x,y;

/****************��ʱ����************************/
 void delay(unsigned int sm) //��ʱ����
{
 for(x=sm;x>0;x--)
  for(y=110;y>0;y--);
}  

