/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 15:06:28 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
  ScavTrap st("hoge");
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

  return 0;
}
