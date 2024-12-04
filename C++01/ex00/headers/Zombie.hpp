/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:02:03 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/12 16:26:16 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private :

    std::string name;
    

    public :

    Zombie(std::string name);
    ~Zombie();
    void announce (void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif

/* Dans cet exercice, nous allons déclarer et définir deux fonctions pour
gérer des objets de la classe Zombie.

La première fonction crée un zombie en utilisant une instance de la classe
Zombie, à laquelle elle assigne un nom via le constructeur. Elle utilise
ensuite la fonction membre `announce` pour afficher le nom du zombie. Comme
cette instance est allouée sur la **pile** (stack), elle est automatiquement
détruite à la fin de la fonction, libérant ainsi la mémoire associée. Ce type
d'allocation utilise la mémoire de manière limitée et suit un processus de
libération en ordre **LIFO** (Last In, First Out). Les variables créées sur
la pile ont une portée restreinte au bloc ou à la fonction dans lesquels
elles sont déclarées.

La deuxième fonction, `Zombie* newZombie(std::string name)`, crée un zombie
via une allocation dynamique, en utilisant l'opérateur `new`. Elle initialise
l'attribut `name` du zombie et retourne un pointeur vers cette instance. Dans
ce cas, le zombie est stocké sur le **tas** (heap), ce qui permet de le
conserver en mémoire pour une utilisation future, même en dehors de la
fonction. Cette approche est plus flexible que l'allocation sur la pile, car
la mémoire allouée sur le tas reste disponible tant qu'elle n'est pas
explicitement libérée avec `delete`. Cependant, elle nécessite une gestion
manuelle de la mémoire pour éviter les fuites.

En résumé :
- **Pile (Stack)** : Allocation automatique, durée de vie limitée à la portée
de la fonction. Mémoire libérée automatiquement à la fin du bloc d’exécution.
- **Tas (Heap)** : Allocation dynamique, durée de vie manuelle. Mémoire
disponible pour réutilisation après libération explicite.

Donc si je veux réutiliser ces zombies plus tard, j'utilise l'allcation
dynamique sur la heap.*/


