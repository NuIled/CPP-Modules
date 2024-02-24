/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 04:16:23 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/05 09:25:49 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ReplaceAll(std::string& result,std::string& s1,std::string& s2)
{
    size_t pos = std::string::npos;
    pos = result.find(s1);
    while (pos != std::string::npos)
        {
            result.erase(pos ,s1.length()), result.insert(pos, s2);
            pos += s2.length();
            pos = result.find(s1);
        }
    return result;
}

int main(int ac ,char **av)
{
    std::ifstream inputFile;
    std::ofstream outFile;
    if(ac != 4)
        {
            std::cerr << "usage <filename> <str1> <str2 ; string to replace >" << std::endl;
            exit(1);
        }
    std::string str1 = av[2];
    std::string str2 = av[3];
    std::string line;
    if (str1.empty() || str2.empty())
        {
            std::cerr << "usage <filename> <str1> <str2 ; string to replace > OR Enter Valid Strings" << std::endl;
            exit(1);
        }
    inputFile.open(av[1]);
    outFile.open((std::string (av[1])).append(".replace"), std::ofstream::trunc);
    if (inputFile.fail() || outFile.fail())
        {
            std::cerr << "Error opning file" << std::endl;
            exit(1);
        }
    while (inputFile.is_open() && std::getline(inputFile, line))
        {
            if(str1 != str2)
                line = ReplaceAll(line ,str1 , str2);
            outFile << line << std::endl;
        }
    return 0;
}
