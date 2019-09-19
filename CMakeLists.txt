

cmake_minimum_required (VERSION 3.0)

set(CMAKE_BUILD_TYPE "Release" CACHE STRING "build type")

project(qt-test)

find_package(Qt5Test REQUIRED)

qt5_generate_moc(main.cxx hello.moc)
add_executable(hello main.cxx hello.moc)
target_include_directories(hello PRIVATE ${Qt5Test_INCLUDE_DIRS})
target_include_directories(hello PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries (hello ${Qt5Test_LIBRARIES})

enable_testing()
add_test (NAME hello COMMAND hello)
