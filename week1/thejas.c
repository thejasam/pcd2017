#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.imaginary=a.imaginary+b.imaginary;
return c;
}
struct complex getcomplex()
{
struct complex r;
printf("enter real mumber\n");
scanf("%f", &r.real);
printf("enter complex number\n");
scanf("%f", &r.imaginary);
return r;
}
void showcomplex(struct complex a)
{
printf("%f\n",a.real);
printf("%f\n",a.imaginary);
}
int main(void)
{
struct complex a;
struct complex b;
a=getcomplex();
b=getcomplex();
struct complex c=add(a,b);
showcomplex(c);
return 0;
}
