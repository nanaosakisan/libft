#include "libft.h"
#include <stdio.h>

char	**ft_malloc_array(const char *s, char c)
{
	char	**array;
	int		word;

	array = NULL;
	word = 0;
	word = ft_count_word(s, c);
	if (!(array = (char **)ft_memalloc(sizeof(char *) * (word + 1))))
		return (NULL);
	array[word] = NULL;
	return (array);
}

size_t		ft_count_letter(const char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	printf("len = %zu\n", len);
	return (len);
}

char	**ft_fill_array(char **array, const char *s, char c)
{
	unsigned int start;

	start = 0;
	while (s[start])
	{
		//printf("s[start] = %c\n", s[start]);
		if (s[start] == c && s[start + 1] != c)
		{
			*array = ft_strsub(s, start, ft_count_letter(s, c));
			array++;
			//printf("letter = %zu", ft_count_letter(s, c));
			start = start + ft_count_letter(s, c) - 1;
		}
		else
			start++;
	}
	return (array);
}

char	**ft_strsplit(const char *s, char c)
{
	char			**array;
	int				i;

	array = NULL;
	i = 0;
	if (!s || !c)
		return (NULL);
	array = ft_malloc_array(s, c);
	ft_fill_array(array, s, c);
	while (array[i])
	{
		ft_putstr(array[i]);
		ft_putchar('\n');
		i++;
	}
	return (array);
}
