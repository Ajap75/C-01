/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:02:47 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/13 17:27:11 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef WEAPON_HPP
# define WEAPON_HPP
#include "string"
#include "iostream"
/*
Un attribut privé type de type string.
• Une fonction membre getType() retournant une référence constante sur type.
• Une fonction
*/

class Weapon 
{
    private :

    std::string _type;

    public :
    
    Weapon (std::string type) ; 
    std::string& getType() ;
    void setType(std::string type) ;

};

#endif



