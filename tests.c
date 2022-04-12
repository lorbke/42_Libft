/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:17:32 by lorbke            #+#    #+#             */
/*   Updated: 2022/04/12 13:40:41 by lorbke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>

char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

static int	nb_free_done;

void	ft_del(void *content)
{
	free(content);
	nb_free_done++;
}

int	main(void)
{
	printf("%s\n", "FT_ISALPHA");
	printf("%s\n", "MY OUTPUT:");
	printf("%d\n", ft_isalpha(3));
	printf("%d\n", ft_isalpha(-3));
	printf("%d\n", ft_isalpha(0));
	printf("%d\n", ft_isalpha(72));
	printf("%d\n", ft_isalpha(100));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%d\n", isalpha(3));
	printf("%d\n", isalpha(-3));
	printf("%d\n", isalpha(0));
	printf("%d\n", isalpha(72));
	printf("%d\n", isalpha(100));
	printf("%s", "\n");

	printf("%s\n", "FT_ISDIGIT");
	printf("%s\n", "MY OUTPUT:");
	printf("%d\n", ft_isdigit(3));
	printf("%d\n", ft_isdigit(-3));
	printf("%d\n", ft_isdigit(0));
	printf("%d\n", ft_isdigit(57));
	printf("%d\n", ft_isdigit(48));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%d\n", isdigit(3));
	printf("%d\n", isdigit(-3));
	printf("%d\n", isdigit(0));
	printf("%d\n", isdigit(57));
	printf("%d\n", isdigit(48));
	printf("%s", "\n");

	printf("%s\n", "FT_ISALNUM");
	printf("%s\n", "MY OUTPUT:");
	printf("%d\n", ft_isalnum(0));
	printf("%d\n", ft_isalnum(-10));
	printf("%d\n", ft_isalnum(48));
	printf("%d\n", ft_isalnum(90));
	printf("%d\n", ft_isalnum(113));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%d\n", isalnum(0));
	printf("%d\n", isalnum(-10));
	printf("%d\n", isalnum(48));
	printf("%d\n", isalnum(90));
	printf("%d\n", isalnum(113));
	printf("%s", "\n");

	printf("%s\n", "FT_ISASCII");
	printf("%s\n", "MY OUTPUT:");
	printf("%d\n", ft_isascii(-10));
	printf("%d\n", ft_isascii(10));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(128));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%d\n", isascii(-10));
	printf("%d\n", isascii(10));
	printf("%d\n", isascii(0));
	printf("%d\n", isascii(127));
	printf("%d\n", isascii(128));
	printf("%s", "\n");

	printf("%s\n", "FT_ISPRINT");
	printf("%s\n", "MY OUTPUT:");
	printf("%d\n", ft_isprint(-10));
	printf("%d\n", ft_isprint(10));
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(100));
	printf("%d\n", ft_isprint(126));
	printf("%d\n", ft_isprint(180));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%d\n", isprint(-10));
	printf("%d\n", isprint(10));
	printf("%d\n", isprint(32));
	printf("%d\n", isprint(100));
	printf("%d\n", isprint(126));
	printf("%d\n", isprint(180));
	printf("%s", "\n");

	printf("%s\n", "FT_STRLEN");
	printf("%s\n", "MY OUTPUT:");
	printf("%lu\n", ft_strlen("0"));
	printf("%lu\n", ft_strlen("hallohallohalloyyyyyyyyyyyy"));
	printf("%lu\n", ft_strlen(""));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%lu\n", strlen("0"));
	printf("%lu\n", strlen("hallohallohalloyyyyyyyyyyyy"));
	printf("%lu\n", strlen(""));
	printf("%s", "\n");

	printf("%s\n", "FT_TOUPPER");
	printf("%s\n", "MY OUTPUT:");
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('z'));
	printf("%d\n", ft_toupper('4'));
	printf("%d\n", ft_toupper('A'));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%d\n", toupper('a'));
	printf("%d\n", toupper('z'));
	printf("%d\n", toupper('4'));
	printf("%d\n", toupper('A'));
	printf("%s", "\n");

	printf("%s\n", "FT_TOLOWER");
	printf("%s\n", "MY OUTPUT:");
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('Z'));
	printf("%d\n", ft_tolower('4'));
	printf("%d\n", ft_tolower('a'));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("%d\n", tolower('A'));
	printf("%d\n", tolower('Z'));
	printf("%d\n", tolower('4'));
	printf("%d\n", tolower('a'));
	printf("%s", "\n");

	printf("%s\n", "FT_STRLCPY");
	printf("%s\n", "MY OUTPUT:");
	char dest[] = "abcdefghij";
	char src[] = "101066";
	printf("length: %lu\n", ft_strlcpy(dest, src, 0));
	printf("string: %s\n", dest);
	printf("%s\n", "DESIRED OUTPUT:");
	char dest2[] = "abcdefghij";
	char src2[] = "101066";
	printf("length: %lu\n", strlcpy(dest2, src2, 0));
	printf("string: %s\n", dest2);
	printf("%s", "\n");

	printf("%s\n", "FT_STRLCAT");
	printf("%s\n", "MY OUTPUT:");
	char dest3[10] = "a";
	char src3[] = "lorem ipsum dolor sit amet";
	printf("length: %lu\n", ft_strlcat(dest3, src3, 1));
	printf("string: %s\n", dest3);
	printf("%s\n", "DESIRED OUTPUT:");
	char dest4[10] = "a";
	char src4[] = "lorem ipsum dolor sit amet";
	printf("length: %lu\n", strlcat(dest4, src4, 1));
	printf("string: %s\n", dest4);
	printf("%s", "\n");

	printf("%s\n", "FT_STRCHR");
	printf("%s\n", "MY OUTPUT:");
	char str[] = "aabb";
	char c = 'b';
	printf("position: %s\n", ft_strchr(str, c));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("position: %s\n", strchr(str, c));
	printf("%s", "\n");

	printf("%s\n", "FT_STRRCHR");
	printf("%s\n", "MY OUTPUT:");
	char str1[] = "bonjour";
	char c1 = 'b';
	printf("position: %s\n", ft_strrchr(str1, c1));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("position: %s\n", strrchr(str1, c1));
	printf("%s", "\n");

	printf("%s\n", "FT_STRNCMP");
	printf("%s\n", "MY OUTPUT:");
	char str2[] = "test\200";
	char str3[] = "test\0";
	printf("difference: %d\n", ft_strncmp(str2, str3, 6));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("difference: %d\n", strncmp(str2, str3, 6));
	printf("%s", "\n");

	printf("%s\n", "FT_STRNSTR");
	printf("%s\n", "MY OUTPUT:");
	char str4[] = "tes1t444teetetest4444444444";
	char str5[] = "test";
	printf("location: %s\n", ft_strnstr(str4, str5, 20));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("location: %s\n", strnstr(str4, str5, 20));
	printf("%s", "\n");

	printf("%s\n", "FT_STRNSTR");
	printf("%s\n", "MY OUTPUT:");
	char str6[] = "    \n \t\v +++--+---21474836sdfsd3";
	printf("number: %d\n", ft_atoi(str6));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("number: %d\n", atoi(str6));
	printf("%s", "\n");

	printf("%s\n", "FT_BZERO");
	char str7[] = "1111111";
	char str72[] = "1111111";
	void *p7 = str7;
	size_t c7 = 6;
	size_t i = 0;
	printf("%s\n", "MY OUTPUT:");
	ft_bzero(p7, c7);
	while (i < 8)
	{
		printf("%d", str7[i]);
		i++;
	}
	p7 = &str72;
	printf("\n%s\n", "DESIRED OUTPUT:");
	bzero(p7, c7);
	i = 0;
	while (i < 8)
	{
		printf("%d", str72[i]);
		i++;
	}
	printf("%s\n", "\n");

	printf("%s\n", "FT_MEMSET");
	char str8[] = "1111111";
	char str82[] = "1111111";
	void *p8 = str8;
	size_t c8 = 52;
	size_t c82 = 0;
	printf("%s\n", "MY OUTPUT:");
	ft_memset(p8, c8, c82);
	i = 0;
	while (i < 8)
	{
		printf("%d", str8[i]);
		i++;
	}
	p8 = &str82;
	printf("\n%s\n", "DESIRED OUTPUT:");
	memset(p8, c8, c82);
	i = 0;
	while (i < 8)
	{
		printf("%d", str82[i]);
		i++;
	}
	printf("%s\n", "\n");

	printf("%s\n", "FT_MEMCPY");
	printf("%s\n", "MY OUTPUT:");
	char dest9[] = "abcdefghij";
	char src9[] = "101066";
	printf("return: %s\n", ft_memcpy(dest9, src9, 3));
	printf("%s\n", "DESIRED OUTPUT:");
	char dest92[] = "abcdefghij";
	char src92[] = "101066";
	printf("return: %s\n", memcpy(dest92, src92, 3));
	printf("%s", "\n");

	printf("%s\n", "FT_MEMMOVE");
	printf("%s\n", "MY OUTPUT:");
	size_t len10 = 1;
	char str10[] = "abcdefghij";
	//printf("return: %s\n", ft_memmove(str10, (str10 + 3), len10));
	printf("return overlapping: %s\n", ft_memmove((str10 + 3), str10, len10));
	printf("%s\n", "DESIRED OUTPUT:");
	char str102[] = "abcdefghij";
	//printf("return: %s\n", memmove(str10, (str102 + 3), len10));
	printf("return overlapping: %s\n", memmove((str102 + 3), str102, len10));
	printf("%s", "\n");

	printf("%s\n", "FT_MEMCHR");
	printf("%s\n", "MY OUTPUT:");
	char str11[] = "aabsd$$ffsdf";
	char c11 = '$';
	size_t n11 = 10;
	printf("position: %s\n", ft_memchr(str11, c11, n11));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("position: %s\n", memchr(str11, c11, n11));
	printf("%s", "\n");

	printf("%s\n", "FT_MEMCMP");
	printf("%s\n", "MY OUTPUT:");
	char str12[] = "zyxbcdefgh";
	char str122[] = "abcdefgxyz";
	size_t n12 = 0;
	printf("difference: %d\n", ft_memcmp(str12, str122, n12));
	printf("%s\n", "DESIRED OUTPUT:");
	printf("difference: %d\n", memcmp(str12, str122, n12));
	printf("%s", "\n");

	ft_calloc(5, 5);

	ft_strdup(str12);

	printf("%s\n", "FT_SUBSTR");
	printf("%s\n", "MY OUTPUT:");
	char str15[] = "zyxbcdefgh";
	unsigned int start15 = 400;
	size_t len15 = 20;
	printf("substring: %s\n", ft_substr(str15, start15, len15));
	printf("%s", "\n");

	ft_strjoin(str12, str12);

	printf("%s\n", "FT_STRTRIM");
	printf("%s\n", "MY OUTPUT:");
	char str16[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char str162[] = " ";
 	printf("trimmed string: %s\n", ft_strtrim(str16, str162));
	char str163[] = "lorem ipsum dolor sit amet";
	char str164[] = "te";
 	printf("trimmed string: %s\n", ft_strtrim(str163, str164));
	char str165[] = " lorem ipsum dolor sit amet";
	char str166[] = "l ";
 	printf("trimmed string: %s\n", ft_strtrim(str165, str166));
	char str167[] = "lorem ipsum dolor sit amet";
	char str168[] = "tel";
 	printf("trimmed string: %s\n", ft_strtrim(str167, str168));
	char str169[] = "         ";
	char str1610[] = " ";
 	printf("trimmed string: %s\n", ft_strtrim(str169, str1610));
	printf("%s", "\n");

	printf("\n%s\n", "FT_SPLIT");
	printf("%s\n", "MY OUTPUT:");
	char str17[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char **split172;
	split172 = ft_split(str17, ' ');
	i = 0;
	while (i < 13)
	{
		printf("%s\n", split172[i]);
		i++;
	}
	printf("%s", "\n");

	printf("%s\n", "FT_ITOA");
	printf("%s\n", "MY OUTPUT:");
	printf("%s\n",ft_itoa(-200));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(200));
	printf("%s\n",ft_itoa(0200));
	printf("%s\n",ft_itoa(-0200));
	printf("%s\n",ft_itoa(2147483647));
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s", "\n");

	printf("%s\n", "FT_STRMAPI");
	printf("%s\n", "MY OUTPUT:");
	printf("%s\n", ft_strmapi("LoReM iPsUm", &mapi));
	printf("%s", "\n");

	ft_lstnew("abcd");

	printf("%s\n", "FT_LSTADD_BACK");
	printf("%s\n", "MY OUTPUT:");
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str19 = ft_strdup("lorem");
	char		*str192 = ft_strdup("ipsum");
	char		*str193 = ft_strdup("dolor");
	char		*str194 = ft_strdup("sit");
	elem = ft_lstnewone(str19);
	elem2 = ft_lstnewone(str192);
	elem3 = ft_lstnewone(str193);
	elem4 = ft_lstnewone(str194);
	begin = NULL;
	ft_lstadd_back(&begin, elem);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem3);
	ft_lstadd_back(&begin, elem4);
	while (begin)
	{
		printf("%s\n", (char *)begin->content);
		begin = begin->next;
	}
	printf("%s", "\n");

	t_list		*newbegin;
	newbegin = ft_lstmap(begin, &ft_map, &ft_del);

	while (newbegin)
	{
		printf("%s\n", (char *)newbegin->content);
		newbegin = newbegin->next;
	}

	ft_lstclear(&elem3, &ft_del);

	printf("%s\n", "FT_PUTNBR_FD");
	printf("%s\n", "MY OUTPUT:");
	ft_putnbr_fd(-200, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(200, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0200, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-0200, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	printf("%s", "\n");

	return (0);
}
