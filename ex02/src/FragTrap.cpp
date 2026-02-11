/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 20:29:10 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

const std::string FragTrap::kDefaultName = "defaultName";

FragTrap::FragTrap() : ClapTrap(kDefaultName)
{
  std::cout << "FragTrap default constructor called.\n";

  _hitPoint = kDefaultHitPoint;
  _energyPoint = kDefaultEnergyPoint;
  _attackDamage = kDefaultAttackDamage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  std::cout << "FragTrap parameteric constructor called.\n";

  _hitPoint = kDefaultHitPoint;
  _energyPoint = kDefaultEnergyPoint;
  _attackDamage = kDefaultAttackDamage;
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
  std::cout << "FragTrap assignment operator called.\n";

  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

void FragTrap::highFivesGuys(void)
{
  if (this->_energyPoint <= 0)
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
