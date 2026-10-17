#include<reg51.h>
#define led P2
void delay(unsigned int ms);
void main()
{
	led = 0x00;
	while(1)
	{
		led = 0xff;
		delay(1000);
		led = 0x00;
		delay(1000);
	}
}
void delay(unsigned int ms)
{
	int i, j;
	for(i = 0; i<ms; i++)
	for(j = 0; j<100; j++);
}