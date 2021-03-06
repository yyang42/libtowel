#include "project.h"

static void simple_test(t_test *test)
{
	t_lst *lst;

	lst = twl_lst_new();

	twl_lst_push_back(lst, strdup("tata"));
	twl_lst_push_back(lst, strdup("tutu"));
	twl_lst_push_back(lst, strdup("toto"));
	twl_lst_push_front(lst, strdup("dodo"));
	twl_lst_push_front(lst, strdup("dada"));

	mt_assert(strcmp(twl_lst_get_elem__(lst, 0)->data, "dada") == 0);
	mt_assert(strcmp(twl_lst_get_elem__(lst, 1)->data, "dodo") == 0);
	mt_assert(strcmp(twl_lst_get_elem__(lst, 2)->data, "tata") == 0);
	mt_assert(strcmp(twl_lst_get_elem__(lst, 3)->data, "tutu") == 0);
	mt_assert(strcmp(twl_lst_get_elem__(lst, 4)->data, "toto") == 0);

}

void	suite_twl_lst_push_front(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_test);
}
