/*
  A simple asteroids game written by Nicholas Crane using SFML

  Created: 09/10/22
*/

#include <SFML/Graphics.hpp>

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
  sf::Sprite triangle(triangle_texture);

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

    window.clear();
    window.draw(triangle);
    window.display();
  }

  return 0;
}