#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
	/* ft_substr */

	printf("========[ft_substr]=========\n\n");

	char	*a;
	char	*res;

	a = "123456789";
	res = ft_substr(a,1,90);
	printf("Expected: 23456789\n  Result: %s\n",res);

	res = ft_substr(a,4,3);
	printf("Expected: 567\n  Result: %s\n",res);

	res = ft_substr(a,4,0);
	printf("Expected: \n  Result: %s\n",res);

	/* ft_strjoin */

	printf("========[ft_strjoin]=========\n\n");

	char	*dest;
	char	*s1;
	char	*s2;

	s1 = "123456789";
	s2 = "abcde";
	dest = ft_strjoin(s1, s2);
	printf("Expected: 123456789abcde\n  Result: %s\n",dest);

	s1 = "123";
	s2 = "";
	dest = ft_strjoin(s1, s2);
	printf("Expected: 123\n  Result: %s\n",dest);

	s1 = "";
	s2 = "123";
	dest = ft_strjoin(s1, s2);
	printf("Expected: 123\n  Result: %s\n",dest);

	s1 = "";
	s2 = "";
	dest = ft_strjoin(s1, s2);
	printf("Expected: \n  Result: %s\n",dest);

	/* ft_strlen */
	printf("========[ft_strlen]=========\n\n");

	char	*b;

	a = "123456789";
	printf("Expected: 9\n  Result: %li\n",ft_strlen(a));

	b = "abcdefghijklmnopqrstuvxywx";
	printf("Expected: 26\n  Result: %li\n",ft_strlen(b));

	a = "";
	printf("Expected: 0\n  Result: %li\n",ft_strlen(a));

	/* ft_strtrim */
	printf("========[ft_strtrim]=========\n\n");

	a = "abc 123456789 abc";
	b = "abc ";
	printf("Expected: 123456789\n  Result: %s\n", ft_strtrim(a,b));

	b = "";
	printf("Expected: abc 123456789 abc\n  Result: %s\n", ft_strtrim(a,b));

	b = "9";
	printf("Expected: abc 123456789 abc\n  Result: %s\n", ft_strtrim(a,b));

	a = "";
	b = "abc ";
	printf("Expected: \n  Result: %s\n", ft_strtrim(a,b));

	/* ft_split */
	printf("========[ft_split]=========\n\n");

	a = "aaABCDaEFGHaa1234";
	char	**result = ft_split(a,'a');
	printf("Expected:\nABCD\nEFGH\n1234\n");
	printf("Result:\n");
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}

	a = "aaABCDaEFGHaa1234";
	result = ft_split(a,' ');
	printf("Expected:\naaABCDaEFGHaa1234\n");
	printf("Result:\n");
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}
	
	a = "";
	result = ft_split(a,' ');
	printf("Expected:\n");
	printf("Result:\n");
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}

	a = "aaABCDaEFGHaa1234";
	result = ft_split(a,0);
	printf("Expected:\naaABCDaEFGHaa1234\n");
	printf("Result:\n");
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}

	/* ft_strdup */
	printf("========[ft_strdup]=========\n\n");

	a = ft_strdup("aaABCDaEFGHaa1234");
	printf("Expected: aaABCDaEFGHaa1234\n  Result: %s\n",a);
	a = ft_strdup("");
	printf("Expected: \n  Result: %s\n",a);

	/* ft_itoa */
	printf("========[ft_itoa]=========\n\n");

	printf("Expected: -2147483648\n  Result: %s\n",ft_itoa(-2147483648));
	printf("Expected: -21448\n  Result: %s\n",ft_itoa(-21448));
	printf("Expected: 2147483647\n  Result: %s\n",ft_itoa(2147483647));
	printf("Expected: 0\n  Result: %s\n",ft_itoa(0));

	/* ft_strmapi */
	printf("========[ft_itoa]=========\n\n");
	printf("TESTS NEED TO BE CREATED\n\n");

	/* ft_putchar_fd */
	printf("========[ft_putchar_fd & ft_putstr_fd]=========\n\n");

	printf("Expected: a\n");
	printf("Expected: \n");
	ft_putstr_fd("  Result: ", 1);
	ft_putchar_fd('a',1);
	ft_putchar_fd('\n',1);
	ft_putstr_fd("  Result: ", 1);
	ft_putchar_fd(0,1);
	ft_putchar_fd('\n',1);

	/* ft_putendl_fd */
	printf("========[ft_putendl_fd]=========\n\n");

	printf("Expected: This string\n");
	ft_putendl_fd("  Result: This string", 1);

	/* ft_putnbr_fd */
	printf("========[ft_putnbr_fd]=========\n\n");

	printf("Expected:\n-2147483648\n0\n2564486\n-2564486\nResults:\n");
	ft_putnbr_fd(-2147483648,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(0,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(2564486,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(-2564486,1);
	ft_putchar_fd('\n',1);

	/* ft_memset.c */
	printf("========[ft_memset]=========\n\n");

	char	c[10];

	ft_memset(c, 0, 10);
	ft_memset(c, 65, 9);
	printf("Expected: AAAAAAAAA\n  Result: %s\n",c);

	/* ft_bzero.c */
	printf("========[ft_bzero]=========\n\n");

	int		i;

	i = 0;
	ft_bzero(c, 10);
	printf("Expected: 0000000000\n  Result: ");
	while (i < 10)
	{
		printf("%i", (int)c[i++]);
	}
	printf("\n");

	/* ft_memcpy.c */
	printf("========[ft_memcpy]=========\n\n");

	ft_memcpy(a, b, 5);
	printf("Expected: abc ;\n  Result: %s;\n", a);
	ft_memcpy(a, c, 10);
	printf("Expected: ;\n  Result: %s;\n", a);

	/* ft_memccpy.c */
	printf("========[ft_memccpy]=========\n\n");

	a = malloc(sizeof(char) * 10);
	ft_bzero(a, 10);

	ft_memccpy(a, b, 99, 5);
	printf("Expected: abc ;\n  Result: %s;\n", a);
	ft_memccpy(a, c, 3,10);
	printf("Expected: ;\n  Result: %s;\n", a);

	/* ft_memmove.c */
	printf("========[ft_memmove]=========\n\n");

	char	d[15] = "0123456789";
	a = &d[3];

	ft_memmove(a, d, 10);
	printf("Expected: 0120123456789;\n  Result: %s;\n", d);
	char	e[15] = "   0123456789";
	a = e;

	ft_memmove(a, &e[3], 10);
	printf("Expected: 0123456789789;\n  Result: %s;\n", a);

	/* ft_memchr.c */
	printf("========[ft_memchr]=========\n\n");

	printf("Expected: %s;\n  Result: %s;\n", (char *)memchr(d, '4', 10), (char *)ft_memchr(d, '4', 10));
	printf("Expected: %s;\n  Result: %s;\n", (char *)memchr(d, 'A', 10), (char *)ft_memchr(d, 'A', 10));

	/* ft_memcmp.c */
	printf("========[ft_memcmp]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", memcmp(a, "a0123456789789", 14), ft_memcmp(a, "a0123456789789", 14));
	printf("Expected: %i;\n  Result: %i;\n", memcmp(a, "a0123456789789", 0), ft_memcmp(a, "a0123456789789", 0));
	printf("Expected: %i;\n  Result: %i;\n", memcmp(a, " 0123456789789", 14), ft_memcmp(a, " 0123456789789", 14));

	/* ft_strlcpy.c */
	printf("========[ft_strlcpy]=========\n\n");

	printf("Expected: '8'Correct!;\n  Result: '%li'%s;\n", ft_strlcpy(a, "Correct!", 14), a);
	printf("Expected: '0';\n  Result: '%li'%s;\n", ft_strlcpy(a, "", 14), a);

	/* ft_strlcat.c */
	printf("========[ft_strlcat]=========\n\n");

	char test1[20] = "Tua123";
	char test1a[20] = "123";
	char test2[20] = "Tua123";
	char test2a[20] = "123";
	printf("Expected: '%li'%s;\n  Result: '%li'%s;\n", strlcat(test1, test1a, 2), test1, ft_strlcat(test2, test2a, 2), test2);
	printf("Expected: '%li'%s;\n  Result: '%li'%s;\n", strlcat(test1, test1a, 14), test1, ft_strlcat(test2, test2a, 14), test2);

	/* ft_strchr.c */
	printf("========[ft_strchr]=========\n\n");

	printf("Expected: %s;\n  Result: %s;\n", strchr(test1, '1'), ft_strchr(test1, '1'));
	printf("Expected: %s;\n  Result: %s;\n", strchr(test1, '8'), ft_strchr(test1, '8'));
	printf("Expected: %s;\n  Result: %s;\n", strchr(test1, 0), ft_strchr(test1, 0));

	/* ft_strrchr.c */
	printf("========[ft_strrchr]=========\n\n");

	printf("Expected: %s;\n  Result: %s;\n", strrchr(test1, '1'), ft_strrchr(test1, '1'));
	printf("Expected: %s;\n  Result: %s;\n", strrchr(test1, '8'), ft_strrchr(test1, '8'));
	printf("Expected: %s;\n  Result: %s;\n", strrchr(test1, 0), ft_strrchr(test1, 0));

	/* ft_strnstr.c */
	printf("========[ft_strnstr]=========\n\n");

	printf("Expected: 123123;\n  Result: %s;\n", ft_strnstr(test1, "1231", 20));
	printf("Expected: (null);\n  Result: %s;\n", ft_strnstr(test1, "1231s", 20));

	/* ft_strncmp.c */
	printf("========[ft_strncmp]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", strncmp(test1, "1231", 20), ft_strncmp(test1, "1231", 20));
	printf("Expected: %i;\n  Result: %i;\n", strncmp(test1, "Tua", 20), ft_strncmp(test1, "Tua", 20));
	printf("Expected: %i;\n  Result: %i;\n", strncmp(test1, "Tua", 0), ft_strncmp(test1, "Tua", 0));

	/* ft_atoi.c */
	printf("========[ft_atoi]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", atoi("++1472"), ft_atoi("++1472"));
	printf("Expected: %i;\n  Result: %i;\n", atoi("+1472"), ft_atoi("+1472"));
	printf("Expected: %i;\n  Result: %i;\n", atoi("+14a72"), ft_atoi("+14a72"));
	printf("Expected: %i;\n  Result: %i;\n", atoi("--1472"), ft_atoi("--1472"));
	printf("Expected: %i;\n  Result: %i;\n", atoi("-1472"), ft_atoi("-1472"));
	printf("Expected: %i;\n  Result: %i;\n", atoi(""), ft_atoi(""));
	printf("Expected: %i;\n  Result: %i;\n", atoi(ft_itoa(INT_MIN)), ft_atoi(ft_itoa(INT_MIN)));
	printf("Expected: %i;\n  Result: %i;\n", atoi(ft_itoa(INT_MAX)), ft_atoi(ft_itoa(INT_MAX)));
}
