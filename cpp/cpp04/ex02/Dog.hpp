#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {
	private:
			Brain   *_brain;

	public:
			Dog( void );
			~Dog( void );

			Dog( const Dog& src );
			Dog& operator=( const Dog& src );

			void   makeSound( void ) const;
};

#endif // DOG_HPP
