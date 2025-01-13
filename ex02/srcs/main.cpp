/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:00:33 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 16:41:40 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

void   print_adress(std::string *string, std::string *stringPTR, std::string& stringREF)
{
    std::cout << "Address of the string = " << string << std::endl;
    std::cout << "Address of the object pointed to by the pointer stringPTR = " << stringPTR << std::endl;
    std::cout << "Address of the variable referenced, which is the same as the string's adress. The reference itself does not have its own adress = " << &stringREF << std::endl;

    return ;
}

void   print_value(std::string *string, std::string *stringPTR, std::string& stringREF)
{
    std::cout << std::endl;
    std::cout << "Value of the string = " << *string << std::endl;
    std::cout << "Value pointed by the pointer to string stringPTR = " << *stringPTR << std::endl;
    std::cout << "Value referenced by the reference to the string stringREF = " << stringREF << std::endl;

    return ;
}

int main (void)
{
    //declaration et initialisation d'une variable string de type string
    std::string string;
    string = "HI THIS IS BRAIN";

    //declaration d'une variable stringPTR de type pointeur sur string 
    std::string *stringPTR;
    stringPTR = &string;

    //declaration et initialisation sur la même ligne (obligatoire pour les ref), d'une référence ou alias 
    // stringREF de la variable string. Une reférence est comme un alias, et n'a pas d'adresse propre. Donc pas besoin
    // de déréférencer quand on veut accéder à ce qui est référencé 
    std::string& stringREF = string;

    print_adress(&string, stringPTR, stringREF);
    print_value(&string, stringPTR, stringREF);

    return (0);
}

// In C++, a reference is an alias for another variable. It allows you to refer to the same memory location as the original variable. 
// you can pass variable to functions without making copy, which improves performance and allowws functon to modify the original variable.