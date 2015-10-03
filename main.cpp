#include <iostream>
#include "Game.hpp"
#include "Frame.hpp"
#include "VLayout.hpp"
#include "TextButton.hpp"
using namespace std;

void printPenguin(const sf::Event& ,Button&) {
    std::cout<< "penguin"<< std::endl;
}


int main() {

   // sf::RenderWindow window(sf::VideoMode(500,500), "OP");

    /*Frame _mainMenu(window);

    VLayout* layout = new VLayout;
    layout->setSpace(25);

    sf::Font font;
    font.loadFromFile("res/font/font.otf");
    TextButton* penguin;

    penguin = new TextButton("Penguin",font);

//    std::function<void(const sf::Event& ,Button& )> display = [](const sf::Event&, Button&){uselessint = 2;};
  //  penguin->onClick =  display;
    penguin->onClick = [this](const sf::Event&, Button& button){
        //initGame();
        //_status = Status::StatusGame;
        std::cout <<"wow" << std::endl;
    };


    layout->add(penguin);

    layout->add(configuration);
    TextButton* exit = new TextButton("Exit");
    exit->onClick = [this](const sf::Event&, Button& button){
        _window.close();
    };

    _mainMenu.setLayout(layout);

//    sf::Event ev = sf::Event::KeyPressed;
//    _mainMenu.bind(ev, [this](const sf::Event&event){this->_window.close();});

    while(window.isOpen()){

//        std::cout << "pene" << std::endl;
        sf::Event event;
        while(window.pollEvent(event)) {
            _mainMenu.processEvent(event);

            if (event.type == sf::Event::Closed) { window.close(); exit(0); }
        }

        window.draw(_mainMenu);
        window.display();

    }*/


Game game;
game.Run();
    cout << "Hello World!" << endl;
    return 0;
}

