#include <stdlib.h>
#include <stdio.h>

int	**matrix_make(int dimension)
{
	int	**matrix;
	int	count;

	matrix = (int **) malloc(sizeof(int *) * dimension);
	if (!matrix)
		return (NULL);
	count = 0;
	while (count < dimension)
	{
		matrix[count] = (int *) calloc(dimension, sizeof(int));
		if (!matrix[count])
			return (NULL);
		++count;
	}
	return (matrix);
}

int	gcd(int n1, int n2)
{
	int	temp;

	while (n1 > 0)
	{
		if (n1 < n2)
		{
			temp = n1;
			n1 = n2;
			n2 = temp;
		}
		n1 -= n2;
	}
	return (n2);
}

void	matrix_print(int **matrix, int dimension)
{
	int i;
	int j;

	i = 0;
	while (i < dimension)
	{
		j = 0;
		while (j < dimension)
			printf("[%d] ",matrix[i][j++]);
		printf("\n");
		++i;
	}
}

void	matrix_fill(int **matrix, int dimension)
{
	
	int i;
	int j;

	i = 0;
	while (i < dimension)
	{
		j = 0;
		while (j < dimension)
		{
			if (gcd(i, j) == 1)
				matrix[i][j] = 1;
			++j;
		}
		++i;
	}
}

int	main(int ac, char **av)
{
	int	dimension;
	int	**matrix;

	if (ac == 2)
	{
		dimension = atoi(av[1]);
		matrix = matrix_make(dimension);
		matrix_print(matrix, dimension);
	}

	return (EXIT_SUCCESS);
}