#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <thread>

#include "../libCurves/include/Circle.h"
#include "../libCurves/include/Ellipse.h"
#include "../libCurves/include/Helix.h"

void processCircle(Circle* circle, double& totalSum) {
    double radius = circle->radius;
    totalSum += radius;
}

int main() {
    // Create a container to hold curves
    std::vector<Curve3D*> curves;

    // Create instances of different curve types and add them to the container
    curves.push_back(new Circle(5.0));
    curves.push_back(new Ellipse(3.0, 4.0));
    curves.push_back(new Helix(2.0, 1.0));

    // Print coordinates and derivatives of all curves at t = PI/4
    const double t = M_PI / 4.0;
    for (const auto curve : curves) {
        Point3D point = curve->getPoint(t);
        Vector3D derivative = curve->getDerivative(t);

        std::cout << "Point at t = PI/4: " << point.x << ", " << point.y << ", " << point.z << std::endl;
        std::cout << "Derivative at t = PI/4: " << derivative.x << ", " << derivative.y << ", " << derivative.z << std::endl;

        delete curve;
    }

    // Create a container for circles
    std::vector<Circle*> circles;

    // Filter circles from the curves container and add them to the circles container
    for (const auto curve : curves) {
        if (dynamic_cast<Circle*>(curve)) {
            circles.push_back(static_cast<Circle*>(curve));
        }
    }

    // Sort circles by radius in ascending order
    std::sort(circles.begin(), circles.end(), [](const Circle* a, const Circle* b) {
        return a->radius < b->radius;
    });

    // Calculate the total sum of radii using parallel computations
    double totalSum = 0.0;
    std::vector<std::thread> threads;

    for (const auto circle : circles) {
        threads.emplace_back(processCircle, circle, std::ref(totalSum));
    }

    // Wait for all threads to finish
    for (auto& thread : threads) {
        thread.join();
    }

    // Print the sorted circles and the total sum of radii
    std::cout << "Sorted Circles by Radius:" << std::endl;
    for (const auto circle : circles) {
        std::cout << "Circle Radius: " << circle->radius << std::endl;
    }
    std::cout << "Total Sum of Radii: " << totalSum << std::endl;

    return 0;
}
