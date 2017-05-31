cmake_minimum_required(VERSION 2.8.11)
project(dtl)

INCLUDE(CheckIncludeFiles)

CHECK_INCLUDE_FILES(gtest/gtest.h HAVE_GTEST_H)

add_subdirectory(examples)
IF(HAVE_GTEST_H)
  add_subdirectory(test)
ENDIF(HAVE_GTEST_H)

install(DIRECTORY "${PROJECT_SOURCE_DIR}/dtl" DESTINATION include)
