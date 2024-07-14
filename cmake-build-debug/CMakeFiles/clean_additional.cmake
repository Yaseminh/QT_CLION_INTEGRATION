# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\untitled6_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\untitled6_autogen.dir\\ParseCache.txt"
  "untitled6_autogen"
  )
endif()
