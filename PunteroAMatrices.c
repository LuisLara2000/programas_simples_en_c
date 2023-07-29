#include<stdio.h>
#include<stdlib.h>
// Este codigo rehacerlo pero con funciones
// IMPORTANTE MANDAR MENSAJES
// En programacion dinamica hayq ue tomar en cuenta las advertyenicas
// guardar en c++
int main()
{
	int i,j,m,n,A[' '][' '],*ap,suma=0;
	do
	{
		printf("Total de filas:\n");
		scanf("%d",&m);
	}while(m<=0);
	
	do
	{
		printf("Total de columnas:\n");
		scanf("%d",&n);
	}while(n<=0);

	// rutina de lectura
	ap = A[0];// inicializar la matriz
	printf("ENTRADA DATOS \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]: ",i+1,j+1);
			scanf("%d",ap);
			ap++;
		}
		
	}
	// rutina proceso suma diagonal principal
	ap = A[0];
	/*for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				suma = suma+*ap;
			ap++;
		}
	}*/
	for(i=0;i<m;i++)
	{
        
        suma = suma+*ap;
        ap=ap+(m+1);
        
	}
	// rutina de salida
	ap = A[0]; // iniclizar el puntero, en este caso es traerlo a la posciion original
	printf("MATRIZ DE SALIDA\n");
	for(i=0;i<m;i++)
	{
		puts("");
		for(j=0;j<n;j++)
		{
		    printf(" %d ",*ap);
		    ap++;
		}
	}
	puts("");
	printf("\nSuma de la diagonal principal: %d",suma);
	puts("");
	puts("");
	puts("");
	system("PAUSE");
	return 0;
}
