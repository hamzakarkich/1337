/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarkic <hakarkic@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:13:37 by hakarkic          #+#    #+#             */
/*   Updated: 2024/08/15 13:52:01 by hakarkic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0') 
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	sizelen;
	int	i;

	sizelen = 0;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		sizelen += ft_strlen(strs[i]);
		i++;
	}
	sizelen += ft_strlen(sep) * (size - 1);
	return (sizelen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*res;
	int		i;

	len = total_len(size, strs, sep);
	res = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
