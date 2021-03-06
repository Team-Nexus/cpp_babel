/*
** main.cpp for cpp_babel in /home/enguerrand/delivery/cpp_babel/main.cpp
**
** Made by Enguerrand Allamel
** Login   <enguerrand.allamel@epitech.eu>
**
** Started on  mer. sept. 20 16:32:04 2017 Enguerrand Allamel
** Last update mer. sept. 20 16:32:04 2017 Enguerrand Allamel
*/

#include <iostream>
#include "Server.hpp"
#include "Network/Boost/NetworkTcpServerBoost.hpp"

int		main(int, char **av)
{
  unsigned int 	port = 42420;

  if (av && av[0] && av[1]) {
      port = static_cast<unsigned int>(std::abs(std::atoi(av[1])));
    }

  try
    {
      babel::Server	server(port);

      server.run();
    }
  catch (...)
    {
      std::cout << "Error into server. Check is port is not use by other program." << std::endl;
    }

  return (EXIT_SUCCESS);
}