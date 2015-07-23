#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>

int main() 
{
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
  sf::CircleShape shape(10.f);
  shape.setFillColor(sf::Color::Green);
  
  while(window.isOpen())
    {
      sf::Event event;
      while(window.pollEvent(event))
	{
	  if (event.type == sf::Event::Closed)
	    window.close();
	  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	    {
	      shape.move(-1.0,0);
	    }
	  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	    {
	      shape.move(1.0,0);
	    }
	  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	    {
	      shape.move(0,-1.0);
	    }
	  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	    {
	      shape.move(0,1.0);
	    }
	}
      window.clear();
      window.draw(shape);
      window.display();
    }
  return 0;
}
