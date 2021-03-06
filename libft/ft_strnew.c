/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:07:45 by schevall          #+#    #+#             */
/*   Updated: 2016/11/23 11:50:39 by schevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char *str;

	if (!(str = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	if (str)
	{
		ft_bzero(str, n + 1);
		return (str);
	}
	else
		return (NULL);
}
