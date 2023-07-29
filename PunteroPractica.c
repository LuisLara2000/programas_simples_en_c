#include<stdlib.h>
#include<stdio.h>

int a,b,*c,*d;

int main()
{
	a = 35;
	b = 55;
	
	c = &a;
	d = &b;
	
	printf("Direccion de c = %p\n",c);
	printf("Direccion de d = %p\n",d);
	printf("Contenido de a = %i\n",*c);
	printf("Contenido de b = %i\n",*d);
	c=c+5;
	d=d-2;
	printf("Direccion de c = %p\n",c);
	printf("Direccion de d = %p\n",d);
	c=c-3;
	d=d+4;
	printf("Direccion de c = %p\n",c);
	printf("Direccion de d = %p\n",d);
	
	system("pause");
	return 0;
	
}
