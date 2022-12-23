#include <stdio.h>
#include <math.h>

int main()
{
	
	float x,i;
	float toplam = 0;
	
	printf("bir sayi giriniz: ");
	scanf("%f",&x);
	
	for(i=1; i<=x; i+=2)
	{
		toplam = toplam + pow(x,i);
	}
	
	printf("toplam = %f",toplam);
	
	return 0;
}
