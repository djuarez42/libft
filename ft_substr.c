/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djuarez <djuarez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:52:46 by djuarez           #+#    #+#             */
/*   Updated: 2024/07/16 12:28:08 by djuarez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

int main(void)
{
	char const *s = "Hello World";
	unsigned int start = 6;
	size_t len = 5;
	char *substr;

	substr = ft_substr(s, start, len);
	if (substr != NULL)
	{
		printf("Original string: (%s)\n", s);
		printf("New substring is: (%s)\n", substr);
		free(substr);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
