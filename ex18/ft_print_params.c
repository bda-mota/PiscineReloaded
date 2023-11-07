/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:47:13 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/04 15:23:50 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a program that displays its given arguments*/
void	ft_putchar(char c);

void	ft_print_params(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		ft_putchar (argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	idx;

	idx = 1;
	while (idx < argc)
	{
		ft_print_params(argv[idx]);
		idx++;
		ft_putchar ('\n');
	}
	return (0);
}
