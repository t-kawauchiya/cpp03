/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/10 19:27:10 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

int main(void)
{
  {
    ClapTrap ct("clap");
    std::cout << ct << std::endl;
    ct.attack("hoge");
    std::cout << ct << std::endl;
    ct.takeDamage(3);
    std::cout << ct << std::endl;
    ct.beRepaired(4);
    std::cout << ct << std::endl;

    std::cout << "\n(set energy point 0.)" << std::endl;
    ct.setEnergyPoint(0);
    std::cout << ct << std::endl;
    ct.attack("huga");
    ct.beRepaired(5);
    std::cout << ct << std::endl;

    std::cout << "\n(set hit point 0. set energy point 10.)" << std::endl;
    ct.setEnergyPoint(10);
    ct.setHitPoint(0);
    std::cout << ct << std::endl;
    ct.attack("huga");
    ct.beRepaired(5);
    std::cout << ct << std::endl;
  }
  std::cout << "------------------------------------------\n" << std::endl;
  {
    FragTrap ft("hoge");
    std::cout << ft << std::endl;
    ft.attack("huga");
    std::cout << ft << std::endl;
    ft.takeDamage(3);
    std::cout << ft << std::endl;
    ft.beRepaired(4);
    std::cout << ft << std::endl;
    ft.highFivesGuys();
    std::cout << ft << std::endl;
  }
  {
    FragTrap ft("hoge");
    std::cout << "\n(set energy point 0.)" << std::endl;
    ft.setEnergyPoint(0);
    std::cout << ft << std::endl;
    ft.attack("huga");
    ft.beRepaired(4);
    ft.highFivesGuys();
    std::cout << ft << std::endl;

    std::cout << "\n(set hit point 0. set energy point 10.)" << std::endl;
    ft.setEnergyPoint(10);
    ft.setHitPoint(0);
    std::cout << ft << std::endl;
    ft.attack("huga");
    ft.beRepaired(4);
    ft.highFivesGuys();
    std::cout << ft << std::endl;
  }
  return 0;
}
