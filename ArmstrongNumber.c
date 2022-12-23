#include <stdio.h>
#include <math.h>

int main()
{
	
	int b;
	int n,temp,temp2;	
	int i=1;
	int toplam=0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	temp = n;
	temp2 = n;
	
	
	while(n>9)
	{
		n = n / 10;
		i++;
	}
	
	while(temp>0)
	{
		b = temp % 10;
		toplam = toplam + pow(b,i);
		temp = temp / 10;
	}
	
	if(toplam == temp2)
	{
		printf("This is Armstrong Number");
	}
	else
	{
		printf("This is not Armostrong Number");
	}
	
	
	
	return 0;
}
