
#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	n;
	size_t		len_little;

	if (*little == '\0')
		return (char *)(big);
	n = 0;
	len_little = ft_strlen(little);
	while (*big != '\0')
	{
		if (n + len_little > len)
			return (NULL);
		if (ft_strncmp(big, little, len_little) == 0)
			return (char*)(big);
		big++;
		n++;
	}
	return (0);
}