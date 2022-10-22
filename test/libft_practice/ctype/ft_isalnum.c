#include "ft_isdigit.c"
#include "ft_isalpha.c"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
