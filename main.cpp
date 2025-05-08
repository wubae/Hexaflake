// Copyright [2023] <Wu Li> [legal/copyright]

#include <cmath>
#include "hexa.hpp"
#include <SFML/Graphics.hpp>


// A constant integer variable for window size
// For the hexagon to emulate the assignment's image
const float OFFSET_ANGLE = 30 * (M_PI / 180);  // 30 degrees in radians


int main(int argc, char* argv[]) {
    // Take the second argument of the command line for size
    std::string _size = argv[1];
    // Take the third argument of the command line for depth
    std::string _depth = argv[2];

    // Pass the string into an integer variable
    int depth = stoi(_depth);
    int size = stoi(_size);

    // Window Size to Scale
    int window_size = size * 3;

    // Set the x and y coordinate so hexagon will be centered
    int x_coord = window_size / 2;
    int y_coord = window_size / 2;

    // Render the Window named "Hexaflake"
    sf::RenderWindow window(sf::VideoMode(window_size, window_size), "Hexaflake");

    // Window Event
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // Pass window, x & y coordinate, size, depth, and the offset angle
        hexa(window, x_coord, y_coord, size, depth, OFFSET_ANGLE);
        window.display();
    }

    return 0;
}


