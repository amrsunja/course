/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:24:22 by aazdoev           #+#    #+#             */
/*   Updated: 2023/03/08 12:53:51 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->_name << " has been destroyed!" << std::endl;
}

void Zombie::announce() const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
