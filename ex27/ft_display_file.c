/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:50:17 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/11 13:48:08 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a program that shows in the output, the content of the file passed as a parameter. Malloc is forbidden.*/
#include <fcntl.h>
#include <unistd.h>

int	ft_display_file(int file)
{
	int		read_file;
	char	buffer[1];

	if (file == -1)
		return (-1);
	read_file = read(file, buffer, 1);
	while (read_file > 0)
	{
		write (1, &buffer, 1);
		read_file = read(file, buffer, 1);
	}
	close(file);
	return (0);
}

int	main(int argc, char **argv)
{
	int	file;

	if (argc != 2)
	{
		if (argc < 2)
			write (1, "File name missing.\n", 19);
		if (argc > 2)
			write (1, "Too many arguments.\n", 20);
		return (0);
	}
	file = open(argv[1], O_RDONLY);
	ft_display_file(file);
	return (0);
}
