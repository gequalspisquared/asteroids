/*
  A simple asteroids game written by Nicholas Crane using SFML

  Created: 09/10/22
*/

#include <SFML/Graphics.hpp>

#include "../include/Player.hpp"

int main() 
{
  sf::RenderWindow window(sf::VideoMode(800, 600), "Asteroids", 
                          sf::Style::Default);

  // sf::CircleShape shape(50.0f);
  // shape.setFillColor(sf::Color::Blue);

  // Generate a sprite
  sf::Texture triangle_texture;
  if (!triangle_texture.loadFromFile("images/triangle.png"))
    return -1;
  struct Player triangle;
  triangle.setTexture(triangle_texture);
  triangle.angle = 0.0f;
  triangle.rotRate = 10.0f;

  sf::Clock clock;
  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
      if (event.type == sf::Event::KeyPressed)
        if (event.key.code == sf::Keyboard::Escape)
          window.close();
    }

    sf::Time dt = clock.restart();
    float dt_sec = dt.asSeconds();

    triangle.setRotation(triangle.angle);

    triangle.angle += triangle.rotRate * dt_sec;

    window.clear();
    window.draw(triangle);
    window.display();
  }

  return 0;
}