#include <REGX51.H>
int i,j,k,b,c;

void delay(k)
{
	for(i=0;i<=k;i++)
	{
		for(j=0;j<=1275;j++);
	}
}
void main()
{
	int seg[10] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	while (1)
	{
		for(b=0;b<=9;b++)
		{
			P1=seg[b];
			for(c=0;c<=9;c++)
			{
				P2=seg[c];
			delay(30);
			}
		}
	}
}

