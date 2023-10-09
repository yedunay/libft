#include <ctype.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "Hello there!";
	char str2[] = "This is a test!";
	char str3[] = "";
	char str4[] = "\'\'\'";

	printf("TESTING...\n");
	printf("OUR VERSION: ft_strlen(%s) is: %zu\n", str1, ft_strlen(str1));
	printf("OFF VERSION: ft_strlen(%s) is: %zu\n", str1, strlen(str1));
	printf("----\n");
	
	printf("OUR VERSION: ft_strlen(%s) is: %zu\n", str2, ft_strlen(str2));
	printf("OFF VERSION: ft_strlen(%s) is: %zu\n", str2, strlen(str2));
	printf("----\n");
	
	printf("OUR VERSION: ft_strlen(%s) is: %zu\n", str3, ft_strlen(str3));
	printf("OFF VERSION: ft_strlen(%s) is: %zu\n", str3, strlen(str3));
	printf("----\n");
	
	printf("OUR VERSION: ft_strlen(%s) is: %zu\n", str4, ft_strlen(str4));
	printf("OFF VERSION: ft_strlen(%s) is: %zu\n", str4, strlen(str4));
	printf("----\n");
}
*/