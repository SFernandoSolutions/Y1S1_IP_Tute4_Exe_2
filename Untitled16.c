//Assume that you are supposed to write a C program to update the bank balance of a customer
//based on the transactions performed (withdrawals/ deposits) by the customer.
//Implement the program by following the given steps.
//
//i. Prompt the user to input transaction type (Withdrawal/ Deposit)
//ii. Read the user input from the keyboard using getchar( ) function (w – withdrawals, d –deposits)
//iii. If the user input ‘w’ or ‘W’ , display message “You have selected to withdraw money”.
//If the user input‘d’ or ‘D’, display message “You have selected to deposit money”.
//Otherwise display an error message “You have selected an invalid transaction type”
//and terminate the program.
//
//iv. Modify the above program to input the bank balance and the amount.
//v. Based on the selected transaction type (withdrawal or deposit), display the new balance.

#include <stdio.h>

int main() {
    char transactionType;
    double bankBalance, amount;

    // Step i: Prompt the user to input transaction type
    printf("Enter transaction type (w - Withdrawal, d - Deposit): ");

    // Step ii: Read the user input from the keyboard using getchar()
    transactionType = getchar();

    // Consume the newline character left in the input buffer
    while (getchar() != '\n');

    // Step iii: Check the user input
    if (transactionType == 'w' || transactionType == 'W') {
        printf("You have selected to withdraw money.\n");
    } else if (transactionType == 'd' || transactionType == 'D') {
        printf("You have selected to deposit money.\n");
    } else {
        printf("You have selected an invalid transaction type.\n");
        return 1; // Terminate the program
    }

    // Step iv: Input the bank balance and the amount
    printf("Enter your current bank balance: ");
    scanf("%lf", &bankBalance);

    printf("Enter the amount: ");
    scanf("%lf", &amount);

    // Step v: Update the bank balance based on the transaction type
    if (transactionType == 'w' || transactionType == 'W') {
        if (amount > bankBalance) {
            printf("Insufficient funds for withdrawal.\n");
        } else {
            bankBalance -= amount;
            printf("Withdrawal successful. New balance: %.2lf\n", bankBalance);
        }
    } else if (transactionType == 'd' || transactionType == 'D') {
        bankBalance += amount;
        printf("Deposit successful. New balance: %.2lf\n", bankBalance);
    }

    return 0;
}

