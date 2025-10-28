/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 22:05:38 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 04:43:44 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// The diamond problem (with multiple inheritance)
// Conflicts may happen when inheriting from two classes
// https://www.geeksforgeeks.org/cpp/multiple-inheritance-in-c/
// https://en.wikipedia.org/wiki/Dominance_%28C++%29
// https://github.com/cplusplus/draft/blob/main/papers/N3797.pdf

// attack() in DiamondTrap is inherited by Scavtrap as required
// because of virtual inheritance in parent classes
// thanks to it --> only one grandparent class object -->
// --> ScavTrap overrides the attack() method
// of the only one base class
// (without virtual, 2 base classes, one attack()
// overrided by ScavTrap, the other not overrided by FragTrap
// it'd be ambiguos)  (wikipedia)

// For conflicting attributes instead:
// https://stackoverflow.com/questions/432143/multiple-inheritance-in-c-leading-to-difficulty-overriding-common-functionalit
// https://www.youtube.com/watch?v=DiUXoiOLZY0

class   DiamondTrap : public ScavTrap, public FragTrap
{
    private:
    std::string name;

    public:
    //Canonical Orthodox Class
    DiamondTrap();
    DiamondTrap(const DiamondTrap &other);
    DiamondTrap&   operator=(const DiamondTrap &other);
    ~DiamondTrap();
    //End Canonical Orthodox Class

    DiamondTrap(const std::string& name);
    
    void    whoAmI();
};

#endif
