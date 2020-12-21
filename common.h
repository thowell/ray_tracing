#ifndef COMMON_H
#define COMMON_H

#include <cmath>
#include <limits>
#include <memory>

// constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// utility functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// common headers
#include "ray.h"
#include "vec3.h"

#endif