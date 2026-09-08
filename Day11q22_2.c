//This program finds profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cost_price = 1000.0;
    float selling_price = 800.0;
    float profit, loss, profit_percentage, loss_percentage;
    if (selling_price > cost_price) {
        profit = selling_price -  cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("Profit_percentage: %.2f\n", profit_percentage);

    } else if(cost_price > selling_price) {
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("Loss_percentage: %.2f\n", loss_percentage);
    } else {
        printf("No profit , no loss.\n");
    }
    return 0;
    }