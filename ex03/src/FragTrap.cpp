/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/10 19:26:30 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

const std::string FragTrap::kDefaultName = "defaultName";

FragTrap::FragTrap()
    : ClapTrap(kDefaultName, kDefaultHitPoint, kDefaultEnergyPoint, kDefaultAttackDamage)
{
  std::cout << "FragTrap default constructor called.\n";
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name, kDefaultHitPoint, kDefaultEnergyPoint, kDefaultAttackDamage)
{
  std::cout << "FragTrap parameteric constructor called.\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
  std::cout << "FragTrap copy constructor called.\n";
}

FragTrap::~FragTrap(void)
{
  std::cout << "FragTrap destructor called.\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
  std::cout << "FragTrap copy assignment constructor called.\n";
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

void FragTrap::attack(const std::string& target)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "FragTrap has not enough emergy point to attack!\n";
    return;
  }
  if (this->_hitPoint <= 0)
  {
    std::cout << "FragTrap has not enough hit point to attack!\n";
    return;
  }
  this->_energyPoint--;
  std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
            << this->_attackDamage << " points of damage !\n";
}

void FragTrap::highFivesGuys(void)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "FragTrap has not enough emergy point to high five !\n";
    return;
  }
  if (this->_hitPoint <= 0)
  {
    std::cout << "FragTrap has not enough hit point to high five!\n";
    return;
  }
  this->_energyPoint--;

  std::cout << "FragTrap " << this->_name << " : Who wants a high-five ?\n";
}

std::ostream& operator<<(std::ostream& os, const FragTrap& ct)
{
  os << "name : " << ct.getName() << "\n";
  os << "hit point : " << ct.getHitPoint() << "\n";
  os << "energy point : " << ct.getEnergyPoint() << "\n";
  os << "attack damege : " << ct.getAttackDamage();
  return os;
}
