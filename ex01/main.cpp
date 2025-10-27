/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:22:34 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/27 20:31:04 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap mario("mario");
    ScavTrap michele("michele");
    ScavTrap stefano("stefano");
    ScavTrap obj(mario);
    
    obj.attack("michele");
    michele.takeDamage(27);
    michele.beRepaired(1);
    obj = stefano;
    obj.attack("michele");
    michele.takeDamage(20);
    michele.beRepaired(1);
    
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");

    michele.takeDamage(5);
    michele.beRepaired(4);
    michele.takeDamage(200);
    michele.beRepaired(3);

    stefano.guardGate();
}
