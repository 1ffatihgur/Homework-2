#include <stdio.h>
#include <math.h>

int main()
{
	
	int n,i,k;
	int toplam=0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)
	{
		if(n % i == 0)
		{
			toplam = toplam + i;
		}
		else
		{
			continue;
		}
	}
	
	if(toplam == n)
	{
		printf("%d is Perfect Number",n);
	}
	else
	{
		printf("%d is not Perfect Number",n);
	}
	
	
	return 0;
}
