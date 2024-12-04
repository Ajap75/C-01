/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:34:27 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/14 17:19:35 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "string"
#include "iostream"
#include <fstream>
void    parsing(int argc, char **argv);
void    check_files_status(std::ifstream& infilestream, std::ofstream& outfilestream);
void    read_and_store_every_lines(std::ifstream& infilestream, std::string& infilecontent);
void    find_s1_and_fill_outputstream(std::string* infilecontent, std::string& s1, std::string& s2, std::ofstream& outfilestream);



#endif 