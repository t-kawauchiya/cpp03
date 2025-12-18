/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 14:09:18 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

const std::string sufix = "_clap_name";
const std::string DiamondTrap::kDefaultName = "defaultName";

DiamondTrap::DiamondTrap(void)
    : ClapTrap(kDefaultName + sufix, FragTrap::kDefaultHitPoint, ScavTrap::kDefaultEnergyPoint,
               FragTrap::kDefaultAttackDamage),
      FragTrap(), ScavTrap(), _name(kDefaultName)
{
  std::cout << "DiamondTrap default constructor called.\n";
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + sufix, FragTrap::kDefaultHitPoint, ScavTrap::kDefaultEnergyPoint,
               FragTrap::kDefaultAttackDamage),
      FragTrap(name), ScavTrap(name), _name(name)
{
  std::cout << "DiamondTrap constructor called.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other)
{
  std::cout << "DiamondTrap copy constructor called.\n";
  *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
  std::cout << "DiamondTrap copy assignment constructor called.\n";
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
  std::cout << "DiamondTrap destructor called.\n";
}

std::string DiamondTrap::getMyOwnName(void) const
{
  return this->_name;
}

void DiamondTrap::setMyOwnName(std::string myOwnName)
{
  this->_name = myOwnName;
}

void DiamondTrap::attack(const std::string& target)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "DiamondTrap has not enough emergy point to attack!\n";
    return;
  }
  this->_energyPoint--;
  std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing "
            << this->_attackDamage << " points of damage !\n";
}

void DiamondTrap::whoAmI(void)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "DiamondTrap has not enough emergy point to say who I am!\n";
    return;
  }
  this->_energyPoint--;
  std::cout << "Hello i am a DiamondTrap named " << this->_name
            << " and i am originated from the ClapTrap named " << ClapTrap::_name << "."
            << std::endl;
}

std::ostream& operator<<(std::ostream& os, const DiamondTrap& ct)
{
  os << "my own name : " << ct.getMyOwnName() << "\n";
  os << "name : " << ct.getName() << "\n";
  os << "hit point : " << ct.getHitPoint() << "\n";
  os << "energy point : " << ct.getEnergyPoint() << "\n";
  os << "attack damege : " << ct.getAttackDamage() << "\n";
  return os;
}
