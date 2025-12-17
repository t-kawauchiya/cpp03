/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/17 21:52:14 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ~ScavTrap(void);
  ScavTrap &operator=(const ScavTrap &other);

  void attack(const std::string &target);
  void guardGate(void);

private:
};

std::ostream &operator<<(std::ostream &os, const ScavTrap &ct);

#endif
