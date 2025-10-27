/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:22:52 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/27 20:19:00 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
    protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;

    public:
    //Canonical Orthodox Class
    ClapTrap();
    ClapTrap(const ClapTrap &other);
    ClapTrap&   operator=(const ClapTrap &other);
    ~ClapTrap();
   //End Canonical Orthodox Class
    
    ClapTrap(const std::string& name);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

/* 
    Orthodox Canonical Form:
    • Default constructor
    • Copy constructor
    • Copy assignment operator
    • Destructor
*/

#endif
