INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

ADD_EXECUTABLE(test-dtl
  dtl_test.cpp
  dtl_test_common.cpp
  Intdifftest.cpp
  Objdifftest.cpp
  Patchtest.cpp
  Strdiff3test.cpp
  Strdifftest.cpp)
ADD_TEST(test-dtl ${CMAKE_CURRENT_BINARY_DIR}/test-dtl)
TARGET_LINK_LIBRARIES(test-dtl gtest pthread)
