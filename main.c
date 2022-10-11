#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int	len = 0, len1 = 0;

	printf("\n---NO %% CASE---\n");
	len = printf("Aqui no pasamos ningun parametro adicional\n");
	len1 = ft_printf("Aqui no pasamos ningun parametro adicional\n");
	printf("Printf=%d\tFt_printf= %d\n", len, len1);
	printf("\n---%% CASE---\n");
   	len = printf(" %%\n");
    	len1 = ft_printf(" %%\n");
    	printf("%d \t%d\n", len, len1);
}
