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
}
