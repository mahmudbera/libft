
static int	get_number_of_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if (s[0] != c)
		count++;
	return (count);
}

#include <stdio.h>

int main()
{
	printf("%d", get_number_of_words("hello!", ' '));
}