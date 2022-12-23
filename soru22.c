#include <stdio.h>
#include <math.h>

int main()
{
	
	int i;
	int toplam = 0; 
	
	for(i=100; i<=200; i++)
	{
		if(i%9==0)
		{
			printf(" %d ",i);
			toplam = toplam + i;
		}
		else
		{
			continue;
		}
	}
	
	printf("\nToplam %d",toplam);
	
	
	
	
	
	
	return 0;
}
