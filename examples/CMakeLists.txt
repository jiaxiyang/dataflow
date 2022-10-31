list(APPEND DF_EXAMPLES json_example spdlog_example)

foreach(example IN LISTS DF_EXAMPLES)
  add_executable(${example} ${example}.cpp)
  target_link_libraries(${example} PUBLIC ${PROJECT_NAME})
endforeach()

add_subdirectory(graph)
