



int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int ascending_f;
	int descending_f;
	int result;
	int i;

	i = 1;
	result = 0;
	ascending_f = 0;
	descending_f = 0;
	if (length >= 2 )
	{
		while(i < length)
		{
			result = f(tab[i - 1], tab[i]);
			if(result == 0)
				continue;
			else if(result < 0)
				ascending_f = 1;
			else
				descending_f = 1;
			++i;
		}
		
		if( ascending_f && descending_f )
			return (0);
		else
			return (1);
	}
	return (0);
}
