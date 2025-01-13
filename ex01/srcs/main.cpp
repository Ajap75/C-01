/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:03:33 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 15:55:03 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"
#include "string"
#include "iostream"


int main(void)
{
    int N; 
    int i;
    std::string name;

    Zombie *zombiehorde;

    N = 5; 
    i = 0;
    name = "JOE";

   zombiehorde = zombieHorde(N, name);

   while (i < N)
   {
    zombiehorde[i].announce();
    i++;
   }
   zombiehorde[0].setZombieName("Morcerf");
   zombiehorde[1].setZombieName("Villefort");
   zombiehorde[2].setZombieName("Danglars");
   zombiehorde[3].setZombieName("Mercedes");
   zombiehorde[4].setZombieName("Morrel");

   i = 0;

    while (i < N)
   {
    zombiehorde[i].announce();
    i++;
   }
    delete[] (zombiehorde);

    return (0);
}