#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char kelime[15], gKelime[15];
	int uzunluk, i, j=0, sonuc;
	
	printf("Bir kelime girin:");
	gets(kelime);
	uzunluk=strlen(kelime);
	for(i=uzunluk-1; i>=0; i--)
	
	{
		gKelime[j]=kelime[i];
		printf("%c", gKelime[j]);
		j++;
	}
	
	sonuc = strcmp(kelime, gKelime);
	if(sonuc==0) 	
	
	{
	printf("\nKelime Palindromdur.");
	}
	
	else printf("\nKelime Palindrom degildir.");
	
	return 0;
}
