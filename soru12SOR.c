#include <stdio.h>
#include <math.h>

int main()
{
	
	int n,p,i,k;
	int toplam  = 0;
	
	printf("kacinci sayiya kadar mukemmel sayilari yazdirmak istiyorsunuz? n: ");
	scanf("%d",&n);
	
	for(i=n; i>0; i--)
	{
		for(p=1; p<i; p++)
		{
			if(i % p == 0)
			{
				toplam = toplam + p;
			}
			else
			{
				continue;
			}
		}
		
	}
	if(toplam == i)
	{
		printf(" %d ",i);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
