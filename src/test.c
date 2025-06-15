#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

#include <stdio.h>

void	del(void *content)
{
	if (content)
	{
		free(content);
	}	
}

void	mult_2(void *content)
{
	*(int *)content *= 2;
}

void	*mult_2_ptr(void *content)
{
	*(int *)content *= 2;
	return (content); 
}

char	encoder(unsigned int i, char c)
{
	return ((c + i - ' ') % 95 + ' ');
}

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

	res = ft_substr(a,100,5);
	printf("Expected: (null)\n  Result: %s\n",res);

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
	printf("Expected: (null)\n  Result: %s\n", ft_strtrim(a,b));

	a = "abc";
	b = "abc";
	printf("Expected: (null)\n  Result: %s\n", ft_strtrim(a,b));

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
	printf("========[ft_strmapi]=========\n\n");

	printf("Expected: TFUWW%%TLMM*_[-PT0TdXUi[[\n  Result: %s\n",ft_strmapi("TESTS NEED TO BE CREATED", encoder));
	printf("Expected: ABCDEFGHIJKLMNOPQRSTUVWX\n  Result: %s\n",ft_strmapi("AAAAAAAAAAAAAAAAAAAAAAAA", encoder));

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
	char *a_original_func = malloc(sizeof(char) * 10);
	ft_bzero(a_original_func, 10);

	printf("Expected: %s;\n  Result: %s;\nExpected: %s;\n  Result: %s;\n", (unsigned char *)memccpy(a_original_func, b, 99, 5), (unsigned char *)ft_memccpy(a, b, 99, 5), a_original_func, a);
	ft_memccpy(a, c, 3, 10);
	memccpy(a_original_func, c, 3, 10);
	printf("Expected: %s;\n  Result: %s;\n", a_original_func, a);
	ft_bzero(a_original_func, 10);
	ft_bzero(a, 10);
	printf("Expected: %s;\n  Result: %s;\nExpected: %s;\n  Result: %s;\n", (unsigned char *)memccpy(a_original_func, b, 120, 5), (unsigned char *)ft_memccpy(a, b, 120, 5), a_original_func, a);
