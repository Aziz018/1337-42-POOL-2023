/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:43:04 by aelkheta          #+#    #+#             */
/*   Updated: 2023/08/24 09:55:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[i] == '\0')
        return str;
    while (str[i])
    {
        j = 0;
        if(str[i + j] == to_find[j])
        {
        while(str[i+j] != '\0')
        {
            j++;
        }
        }
        if (!to_find[i])
            return (str + i);
            
        i++;
    }
    return NULL;
}
