#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c)
		{
			count++;
			while (s[index] != c && s[index] != '\0')
				index++;
		}
		else
			index++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c, int index)
{
	int	len;

	len = 0;
	while (s[index] != c && s[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}

static t_split_params	*ft_init_envs(void)
{
	t_split_params	*p;

	p = (t_split_params *)malloc(sizeof(t_split_params));
	p->word_index = 0;
	p->arr_index = 0;
	p->s_index = 0;
	return (p);
}

char	**ft_free_envs_and_return_result(t_split_params *p)
{
	char	**result;

	result = p->array;
	free(p);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	t_split_params	*p;

	p = ft_init_envs();
	p->array = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!p->array)
		return (NULL);
	while (s[p->s_index] != '\0')
	{
		if (s[p->s_index] != c)
		{
			p->word_len = sizeof(char) * ft_word_len(s, c, p->s_index) + 1;
			p->array[p->arr_index] = (char *)malloc(p->word_len);
			if (!p->array[p->arr_index])
				return (NULL);
			while (s[p->s_index] != c && s[p->s_index] != '\0')
				p->array[p->arr_index][p->word_index++] = s[p->s_index++];
			p->array[p->arr_index++][p->word_index] = '\0';
			p->word_index = 0;
		}
		else
			p->s_index++;
	}
	p->array[p->arr_index] = NULL;
	return (ft_free_envs_and_return_result(p));
}
