// Copyright [2023] <Wu Li> [legal/copyright]

#include "hexa.hpp"
#include <cmath>

// Recursive Helper Function
sf::ConvexShape hexaHelper(float x, float y, float size, float angle_offset) {
    // Declare a ConvexShape named hexagon
    sf::ConvexShape hexagon;
    // Set 6 Points (Vertices)
    hexagon.setPointCount(6);
    // Angle of each Vertex
    float angle = 2 * M_PI / 6;
    // For loop to draw out the sides
    for (int i = 0; i < 6; ++i) {
    // Set the position for the i vertex
    // and calculate x and y coordinate respectively
        hexagon.setPoint(i,
        sf::Vector2f(x + size * cos(i * angle + angle_offset),
        y + size * sin(i * angle + angle_offset)));
    }
    return hexagon;
}

void hexa(sf::RenderWindow& window, float x, float y, float size, int depth, float angle_offset) {
    if (depth == 0) {
        // Call on the hexaHelper function once if depth is 0
        sf::ConvexShape hexagon = hexaHelper(x, y, size, angle_offset);
        // Draw a singular green hexagon
        hexagon.setFillColor(sf::Color::Green);
        window.draw(hexagon);
        // if depth > 0, call on recursive helper function 'depth' amount of times
    } else {
        float newSize = size / 3;
        hexa(window, x, y, newSize, depth - 1, angle_offset);
        // Calculate the x and y coordinate for the center of the next hexagon
        for (int i = 0; i < 6; ++i) {
            // Use the current x and y coordinate to calculate newX and newY
            float newX = x + 2 * newSize * cos(i * 2 * M_PI / 6 + angle_offset);
            float newY = y + 2 * newSize * sin(i * 2 * M_PI / 6 + angle_offset);
            // Recursively call hexa with new coordinates
            hexa(window, newX, newY, newSize, depth - 1, angle_offset);
        }
    }
}
