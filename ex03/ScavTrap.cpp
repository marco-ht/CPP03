/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:18:37 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 06:55:17 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

//Canonical Orthodox Class
ScavTrap::ScavTrap():
ClapTrap()
{
    hit_points = defHp;
    energy_points = defEp;
    attack_damage = defAd;
    std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
:ClapTrap(other)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &other)
{
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap (" << name << "): Destructor called" << std::endl;
}
//End Canonical Orthodox Class

ScavTrap::ScavTrap(const std::string& name):
ClapTrap(name)
{
    hit_points = defHp;
    energy_points = defEp;
    attack_damage = defAd;
    std::cout << "Constructor: ScavTrap " << this->name << " created." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points == 0 || energy_points == 0)
    {
        std::cout << "ScavTrap " << name << ": no energy or hit points left "
        << "cannot attack (hit points: " << hit_points << ", " << "energy points:"
        << energy_points << ")" << std::endl;
        return;
    }
        energy_points--;
        std::cout << "ScavTrap " << name << " attacks "
        << target << ", causing " << attack_damage << " points of damage! (hit points: "
        << hit_points << ", " << "energy points: " << energy_points << ")" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << ": is now in Gate keeper mode." << std::endl;
}

const int ScavTrap::defHp = 100;
const int ScavTrap::defEp = 50;
const int ScavTrap::defAd = 20;
