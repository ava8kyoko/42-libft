/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:50:42 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/12 15:52:58 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_size_array(char **array)
{
	size_t	i;

	i = -1;
	while (array[++i])
		;
	return (i + 1);
}
