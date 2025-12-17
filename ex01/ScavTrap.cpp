/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/17 22:19:07 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

// class ScavTrap : public ScavTrap {
// public:
//   ScavTrap(std::string name);
//   ScavTrap(const ScavTrap &other);
//   ~ScavTrap(void);
//   ScavTrap &operator=(const ScavTrap &other);
//
//   void attack(const std::string &target);
//   void guardGate(void);
//
// private:
// };
// std::ostream &operator<<(std::ostream &os, const ScavTrap &ct);

// ScavTrap::ScavTrap(std::string name)
//     : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
  *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{

  if (this != &other)
  {
    this->_name = other._name;
    this->_hitPoint = other._hitPoint;
    this->_energyPoint = other._energyPoint;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

ScavTrap::~ScavTrap(void) {}

void ScavTrap::attack(const std::string& target)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "ScavTrap has not enough emergy point to attack!\n";
    return;
  }
  this->_energyPoint--;
  std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
            << this->_attackDamage << " points of damage !\n";
}

void ScavTrap::guardGate(void)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "ScavTrap has not enough emergy point to be gate keeper!\n";
    return;
  }
  this->_energyPoint--;
  std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode!\n";
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& ct)
{
  os << "name : " << ct.getName() << "\n";
  os << "hit point : " << ct.getHitPoint() << "\n";
  os << "energy point : " << ct.getEnergyPoint() << "\n";
  os << "attack damege : " << ct.getAttackDamage() << "\n";
  return os;
}
