#include <iostream>
#include <iomanip> // ��� ������������� ���������
using namespace std;

const int SIZE = 10;

// ������� ��� ������������� ��������� ������
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

// ������� ��� ����������� ���������� �������� ������ (����������� �����)
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
    // ��������� �����
    int arr[SIZE] = { 17, 22, 19, 35, 44, 51, 85, 77, 65, 48 };

    // �������� �����
    cout << "Initial array:" << endl;
    printArray(arr, SIZE);

    // ��������� ��������� �������
    int minElement = findMinIterative(arr, SIZE);

    // �������� ���������
    cout << "The smallest element of the array: " << minElement << endl;

    return 0;
}
// ������
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

