unsigned char code computer[3][30] = {
{0x20,0x40,0x10,0x40,0x10,0x40,0x00,0x40,0x00,0x40,0x77,0xFC,0x10,0x40,0x10,0x40,
0x10,0x40,0x10,0x40,0x14,0x40,0x18,0x40,0x10,0x40,0x00,0x40,0x00,0x00,},
{0x10,0x40,0x3F,0x7C,0x44,0x90,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,
0x10,0x10,0x1F,0xF0,0x04,0x40,0x7F,0xFC,0x08,0x40,0x10,0x40,0x00,0x00,},
{0x10,0x00,0x11,0xF0,0x11,0x10,0x7D,0x10,0x11,0x10,0x11,0x10,0x39,0x10,0x35,0x10,
0x51,0x10,0x11,0x10,0x11,0x10,0x12,0x14,0x12,0x14,0x14,0x0C,0x00,0x00,}
};

unsigned char code space[30] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}; 

unsigned char code num[11][40] = {
{0x00,0x00,0x00,0x00,0x1F,0x00,0x31,0x80,0x31,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,
0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x31,0x80,
0x31,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x7C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
0x0C,0x00,0x7F,0x80,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x1F,0x00,0x31,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x01,0x80,
0x01,0x80,0x03,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x78,0xC0,0x6C,0xC0,
0x67,0xC0,0x63,0x80,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x7F,0xC0,0x60,0xC0,0x61,0x80,0x61,0x80,0x03,0x00,0x03,0x00,
0x06,0x00,0x1F,0x00,0x01,0x80,0x00,0xC0,0x00,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,
0x31,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x00,0x07,0x00,0x0F,0x00,0x0B,0x00,0x1B,0x00,
0x13,0x00,0x33,0x00,0x23,0x00,0x63,0x00,0x43,0x00,0xC3,0x00,0xFF,0xC0,0x03,0x00,
0x03,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x3F,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0x00,0x30,0x00,
0x3F,0x00,0x31,0x80,0x30,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x60,0xC0,0x60,0xC0,
0x31,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x1F,0x00,0x31,0x80,0x60,0xC0,0x60,0xC0,0x60,0x00,0x60,0x00,
0x6F,0x00,0x71,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,
0x31,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x78,0xC0,0x6F,0xC0,0x61,0x80,0x61,0x80,0x63,0x00,0x03,0x00,
0x03,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x1F,0x00,0x31,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,
0x31,0x80,0x1F,0x00,0x31,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,
0x31,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x1F,0x00,0x31,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,
0x60,0xC0,0x60,0xC0,0x31,0xC0,0x1E,0xC0,0x00,0xC0,0x00,0xC0,0x60,0xC0,0x60,0xC0,
0x31,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x38,0x00,0x38,0x00,0x00,0x00,0x00,0x00,},
};

unsigned char code MCU_C[9][30] = {
/*单*/
{0x00,0x00,0x00,0x40,0x1C,0xE0,0x0D,0xC0,0x7F,0xF0,0x63,0x30,0x7F,0xF0,0x63,0x30,
0x7F,0xF0,0x03,0x00,0xFF,0xFC,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,},
/*片*/	
{0x00,0x00,0x00,0xC0,0x19,0x80,0x19,0x80,0x19,0x80,0x1F,0xF8,0x18,0x00,0x18,0x00,
0x1F,0xE0,0x18,0xE0,0x38,0xE0,0x30,0xE0,0x30,0xE0,0xE0,0xE0,0x00,0x00,},
/*机*/
{0x00,0x00,0x38,0x00,0x30,0x00,0x33,0xF0,0xFF,0x30,0x33,0x30,0x3B,0x30,0x7F,0x30,
0x7F,0x30,0xF3,0x30,0xF3,0x30,0x33,0x30,0x36,0x3C,0x3E,0x38,0x00,0x00,},
/*创*/	
{0x00,0x00,0x00,0x08,0x1C,0x18,0x1C,0xF8,0x37,0xD8,0x61,0xD8,0xFF,0xD8,0xF3,0xD8,
0x36,0xD8,0x36,0xD8,0x3E,0xD8,0x33,0x18,0x33,0x18,0x3F,0x78,0x00,0x00,},
/*业*/	
{0x00,0x00,0x00,0x00,0x0F,0xC0,0x0D,0x80,0x0D,0x98,0x6D,0xB8,0x3D,0xB0,0x3D,0xB0,
0x3D,0xE0,0x1D,0xE0,0x0D,0x80,0x0D,0x80,0xFF,0xF8,0x00,0x00,0x00,0x00,},
/*孵*/	
{0x00,0x00,0x00,0x00,0xF8,0x18,0xDF,0xF8,0xFF,0xFC,0xFF,0xF8,0xFE,0x00,0xFF,0xF8,
0xFE,0x60,0xFF,0xFC,0xFE,0x60,0x3C,0x60,0x6C,0x60,0xEC,0xE0,0x00,0x00,},
/*化*/	
{0x00,0x00,0x00,0x00,0x1F,0x80,0x1B,0x80,0x33,0x98,0x33,0xB8,0x73,0xE0,0xF3,0xC0,
0x33,0x80,0x37,0x80,0x3F,0x80,0x33,0x88,0x31,0x9C,0x31,0xF8,0x00,0x00,},
/*基*/	
{0x00,0x00,0x08,0x20,0x18,0x60,0x7F,0xF8,0x18,0x60,0x1F,0xE0,0x18,0x60,0x1F,0xE0,
0x18,0x60,0xFF,0xFC,0x1B,0x60,0x3F,0xF0,0xE3,0x1C,0x3F,0xF0,0x00,0x00,},
/*地*/
{0x00,0x00,0x10,0xC0,0x37,0xC0,0x33,0xC0,0x33,0xD8,0xFB,0xF8,0x3F,0xD8,0x33,0xD8,
0x33,0xD8,0x33,0xF8,0x3F,0xF0,0xF3,0x08,0x83,0x0C,0x03,0xF8,0x00,0x00,},
};