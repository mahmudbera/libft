char    *strrchr(const char *s, int c)
{
    char    ch;
    char    *temp;

    ch = c;
    temp = 0;
    while (*s)
    {
        if (*s == ch)
            temp = s;
        s++;
    }
    return (temp);
}