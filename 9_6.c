
#include <stdio.h>
void adresy(double *a, double *b, double *c);
int main(void)
{
 double x,y,z;
 x = 67.0;
 y = 11.45;
 z = 43;
 printf("pobiere od pana 3 liczby typu dabyl\nzaczynamy:");
 scanf("%lf", &x);
 printf("kolejna\n");
 scanf("%lf", &y);
 printf("next one\n");
 scanf("%lf", &z);
 
 printf("wiec.. pobrane liczby to \n");
 printf("x= %lf, %p\n", x, &x);
 printf("y= %lf, %p\n", y, &y);
 printf("z= %lf, %p\n", z, &z);
 adresy(&x, &y, &z); 
 printf("najmniejsza to: %lf, %p\n", x, &x);
 printf("pomiedzy jest %lf, %p\n", y, &y);
 printf("najwieksza  to: %lf, %p\n", z, &z);
 //int cos;
 return 0;
}
void adresy(double *a, double *b, double *c)
{
 double *min, *max, *avr;
 double k,l,j;

    k=3.0;	//musimy zainicjowac wskazniki
    l=7.0;	//bo inaczej wypierdoli seg'faulta
    j=8.0;
    max = &k;
    min = &l;
    avr= &j;
//tu nam liczy max'a
 {
 if(*a>*b&&*a>*c)
  *max= *a;
 if(*b>*a&&*b>*c)
  *max= *b;
 if(*c>*a&&*c>*b)
  *max= *c;
}
//tutaj min'a
{
 if(*a<*b&&*a<*c)
     *min= *a;
 if(*b<*a&&*b<*c)
  *min= *b;
 if(*c<*a&&*c<*b)
     *min= *c;
}
// a teraz avr
{
	if((*a>*b && *a<*c) || (*a>*c && *a<*b))
		*avr=*a;
	else if((*b>*a && *b<*c) || (*b>*c && *b<*a))
		*avr=*b;
	else if((*c>*b && *c<*a) || (*c>*a && *c<*b))
		*avr=*c;
}
{/*co jest czym
	printf("co jest czym\n");
	printf("min =  %lf, %p\n", *min, &min);
	printf("max =  %lf, %p\n", *max, &max);
	printf("avr =  %lf, %p\n", *avr, &avr);	
	
	printf("a= %f, %p\n", *a, &a);
	printf("b= %f, %p\n", *b, &b);
	printf("c= %f, %p\n", *c, &c);
	printf("/\n");
	printf("a= %f, %p\n", *a, a);
	printf("b= %f, %p\n", *b, b);
	printf("c= %f, %p\n", *c, c);
	*/
}
     
 
 

 *a=*min;
 *b=*avr;
 *c=*max;

 printf("po foo\n");
 printf("a= %f, %p\n", *a, &a);
 printf("b= %f, %p\n", *b, &b);
 printf("c= %f, %p\n", *c, &c);
}

