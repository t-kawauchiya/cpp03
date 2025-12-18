/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 14:13:35 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <string>

class ClapTrap
{
public:
  ClapTrap(void);
  ClapTrap(std::string name);
  ~ClapTrap(void);
  ClapTrap(const ClapTrap& other);
  ClapTrap& operator=(const ClapTrap& other);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  std::string getName() const;
  unsigned int getHitPoint() const;
  unsigned int getEnergyPoint() const;
  unsigned int getAttackDamage() const;
  void setName(const std::string name);
  void setHitPoint(const unsigned int hitPoint);
  void setEnergyPoint(const unsigned int energyPoint);
  void setAttackDamage(const unsigned int attackDamaege);

private:
  std::string _name;
  unsigned int _hitPoint;
  unsigned int _energyPoint;
  unsigned int _attackDamage;
  static const std::string kDefaultName;
  static const int kDefaultHitPoint = 10;
  static const int kDefaultEnergyPoint = 10;
  static const int kDefaultAttackDamage = 0;
};

std::ostream& operator<<(std::ostream& os, const ClapTrap& ct);

#endif
