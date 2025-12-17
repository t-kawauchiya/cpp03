/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/17 22:43:10 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

#include "ClapTrap.hpp"

#include <string>

class FragTrap : public ClapTrap
{
public:
  FragTrap(std::string name);
  FragTrap(const FragTrap& other);
  ~FragTrap(void);
  FragTrap& operator=(const FragTrap& other);

  void attack(const std::string& target);
  void highFivesGuys(void);

private:
};

std::ostream& operator<<(std::ostream& os, const FragTrap& ct);

#endif
