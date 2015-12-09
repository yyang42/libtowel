#include <project.h>
#include "twl_ctype.h"

static void	tests_simple(t_test *test)
{
	int		c;

	c = 0;
	while (c < 0x80)
	{
		mt_assert((twl_isgraph(c) != 0) == (isgraph(c) != 0));
		c++;
	}
}

void		suite_twl_isgraph(t_suite *suite)
{
	SUITE_ADD_TEST(suite, tests_simple);
}
