#include <project.h>
#include "twl_graph.h"

static void simple_test(t_test *test)
{
	t_graph *graph = twl_graph_new();
	t_graph_node_id nodeA_id = twl_graph_add_node(graph, strdup("A"));
	t_graph_node_id nodeB_id = twl_graph_add_node(graph, strdup("B"));
	t_graph_node_id nodeC_id = twl_graph_add_node(graph, strdup("C"));

	twl_graph_add_edge(graph, nodeA_id, nodeB_id, NULL);
	twl_graph_add_edge(graph, nodeA_id, nodeC_id, NULL);
	// twl_graph_debug_print(graph);
	mt_assert(twl_graph_edge_count(graph) == 2);
	twl_graph_del(graph, free, free);
}

static void empty_graph(t_test *test)
{
	t_graph		*graph;

	graph = twl_graph_new();
	mt_assert(twl_graph_edge_count(graph) == 0);
	twl_graph_del(graph, free, free);
}

void	suite_twl_graph_edge_count(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_test);
	SUITE_ADD_TEST(suite, empty_graph);
}
