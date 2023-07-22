#include <SFML/Graphics.hpp>
#include "projectable.hpp"

class Camera {

    sf::RenderWindow *canvas;

    sf::Vector3f pos;
    sf::Vector2f angles;
    float fov;

public:

    Camera(float fov, sf::RenderWindow *surface);

    void rotate(sf::Vector2f dAngles);

    void project(const Projectable *projectable);

    void show();

    void clear(sf::Color color = sf::Color::Black);
};