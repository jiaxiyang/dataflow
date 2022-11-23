list(APPEND GRAPH_EXAMPLES boost_graph boost_graph_topological_sort
     boost_subgraph)
find_package(Boost REQUIRED)
foreach(example IN LISTS GRAPH_EXAMPLES)
  add_executable(${example} ${example}.cpp)
  target_link_libraries(${example} PUBLIC ${PROJECT_NAME})
endforeach()
