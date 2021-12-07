#include <stdio.h>
#include <stdarg.h>

int test_function(int d, ...)
{   
    int i = 0;
    int sum = 0;
    va_list ptr;
    va_start(ptr, d);
    
    while (i < d)
    {   
        sum += va_arg(ptr, int);
        i++;
    }
	va_end(ptr);
    return (sum);
}

int main()
{   
    printf("%d", test_function(3,1,2,3,4,5));
}   

