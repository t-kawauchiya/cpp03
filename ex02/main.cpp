/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/17 23:02:13 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main(void)
{
  ScavTrap st("hoge");
  std::cout << st << std::endl;
  st.attack("huga");
  st.takeDamage(3);
  st.beRepaired(4);
  st.guardGate();
  std::cout << st << std::endl;
  for (int i = 0; i < 47; i++)
    st.attack("huga");
  std::cout << st << std::endl;
  st.attack("huga");
  std::cout << st << std::endl;

  FragTrap trap("hoge");
  std::cout << trap << std::endl;
  trap.attack("huga");
  trap.takeDamage(3);
  trap.beRepaired(4);
  trap.highFivesGuys();
  std::cout << trap << std::endl;
  for (int i = 0; i < 97; i++)
    trap.attack("huga");
  std::cout << trap << std::endl;
  trap.attack("huga");
  std::cout << trap << std::endl;
  return 0;
}
