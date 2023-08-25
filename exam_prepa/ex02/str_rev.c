#include <stdio.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char swp;
    while (str[i])
    {
        i++;
    }
    i--;
    while (j< i)
    {
        swp = str[j];
        str[j] = str[i];
        str[i] = swp;
        j++;
        i--;
    }
    return str;
}

int main()
{
    char str[] = "hello";
    printf("%s\n",ft_strrev(str));

    return 0;
}