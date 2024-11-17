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