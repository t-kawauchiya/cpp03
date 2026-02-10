/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/10 20:02:16 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

const std::string ScavTrap::kDefaultName = "defaultName";

ScavTrap::ScavTrap()
    : ClapTrap(kDefaultName, kDefaultHitPoint, kDefaultEnergyPoint, kDefaultAttackDamage)
{
  std::cout << "ScavTrap default constructor called.\n";
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name, kDefaultHitPoint, kDefaultEnergyPoint, kDefaultAttackDamage)
{
  std::cout << "ScavTrap constructor called.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
  std::cout << "ScavTrap copy constructor called.\n";
  *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
  std::cout << "ScavTrap copy assignment constructor called.\n";
  if (this != &other)
  {
    this->_name = other._name;
    this->_hitPoint = other._hitPoint;
    this->_energyPoint = other._energyPoint;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

ScavTrap::~ScavTrap(void)
{
  std::cout << "ScavTrap destructor called.\n";
}

void ScavTrap::set_is_gate_keeper_mode(bool is_gate_keeper_mode)
{
  this->_is_gate_keeper_mode = is_gate_keeper_mode;
}

bool ScavTrap::get_is_gate_keeper_mode(void) const
{
  return this->_is_gate_keeper_mode;
}

void ScavTrap::attack(const std::string& target)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "ScavTrap has not enough emergy point to attack!\n";
    return;
  }
  if (this->_hitPoint <= 0)
  {
    std::cout << "ScavTrap has not enough hit point to attack!\n";
    return;
  }
  this->_energyPoint--;
  std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
            << this->_attackDamage << " points of damage !\n";
}

void ScavTrap::guardGate(void)
{
  if (this->_energyPoint <= 0)
  {
    std::cout << "ScavTrap has not enough emergy point to be gate keeper!\n";
    return;
  }
  if (this->_hitPoint <= 0)
  {
    std::cout << "ScavTrap has not enough hit point to be gate keeper!\n";
    return;
  }
  if (this->_is_gate_keeper_mode)
  {
    std::cout << "ScavTrap is already gate keeper mode!\n";
    return;
  }
  this->_is_gate_keeper_mode = true;
  this->_energyPoint--;
  std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode!\n";
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& ct)
{
  os << "name : " << ct.getName() << "\n";
  os << "hit point : " << ct.getHitPoint() << "\n";
  os << "energy point : " << ct.getEnergyPoint() << "\n";
  os << "attack damege : " << ct.getAttackDamage();
  return os;
}
