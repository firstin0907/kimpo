cmake_minimum_required(VERSION 3.13)
project(kimpo)

set(KIMPO_INC ${PROJECT_SOURCE_DIR}/include)
set(KIMPO_SRC ${PROJECT_SOURCE_DIR}/source)
set(KIMPO_TST ${PROJECT_SOURCE_DIR}/test)

include_directories(${KIMPO_INC})

add_library(foo STATIC
    ${KIMPO_SRC}/foo.cc
    ${KIMPO_SRC}/bar.cc
    )

enable_testing()
add_executable(test1 WIN32
	${KIMPO_TST}/test1.cc
	)

target_link_libraries(test1 foo)
add_test(NAME test1 COMMAND test1)