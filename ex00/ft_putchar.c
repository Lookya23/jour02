/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mplattee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:32:53 by mplattee          #+#    #+#             */
/*   Updated: 2023/03/04 01:50:19 by mplattee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	char *ptrc;
	c = 'm';
	ptrc = &c;
	write(1, ptrc, 1);
}
/*int	main(void)
{
	char c;
	c = 'm';

	ft_putchar(c);
	return (0);
}*/
