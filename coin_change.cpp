#include <iostream>

void makeChange(int amount) {
    int coins[4] = {25, 10, 5, 1};
    
    std::cout << "Coins given to make change:\n";
    for (int i = 0; i < 4; i++) {
        while (amount >= coins[i]) {
            amount = amount - coins[i];
            std::cout << coins[i] << " cent coin\n";
        }
    }
}

int main() {
    int amount;

    std::cout << "Enter the total amount to make change for: ";
    std::cin >> amount;

    makeChange(amount);

    return 0;
}
