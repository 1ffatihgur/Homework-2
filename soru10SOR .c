#include <stdio.h>
#include <math.h>

int main()
{
	
	int n,b,temp1,temp2;
	int i;
	int j=1;
	int toplam = 0;
	
	printf("1'den n'ye kadar olan sayilar için n sayisini giriniz: ");
	scanf("%d",&n);
	
	for(i=n; i>0; i--)
	{
		while(i>9)
		{
			temp1 = i;
			temp1 = temp1 / 10;
			j++;
		}
		while(i>0)
		{
			temp2 = i;
			b = i % 10;
			toplam = toplam + pow(b,j);
			temp2 = temp2 / 10;
		}
		
		if(i==toplam)
		{
			printf("%d sayisi Armstrong sayisidir.",i);
		}
		else
		{
			continue;
		}
	}
	
	
	
	
	
	
	return 0;
}
