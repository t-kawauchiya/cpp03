/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 15:09:57 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

int main(void)
{
  ClapTrap ct("hoge");
  std::cout << ct << std::endl;
  ct.attack("huga");
  std::cout << ct << std::endl;
  ct.takeDamage(3);
  std::cout << ct << std::endl;
  ct.beRepaired(4);
  std::cout << ct << std::endl;
  ct.setEnergyPoint(0);
  std::cout << ct << std::endl;
  ct.attack("huga");
  std::cout << ct << std::endl;

  std::cout << "------------------------------------------\n" << std::endl;

  FragTrap ft("hoge");
  std::cout << ft << std::endl;
  ft.attack("huga");
  ft.takeDamage(3);
  ft.beRepaired(4);
  ft.highFivesGuys();
  std::cout << ft << std::endl;
  ft.setEnergyPoint(0);
  std::cout << ft << std::endl;
  ft.attack("huga");
  std::cout << ft << std::endl;
  return 0;
}
