/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/12 18:42:19 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

int main(void)
{
  {
    std::cout << "[ClapTrap]\n";
    std::cout << "NORMAL---------------------------------" << std::endl;
    ClapTrap ct("clap");
    std::cout << ct << std::endl;
    ct.attack("hoge");
    std::cout << ct << std::endl;
    ct.takeDamage(3);
    std::cout << ct << std::endl;
    ct.beRepaired(4);
    std::cout << ct << std::endl;
    ct.takeDamage(300);
    std::cout << ct << std::endl;

    std::cout << "\nERROR---------------------------------" << std::endl;
    std::cout << "\n(set hit point 10. set energy point 0.)" << std::endl;
    ct.setHitPoint(10);
    ct.setEnergyPoint(0);
    std::cout << ct << std::endl;
    ct.attack("huga");
    ct.beRepaired(5);
    std::cout << ct << std::endl;

    std::cout << "\n(set hit point 0. set energy point 10.)" << std::endl;
    ct.setEnergyPoint(10);
    ct.setHitPoint(0);
    std::cout << ct << std::endl;
    ct.attack("huga");
    ct.beRepaired(5);
    std::cout << ct << std::endl;
  }
  std::cout << "\n[ScavTrap]\n";
  std::cout << "NORMAL------------------------------------------\n" << std::endl;
  {
    ScavTrap st("hoge");
    std::cout << st << std::endl;
    st.attack("huga");
    std::cout << st << std::endl;
    st.takeDamage(3);
    std::cout << st << std::endl;
    st.beRepaired(4);
    std::cout << st << std::endl;
    st.guardGate();
    std::cout << st << std::endl;
    st.guardGate();
    std::cout << st << std::endl;
    st.takeDamage(300);
    std::cout << st << std::endl;
  }
  std::cout << "\nERROR------------------------------------------\n" << std::endl;
  {
    ScavTrap st("hoge");
    std::cout << "\n(set hit point 10. set energy point 0.)" << std::endl;
    st.setHitPoint(10);
    st.setEnergyPoint(0);
    std::cout << st << std::endl;
    st.attack("huga");
    st.beRepaired(5);
    st.guardGate();
    std::cout << st << std::endl;

    std::cout << "\n(set hit point 0. set energy point 10.)" << std::endl;
    st.setEnergyPoint(10);
    st.setHitPoint(0);
    std::cout << st << std::endl;
    st.attack("huga");
    st.beRepaired(5);
    st.guardGate();
    std::cout << st << std::endl;
  }
  return 0;
}
