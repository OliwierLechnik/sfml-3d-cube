#include <SFML/Graphics.hpp>
#include "projectable.hpp"


class Line3D : public Projectable {
    sf::Vector3f begin;
    sf::Vector3f end;

    virtual sf::VertexArray project(sf::Vector3f origin, sf::Vector2f angles, float pov);

public:
    Line3D(sf::Vector3f begin, sf::Vector3f end);

};

class Cube : public Projectable {
    sf::Vector3f origin;
    sf::Vector2f angles;

    virtual sf::VertexArray project(sf::Vector3f origin, sf::Vector2f angles, float pov);

public:
    Cube(sf::Vector3f origin, float side);
};
