#include<stdio.h>
void main ()
{
float N, positivo, negativo, media, zeros, contar, K, porcentagem;
positivo=0;
negativo=0;
zeros=0;
K=0;
for(contar=1; contar<=10; contar++)
	{
	printf("Digite o seu %.0f� numero\n", contar);
	scanf("%f", &N);
	if (N==0)
		{
		zeros++;
		}
	if (N>0)
		{
		positivo++;
		}
	if (N<0)
		{
		negativo++;
		K=K+N;
		}
	}
contar=contar-1;
media=K/contar;
porcentagem=(negativo*100)/contar;
printf("Dos dez digitados %.0f sao positivos", positivo);
printf(" e %.0f sao nulos.\n", zeros);
printf("A media dos negativos e' %.2f.\n", media);
printf("Esses %.0f negativos representam %.2f porcento de todos os numeros", negativo, porcentagem);
}
