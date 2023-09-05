#include<unistd.h>

int repeat(char counter_char)
{
    int repeat;
    if (counter_char >= 'a' && counter_char <= 'z')
    {
        repeat = counter_char - 'a' + 1;
    }
    else if (counter_char >= 'A' && counter_char <= 'Z')
    {
        repeat = counter_char - 'A' + 1;
    }
    else 
        repeat = 1;
    return (repeat);
}

int main(int argc, char **argv)
{
    int rep;
    if (argc == 2)
    {
        int i = 0;
        if(argv[1][i])
        {
            rep = repeat(argv[1][i]);
            while (rep > 0)
            {
                write (1, &argv[1][i], 1);
                rep --;
            }
            i++;
        }
        
    }
    write (1, "\n", 1);
    return 0;
}
