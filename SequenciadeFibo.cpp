#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,i,n1=0,n2=1,s=1;
	printf("Entre com o n� de termos de Fibonacci: ");
	scanf("%d",&a);
	while(a<=0)
	{
		printf("Sequencia Impossivel!\n\nEntre com o n� de termos de Fibonacci: ");
		scanf("%d",&a);
	}
	if(a>=1)
	{
		for(i=0; i<a; i++)
		{
			printf("%d ",s);
			s=(n1+n2);
			n1=n2;
			n2=s;
		}
	}
	system("pause");
}

