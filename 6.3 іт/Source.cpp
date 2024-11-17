#include <iostream>
#include <iomanip> // Для форматованого виведення
using namespace std;

const int SIZE = 10;

// Функція для форматованого виведення масиву
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

// Функція для знаходження найменшого елемента масиву (ітераційний підхід)
int findMinIterative(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    // Створюємо масив
    int arr[SIZE] = { 17, 22, 19, 35, 44, 51, 85, 77, 65, 48 };

    // Виводимо масив
    cout << "Initial array:" << endl;
    printArray(arr, SIZE);

    // Знаходимо найменший елемент
    int minElement = findMinIterative(arr, SIZE);

    // Виводимо результат
    cout << "The smallest element of the array: " << minElement << endl;

    return 0;
}
// Шаблон
template <typename T>
T findMinIterativeTemplate(T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

