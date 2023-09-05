#include <stdio.h>

int oc_a(char *str)
{
    int i;
    int j;
    
    j = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == 'A')
        {
            j++;
        }
        i++;
    }
    return j;
}

int main()
{
    char str[] = "Aziz   AAA  A";
    printf("\n%d\n", oc_a(str));
}