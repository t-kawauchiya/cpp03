/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 13:51:41 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main(void)
{
  ScavTrap st("scav");
  std::cout << st << std::endl;
  st.attack("huga");
  st.takeDamage(3);
  st.beRepaired(4);
  st.guardGate();
  std::cout << st << std::endl;
  st.setEnergyPoint(0);
  std::cout << st << std::endl;
  st.attack("huga");
  std::cout << st << std::endl;

  std::cout << "-----------------------------------------\n" << std::endl;
  FragTrap ft("frag");
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

  std::cout << "-----------------------------------------\n" << std::endl;
  DiamondTrap dt("diamond");
  std::cout << dt << std::endl;
  dt.attack("huga");
  dt.takeDamage(3);
  dt.beRepaired(4);
  st.guardGate();
  dt.highFivesGuys();
  dt.whoAmI();
  std::cout << dt << std::endl;
  dt.setEnergyPoint(0);
  std::cout << dt << std::endl;
  dt.attack("huga");
  std::cout << dt << std::endl;

  return 0;
}
