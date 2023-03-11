/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:23:46 by aazdoev           #+#    #+#             */
/*   Updated: 2023/03/08 12:51:42 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _name;

	public:
		Zombie(std::string name);
    ~Zombie();

    void announce() const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
