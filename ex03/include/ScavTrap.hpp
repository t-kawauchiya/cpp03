/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 20:40:38 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

#include "ClapTrap.hpp"

#include <string>

class ScavTrap : virtual public ClapTrap
{
public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& other);

  ~ScavTrap(void);

  ScavTrap& operator=(const ScavTrap& other);

  void attack(const std::string& target);
  void guardGate(void);
  bool getIsGateKeeperMode(void) const;

protected:
  bool _is_gate_keeper_mode;
  static const std::string kDefaultName;
  static const int kDefaultHitPoint = 100;
  static const int kDefaultEnergyPoint = 50;
  static const int kDefaultAttackDamage = 20;
};

std::ostream& operator<<(std::ostream& os, const ScavTrap& ct);

#endif
