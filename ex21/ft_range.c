/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:57:27 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/05 19:39:08 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*Create a function which returns an array of ints. This int array should contain all values between min and max*/
int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	else
	{
		i = 0;
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
		return (array);
	}
}
