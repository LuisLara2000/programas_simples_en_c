
#include<stdio.h>
#include<stdlib.h>

int main()
{
	// Declaracion e inicializacion de variables
	int n_estudiantes=0,i=0,x=0,z=0,d=0,j=0,espacios=0,mat_tem=0,max_mat=0,max_bio=0,max_dib=0;
	float mat_elegido=0,t_elegido=0,p_elegido=0;//
	float cal_tem=0,t_mat=0,t_bio=0,t_dib=0;
	int comparar_mat=0,comparar_bio=0,comparar_dib=0;//
	float p_mat=0,p_bio=0,p_dib=0;
	// Pedimos los estudiantes
	printf("Ingrese la cantidad de estudiantes: ");
	scanf("%d",&n_estudiantes);
	espacios = n_estudiantes*3;
	// Despues de pedir los n-estudiantes hacer el arreglo del tama�o adecuado para contener  la info
	int mat[20],clave[20],cali[20];
	puts("---------------------------------------------------");
	for(i=0;i<n_estudiantes;i++)
	{
		// Pedimos la matricula
		printf("Ingrese la matricula del estudiante #%d  ",i+1);
		scanf("%d",&mat_tem);
        // Como cada estudiante tiene tres materias,la matricula la ponemos en los siguientes 3 espacios
		// y em este mismo ciclo metemos en orden las claves de las materias
		for(x=1;x<4;x++)
		{
			mat[x+j-1]=mat_tem;
			clave[x+j-1]=1000+x;
		}
		
		// Obtenemos las calificaciones del estudiante
		printf("Ingrese la calificacion de Matematicas 1001  ");
		scanf("%f",&cal_tem);
		cali[d]=cal_tem;
		t_mat += cali[d];
		d++;
		printf("Ingrese la calificacion de Biologia    1002  ");
		scanf("%f",&cal_tem);
		cali[d]=cal_tem;
		t_bio += cali[d];
		d++;
		printf("Ingrese la calificacion de Dibujo      1003  ");
		scanf("%f",&cal_tem);
		cali[d]=cal_tem;
		t_dib += cali[d];
		d++;
		j+=3;
		puts("------------------------------------------------");
	}
	// Promedio por materia
	p_mat = t_mat/n_estudiantes;
	p_bio = t_bio/n_estudiantes;
	p_dib = t_dib/n_estudiantes;
	// promedio por estudiante del primer estudiante
	mat_elegido = mat[1];
	// buscamos sus calificaciones y las sumamos
	for(i=0;i<espacios;i++)
		if(mat_elegido == mat[i])
            t_elegido += cali[i];

		
	// Promedio elegido
	p_elegido=t_elegido/3;

	// Inicializamos
	for(i=0;i<n_estudiantes;i++)
	{
		if(clave[i] == 1001)
		{
			if(cali[i] > comparar_mat)
               	max_mat= cali[i];
		}
		else if(clave[i] == 1002)
		{
			if(cali[i] > comparar_bio)
				max_bio = cali[i];
		}
  		else if(clave[i] == 1003)
		{
			if(cali[i] > comparar_dib)
				max_dib = cali[i];
		}
	}

	printf("\n\n\n\n\n");
	puts("-------------------------------------------------------------------------");
	puts("Promedio general por materia");
	printf("Matematicas 1001: %3.1f  Biologia 1002: %3.1f  Dibujo 1003: %3.1f \n",p_mat,p_bio,p_dib);
	printf("El promedio del estudiantes %d es %.f \n",mat[1],p_elegido);
	puts("La calificacion mas alta por materia");
	printf("Matematicas 1001: %3d  Biologia 1002: %3d  Dibujo 1003: %3d \n ",max_mat,max_bio,max_dib);
	puts("-------------------------------------------------------------------------");

	system("PAUSE");
	return 0;
	
}
