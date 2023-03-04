/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mplattee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:49:32 by mplattee          #+#    #+#             */
/*   Updated: 2023/02/07 13:59:56 by mplattee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_function(int a, int b)
{
	char	chiffre1;
	char	chiffre2;
	char	chiffre3;
	char	chiffre4;

	chiffre1 = (a / 10) + '0';
	chiffre2 = (a % 10) + '0';
	chiffre3 = (b / 10) + '0';
	chiffre4 = (b % 10) + '0';
	write(1, &chiffre1, 1);
	write(1, &chiffre2, 1);
	write(1, " ", 1);
	write(1, &chiffre3, 1);
	write(1, &chiffre4, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		if (((a / 10) + '0') < 10)
			write(1, "0", 1);
		while (b <= 99)
		{
			write_function(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
