cmake_minimum_required(VERSION 3.10)

project(CAD_Exchanger)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OSX_ARCHITECTURES x86_64)

# Add the libCurves subdirectory to the project
add_subdirectory(libCurves)

# Define your main executable
add_executable(CAD_Exchanger src/main.cpp libCurves/src/Circle.cpp libCurves/src/Ellipse.cpp libCurves/src/Helix.cpp)

# Link your executable with the curves library
target_link_libraries(CAD_Exchanger PRIVATE curves)

# ... other configuration or targets ...

