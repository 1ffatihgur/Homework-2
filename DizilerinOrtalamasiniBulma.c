#include <stdio.h>
#include <math.h>

int main()
{
	
	int i;
	float toplam = 0;
	float ortalama = 0; 
	float Array[8];
	
	for(i=0; i<8; i++)
	{
		printf("Dizinin %d. elemanini giriniz: \n",i+1);
		scanf("%f",&Array[i]);
		printf("%d. eleman = %2.1f\n",i+1,Array[i]);
		toplam = toplam + Array[i];
	}
	
	ortalama = toplam / 8;
	
	printf("Ortalama = %f",ortalama);
	
	
	
	
	
	return 0;
}
