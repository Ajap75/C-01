/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:46:40 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/13 13:50:53 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../headers/Zombie.hpp"



Zombie* zombieHorde( int N, std::string name )
{
    int i;
    i = 0;

    //Allocation dynamique d'un tableau de zombies
    Zombie *zombiehorde = new Zombie[N];

    //Verification du succes de l'allocation dynamique
    if (zombiehorde == NULL)
    {
        std::cout << "Dybamic allocation failure" << std::endl;
        return(NULL);
    }
    //Vérification de la validité de N pour une allocation cohérente et éviter un talbleau vide 
    if (N <= 0)
    {
        std::cout << "Cannot allocate an empty array" << std::endl;
        return(NULL);
    }
    //définition des noms des zombies de la horde avec la fonction setZombieName de la classe zombie 
    while(i < N)
    {
        zombiehorde[i].setZombieName(name);
        i++;
    }
    return(zombiehorde);
}