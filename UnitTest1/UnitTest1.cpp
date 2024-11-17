#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3 іт/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern int findMinIterative(int arr[], int size); // Функція з ітераційним підходом

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFindMinIterative)
        {
            // Тестові дані
            int arr[] = { 17, 22, 19, 35, 44, 51, 85, 77, 65, 48 };
            int size = 10;
            int expectedMin = 17;

            // Викликаємо функцію ітераційного знаходження мінімуму
            int actualMin = findMinIterative(arr, size);

            // Перевіряємо результат
            Assert::AreEqual(expectedMin, actualMin);
        }

        TEST_METHOD(TestFindMinIterativeDifferentData)
        {
            // Тестові дані
            int arr[] = { 5, 10, 3, 6, 15 };
            int size = 5;
            int expectedMin = 3;

            // Викликаємо функцію ітераційного знаходження мінімуму
            int actualMin = findMinIterative(arr, size);

            // Перевіряємо результат
            Assert::AreEqual(expectedMin, actualMin);
        }
    };
}
