#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include "Frame.hpp"
#include "VLayout.hpp"
#include "HLayout.hpp"
#include "ImgButton.hpp"
#include "TextButton.hpp"
#include "ImgTextButton.hpp"

class Game {
public:
    Game();
    int value;
    void Run();
    sf::RenderWindow window;
};

#endif // GAME_HPP
