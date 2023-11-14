# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\candle-stick-graph_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\candle-stick-graph_autogen.dir\\ParseCache.txt"
  "candle-stick-graph_autogen"
  )
endif()
