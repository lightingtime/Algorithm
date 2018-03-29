cmake_minimum_required(VERSION 3.9)
project(Algorithm)
set(MY_TARGET Algorithm)

set(CMAKE_CXX_STANDARD 17)

#设置执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#设置库输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

aux_source_directory(. SRC_LIST)

add_subdirectory(Leetcode)
set(EXTRA_LIBS ${EXTRA_LIBS} ${MY_LINK})
add_executable(${MY_TARGET} ${SRC_LIST} Leetcode/Medium/addTwoNumbers.cpp Leetcode/Easy/strStr.cpp Leetcode/Easy/easyHeader.h Leetcode/Easy/coutAndSay.cpp Leetcode/Easy/isPalindrome.cpp Leetcode/Easy/isValid.cpp Leetcode/Easy/longestCommonPrefix.cpp Leetcode/Easy/mergeTwoLists.cpp Leetcode/Easy/removeDuplicates.cpp Leetcode/Easy/removeElement.cpp Leetcode/Easy/Reverse_Integer.cpp Leetcode/Easy/romanToInt.cpp Leetcode/Easy/searchInsert.cpp Leetcode/Easy/tow_Sum.cpp Leetcode/Medium/lengthOfLongestSubstring.cpp Other/otherHeader.h Other/longestSubstring.cpp)
target_link_libraries(${MY_TARGET} ${EXTRA_LIBS})