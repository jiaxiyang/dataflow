//=======================================================================
// Copyright 1997, 1998, 1999, 2000 University of Notre Dame.
// Authors: Andrew Lumsdaine, Lie-Quan Lee, Jeremy G. Siek
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================
#include <algorithm>
#include <boost/config.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graph_selectors.hpp>
#include <boost/graph/graphviz.hpp>
#include <boost/graph/topological_sort.hpp>
#include <iostream>
#include <iterator>
#include <list>
#include <utility>

typedef std::pair<std::size_t, std::size_t> Edge;

/*
  Topological sort example

  The topological sort algorithm creates a linear ordering
  of the vertices such that if edge (u,v) appears in the graph,
  then u comes before v in the ordering.

  Sample output:

  A topological ordering: 2 5 0 1 4 3

*/

int main(int, char *[]) {
  // begin
  using namespace boost;

  /* Topological sort will need to color the graph.  Here we use an
     internal decorator, so we "property" the color to the graph.
     */
  // typedef adjacency_list<vecS, vecS, bidirectionalS,
  //                        property<vertex_color_t, default_color_type>>
  //     Graph;
  typedef adjacency_list<vecS, vecS, bidirectionalS, no_property,
                         property<edge_weight_t, float>>
      Graph;

  typedef boost::graph_traits<Graph>::vertex_descriptor Vertex;
  Edge edges[6] = {Edge(0, 1), Edge(2, 4), Edge(2, 5),
                   Edge(0, 3), Edge(1, 4), Edge(4, 3)};
  Graph G(edges, edges + 6, 6);

  boost::property_map<Graph, vertex_index_t>::type id = get(vertex_index, G);

  typedef std::vector<Vertex> container;
  container c;
  topological_sort(G, std::back_inserter(c));

  std::cout << "A topological ordering: ";
  for (container::reverse_iterator ii = c.rbegin(); ii != c.rend(); ++ii)
    std::cout << id[*ii] << " ";
  std::cout << std::endl;

  // dot
  std::map<std::string, std::string> graph_attr, vertex_attr, edge_attr;
  const char name[] = "012345";
  boost::property_map<Graph, edge_weight_t>::type trans_delay =
      get(edge_weight, G);
  boost::write_graphviz(
      std::cout, G, make_label_writer(name), make_label_writer(trans_delay),
      make_graph_attributes_writer(graph_attr, vertex_attr, edge_attr));
  return 0;
}
// https://dreampuf.github.io/GraphvizOnline/
