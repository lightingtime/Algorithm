CMAKE_MINIMUM_REQUIRED(VERSION 3.9)
PROJECT(Algorithm)
SET(MY_TARGET Algorithm)

SET(CMAKE_CXX_STANDARD 17)

AUX_SOURCE_DIRECTORY(. SRC_LIST)

include_directories(${PROJECT_SOURCE_DIR}/Leetcode/Easy/easyHeader.h)
ADD_SUBDIRECTORY(Leetcode)
ADD_EXECUTABLE(${MY_TARGET} ${SRC_LIST} ${Easy_LIB_SRCS} ${Medium_LIB_SRCS} Leetcode/Medium/. Leetcode/Easy/. Leetcode/Easy/sortedArrayToBST.cpp Leetcode/Easy/isBalanced.cpp Leetcode/Easy/singleNumber.cpp Leetcode/Easy/maxProfit.cpp Leetcode/Easy/hasPathSum.cpp Leetcode/Easy/maxProfit2.cpp)
TARGET_LINK_LIBRARIES(${MY_TARGET} )