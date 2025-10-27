/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:22:34 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/27 21:43:16 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap    michele("michele");
    FragTrap    tom("tom");
    FragTrap    ben("ben");
    FragTrap    obj(ben);
    
    obj.attack("michele");
    michele.takeDamage(30);
    michele.beRepaired(1);
    michele.attack("tom");
    tom.takeDamage(20);
    obj = tom;
    obj.attack("michele");
    michele.takeDamage(30);
    michele.beRepaired(1);
    
    ben.attack("tom");
    ben.attack("tom");
    ben.attack("tom");
    ben.attack("tom");

    tom.takeDamage(5);
    tom.beRepaired(4);
    tom.takeDamage(200);
    tom.beRepaired(3);

    ben.highFivesGuys();
}
