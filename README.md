# CAD_Exchanger
The CAD Exchanger program is a C++ application designed to handle and manipulate 3D curve geometries. It provides functionalities to create, analyze, and process various types of 3D curves, such as circles, ellipses, and helices. The program offers an interactive interface to showcase the properties and derivatives of these curves, facilitating visualization and understanding of their behavior.

# Components:

Main Executable (CAD_Exchanger):
The main executable is the entry point of the program. It utilizes the 3D curve classes provided by the libCurves library to demonstrate the properties of different curve types. The program calculates and displays coordinates, derivatives, and other relevant information for each curve at a specific parameter value. It also sorts circles by radius and computes the total sum of their radii using parallel computation techniques.

libCurves Library:
The libCurves library encapsulates the implementation of various 3D curve geometries. It includes classes for circles, ellipses, helices, and other potential curve types. The library's header files define the necessary interfaces for interacting with these curve classes, while the source files contain the actual implementations. The library allows for easy extension with new curve types in the future.

# Key Features:

Creation of different types of 3D curves: The program allows users to create instances of circles, ellipses, and helices with specified parameters.
Analysis of curve properties: The program calculates and displays the coordinates and derivatives of curves at user-defined parameter values, aiding in understanding their shapes and characteristics.
Parallel computation: Utilizing parallel programming techniques, the program sorts circles by radius and computes the total sum of their radii in a parallelized manner.
Modularity and reusability: The separation of the libCurves library from the main executable promotes code modularity and reusability, enabling easy integration of new curve types or features.

# Usage

Run the main.cpp file in order to execute the program :)
