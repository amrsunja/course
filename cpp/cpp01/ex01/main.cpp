/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:02:40 by aazdoev           #+#    #+#             */
/*   Updated: 2023/03/09 18:04:27 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 5

int main( void ) {
    Zombie *zombiz = zombieHorde(N, "zombieA");

    for (size_t i = 0; i < N; i++)
        zombiz[i].announce();
    delete [] zombiz;
    return 0;
}
