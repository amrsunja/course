#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon(std::string weaponType);
		~Weapon();
		std::string const &getType() const;
		void setType(std::string newType);

	private:
		std::string _type;
};

#endif
