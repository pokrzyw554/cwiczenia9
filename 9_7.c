#include<stdio.h>
int uzyskaj_numer(char ch);
int main(void)
{
	//int pitol, counter;
	char znak;
	printf("%d\n", EOF);
	printf("napierdalaj mnie znakami do konca pliku!\n");
	while((znak=getchar()) != 255)
		{
		if(uzyskaj_numer(znak)==(-1))
			{
			printf("\"%c\" to nie litera\n", znak);
			}
		else if((uzyskaj_numer(znak)>=1) && (uzyskaj_numer(znak)<=26))
			printf("%c to %d litera alfabetu\n", znak, uzyskaj_numer(znak));
		else
			printf("powanzy problem\n");
		}
	printf("wyszlismy z while'a \n");
	return 0;
}
int uzyskaj_numer(char ch)	//works good
{
	if(ch>=97&&ch<=122)
		{
	/*	printf("litera %c, liczba %d\n", 'a', 'a');
		printf("litera %c, liczba %d\n", ch, ch-96);
		printf("litera %c, liczba %d\n", 'z', 'z');
	*/	
		return (ch-96);
		}
	else if(ch>=65&&ch<=90)
		{
	/*	printf("litera %c, liczba %d\n", 'A', 'A');
		printf("litera %c, liczba %d\n", ch, ch-64);
		printf("litera %c, liczba %d\n", 'Z', 'Z');
	*/	
		return (ch-64);			
		}
	else
		return -1;

}
	
