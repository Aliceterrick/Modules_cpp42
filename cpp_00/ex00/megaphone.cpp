#include <iostream>

int	main(int ac, char **av)
{
	std::string	avx;
	int	i = 1;
	if (ac == i)
		avx = "* loud and unbearable feedback noise *";
	else
		avx = av[i];
	do
	{
		for (int j = 0; avx[j]; j++)
			avx[j] = std::toupper(avx[j]);
		if (i < ac - 1)
			i++, std::cout << avx << " ", avx = av[i];
		else
			i++, std::cout << avx << std::endl;
	} while (i < ac);
	return (0);
}
