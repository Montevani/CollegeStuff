#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	char nome[31], sexo[11], nalto[31], npesada[31];
	float idade, peso, altura, cont, alto, pesada, nm, nh;
	cont=1;
	alto=0;
	nh=0;
	nm=0;
	pesada=0;
	printf("Qual o seu nome?\n");
	gets(nome);
	while (strcmp(nome,"@") != 0)
		{
		printf("Qual a sua altura?\n");
		scanf("%f", &altura);
		printf("Qual o seu peso?\n");
		scanf("%f", &peso);
		printf("Qual a sua idade?\n");
		scanf("%f", &idade);
		fflush(stdin);
		printf("Qual o seu sexo?\n");
		gets(sexo);
		while(strcmp(sexo,"masculino")!=0 && strcmp(sexo,"Masculino")!=0 && strcmp(sexo,"MASCULINO")!=0 && strcmp(sexo,"feminino")!=0 && strcmp(sexo,"Feminino")!=0 && strcmp(sexo,"FEMININO")!=0)
		{
      printf("Qual o seu sexo?\n");
		gets(sexo);
		}
		if (cont==1)
			{
			 if(strcmp(sexo,"masculino")==0 || strcmp(sexo,"Masculino")==0 || strcmp(sexo,"MASCULINO")==0)
				{
					 alto=altura;
					 strcpy(nalto, nome);
					 nh=nh+1;
				}
			 else
				{
				if(strcmp(sexo,"feminino")==0 || strcmp(sexo,"Feminino")==0 || strcmp(sexo,"FEMININO")==0)
					{
						pesada=peso;
						strcpy(npesada, nome);
						nm=nm+1;
					}
				}
			 }
		if(strcmp(sexo,"masculino")==0 || strcmp(sexo,"Masculino")==0 || strcmp(sexo,"MASCULINO")==0)
				{
				 if (alto>altura)
					{
						alto=altura;
						strcpy(nalto, nome);
						nh=nh+1;
					}
				}
		else
			{
			if(strcmp(sexo,"feminino")==0 || strcmp(sexo,"Feminino")==0 || strcmp(sexo,"FEMININO")==0)
				{
				 if (peso>pesada)
					{
						pesada=peso;
						strcpy(npesada, nome);
						nm=nm+1;
					}
				 else
					{
						printf("erro!");
					}
				}
			 }
		printf("Voce se chama %s, tem %.2f de altura, ", nome, altura);
		printf("%.0f de peso, \n%.0f de idade e e' do sexo %s\n", peso, idade, sexo);
      printf("nh=%.0f, nm=%.0f\n", nh, nm);
		cont=0;
		printf("Qual o seu nome?\n");
		fflush(stdin);
		gets(nome);
		}
	if (cont==0)
	{
		if(nh>=1)
		{
			printf("O homem mais alto e' %s, com %.2fm\n", nalto, alto);
		}
		else
		{
			printf("Nenhum homem foi medido\n");
		}
		if(nm>=1)
		{
			printf("A mulher mais pesada e' %s, com %.0fkg\n", npesada, pesada);
		}
		else
		{
			printf("Nenhuma mulher foi pesada\n");
		}
	}
}
