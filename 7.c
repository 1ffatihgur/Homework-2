#include<stdio.h>
#include<math.h>

int main()
{
	
	int sayi;
	int i;
	int sayac=0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=2 ; i<sayi ; i++)
	{
		if(sayi % i == 0)
			sayac++;
	}
	
	if(sayac==0)
		printf("sayi asal");
	else
		printf("sayi asal degil");
	
	
	
	return 0; 
}
