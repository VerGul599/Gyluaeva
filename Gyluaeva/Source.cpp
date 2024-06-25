#include "Source.hpp"
#include "void.hpp"
#include <iostream>
#include <Windows.h>



int source()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10;
    float array[size]{};

    int choice;
    int sortChoice;

    while (true)
    {
        system("cls");

        std::cout << "��������� ��� ������ � ��������";
        std::cout << "�������� ������ ����� �������:";
        std::cout << "1. ������ �������";
        std::cout << "2. ��������� �������������";
        std::cout << "3. ����� �� ���������";
        std::cin >> choice;

        if (choice == 1)
        {
            manualInput(array, size);
        }
        else if (choice == 2)
        {
            autoInput(array, size);
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            std::cout << "������������ �����. ���������� �����.";
            continue;
        }

        system("cls");

        std::cout << "������:";
        printArray(array, size);

        std::cout << "�������� ������ ����������:\n1. �� ��������\n2. �� �����������\n3. �� �������� ������\n";
        std::cin >> sortChoice;

        switch (sortChoice)
        {
        case 1:
            bubbleSortDescending(array, size);
            printArray(array, size);
            break;
        case 2:
            bubbleSortAscending(array, size);
            printArray(array, size);
            break;
        case 3:
            std::cout << "������ �������� ��� ���������.";
            printArray(array, size);
            break;
        default:
            std::cout << "������������ ����� ����������.";
            break;
        }

        system("pause");
    }

    return 0;
}

