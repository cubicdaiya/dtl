INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

CHECK_INCLUDE_FILES(unistd.h HAVE_UNISTD_H)

IF(HAVE_UNISTD_H)
  ADD_DEFINITIONS(-DHAVE_UNISTD_H)
  ADD_EXECUTABLE(bdiff bdiff.cpp common.cpp)
ENDIF(HAVE_UNISTD_H)

ADD_EXECUTABLE(fpatch fpatch.cpp common.cpp)
ADD_EXECUTABLE(intdiff intdiff.cpp)
ADD_EXECUTABLE(intdiff3 intdiff3.cpp)
ADD_EXECUTABLE(patch patch.cpp common.cpp)
ADD_EXECUTABLE(st2ses st2ses.cpp common.cpp)
ADD_EXECUTABLE(strdiff3 strdiff3.cpp common.cpp)
ADD_EXECUTABLE(strdiff_cp strdiff_cp.cpp common.cpp)
ADD_EXECUTABLE(strdiff strdiff.cpp common.cpp)
ADD_EXECUTABLE(unidiff unidiff.cpp common.cpp)
ADD_EXECUTABLE(unistrdiff unistrdiff.cpp common.cpp)
