#include <stdio.h>
void main()
{
	float AA, AF, T;
	AA=1.1;
	AF=1.5;
	T=0;
	while (AF>AA)
	{
		AA=AA+0.03;
		AF=AF+0.02;
		T=T+1;
		printf("Apos %.0f anos, Anacleto tem %.2fm e Felizberto tem %.2fm.\n", T, AA, AF);
	}
}