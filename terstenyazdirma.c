#include <stdio.h>
#include <math.h>

int main()
{
	
	int i;
	int Array[10];
	
	for(i=0; i<10; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&Array[i]);
	}
	
	for(i=0; i<10; i++)
	{
		printf("%d ",Array[i]);
	}
	
	printf("\nTersten yazilmia hali: \n");
	
	for(i=9; i>=0; i--)
	{
		printf("%d ",Array[i]);
	}
	
	return 0;
}
