CMAKE_MINIMUM_REQUIRED(VERSION 3.9)
PROJECT(Algorithm)
SET(MY_TARGET Algorithm)

SET(CMAKE_CXX_STANDARD 17)

AUX_SOURCE_DIRECTORY(. SRC_LIST)
ADD_SUBDIRECTORY(Leetcode)
ADD_EXECUTABLE(${MY_TARGET} ${SRC_LIST} ${Easy_LIB_SRCS} ${Medium_LIB_SRCS} Leetcode/Medium/mediumHeader.h Leetcode/Medium/convert.cpp Leetcode/Medium/myAtoi.cpp Leetcode/Medium/maxArea.cpp Leetcode/Medium/threeSum.cpp Leetcode/Medium/intToRoman.cpp Leetcode/Medium/threeSumClosest.cpp Leetcode/Medium/letterCombinations.cpp)
TARGET_LINK_LIBRARIES(${MY_TARGET} )