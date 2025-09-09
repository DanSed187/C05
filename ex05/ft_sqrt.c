#include <stdio.h>

/*int ft_sqrt(int nb)
{
    if(nb )
}
*/

int	find_sqrt(int nb, int root, int diff, long square)
{
	if (square < nb)
	{
		root++;
		diff += 2;
		square += diff;
		return (find_sqrt(nb, root, diff, square));
	}
	else if (square == nb)
		return (root);
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	return (find_sqrt(nb, 1, 1, 1));
}

int main() {
    
    int result = ft_sqrt();
    
    printf("%d", result);
    return 0;
}