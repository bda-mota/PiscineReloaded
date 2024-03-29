/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:52:25 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/04 14:45:17 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create an iterative function that returns the square root of a number (if it exists), or 0 if the square root is 
an irrational number. Must return its result in less than two seconds.*/
int	ft_sqrt(int nb)
{
	int	base;
	int	result;

	base = 1;
	result = 0;
	while (base <= nb)
	{
		result = base * base;
		if (result == nb)
			return (base);
		else
			base++;
	}
	return (0);
}
