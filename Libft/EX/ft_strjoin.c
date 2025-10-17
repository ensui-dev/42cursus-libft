/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mju-ferr <mju-ferr@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:49:33 by mju-ferr          #+#    #+#             */
/*   Updated: 2025/10/16 20:04:37 by mju-ferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i++] = s2[j];
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*int	main(void)
{
	char	*s1 = "Hello, ";
	char	*s2 = "World!";

	printf ("%s", ft_strjoin(s1, s2));
	return (0);
}*/