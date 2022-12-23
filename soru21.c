#include <stdio.h>
#include <math.h>

int main()
{
	
	int i,n;
	int toplam = 0;
	
	printf("sayiniz kac basamakli olsun?: ");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++)
	{
		toplam = toplam + pow(10,i);
	}
	
	printf("Toplam = %d",toplam);
	
	
	
	
	
	
	return 0;
}
