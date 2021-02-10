#include <regx52.h>
#include <DELAY\delay.h>
#include <LCD1602\lcd1602.h>
#include <DS1820\ds18b20.h>
#include <stdio.h>
void main()
{
	float Nhiet_Do;
	unsigned char Lcd_Buff[15];
	lcd1602_init();
	delay_ms(1000);
	lcd1602_clear();
	lcd1602_gotoxy(0,0);
	lcd1602_puts(" DS18B20: ");
	
	while(1)
		{
			Nhiet_Do = ds18b20_readtemp();		
			sprintf(Lcd_Buff," TEMP: %2.2f^C",Nhiet_Do);
			lcd1602_gotoxy(0,1);
			lcd1602_puts(Lcd_Buff);
			delay_ms(300);
		}
}
// ------------------END OF FILE--------------------
// -------------------------------------------------