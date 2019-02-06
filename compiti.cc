// homework made by @niroge
#include <iostream>

#ifdef exer_4
// since the latest Windows 10 update, cmd.exe supports ansi colors like every Unix-like systems, so this will do the job
const char *ansi_red    = "\001\033[1;31m\002";
const char *ansi_green  = "\001\033[1;32m\002";
const char *ansi_yellow = "\001\033[1;33m\002";
const char *ansi_reset  = "\001\033[1;0m";

void
exercise_4(void)
{
  int speed;
  std::cout << "Speed: ";
  std::cin >> speed;

  while (std::cin.fail() || speed <= 0)
    {
      std::cerr << "What the actual fuck?" << std::endl;
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      std::cout << "Speed: ";
      std::cin >> speed;
    }

  if (0 < speed && speed <= 90)
    std::cout << ansi_green  << speed << " km/h";

  else if (90 < speed && speed <= 120)
    std::cout << ansi_yellow << speed << " km/h";

  else
    std::cout << ansi_red    << speed << " km/h";

  std::cout << ansi_reset << std::endl;
  return;
}
#else
void
exercise_4(void)
{
  return;
}
#endif

#ifdef exer_3
void
exercise_3(void)
{
  // price
  double product_price;

  std::cout << "Procuct's price: ";
  std::cin >> product_price;

  while (std::cin.fail() || product_price <= 0)
    {
      std::cout << "Are you retarded?" << std::endl;
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      std::cout << "Procuct's price: ";
      std::cin >> product_price;
    }

  std::cout << "Initial price: " << product_price << "\tdiscount: ";
  if (product_price < 1500)
    {
      std::cout << "(3%) " << product_price * 0.03 << "\t";
      product_price *= 0.97;
    }
  else
    {
      std::cout << "(6%) " << product_price * 0.06 << "\t";
      product_price *= 0.94;
    }
  std::cout << "New fucking price: " << product_price << std::endl;
}
#else
void
exercise_3(void)
{
  return;
}
#endif

// the main function
int
main(void)
{
  exercise_4();
  exercise_3();

  return 0;
}
