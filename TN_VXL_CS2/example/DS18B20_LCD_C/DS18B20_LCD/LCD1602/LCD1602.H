
	
#ifndef __LCD1602_H
#define __LCD1602_H


#define LINE_1 0x80
#define LINE_2 0xC0
#define CLEAR_LCD 0x01


// Cac chan dieu khien cua LCD -------------------
#define LCD_RS P3_5
#define LCD_RW P1_3
#define LCD_E P3_3
#define	LCD	*((unsigned char xdata *)0x6000)
	
void lcd1602_enable(void);																
void lcd1602_send_4bit_data ( unsigned char cX );
void lcd1602_send_command (unsigned char cX );
void lcd1602_init (void );
void lcd1602_gotoxy(unsigned char x, unsigned char y);
void lcd1602_clear(void);
void lcd1602_putchar ( unsigned int cX );
void lcd1602_puts (char *s);
void write_cmd(char dat);


#endif
// ------------------END OF FILE--------------------
// -------------------------------------------------
