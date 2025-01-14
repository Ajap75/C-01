/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:34:27 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/14 10:22:43 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "string"
#include "iostream"
#include <fstream>
void    parsing(int argc, char **argv);
int     check_files_status(std::ifstream& infilestream, std::ofstream& outfilestream, std::string outfilename);
void    read_and_store_every_lines(std::ifstream& infilestream, std::string& infilecontent);
void    find_s1_and_fill_outputstream(std::string* infilecontent, std::string& s1, std::string& s2, std::ofstream& outfilestream);
void    close_and_remove_file(std::ifstream& infilestream, std::ofstream& infilecontent, std::string outfilename);



#endif 