/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:28:32 by aelkheta          #+#    #+#             */
/*   Updated: 2023/09/01 10:04:31 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_putnbr(int number)
{
    if (number >= 0 && number <= 9)
		ft_putchar(number + '0');
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	return 0;
}


int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write (1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
	return 0;
}
