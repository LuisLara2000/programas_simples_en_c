/*
	obtener 
	promedio 
	se desea obtener el numero de unidades producidas por un mes 30 dias
	promedio de sus unidades producidas 
	cuantos dias fueron mas elevados al promedio 
	cual fue su maxima produccion
	y el dia mas productivo
	imprimir 
	clave 
	nombre
	unidades producidas
	promedio 
	numero de dias supoerior al poromedio 
	su nmaxima produccion 
	di mas productivo
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int clave=0,d_super=0,d_mas_produccion=0,i=0,pro=0,g_dia=0;
	float uni_pro[30],m_pro=0,t_uni=0;
	char nombre[60];
	puts("Ingrese su nombre");
	gets(nombre);
	puts("Ingrese su clave");
	scanf("%d",&clave);
	puts("Ingrese el numero de unidades producidas en el mes");
	for(i=0;i<30;i++)
	{
		printf("Unidades dia %d:",i+1);
		scanf("%f",&uni_pro[i]);
		t_uni+=uni_pro[i]; // maxima producion
	}
	pro = t_uni/30;

	// Reviso cuales son los dias superiores al promedio
	for(i=0;i<30;i++)
	{
		if(pro > uni_pro[i])
			d_super++;
	}
	// Dia mas productivo 
	d_mas_produccion = uni_pro[0]; // inicializo el dia con el primer valor que me dio 
	for(i=0;i<30;i++)
	{
		if(d_mas_produccion < uni_pro[i])
		{
			d_mas_produccion = uni_pro[i];
			g_dia = i+1;
		}
	}
	puts("-------------REPORTE---------------");
	printf("El empleado %s con clave %d \n",nombre,clave);
	puts("Unidades producidas:");
	for(i=0;i<30;i++)
	{
		printf("Dia %d)%.f unidades\n",i+1,uni_pro[i]);
	}
	printf("El promedio de unidades por dia es de %d unidades\n",pro);
	printf("La produccion maxima en el mes fue de %.f unidades\n",t_uni);
	printf("Los dias que se produjeron mas que el promedios fueron %d dias\n",d_super);
	printf("El dia de mayor produccion fue el dia %d con %d unidades\n",g_dia,d_mas_produccion);
	puts("------------------------------------");
	system("PAUSE");
	return 0;
}
