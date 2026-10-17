#include<reg51.h>
#define led P2
void main()
{
	int i;
	while(1)
	{
		for(i=0; i<5000;i++)
		led = 0x80;
		for(i=0; i<5000;i++)
		led = 0x40;
		for(i=0; i<5000;i++)
		led = 0x20;
		for(i=0; i<5000;i++)
		led = 0x10;
		for(i=0; i<5000;i++)
		led = 0x08;
		for(i=0; i<5000;i++)
		led = 0x04;
		for(i=0; i<5000;i++)
		led = 0x02;
		for(i=0; i<5000;i++)
		led = 0x01;
		for(i=0; i<5000;i++);
	}
}
	