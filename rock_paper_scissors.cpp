#include <iostream>

int main() {
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "Select either 1, 2 or 3:\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "=====================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";

  std::cout << "shoot!\n";

  std::cin >> user;

  if (user == 1 && computer == 2) 
  std::cout << "Computer win! Paper wraps rock\n";
  else if (user == 1 && computer == 3)
  std::cout << "You win! Rock smashes scissors\n";
  else if (user == 2 && computer == 1)
  std::cout << "User win! Paper wraps rock\n";
  else if (user == 2 && computer == 3)
  std::cout << "Computer win! Scissors cut paper\n";
  else if (user == 3 && computer == 1)
  std::cout << "Computer win! rock smashes rock\n";
  else if (user == 3 && computer == 2)
  std::cout << "You win! Scissors cut paper\n";
  else
  std::cout << "Oops! Try again\n";

  std::cout << "Computer number is " << computer << "\nYour number is " << user;
  std::cout <<"\n";
}
