/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/17 00:07:55 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
  ct.attack("huga");
  ct.attack("huga");
  ct.attack("huga");
  ct.attack("huga");
  ct.attack("huga");
  ct.attack("huga");
  ct.attack("huga");
  ct.attack("huga");
  std::cout << ct << std::endl;
  ct.attack("huga");
  std::cout << ct << std::endl;

  return 0;
}
