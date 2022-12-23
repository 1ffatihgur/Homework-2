#include <stdio.h>
#include <math.h>

int main()
{
	
	int n,b;
	int i=1;
	int sayac=1;
	int toplam = 0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	
	for(i=1; i<n; i++)
	{
		while(i>9)
		{
			i = i / 10;
			sayac++;
		}
		
		while(i>0)
		{
			b = i % 10;
			toplam = toplam + pow(b,sayac);
			i = i / 10;
		}
		
		if(i==toplam)
		{
			printf("%d is Armstrong Number",i);
		}
		else
		{
			printf("%d is not Armstrong Number",i);
		}
	}
	
	
	
	
	
	return 0;
}
