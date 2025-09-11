#include <stdio.h>

int ft_is_prime(int nb)
{
    if(nb <= 1)
    {
        return 0;
    }

    int i;
    i = 2;
    while(i <= nb / i)
    {
        if(nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    int result = ft_is_prime(2);

    printf("%d", result);

    return 0;
}