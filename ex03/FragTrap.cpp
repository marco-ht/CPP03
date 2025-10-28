/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:48:47 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 06:55:27 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

//Canonical Orthodox Class
FragTrap::FragTrap():
ClapTrap()
{
    hit_points = defHp;
    energy_points = defEp;
    attack_damage = defAd;
    std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
:ClapTrap(other)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &other)
{
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap (" << name << "): Destructor called" << std::endl;
}
//End Canonical Orthodox Class

FragTrap::FragTrap(const std::string& name):
ClapTrap(name)
{
    hit_points = defHp;
    energy_points = defEp;
    attack_damage = defAd;
    std::cout << "Constructor: FragTrap " << this->name << " created." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << ": \"hey, give me five!\"" << std::endl;
}

const int FragTrap::defHp = 100;
const int FragTrap::defEp = 100;
const int FragTrap::defAd = 30;
