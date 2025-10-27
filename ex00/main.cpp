/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:22:34 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/27 18:01:55 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap mario("mario");
    ClapTrap michele("michele");
    ClapTrap stefano("stefano");
    ClapTrap obj(mario);
    
    obj.attack("michele");
    michele.takeDamage(0);
    michele.beRepaired(1);
    obj = stefano;
    obj.attack("michele");
    michele.takeDamage(0);
    michele.beRepaired(1);
    
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");

    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");
    mario.attack("michele");

    michele.takeDamage(5);
    michele.takeDamage(20);
    michele.beRepaired(4);
    michele.beRepaired(3);
}
