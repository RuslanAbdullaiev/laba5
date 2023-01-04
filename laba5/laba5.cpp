
#include <iostream>

int main()
{
    //Lets create variables with some values
    std::string name = "ruslan";
    int age = 16;
    bool isKnowPointers = false;

    //Create pointers that contains memory adreses of the common named variables
    std::string* pName = &name;
    int* pAge = &age;
    bool* pIsKnowPointers = &isKnowPointers;

    //Let`s change values of the previously declared variables by using pointers
    *pName = "Ruslan";
    *pAge = 17;
    *pIsKnowPointers = true;

    //Let`s output modifyed variables
    std::cout << name << "\n";
    std::cout << age << "\n";
    std::cout << bool(isKnowPointers) << "\n";

    //Let`s create the array of int numbers and allow user to input an array size and values 
    int* pNumbers = nullptr;
    int size;
    std::cout << "Enter size of the array: ";
    std::cin >> size;

    pNumbers = new int[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter value number #" << i + 1 << ": ";
        std::cin >> pNumbers[i];
    }
    std::cout << "\nAn array contains " << size << " values that were entered by you!";

    delete[] pNumbers;//Delete an array from the dynamic memory
}


