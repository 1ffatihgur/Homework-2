#include<stdio.h>
#include<math.h>

int main()
{
	
	
	
	int a,b,c,delta,kok1,kok2;
	
	printf("a sayisini giriniZ: ");
	scanf("%d",&a);
	
	printf("b sayisini giriniz: ");
	scanf("%d",&b);
	
	printf("c sayisini giriniz: ");
	scanf("%d",&c);
	
	delta = pow(b,2) - 4*a*c;
	
	kok1 = (-b - pow(delta,0.5))/2*a;
	kok2 = (-b + pow(delta,0.5))/2*a;
	
	printf("birinci kok: %d ve ikinci kok: %d",kok1,kok2);
	
	
	
	
	
	
	return 0;
}
