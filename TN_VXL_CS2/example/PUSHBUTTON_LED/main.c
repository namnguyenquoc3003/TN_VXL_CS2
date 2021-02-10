#include <AT89X52.h>
#define		LED		P1_1
#define		SW		P1_0

int main(void)
{
	while (1)
	{
		if (SW)	LED = 1;
		else LED = 0;
	}
}