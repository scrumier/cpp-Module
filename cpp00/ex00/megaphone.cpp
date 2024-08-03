#include <iostream>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

int main(int ac, char **av)
{
    if (ac == 1){
        std::cout << "HAYOOOOOOOOOOOOOOOOOO" << std::endl;
        return 0;
    }
	for (int i = 1; i < ac; i++){
		for (int j = 0; j < ft_strlen(av[i]); j++){
			if (av[i][j] <= 'z' && av[i][j] >= 'a'){
				char c = (char)(av[i][j] - 32);
				std::cout << c;
			}
			else
				std::cout << av[i][j];
		}
		if (i < ac - 1)
			std::cout << " ";
	}
}