cmake_minimum_required(VERSION 3.0.2)
project(test_demo_cpp)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package()

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

# Compile nodes
add_library(counter_lib src/counter.cpp)
add_executable(counter_node src/counter_node.cpp)
target_link_libraries(counter_node
  counter_lib
  ${catkin_LIBRARIES}
)

# Compile tests
if(CATKIN_ENABLE_TESTING)
  # Test increment function of a counter class
  catkin_add_gtest(counter_test test/counter_test.cpp)
  target_link_libraries(counter_test
    counter_lib
    ${catkin_LIBRARIES}
  )
endif()
