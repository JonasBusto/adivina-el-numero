#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int numeroaleatorio()
{
	int X;
	X=rand()%100;
	return X;
}

int evaluar(int a, int b)
{
	if(a==b)
	{
		return(0);
	}
	if(a>b)
	{
		return(1);
	}
	else
	{
		return(2);
	}	
}

int jugar()
{
	int f;
	if(f==1)
	{
		printf("LISTO");
	}
	else
	{
		if(f==2)
		{
			printf("NOS VEMOS");
			
		}
		else
		{
			printf("INGRESE UNA OPCION CORRECTA");
		}
	}
	
	return (f);
	
}

opciones(){
	
	int op;
	
	printf("---------------------------\n");
	printf("    ADIVINAR EL NUMERO\n");
	printf("---------------------------\n");
	printf("\n     1.-COMENZAR");
	printf("\n\n     2.-SALIR\n");
	printf("---------------------------\n\n\n");
	scanf("\n%d",&op);
	
	return op;
}

main()
{
	srand(time(NULL));
	
	bool termino=false;
	char X;
	int RN=numeroaleatorio();
	int C=5;
	int op;
	
	
	op = opciones();
	
	
	if(op>2 || op<1) {
					printf("INGRESA BIEN LA OPCIÓN XD \ncaca");
					termino=true;
	}else {
		jugar();
	}
	
	
	while(!termino)
	{
		printf("INGRESA ESE NUMERO: ");
		scanf("%d",&X);
		if(X>0 && X<100)
		{
			int resultado=evaluar(X, RN);
			if(resultado==0)
			{
				printf("\nACERTASTE. ESE ES EL NUMERO QUE TENIAS QUE ADIVINAR\n");
				termino=true;	
			}
			else
			{
				if(resultado==1)
				{
					printf("EL VALOR ELEGIDO ES MAYOR AL NUMERO QUE DEBE ADIVINAR. CONTINUE\n");
				}
				else
				{
					if(resultado==2)
					{
						printf("EL VALOR ELEGIDO ES MENOR AL NUMERO QUE DEBE ADIVINAR. CONTINUE\n");
						}
				}
				C--;
				if(C==0)
				{
					printf("PERDISTE\n");
					printf("EL NUMERO QUE TENIAS QUE ADIVINAR ERA:%d\n",RN);
					termino=true;
					
				}
				
			}
	}
	else
	{
		printf("SOLO NUMEROS ENTRE 0 Y 100");
	}
		
	}
	
	
}


