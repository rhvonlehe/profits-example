cmake_minimum_required(VERSION 3.20)

project(profits LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find_package(GTest REQUIRED)


message("cmake_binary_dir ${CMAKE_CURRENT_BINARY_DIR}")
enable_testing()

add_library(profits
    STATIC
    profit.cpp
)

target_include_directories(profits PUBLIC .)

add_executable(test-small
    test-small.cpp
)

target_link_libraries(test-small
    profits
    # gtest::gtest
)


include(GNUInstallDirs)
install(TARGETS test-small
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
