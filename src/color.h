#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

using color = vec3;

#define max_value 255.999

void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate the [0,1] compnent values to the byte range [0,255]
    int rbyte = int(max_value * r);
    int gbyte = int(max_value * g);
    int bbyte = int(max_value * b);

    // Write out the pixel color components
    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif