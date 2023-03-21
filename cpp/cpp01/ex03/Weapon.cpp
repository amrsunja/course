#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : _type(weaponType) {}
Weapon::~Weapon() {}

std::string const &Weapon::getType() const {
	return (this->_type);
}

void Weapon::setType(std::string newType) {
	this->_type = newType;
}
