/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:13:16 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/06 10:46:05 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a macro ABS which replaces its arguments by it absolute value*/
#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) ((Value < 0) ? (-Value):(Value))
#endif
