/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:31:21 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/04 15:22:20 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that swaps the value of two integers whose addresses are entered as parameters*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
