#include <stdio.h>

int ft_fibonacci(int index)
{
    if(index < 0)
    {
        return -1;
    }
    if(index == 0)
    {
        return 0;
    }
    if(index >= 2)
    {
        return ft_fibonacci(index -1) + ft_fibonacci(index - 2);
    }
    
    return index;
}


int main() {
    
    int result;
    result = ft_fibonacci(4);
    
    printf("%d", result);
    return 0;
}