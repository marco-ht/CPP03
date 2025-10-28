/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:22:34 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 06:53:10 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap test("test");
    
    test.attack("john");
    test.whoAmI();
}


/*
The diamond problem (with multiple inheritance)
Il subject chiede che ci sia una sola istanza della classe grandparent
ClapTrap (quindi devo dichiarare virtual le classi parent ScavTrap e FragTrap)
però poi vuole che Hit points sia ereditato da FragTrap, Energy points da
ScavTrap, Attack damage da FragTrap.
Il costruttore di FragTrap (che viene chiamato dopo quello di ScavTrap)
(DiamondTrap : public ScavTrap, public FragTrap in base a questo ordine)
sovrascrive i valori di questi tre attributi al posto di quelli scritti
dal costruttore di ScavTrap. Viceversa invece se l'ordine in cui vengono
chiamati i costruttori di FragTrap e ScavTrap si inverte. L'ultimo
sovrascrive il precedente per tutti e 3 i valori, quindi, avendo una sola
istanza di ClapTrap, avere che Hit points sia ereditato da FragTrap,
Energy points da ScavTrap, Attack damage da FragTrap richiede che il
costruttore di DiamondTrap, che è quello che viene chiamato per ultimo,
vada ad impostare i valori corretti in base ai valori di Scavtrap e
FragTrap: per questo ho definito delle costanti in ScavTrap e FragTrap
con cui poter richiamare questi valori.

Il fatto di avere una sola istanza di ClapTrap ("condivisa" da ScavTrap e
da FragTrap invece di averne una ciascuno) rende anche possibile
avere attack() di ScavTrap come richiesto dal subject perchè ScavTrap
è l'unico che sovrascrive attack() di ClapTrap di cui c'è una sola istanza
quindi non c'è ambiguità.

Infine l'ambiguità dell'attributo name che ha lo stesso nome in ClapTrap e
DiamondTrap si gestisce facilmente con 'ClapTrap::name' e 'DiamondTrap::Name',
eliminando così l'ambiguità.

*/
