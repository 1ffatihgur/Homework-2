#include <stdio.h>
#include <math.h>

int main()
{
	
	int sayi,temp;
	int b,i;
	int bas[5]={0};
	
	printf("en fazla bes basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	temp = sayi;
	
	for(i=0; temp>0; i++)
	{
		b = temp % 10;
		bas[i]= b;
		temp = temp / 10;
		printf(" %d ",bas[i]);
	}
	
	
	
	
	
	
	return 0;
}
