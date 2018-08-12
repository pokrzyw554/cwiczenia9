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
if(n>2)
return Fibonacci(n-1)+ Fibonacci(n-2);
else
return 1;
}
