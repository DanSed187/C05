#include <stdio.h>

int ft_sqrt(int nb)
{
    if(nb < 0)
	{
		return 0;
	}
	if(nb == 0 || nb == 1)
	{
		return nb;
	}
	
	int i;
	i = 1;
	while(i * i <= nb)
	{
		if(i * i == nb)
		{
			return i;
		}
		i++;
	}
	return 0;
}


int main() {
    
    int result = ft_sqrt(121);
    
    printf("%d", result);
    return 0;
}