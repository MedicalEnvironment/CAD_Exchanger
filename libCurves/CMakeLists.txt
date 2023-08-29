cmake_minimum_required(VERSION 3.10)

project(libCurves)

# Set the source files for your library
set(SOURCES
        src/Circle.cpp
        src/Ellipse.cpp
        src/Helix.cpp
        )

# Create the library
add_library(curves SHARED ${SOURCES})

# Set the include directories for your library
target_include_directories(curves PUBLIC include)
