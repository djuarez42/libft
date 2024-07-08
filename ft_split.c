#include "libft"
#include <stdlib.h>
#include <stdio.h>

static int	count_words(char const *s, char c)
{
    int     count;
    int     i;

    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
        i++;
        if (s[i] != '\0')
        {
            count++;
            while (s[i] != c && s[i] != '\0')
            i++; 
        }
    }
    return (count);
}
/*
int main(void)
{
    char const      *str;
    char        c;
    int     count;


    str = "hola me llamo cristhian";
    c = ' ';
    count = count_words(str, c);
    printf("la cantidad de palablas en el string \"%s\" es de : %d\n", str, count);
    return(0);
}
*/
static char	*get_next_word(char const *s, char c, int *start)
{
    int             i;
    char    *word;

    i = *start;
    while (s[i] != '\0' && s[i] == c)
            i++;
    *start = i;
    while (s[i] != '\0' && s[i] != c)
            i++;
    word = ft_substr(s, *start, i - *start);
    *start = i;
    return (word);
}
/*int main(void)
{
    int     start = 0;
    char                *word;

    while ((word = get_next_word(s, ',', &start)) != NULL)
    {
        printf("palabra: %s\n", word);
        free(word);
        return (0);
    }
}*/
