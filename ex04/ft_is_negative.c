/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mplattee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:59:44 by mplattee          #+#    #+#             */
/*   Updated: 2023/02/07 16:52:23 by mplattee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negatif;
	char	nuletpositif;

	negatif = 'N';
	nuletpositif = 'P';
	if (n < 0)
	{
		write (1, &negatif, 1);
	}
	else
	{
		write (1, &nuletpositif, 1);
	}
}
/*int	main(void)
{
	int	n;

	n = 1;
	ft_is_negative(n);
	return (0);
}*/
