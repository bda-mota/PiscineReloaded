/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:14:07 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/04 14:15:57 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reproduce the behavior of the function strlen*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
