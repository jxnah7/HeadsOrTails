#include <iostream>  //input output library
#include <stdlib.h>  //for rand() function
#include <ctime>  //for time functions

int main() {
  
  // Create a number that's 0 or 1
  
  srand (time(NULL));  //initializes RNG with current time to ensure the random number will be different each time the program is ran
  int	coin = rand() % 2;  //generates a random 0 or 1
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  if (coin == 0) {
  
    std::cout << "Heads\n";
  
  }
	else {
	
    std::cout << "Tails\n";
  
  }
  
}
