/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:39:03 by mmago             #+#    #+#             */
/*   Updated: 2022/04/11 21:08:01 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
