#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int	len = 0, len1 = 0;

	printf("\n---NO %% CASE---\n");
	len = printf("Printf: Aqui no pasamos ningun parametro adicional\n");
	len1 = ft_printf("Ft_printf: Aqui no pasamos ningun parametro adiciona)\n");
	printf("Printf=%d\tFt_printf= %d\n", len, len - 3);
	printf("\n---%% CASE---\n");
   	len = printf("Printf: %%\n");
    	len1 = ft_printf("Ft_printf: %%\n");
    	printf("%d \t%d\n", len, len1);
	  ft_printf("\n---CHARACTER CASE---\n");
    len = printf("Printf: Estos son varios caracteres: %c, %c, %c, %c, %c, %c, %c.\n", 'a','1','\0','Z',  '0' - 256, '0' + 256, ' ');
    len1 = ft_printf("Ft_printf: Estos son varios caracteres: %c, %c, %c, %c, %c, %c, %c.\n", 'a','1','\0','Z', '0' - 256, '0' + 256, ' ');
    printf("Printf = %d\tFt_printf = %d\n", len, len1 - 3);
    ft_printf("\n---STRING CASE---\n");
    len = printf("Printf: Estas son varias cadenas: %s, %s, %s, %s, %s.\n", "", "c", "4", "cadena ","NULL");
    len1 = ft_printf("Ft_printf: Estas son varias cadenas: %s, %s, %s, %s, %s.\n", "", "c", "4", "cadena "," NULL");
    printf("Printf = %d\tFt_printf = %d\n", len, len1 - 3);
ft_printf("\n---POINTER CASE---\n");
    len = printf("Printf: Estas son varias direcciones:%p,%p,%p, %p.\n","1","-1","NULL","0");
    len1= ft_printf("Ft_printf:EStas son varias direcciones:%p, %p.\n", "1"," -1","NULL","0");	   printf("%d\t %d\n", len, len1);
	
}
