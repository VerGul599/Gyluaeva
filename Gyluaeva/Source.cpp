#include "Source.hpp"
#include "void.hpp"
#include <iostream>
#include <Windows.h>



int Source()
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

        std::cout << "��������� ��� ������ � ��������" << "\n";
        std::cout << "�������� ������ ����� �������:" << "\n";;
        std::cout << "1. ������ �������" << "\n";;
        std::cout << "2. ��������� �������������" << "\n";;
        std::cout << "3. ����� �� ���������" << "\n";;
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

        std::cout <<"\n"<< "�������� ������ ����������:\n1. �� ��������\n2. �� �����������\n3. �� �������� ������\n";
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

