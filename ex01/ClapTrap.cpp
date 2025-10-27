/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:23:23 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/27 20:41:18 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

    //Canonical Orthodox Class
    ClapTrap::ClapTrap():
    name("noname"), hit_points(10), energy_points(10), attack_damage(0)
    {
        std::cout << "ClapTrap: Default constructor called, 'noname' assigned"<<std::endl;
    }
    
    ClapTrap::ClapTrap(const ClapTrap &other):
    name(other.name), hit_points(other.hit_points),
    energy_points(other.energy_points), attack_damage(other.attack_damage)
    {
        std::cout << "ClapTrap: Copy constructor called" << std::endl;
    }
    
    ClapTrap&   ClapTrap::operator=(const ClapTrap &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
        std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
        return(*this);
    }
    
    ClapTrap::~ClapTrap()
    {
        std::cout << "ClapTrap (" << name << "): Destructor called" << std::endl;
    }
    //End Canonical Orthodox Class
    
    ClapTrap::ClapTrap(const std::string& name):
    name(name), hit_points(10), energy_points(10), attack_damage(0)
    {
        std::cout << "Constructor: ClapTrap " << this->name << " created." << std::endl;
    }
    
    void ClapTrap::attack(const std::string& target)
    {
        if (hit_points == 0 || energy_points == 0)
        {
            std::cout << "ClapTrap " << name << ": no energy or hit points left "
            << "cannot attack (hit points: " << hit_points << ", " << "energy points:"
            << energy_points << ")" << std::endl;
            return;
        }
        energy_points--;
        std::cout << "ClapTrap " << name << " attacks "
        << target << ", causing " << attack_damage << " points of damage! (hit points: "
        << hit_points << ", " << "energy points: " << energy_points << ")" << std::endl;
    }
    
    void ClapTrap::takeDamage(unsigned int amount)
    {
        if (hit_points == 0)
        {
            std::cout << "ClapTrap " << name << " hit points already 0 "
            << "(hit points: " << hit_points << ", " << "energy points:"
            << energy_points << ")" << std::endl;
            return;
        }
        if (amount >= static_cast<unsigned int>(hit_points))
            hit_points = 0;
        else
            hit_points -= amount;
        std::cout << "ClapTrap " << name << " receive "
        << amount << " points of damage! (hit points: "
        << hit_points << ", " << "energy points:" << energy_points << ")" << std::endl;
    }
    
    void ClapTrap::beRepaired(unsigned int amount)
    {
        if (hit_points == 0 || energy_points == 0)
        {
            std::cout << "ClapTrap " << name << " no energy or hit points left "
            << "cannot beRepaired (hit points: " << hit_points << ", " << "energy points:"
            << energy_points << ")" << std::endl;
            return;
        }
        hit_points += amount;
        energy_points--;
        std::cout << "ClapTrap " << name << " repairs itself , regaining "
        << amount << " points of health! (hit points: "
        << hit_points << ", " << "energy points:" << energy_points << ")" << std::endl;
    }
    