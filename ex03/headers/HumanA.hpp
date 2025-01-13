/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:27:10 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/14 09:20:34 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef HUMANA_HPP
# define HUMANA_HPP

#include "string"
#include "iostream"
#include "../headers/Weapon.hpp"


/*
Maintenant, créez deux classes HumanA et HumanB. Toutes deux possèdent une
Weapon et un name, ainsi qu’une fonction membre attack() affichant (sans les chevrons
bien sûr) :
<name> attacks with their <weapon type>
HumanA et HumanB sont presque identiques, à l’exception de deux petits détails :
• Alors que le constructeur de HumanA prend une Weapon comme paramètre, ce
n’est pas le cas de celui de HumanB.
• HumanB n’aura pas toujours une Weapon, tandis que HumanA en aura forcément une.
*/

class HumanA 
{
    private :

    std::string _name;
    Weapon& _weapon;

    public :

    HumanA (std::string name, Weapon& weapon) ;

    void attack() const;
    
} ;

#endif