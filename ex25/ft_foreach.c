/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:19:05 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/09 16:28:43 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create the funciton ft_foreach which, for a given ints arrays, applies a funtion on all elements of the array. 
This function will be applied following the array's order*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
