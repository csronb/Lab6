#include <iostream>
#include <vector>
#include <algorithm> // Para std::min y std::max

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int max_area = 0;

    while (left < right) {
        // Calcula el área
        int current_area = min(height[left], height[right]) * (right - left);
        max_area = max(max_area, current_area);

        // Mueve el puntero con menor altura
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    // Ejemplo 1
    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Máxima cantidad de agua (Ejemplo 1): " << maxArea(height1) << endl;

    // Ejemplo 2
    vector<int> height2 = {1, 1};
    cout << "Máxima cantidad de agua (Ejemplo 2): " << maxArea(height2) << endl;

    return 0;
}
