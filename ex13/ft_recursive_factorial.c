/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:35:05 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/06 09:48:30 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create an recursive function that returns the result of a factorial operation based on the number given as a parameter
if there's an error, the function should return 0*/
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
