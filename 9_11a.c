#include <stdio.h>
unsigned long Fibonacci(unsigned n);
int main(void)
{
	int ile;
	unsigned  wynik;
	printf("kocham Anie!\n");
	printf("nakurwiamy program!\n");
	printf("ile razy nakurwiamy rekurencje?\n");
	scanf("%d", &ile);
	wynik=Fibonacci(ile);
	printf("wynik to: %u\n", wynik);
	return 0;
}
unsigned long Fibonacci(unsigned n)
{
	unsigned wynik=1;
	int counter;
	int i=0;
	int j=1;
	if(n==0)
		return 0;
	for(counter=1;counter<n;counter++)
		{
		wynik= i +j;
		i=j;
		j=wynik;
		}
	return wynik;
}
