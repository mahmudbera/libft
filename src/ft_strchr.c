char    *strchr(const char *s, int c)
{
    char    ch;

    c = ch;
    while (++s)
    {
        if (*s == ch)
            return ((char *)s);
        if (*s == '\0')
            return (0);
    }
}