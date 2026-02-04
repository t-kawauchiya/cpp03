/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 14:08:49 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_H_
#define _DIAMONDTRAP_H_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
  DiamondTrap(void);
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap& other);
  ~DiamondTrap(void);

  DiamondTrap& operator=(const DiamondTrap& other);

  void attack(const std::string& target);
  void whoAmI(void);
  std::string getMyOwnName(void) const;
  void setMyOwnName(std::string myOwnName);

protected:
  static const std::string kDefaultName;

private:
  std::string _name;
};

std::ostream& operator<<(std::ostream& os, const DiamondTrap& ct);

#endif
