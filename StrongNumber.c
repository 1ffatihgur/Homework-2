#include <stdio.h>
#include <math.h>

int main()
{
	
	int n,b,i,temp;
	int faktoryel = 1;
	int toplam = 0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	temp = n;
	
	while(temp>0)
	{
		b = temp % 10;
		for(i=1; i<=b; i++)
		{
			faktoryel = faktoryel * i;
		}
		toplam = toplam + faktoryel;
		temp = temp / 10;
		faktoryel = 1;
	}
	
	if(toplam==n)
	{
		printf("%d is Strong Number",n);
	}
	else
	{
		printf("%d is not Strong Number",n);
	}
	
	return 0;
}
