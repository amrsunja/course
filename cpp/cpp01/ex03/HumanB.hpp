#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();

		void attack() const;
		void setWeapon(Weapon &newWeapon);


	private:
		Weapon *_weapon;
		std::string _name;
};

#endif
