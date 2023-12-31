#include <SFML/Graphics.hpp>
#include <cmath>

const int width = 800;
const int height = 600;

int main()
{
    sf::RenderWindow window(sf::VideoMode({width, height}), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
