/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/12 18:38:27 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

int main(void)
{
  std::cout << "NORMAL---------------------------------" << std::endl;
  ClapTrap ct("clap");
  std::cout << ct << std::endl;
  ct.attack("hoge");
  std::cout << ct << std::endl;
  ct.takeDamage(3);
  std::cout << ct << std::endl;
  ct.beRepaired(4);
  std::cout << ct << std::endl;
  ct.takeDamage(300);
  std::cout << ct << std::endl;

  std::cout << "\nERROR---------------------------------" << std::endl;
  std::cout << "\n(set hit point 10. set energy point 0.)" << std::endl;
  ct.setHitPoint(10);
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

  return 0;
}
