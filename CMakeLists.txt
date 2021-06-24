cmake_minimum_required(VERSION 3.10)

project(hypercore)

execute_process(COMMAND git submodule update --init --recursive WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(deps/datcxx/flat-tree)
add_subdirectory(deps/heapwolf/cxx-tap)

add_library(${PROJECT_NAME} index.cxx)
target_link_libraries(${PROJECT_NAME} timers eventemitter tap)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/..)
install(FILES index.hxx DESTINATION include/${PROJECT_NAME})

include(CTest)
if(BUILD_TESTING)
	add_executable(${PROJECT_NAME}-test test/index.cxx)
	target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
	add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME}-test)
endif()
