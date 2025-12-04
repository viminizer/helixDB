cmake_minimum_required(VERSION 3.16)
project(sql C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Set output directories for binaries and object files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/db)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/objects)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/objects)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Gather all source files
file(GLOB SRC_FILES
    ${CMAKE_SOURCE_DIR}/src/*.c
)

# Add main.c separately
set(MAIN_FILE ${CMAKE_SOURCE_DIR}/app/main.c)

# Optional: Enable compile commands JSON generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add executable
add_executable(db
    ${MAIN_FILE}
    ${SRC_FILES}
)

