#include <SFML/Graphics.hpp>

class Camera;

class Projectable {
    friend class Camera;
    virtual sf::VertexArray project(sf::Vector3f origin, sf::Vector2f angles, float pov) const;
};