#include <stdio.h>
#include <math.h>

int main()
{
	
	int i=0;
	int sayi=0;
	double Array[10];
	
	for(i=0; sayi!=-1 && i<10; i++)
	{
		printf("%d. sayi gir: ",i+1);
		scanf("%d",&sayi);
		Array[i] = sayi;
	}
	
	for(i=0; i<10; i++)
	{
		printf(" %2.1lf ",pow(Array[i],2));
	}
	
	
	return 0;
}
