// Copyright [2023] <Wu Li> [legal/copyright]
#pragma once

#include <SFML/Graphics.hpp>

void hexa(sf::RenderWindow& window, float x, float y, float size, int depth, float angle_offset);
sf::ConvexShape hexaHelper(float x, float y, float size, float angle_offset);
