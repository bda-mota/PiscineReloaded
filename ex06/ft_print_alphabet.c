/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:50:42 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/04 15:15:22 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from 
the letter 'a'*/
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}
