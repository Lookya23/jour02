/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mplattee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:32:53 by mplattee          #+#    #+#             */
/*   Updated: 2023/03/04 02:13:40 by mplattee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	c = 'm';
	write(1, &c, 1);
}
/*int	main(void)
{
	ft_putchar('m');
	return (0);
}*/
