/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:02:47 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 17:30:36 by anastruc         ###   ########.fr       */
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
    const std::string& getType() const;
    void setType(std::string type) ;

};

#endif

/*
CONST CORRECTNESS
const std::string& const getType() ;

Why Both Are Needed?

    To Protect the Returned Value:
    The 1st const ensures that the returned reference cannot be used to modify the member variable value.

    To Ensure the Function Doesn’t Modify the Object:
    The 2nd const ensures that getValue() doesn’t alter the object itself, allowing it to be called safely on const objects.
*/
