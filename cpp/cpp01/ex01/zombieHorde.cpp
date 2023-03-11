/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:43:01 by aazdoev           #+#    #+#             */
/*   Updated: 2023/03/09 18:00:25 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
	Zombie *zombieList = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombieList[i].setName(name);
	return zombieList;
}
