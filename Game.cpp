#include "Game.hpp"

Game::Game(): window(sf::VideoMode(500,500), "OP") {
    value = 0;
}

void Game::Run(){

    Frame _mainMenu(window);

    VLayout* layout = new VLayout;
    layout->setSpace(25);

    sf::Font font;
    font.loadFromFile("res/font/font.otf");

    TextButton* penguin;
    TextButton* exitB;
    penguin = new TextButton("Penguin",font);
    exitB = new TextButton("Exit", font);

    penguin->onClick = [this](const sf::Event&, Button&){
        ++value;
        std::cout << value << " penguins "<<std::endl;
    };
    exitB->onClick = [this](const sf::Event&, Button&){
        window.close();
    };

    sf::Texture t1, t2;
    t1.loadFromFile("res/buttonPressed.png");
    t2.loadFromFile("res/buttonReleassed.png");
    ImgButton* imgButton;
    imgButton = new ImgButton(t1,t2);
    imgButton->onClick = [this](const sf::Event&, Button&){
        std::cout << value << " wow so pic "<<std::endl;
    };
    imgButton->setSize(100,100);

    ImgTextButton* imgTextButton;
    std::string buttonText;
    buttonText = "22222";
    imgTextButton = new ImgTextButton(t1,t2,buttonText,font);
    imgTextButton->onClick = [this](const sf::Event&, Button&){
        std::cout << value << " wow so imgtext "<<std::endl;
    };
    imgTextButton->setSize(100,100);

    layout->add(exitB);
    layout->add(imgButton);
    layout->add(imgTextButton);
    layout->add(penguin);

    _mainMenu.setLayout(layout);

    while(window.isOpen()){

        sf::Event event;
        while(window.pollEvent(event)) {

            _mainMenu.processEvent(event);

            if (event.type == sf::Event::Closed) { window.close(); exit(0); }
        }

        window.draw(_mainMenu);
        window.display();

    }
}
