/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:30:24 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/01 14:38:01 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string &getstr(int i)
{
    static std::string s;
    std::getline(std::cin, s);
    if(std::cin.fail())
        exit(0);
    if (i == 1 && !s.empty())
    {
        for (size_t j = 0; j < s.length(); j++)
        {
            if ((s[j] > '9' || s[j] < '0') || j > 11)
            {
                Log("Invalid Phone  Please enter valid ");
                std::cin.clear();
                getstr(i);
            }
        }
    }
    else if(s.length() < 1 || s.empty())
        {
            Log("Invalid input Please enter valid ");
            std::cin.clear();
            getstr(i);
        }
    return s;
}

void Contact::add_contact()
{
    Log("Name");
    m_Name = getstr(0);
    Log("Last Name:");
    this->m_Lastname = getstr(0); 
    Log("Nikename:");
    this->m_Nikename = getstr(0); 
    Log("Phone Number:");
    this->m_Phone_Number = getstr(1); 
    Log("Dark secret:");
    this->m_Dark_secret = getstr(0); 
    Log("Contact ADDED successfully");
}
void Contact::print_contact()
{
    Log("NAME:" << this->m_Name);
    Log("Last Name:" << this->m_Lastname);
    Log("Nike Name:" << this->m_Nikename);
    Log("Phone Number:" << this->m_Phone_Number);
    Log("Dark secret:" << this->m_Dark_secret);
}
void print_str(std::string str)
{
    int i = 0;
    while (i <= 8)
    {
        Logx(str[i]);
        if(!str[i])
            break;
        if(i == 8)
            Logx(".");
        i++;
    }   
    while (i <= 9)
    {
        Logx(" ");
        i++;
    }

}
void Contact::print_view(int i)
{
    Logx(i + 1 << "         ");
    Logx("|");
    print_str(this->m_Name);
    Logx("|");
    print_str(this->m_Lastname);
    Logx("|");
    print_str(this->m_Nikename);
    Logx("|");
    Logx(std::endl);
}

Contact::Contact() {
}

Contact::~Contact() {
}
