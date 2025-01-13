/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:13:14 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 19:15:40 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include <fstream>
#include "../headers/function.hpp"

int main (int argc, char **argv)
{
    parsing(argc, argv);
    //Déclaration de 3 elements de classe string qui seront initialisé 
    // à la valeur de sstrings passées en argument
    std::string infilename = argv[1]; 
    std::string s1 = argv[2]; 
    std::string s2 = argv[3];
    std::string infilecontent;

    // déclare un objet de la classe ifstream nommé inputfile
    std::ifstream infilestream;
    // déclare un objet de la classe ofstream nommé inputfile
    std::ofstream outfilestream;

    // appelle la fonction membre de l'objet infilestream open en lui passant 
    // le nom du fichier à ouvrir et le mode d'ouverture  
    // Idem pour le fichier de sortie en utilisant l'objet outfilestream(ofstream)
    infilestream.open(infilename.c_str(), std::ios::in); 
    infilename = infilename + ".replace";
    outfilestream.open(infilename.c_str());
    check_files_status(infilestream, outfilestream);
    read_and_store_every_lines(infilestream, infilecontent);
    find_s1_and_fill_outputstream(&infilecontent, s1, s2, outfilestream);
}


/* test
bonjour, il fait 50° à l'ombre et bonjourbonjour encore  \n
Nous sommes en 2045, bonjour, bonjour v
*/