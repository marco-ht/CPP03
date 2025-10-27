/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:48:50 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/27 21:58:33 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    //Canonical Orthodox Class
    FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap&   operator=(const FragTrap &other);
    ~FragTrap();
    //End Canonical Orthodox Class

    FragTrap(const std::string& name);
    
    void highFivesGuys(void);
};

/* 
    Orthodox Canonical Form:
    • Default constructor
    • Copy constructor
    • Copy assignment operator
    • Destructor
*/

#endif
