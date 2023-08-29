/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:09:18 by aelkheta          #+#    #+#             */
/*   Updated: 2023/08/28 20:25:57 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_swap(char **a, char **b)
{
    char *swp = *a;
    *a = *b;
    *b = swp;
}

void print_params(int ac, char *av)
{
    int j = 0;
    while (av[j])
    {
        write(1, &av[j], 1);
        j++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    int i, j, k;

    i = 1;
    while (i < argc - 1)
    {
        j = i + 1;
        k = 0;
        while (argv[i][k] && argv[j][k] && argv[i][k] == argv[j][k])
        {
            k++;
        }
        if (argv[i][k] > argv[j][k])
        {
            ft_swap(&argv[i], &argv[j]);
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        print_params(argc, argv[i]);
        i++;
    }
    return 0;
}