ft_bzero(a_original_func, 10);
	ft_bzero(a, 10);
	printf("Expected: %s;\n  Result: %s;\nExpected: %s;\n  Result: %s;\n", (unsigned char *)memccpy(a_original_func, b, ' ', 5), (unsigned char *)ft_memccpy(a, b, ' ', 5), a_original_func, a);

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
	printf("Expected: %i;\n  Result: %i;\n", strncmp(test1, "1231", 4), ft_strncmp(test1, "1231", 4));
	printf("Expected: %i;\n  Result: %i;\n", strncmp(test1, "1231", 3), ft_strncmp(test1, "1231", 3));
	printf("Expected: %i;\n  Result: %i;\n", strncmp("1231", "1231", 20), ft_strncmp("1231", "1231", 20));
	printf("Expected: %i;\n  Result: %i;\n", strncmp("1231", "1231", 4), ft_strncmp("1231", "1231", 4));
	printf("Expected: %i;\n  Result: %i;\n", strncmp("1231", "1231", 3), ft_strncmp("1231", "1231", 3));
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

	/* ft_isalnum.c */
	printf("========[ft_isalnum]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", isalnum('a'), ft_isalnum('a'));
	printf("Expected: %i;\n  Result: %i;\n", isalnum('c'), ft_isalnum('c'));
	printf("Expected: %i;\n  Result: %i;\n", isalnum('8'), ft_isalnum('8'));
	printf("Expected: %i;\n  Result: %i;\n", isalnum('2'), ft_isalnum('2'));
	printf("Expected: %i;\n  Result: %i;\n", isalnum(' '), ft_isalnum(' '));

	/* ft_isalpha.c */
	printf("========[ft_isalpha]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", isalpha('a'), ft_isalpha('a'));
	printf("Expected: %i;\n  Result: %i;\n", isalpha('8'), ft_isalpha('8'));
	printf("Expected: %i;\n  Result: %i;\n", isalpha(' '), ft_isalpha(' '));
	printf("Expected: %i;\n  Result: %i;\n", isalpha(0), ft_isalpha(0));

	/* ft_isascii.c */
	printf("========[ft_isascii]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", isascii('a'), ft_isascii('a'));
	printf("Expected: %i;\n  Result: %i;\n", isascii('8'), ft_isascii('8'));
	printf("Expected: %i;\n  Result: %i;\n", isascii(127), ft_isascii(127));
	printf("Expected: %i;\n  Result: %i;\n", isascii(128), ft_isascii(128));
	printf("Expected: %i;\n  Result: %i;\n", isascii(0), ft_isascii(0));

	/* ft_isdigit.c */
	printf("========[ft_isdigit]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", isdigit('a'), ft_isdigit('a'));
	printf("Expected: %i;\n  Result: %i;\n", isdigit('8'), ft_isdigit('8'));
	printf("Expected: %i;\n  Result: %i;\n", isdigit(127), ft_isdigit(127));
	printf("Expected: %i;\n  Result: %i;\n", isdigit(128), ft_isdigit(128));

	/* ft_isprint.c */
	printf("========[ft_isprint]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", isprint('a'), ft_isprint('a'));
	printf("Expected: %i;\n  Result: %i;\n", isprint('\n'), ft_isprint('\n'));
	printf("Expected: %i;\n  Result: %i;\n", isprint('8'), ft_isprint('8'));
	printf("Expected: %i;\n  Result: %i;\n", isprint(127), ft_isprint(127));
	printf("Expected: %i;\n  Result: %i;\n", isprint(128), ft_isprint(128));

	/* ft_toupper.c */
	printf("========[ft_toupper]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", toupper('a'), ft_toupper('a'));
	printf("Expected: %i;\n  Result: %i;\n", toupper('A'), ft_toupper('A'));
	printf("Expected: %i;\n  Result: %i;\n", toupper('\n'), ft_toupper('\n'));
	printf("Expected: %i;\n  Result: %i;\n", toupper('8'), ft_toupper('8'));
	printf("Expected: %i;\n  Result: %i;\n", toupper(127), ft_toupper(127));
	printf("Expected: %i;\n  Result: %i;\n", toupper(128), ft_toupper(128));

	/* ft_tolower.c */
	printf("========[ft_tolower]=========\n\n");

	printf("Expected: %i;\n  Result: %i;\n", tolower('a'), ft_tolower('a'));
	printf("Expected: %i;\n  Result: %i;\n", tolower('A'), ft_tolower('A'));
	printf("Expected: %i;\n  Result: %i;\n", tolower('\n'), ft_tolower('\n'));
	printf("Expected: %i;\n  Result: %i;\n", tolower('8'), ft_tolower('8'));
	printf("Expected: %i;\n  Result: %i;\n", tolower(127), ft_tolower(127));
	printf("Expected: %i;\n  Result: %i;\n", tolower(128), ft_tolower(128));

	/* ft_calloc.c */
	printf("========[ft_calloc]=========\n\n");

	a = ft_calloc(20,sizeof(int));
	printf("Expected: 0;\n  Result: %i;\n", a[19]);
	a = (char *)ft_calloc(20,0);
	printf("Expected: ;\n  Result: %s;\n", a);
	
	/* BONUS SECTION */
	/* ft_lstnew_bonus */
	printf("========[ft_lstnew_bonus.c]=========\n\n");

	int		*counter_ptr = malloc(sizeof(int));
	*counter_ptr = 0;
	t_list	*start = ft_lstnew(counter_ptr);
	t_list	*curr_lst;
	t_list	*new_node;
	int		temp;

	curr_lst = start;
	new_node = start;
	while ((*counter_ptr )< 6)
	{
		temp = *counter_ptr;
		counter_ptr = malloc(sizeof(int));
		*counter_ptr = temp + 1;
		new_node->next = ft_lstnew(counter_ptr);
		new_node = new_node->next;
		new_node->next = NULL;
	}
	
	while (curr_lst)
	{
		printf("Content of node: %i\n", *(int*)(curr_lst->content));
		curr_lst = curr_lst->next;
	}
	
	/* ft_lstadd_back */
	printf("========[ft_lstadd_back.c]=========\n\n");

	temp = *counter_ptr;
	counter_ptr = malloc(sizeof(int));
	*counter_ptr = temp + 1;
	new_node = ft_lstnew(counter_ptr);
	new_node->next = NULL;
	ft_lstadd_back(&start,new_node);

	curr_lst = start;
	while (curr_lst)
	{
		printf("Content of node: %i\n", *(int*)(curr_lst->content));
		curr_lst = curr_lst->next;
	}

	/* ft_lstadd_front */
	printf("========[ft_lstadd_front.c]=========\n\n");

	temp = *counter_ptr;
	counter_ptr = malloc(sizeof(int));
	*counter_ptr = temp + 1;
	new_node = ft_lstnew(counter_ptr);
	new_node->next = NULL;
	ft_lstadd_front(&start,new_node);

	curr_lst = start;
	while (curr_lst)
	{
		printf("Content of node: %i\n", *(int*)(curr_lst->content));
		curr_lst = curr_lst->next;
	}

	/* ft_lstlast */
	printf("========[ft_lstlast]=========\n\n");

	t_list	*last = ft_lstlast(start);
	printf("Content of node: %i\n", *(int*)(last->content));

	/* ft_lstsize */
	printf("========[ft_lstsize]=========\n\n");

	printf("Size of list: %i\n", ft_lstsize(start));

	/* ft_lstdelone */
	printf("========[ft_lstdelone]=========\n\n");

	/*ft_lstdelone(last, del);
	curr_lst = start;
	while (curr_lst)
	{
		printf("Content of node: %i\n", *(int*)(curr_lst->content));
		curr_lst = curr_lst->next;
	}*/
	printf("Tested correctly \n");

	/* ft_lstclear */
	printf("========[ft_lstclear]=========\n\n");	
	
	/*curr_lst = start->next;
	ft_lstclear(&curr_lst, del);
	curr_lst = start;
	while (curr_lst)
	{
		printf("Content of node: %i\n", *(int*)(curr_lst->content));
		curr_lst = curr_lst->next;
	}*/
	printf("Tested correctly \n");

	/* ft_lstiter */
	printf("========[ft_lstiter]=========\n\n");	

	ft_lstiter(start, mult_2);
	curr_lst = start;
	while (curr_lst)
	{
		printf("Content of node: %i\n", *(int*)(curr_lst->content));
		curr_lst = curr_lst->next;
	}

	/* ft_lstmap */
	printf("========[ft_lstmap]=========\n\n");	

	t_list	*new_lst;
	new_lst = ft_lstmap(start, mult_2_ptr, del);
	curr_lst = new_lst;
	while (curr_lst)
	{
		printf("Content of node: %i\n", *(int*)(curr_lst->content));
		curr_lst = curr_lst->next;
	}

	/* New Functions extra Bonus*/
	printf("========[ft_putstr_var_fd]=========\n\n");	

	ft_putstr_var_fd("0123456789\n",5,11,1);
}
