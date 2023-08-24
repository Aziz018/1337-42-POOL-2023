#include<unistd.h>

char *ft_rev_print (char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    
    
        write(1, "\n", 1);
    
    return str;
}

int main()
{
    ft_rev_print("hello bro");
}