#include <stdio.h>

typedef struct	fraction
{
	int nom;
	int dno;
	
}	t_frac;

t_frac gcd(t_frac frac)
{
	t_frac result;
	int temp;

	result = frac;
	while (frac.nom > 0)
	{
		if (frac.nom < frac.dno)
		{
			temp = frac.nom;
			frac.nom = frac.dno;
			frac.dno = temp;
		}
		frac.nom = frac.nom - frac.dno;
	}
	result.nom /= frac.dno;
	result.dno /= frac.dno;
	return (result);
}

int	main(void)
{
	t_frac frac;

	while (scanf("%d %d",&frac.nom, &frac.dno) != EOF)
	{
		if (frac.nom > 0 && frac.dno > 0)
		{
			printf("%d %d\n",frac.nom, frac.dno);
			frac = gcd(frac);
			printf("%d %d\n",frac.nom, frac.dno);
		}
	}

	return (0);
}
