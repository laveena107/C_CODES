#include <stdio.h>
int main() {
    // Initial values
    int current_sales = 100;
    int current_profit_per_unit = 500;
    int fixed_operating_cost = 10000;
    int current_advertising_budget = 1000;
    // Initialize variables to keep track of results
    int best_sales = current_sales;
    int best_advertising_budget = current_advertising_budget;
    int best_net_profit = (current_sales * current_profit_per_unit) - fixed_operating_cost - current_advertising_budget;
    while (1) {
        // Double the advertising budget
        current_advertising_budget *= 2;
        // Calculate new sales based on the consultant's advice (20% increase)
        int new_sales = current_sales + (current_sales * 20 / 100);
        // Calculate net profit
        int net_profit = (new_sales * current_profit_per_unit) - fixed_operating_cost - current_advertising_budget;
        // If the net profit is greater than the best net profit, update the best values
        if (net_profit > best_net_profit) {
            best_sales = new_sales;
            best_advertising_budget = current_advertising_budget;
            best_net_profit = net_profit;
        } else {
            break;}}// If the net profit starts to decline, break out of the loop
    // Print the results
    printf("Number of Super-Duper sales: %d\n", best_sales);
    printf("Advertising budget: Rs %d\n", best_advertising_budget);
    printf("Net profit just before the profit begins to decline: Rs %d\n", best_net_profit);
    return 0;}
