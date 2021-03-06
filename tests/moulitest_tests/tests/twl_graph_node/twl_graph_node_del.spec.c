#include <project.h>
#include "twl_graph.h"

static void simple_test(t_test *test)
{
	t_graph_node			*node0;
	t_graph_node			*node1;
	t_graph_node			*node2;
	t_graph_node			*node3;

	node0 = twl_graph_node_new(0, strdup("A"));
	node1 = twl_graph_node_new(1, strdup("B"));
	node2 = twl_graph_node_new(2, strdup("C"));
	node3 = twl_graph_node_new(3, strdup("D"));

	mt_assert(twl_lst_len(node0->edges_) == 0);
	twl_graph_node_del(node0, free);
	twl_graph_node_del(node1, free);
	twl_graph_node_del(node2, free);
	twl_graph_node_del(node3, free);

}

void	suite_twl_graph_node_del(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_test);
}
