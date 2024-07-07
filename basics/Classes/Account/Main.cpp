#include <iostream>
#include "Account.h"

int main() {
    Account frank_acount;
    frank_acount.setName("Frank");
    frank_acount.setBalance(1000.0);

    if (frank_acount.deposit(200.0)) {
        std::cout << "Depost OK" << std::endl;
    } else {
        std::cout << "Deposit Not Allowed" << std::endl;
    }

    if (frank_acount.withdraw(10000.0)) {
        std::cout << "Withdraw OK" << std::endl;
    } else {
        std::cout << "Withdraw Not Allowed" << std::endl;
    }

    if (frank_acount.withdraw(500.0)) {
        std::cout << "Withdraw OK" << std::endl;
    } else {
        std::cout << "Withdraw Not Allowed" << std::endl;
    }

    return 0;
}