/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:26:55 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/06 10:03:28 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	char	*aux;
	int		r;
	int		x;
	int		y;

	x = 1;
	while (x < argc)
	{
		y = x + 1;
		while (y < argc)
		{
			r = ft_strcmp(argv[x], argv[y]);
			if (r > 0)
			{
				aux = argv[x];
				argv[x] = argv[y];
				argv[y] = aux;
			}
			y++;
		}
		x++;
	}
}

void	ft_print_params(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		ft_putchar (argv[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
