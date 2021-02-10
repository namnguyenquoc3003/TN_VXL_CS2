
#include <regx52.h>
#include <DELAY\delay.h>
#include <LCD1602\lcd1602.h>
#include <DS1820\ds18b20.h>

void write_cmd(char dat)
{
	delay_ms(100);
	LCD_RS=0;	
	LCD = dat;
	LCD_E = 1;
	LCD_E = 0;
}
// --------------------------------------------------
// Ham Khoi Tao LCD
 void lcd1602_init ( void )
{	
	write_cmd(0x38);
	write_cmd(0x0E);
	write_cmd(0x01);
}

// --------------------------------------------------
// Ham Thiet Lap Vi Tri Con Tro
void lcd1602_gotoxy(unsigned char x, unsigned char y)
{
  unsigned char address;
  if(!y)
  address = (LINE_1+x);
  else
  address = (LINE_2+x);
  delay_ms(3);
  write_cmd(address);
  delay_ms(1);
}

// --------------------------------------------------
// Ham Xoa Man Hinh LCD
void lcd1602_clear(void)
{
	write_cmd( CLEAR_LCD );  
}

// --------------------------------------------------
// Ham Gui 1 Ky Tu Len LCD
 void lcd1602_putchar ( unsigned int cX )
{
	delay_us(100);
	LCD_RS=1;	
	LCD = cX;
  LCD_E=1;
	LCD_E=0;
}

// --------------------------------------------------
// Ham Gui 1 Chuoi Ky Tu Len LCD
void lcd1602_puts(char *s)
{
   while (*s)
   {
			lcd1602_putchar(*s);
      s++;
   }
}
// ------------------END OF FILE--------------------
// -------------------------------------------------






