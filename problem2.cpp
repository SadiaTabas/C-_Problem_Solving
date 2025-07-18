
#include <iostream>
using namespace std;
int main() {
    int weights[] = {7, 5, 2, 5, 3};
    int prices[] = {700, 600, 240, 250, 1050};
    string names[] = {"Rice", "Lentils", "Sugar", "Salt", "Basmati Rice"};

    int n = 5, totalWeight = 15, maxProfit = 0, bestCombination[5] = {0};

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            for (int c = 0; c < 2; c++) {
                for (int d = 0; d < 2; d++) {
                    for (int e = 0; e < 2; e++) {
                        int currentWeight = 0, currentProfit = 0, currentCombination[5] = {a, b, c, d, e};

                        int riceWeight = 0, ricePrice = 0;
                        if (a == 1) {
                            riceWeight = 5;
                            ricePrice = (700 / 7) * 5;
                        }

                        for (int i = 1; i < n; i++) {
                            if (currentCombination[i] == 1) {
                                currentWeight += weights[i];
                                currentProfit += prices[i];
                            }
                        }

                        currentWeight += riceWeight;
                        currentProfit += ricePrice;

                        if (currentWeight == totalWeight && currentProfit > maxProfit) {
                            maxProfit = currentProfit;
                            for (int k = 0; k < n; k++) {
                                bestCombination[k] = currentCombination[k];
                            }
                            bestCombination[0] = a;
                        }
                    }
                }
            }
        }
    }

    cout << "Best Combination to Maximize Profit:\n";
    int totalSelectedWeight = 0;
    for (int i = 1; i < n; i++) {
        if (bestCombination[i] == 1) {
            cout << names[i] << " - " << weights[i] << "kg, " << prices[i] << "tk\n";
            totalSelectedWeight += weights[i];
        }
    }
    if (bestCombination[0] == 1) {
        cout << "Rice - 5kg, " << (700 / 7) * 5 << "tk\n";
        totalSelectedWeight += 5;
    }

    cout << "Total Weight: " << totalSelectedWeight << "kg\n";
    cout << "Total Profit: " << maxProfit << "tk\n";

    return 0;
}
