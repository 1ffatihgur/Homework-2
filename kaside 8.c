#include<stdio.h>
#include<math.h>

int main()
{
	
	int sayi;
	int i;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=2 ; i<sayi ; i++)
	{
		if(sayi % i == 0)
		{
			printf("asal degil");
			break;
		}
	}
	
	if(i==sayi)
		printf("sayi asal");
	
	
	
	
	return 0; 
}
