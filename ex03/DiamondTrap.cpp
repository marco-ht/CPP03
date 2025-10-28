/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:06:07 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 06:38:07 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

//Canonical Orthodox Class
DiamondTrap::DiamondTrap():
ClapTrap(), ScavTrap(), FragTrap()/* , DiamondTrap::name("no_name") */
{
    hit_points = FragTrap::defHp;
    energy_points = ScavTrap::defEp;
    attack_damage = FragTrap::defAd;
    DiamondTrap::name = "no_name";
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
ClapTrap(other), ScavTrap(other), FragTrap(other)/* , DiamondTrap::name(other.DiamondTrap::name) */
{
    DiamondTrap::name = other.DiamondTrap::name;
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap&   DiamondTrap::operator=(const DiamondTrap &other)
{
    ClapTrap::name = other.ClapTrap::name;
    DiamondTrap::name = other.DiamondTrap::name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
    return(*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap (" << DiamondTrap::name << "): Destructor called" << std::endl;
}
//End Canonical Orthodox Class

DiamondTrap::DiamondTrap(const std::string& name):
ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)/* , DiamondTrap::name(name) */
{
    DiamondTrap::name = name;
    hit_points = FragTrap::defHp;
    energy_points = ScavTrap::defEp;
    attack_damage = FragTrap::defAd;
    std::cout << "Constructor: DiamondTrap " << DiamondTrap::name << " created." << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap: I am " << DiamondTrap::name << " " << ClapTrap::name << std::endl;
}
