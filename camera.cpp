#include "camera.hpp"
#include <math.h>

Camera::Camera(float fov, sf::RenderWindow *surface){
    this -> fov = fov;
    this -> pos = {0,0,0};
    this -> angles = {0,0};
    this -> canvas = surface;
}

void Camera::rotate(sf::Vector2f dAngles){

    this -> angles += dAngles;

    while(this -> angles.x < -M_PI)
        this -> angles.x += M_PI;
    while(this -> angles.x >= M_PI)
        this -> angles.x -= M_PI;
    if(this -> angles.y > M_PI_2)
        this -> angles.y = M_PI_2;
    if(this -> angles.y < -M_PI_2)
        this -> angles.y = -M_PI_2;
}

void Camera::project(const Projectable *projectable){
    this -> canvas -> draw(
        projectable -> project(
            this -> pos, 
            this -> angles, 
            this -> fov
        )
    );
}

void Camera::clear(sf::Color color){
    this -> canvas -> clear(color);
}

void Camera::show(){
    this -> canvas -> display();
}