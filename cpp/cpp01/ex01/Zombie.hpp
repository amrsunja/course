/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:23:46 by aazdoev           #+#    #+#             */
/*   Updated: 2023/03/09 18:01:41 by aazdoev          ###   ########.fr       */
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
		Zombie();
    ~Zombie();

    void announce() const;
    void setName(std::string name);
};

Zombie *zombieHorde(int n, std::string name);

#endif
