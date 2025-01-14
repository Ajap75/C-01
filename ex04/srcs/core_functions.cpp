/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_functions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:38:29 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/14 10:02:37 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "string"
#include "iostream"
#include <fstream>
#include "../headers/function.hpp"
#include <cstdlib>



void    parsing(int argc, char **argv)
{
    if (argc != 4 )
    {
        std::cout << "Not enough ot too many args" << std::endl;
        exit (1);
    }
    if (argv[1] == NULL || argv[2] == NULL)
    {
        std::cout << "File name and search cannot be empty" << std::endl;
        exit (1);
    }
}
void    read_and_store_every_lines(std::ifstream& infilestream, std::string& infilecontent)
{
    std::string line;

    while(getline(infilestream, line))
    {
     infilecontent += line + "\n";
    }
   if (!infilecontent.empty())
    infilecontent = infilecontent.substr(0, infilecontent.size() - 1);
   return ;
}

void    find_s1_and_fill_outputstream(std::string* infilecontent, std::string& s1, std::string& s2, std::ofstream& outfilestream)
{
    size_t pos;
    std::string line;

    pos = 0;
    
    while(1)
    {
        pos = 0;
        if((pos = infilecontent->find(s1)) != std::string::npos)
        {
            line = infilecontent->substr(0, pos);
            outfilestream << line;
            outfilestream << s2;
            *infilecontent = infilecontent->substr(pos + s1.size(), infilecontent->size());
        }
        else 
        {
            outfilestream << *infilecontent;
            return ;
        }
    }
}