#include <stdio.h>
#include <math.h>

int main()
{
	
	float n;
	float i;
	float toplam = 0;
	
	printf("bir sayi giriniz: ");
	scanf("%f",&n);
	
	for(i=1; i<=n; i++)
	{
		toplam = toplam + 1/i;
	}
	
	printf("toplam = %f",toplam);
	
	
	return 0;
}
