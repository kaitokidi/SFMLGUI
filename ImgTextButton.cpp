#include "ImgTextButton.hpp"

ImgTextButton::ImgTextButton(const sf::Texture & pressedTexture, sf::Texture & releasedTexture,
                             std::string& text, sf::Font font, Widget *parent)
    :Button(parent), _label(text, font, nullptr){
    //setTextColor(sf::Color(255, 255, 255, 128));

    _label = Label (text, font, this);

    _pressedTexture = pressedTexture;
    _releassedTexture = releasedTexture;

    _sprite.setTexture(_releassedTexture);

}

ImgTextButton::~ImgTextButton(){}

void ImgTextButton::setSize(sf::Vector2f size) {
    _shape.setSize(size);
    updateShape();
}
void ImgTextButton::setSize(float width, float height){
    setSize(sf::Vector2f(width,height));
}

void ImgTextButton::setPressedTexture(sf::Texture &pressedTexture){
    _pressedTexture = pressedTexture;
    updateShape();
}

void ImgTextButton::setReleassedTexture(sf::Texture &releassedTexture){
    _releassedTexture = releassedTexture;
    updateShape();
}

sf::Vector2f ImgTextButton::getSize() const{
    sf::FloatRect rect = _shape.getGlobalBounds();
    return sf::Vector2f(rect.width, rect.height);
}

void ImgTextButton::setText(const std::string &text){
    _label.setText(text);
}

void ImgTextButton::setCharacterSize(unsigned int size){
    _label.setCharacterSize(size);
}

void ImgTextButton::setTextColor(const sf::Color &color){
    _label.setTextColor(color);
}

void ImgTextButton::updateShape(){
   // sf::Vector2f label_size = _label.getSize();
    unsigned int char_size = _label.getCharacterSize();
   //_shape.setSize(sf::Vector2f(char_size*2+label_size.x, char_size*2+label_size.y));
    _label.setPosition(char_size,char_size);
    _sprite.setScale(_shape.getSize().x/_sprite.getLocalBounds().width, _shape.getSize().y/_sprite.getLocalBounds().height );
    Widget::updateShape();
}


void ImgTextButton::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    //std::cout << _position.x << ", " << _position.y << std::endl;
    states.transform.translate(_position);
    target.draw(_shape, states);
    target.draw(_sprite, states);
    target.draw(_label,states);
}

void ImgTextButton::onMouseEntered() {
    _sprite.setTexture(_pressedTexture, false);
    updateShape();
}

void ImgTextButton::onMouseLeft() {
    _sprite.setTexture(_releassedTexture, false);
    updateShape();
}