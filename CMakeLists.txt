CMAKE_MINIMUM_REQUIRED(VERSION 3.9)
PROJECT(Algorithm)
SET(MY_TARGET Algorithm)

SET(CMAKE_CXX_STANDARD 17)

AUX_SOURCE_DIRECTORY(. SRC_LIST)

include_directories(${PROJECT_SOURCE_DIR}/Leetcode/Easy)
ADD_SUBDIRECTORY(Leetcode)
ADD_EXECUTABLE(${MY_TARGET} ${SRC_LIST} ${Easy_LIB_SRCS} ${Medium_LIB_SRCS} Leetcode/Medium/mediumHeader.h Leetcode/Easy/easyHeader.h Leetcode/Medium/convert.cpp Leetcode/Medium/myAtoi.cpp Leetcode/Medium/maxArea.cpp Leetcode/Medium/threeSum.cpp Leetcode/Medium/intToRoman.cpp Leetcode/Medium/threeSumClosest.cpp Leetcode/Medium/letterCombinations.cpp Leetcode/Medium/removeNthFromEnd.cpp Leetcode/Medium/generateParenthesis.cpp Leetcode/Medium/swapPairs.cpp Leetcode/Medium/divide.cpp Leetcode/Medium/nextPermutation.cpp Leetcode/Easy/maxSubArray.cpp Leetcode/Easy/lengthofLastWord.cpp Leetcode/Easy/plusOne.cpp Leetcode/Easy/addBinary.cpp Leetcode/Medium/search.cpp Leetcode/Medium/multiply.cpp Leetcode/Easy/mySqrt.cpp Leetcode/Easy/climbStairs.cpp Leetcode/Easy/deleteDuplicates.cpp Leetcode/Medium/deleteDuplicates2.cpp Leetcode/Easy/merge.cpp Leetcode/Easy/isSameTree.cpp Leetcode/Medium/spiralOrder.cpp Leetcode/Medium/searchRange.cpp Leetcode/Medium/combinationSum.cpp Leetcode/Medium/permute.cpp Leetcode/Easy/isSymmetric.cpp Leetcode/Easy/maxDepth.cpp Leetcode/Easy/levelOrderBottom.cpp Leetcode/Easy/generate.cpp Leetcode/Easy/hasCycle.cpp)
TARGET_LINK_LIBRARIES(${MY_TARGET} )