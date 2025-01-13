/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:02:03 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/13 13:55:04 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private :

    std::string _name;
    

    public :

    Zombie();
    ~Zombie();
    void setZombieName (std::string name);
    void announce (void) const;
};

Zombie* zombieHorde( int N, std::string name ) ;




#endif

/* Dans cet exercice, nous avons ajouté à la classe Zombie la méthode setZombieName,
   déclarée dans Zombie.hpp et définie dans Zombie.cpp. Cette méthode prend une
   chaîne de caractères en paramètre et initialise l'attribut privé _name.

   Dans Zombie.hpp, nous avons également déclaré la fonction zombieHorde, qui
   retourne un pointeur vers un élément Zombie et prend un int et une chaîne en
   paramètres. Cette fonction alloue dynamiquement un tableau de N zombies, puis
   utilise setZombieName pour nommer chaque zombie. */