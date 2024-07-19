#include <unistd.h>
#include <stdlib.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);

void *ft_memcpy(void *dest, const void *src, size_t length);
void *ft_memchr(const void *ptr, int ch, size_t length);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *dest, int c, size_t count);
int ft_memcmp(const void *s1, const void *s2, size_t n);

char    *ft_strchr(const char *s, int c);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
char *ft_strdup(const char *s);
size_t  ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *s, const char *find, size_t len);
char    *ft_strrchr(const char *s, int c);

int ft_tolower(int c);
int ft_tolower(int c);

int ft_atoi(const char *str);
void    *ft_calloc(size_t count, size_t size);

