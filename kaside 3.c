#include<stdio.h>

int main()
{
	
	int kisa,uzun,cevre,alan;
	
	printf("dikdortgenin kisa kenarini giriniz: ");
	scanf("%d",&kisa);
	
	printf("dikdortgenin uzun kenarini giriniz: ");
	scanf("%d",&uzun);
	
	cevre = 2*(kisa+uzun);
	alan = kisa*uzun;
	
	printf("dikdortgenin cevresi: %d ve alani: %d",cevre,alan);
	
	
	
	
	
	return 0;
}
