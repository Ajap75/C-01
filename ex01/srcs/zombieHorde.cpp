/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:46:40 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 15:46:19 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../headers/Zombie.hpp"



Zombie* zombieHorde( int N, std::string name )
{
    int i;
    i = 0;

    //Vérification de la validité de N pour une allocation cohérente et éviter un talbleau vide 
    if (N <= 0)
    {
        std::cout << "Cannot allocate an empty array" << std::endl;
        return(NULL);
    }
    //Allocation dynamique d'un tableau de zombies
    Zombie *zombiehorde = new Zombie[N];

    //Verification du succes de l'allocation dynamique
    if (zombiehorde == NULL)
    {
        std::cout << "Dybamic allocation failure" << std::endl;
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