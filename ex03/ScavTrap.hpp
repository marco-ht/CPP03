/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:17:38 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 06:29:51 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
    protected:
    static const int defHp;
    static const int defEp;
    static const int defAd;

    public:
    //Canonical Orthodox Class
    ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap&   operator=(const ScavTrap &other);
    ~ScavTrap();
    //End Canonical Orthodox Class

    ScavTrap(const std::string& name);
    
    void attack(const std::string& target);
    void guardGate();
};

/* 
    Orthodox Canonical Form:
    • Default constructor
    • Copy constructor
    • Copy assignment operator
    • Destructor
*/

#endif
