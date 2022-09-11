#pragma once

#include <SFML/Graphics.hpp>

struct Player : sf::Sprite {
    float angle;
    float rotRate; // deg / s
};