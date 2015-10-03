#include "Label.hpp"
#include<iostream>
Label::Label(const std::string &text, sf::Font& font , Widget *parent) :Widget(parent) {
    _text.setFont(font);
    setText(text);
    setTextColor(sf::Color(180,93,23));
}

Label::~Label(){}

void Label::setText(const std::string &text) {
    _text.setString(text);
    updateShape();
}

void Label::setCharacterSize(unsigned int size){
    _text.setCharacterSize(size);
    updateShape();
}

unsigned int Label::getCharacterSize() const{
    return _text.getCharacterSize();
}

void Label::setTextColor(const sf::Color &color){
    _text.setColor(color);
}

sf::Vector2f Label::getSize() const {
    sf::FloatRect rect = _text.getGlobalBounds();
    return sf::Vector2f(rect.width,rect.height);
}

void Label::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform.translate(_position);
    std::cout << _position.x << " , " << _position.y << std::endl;
    std::cout << _text.getPosition().x << " , " << _text.getPosition().y << std::endl;
    std::cout << "--- " << _text.getFont()->getTexture(_text.getCharacterSize()).getSize().x << _text.getString().toAnsiString() << std::endl;
    target.draw(_text,states);

}
