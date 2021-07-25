# only for cmake --version >= 3.16.3
cmake_minimum_required(VERSION 3.16.3)

# project name
project(catch2_experiments)

# creates the variable EXEC and sets it to final
set(EXEC final)

# I../includes
include_directories(includes)

# puts all .cpp files to the SOURCES variable
file(GLOB SOURCES src/*.cpp)

find_package(Catch2 REQUIRED)

# compiles the files defined by SOURCES to generate the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})

target_link_libraries(${EXEC} PRIVATE Catch2::Catch2WithMain)




