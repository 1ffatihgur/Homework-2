#include <stdio.h>
#include <math.h>

int main()
{
	
	int x;
	int islem;
	int i;
	int j=1;
	
	int faktoryel = 1;
	
	islem = 1;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&x);
	
	for(j=1; j<=x; j++)
	{
		faktoryel = faktoryel * j;
		islem += pow(x,j)/faktoryel;
	}
	
	printf("%d",islem);
	
	return 0;
}
