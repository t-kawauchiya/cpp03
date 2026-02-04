/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 12:56:09 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

#include "ClapTrap.hpp"

#include <string>

class FragTrap : virtual public ClapTrap
{
public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(const FragTrap& other);
  ~FragTrap(void);
  FragTrap& operator=(const FragTrap& other);

  void attack(const std::string& target);
  void highFivesGuys(void);

protected:
  static const std::string kDefaultName;
  static const int kDefaultHitPoint = 100;
  static const int kDefaultEnergyPoint = 100;
  static const int kDefaultAttackDamage = 30;
};

std::ostream& operator<<(std::ostream& os, const FragTrap& ct);

#endif
