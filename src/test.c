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
	printf("Expected: 23456789\nResult: %s\n",res);

	res = ft_substr(a,4,3);
	printf("Expected: 567\nResult: %s\n",res);

	res = ft_substr(a,4,0);
	printf("Expected: \nResult: %s\n",res);

	/* ft_strjoin */

	printf("========[ft_strjoin]=========\n\n");

	char	*dest;
	char	*s1;
	char	*s2;

	s1 = "123456789";
	s2 = "abcde";
	dest = ft_strjoin(s1, s2);
	printf("Expected: 123456789abcde\nResult: %s\n",dest);

	s1 = "123";
	s2 = "";
	dest = ft_strjoin(s1, s2);
	printf("Expected: 123\nResult: %s\n",dest);

	s1 = "";
	s2 = "123";
	dest = ft_strjoin(s1, s2);
	printf("Expected: 123\nResult: %s\n",dest);

	s1 = "";
	s2 = "";
	dest = ft_strjoin(s1, s2);
	printf("Expected: \nResult: %s\n",dest);

	/* ft_strlen */
	printf("========[ft_strlen]=========\n\n");

	char	*b;

	a = "123456789";
	printf("Expected: 9\nResult: %li\n",ft_strlen(a));

	b = "abcdefghijklmnopqrstuvxywx";
	printf("Expected: 26\nResult: %li\n",ft_strlen(b));

	a = "";
	printf("Expected: 0\nResult: %li\n",ft_strlen(a));
}
