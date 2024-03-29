/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:35:30 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/06 09:46:58 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create an iterative function that returns the result of a factorial operation based on the number given as a parameter
if there's an error, the function should return 0*/
int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
