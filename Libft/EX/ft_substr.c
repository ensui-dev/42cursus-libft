/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mju-ferr <mju-ferr@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:27:59 by mju-ferr          #+#    #+#             */
/*   Updated: 2025/10/16 20:07:33 by mju-ferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	new_s = malloc(len + 1);
	if (!new_s)
		return (NULL);
	while (j < len + start && s[j])
	{
		new_s[i] = s[j];
		i++;
		j++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*int	main(void)
{
	char *str = "Hello, World!";
	unsigned int	start = 7;
	size_t	len = 3;
	
	printf("%s", ft_substr(str, start, len));
	return (0);
}*/