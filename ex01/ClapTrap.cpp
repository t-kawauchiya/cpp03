/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/17 22:35:47 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
  std::cout << "ClapTrap constructor called.\n";
}

ClapTrap::ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage)
    : _name(name), _hitPoint(hitPoint), _energyPoint(energyPoint), _attackDamage(attackDamage)
{
  std::cout << "ClapTrap constructor called.\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
  std::cout << "ClapTrap copy constructor called.\n";
  *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
  std::cout << "ClapTrap copy assignment constructor called.\n";
  this->_name = other._name;
  this->_hitPoint = other._hitPoint;
  this->_energyPoint = other._energyPoint;
  this->_attackDamage = other._attackDamage;
  return (*this);
}

ClapTrap::~ClapTrap(void)
{
  std::cout << "ClapTrap destructor called.\n";
}

std::string ClapTrap::getName() const
{
  return this->_name;
}

unsigned int ClapTrap::getHitPoint() const
{
  return this->_hitPoint;
}

unsigned int ClapTrap::getEnergyPoint() const
{
  return this->_energyPoint;
}

unsigned int ClapTrap::getAttackDamage() const
{
  return this->_attackDamage;
}

void ClapTrap::setName(const std::string name)
{
  this->_name = name;
}

void ClapTrap::setHitPoint(const unsigned int hitPoint)
{
  this->_hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(const unsigned int energyPoint)
{
  this->_energyPoint = energyPoint;
}

void ClapTrap::setAttackDamage(const unsigned int attackDamaege)
{
  this->_attackDamage = attackDamaege;
}

void ClapTrap::attack(const std::string& target)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "ClapTrap has not enough emergy point to attack!\n";
    return;
  }
  this->_energyPoint--;
  std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
            << this->_attackDamage << " points of damage !\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
  this->_hitPoint -= amount;
  if (this->_hitPoint < 0)
    this->_hitPoint = 0;
  std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage !\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_energyPoint == 0)
  {
    std::cout << "ClapTrap has not enough emergy point to be repaired!\n";
    return;
  }
  this->_energyPoint--;
  this->_hitPoint += amount;
  std::cout << "ClapTrap " << this->_name << " be rapaired " << amount << " hit points !\n";
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& ct)
{
  os << "name : " << ct.getName() << "\n";
  os << "hit point : " << ct.getHitPoint() << "\n";
  os << "energy point : " << ct.getEnergyPoint() << "\n";
  os << "attack damege : " << ct.getAttackDamage() << "\n";
  return os;
}
