#include <iostream>
#include <windows.h>

int main()
{
	// Допълнение 1: Използвам SetConsoleOutputCP(CP_UTF8), за да може кирилицата да се принтира правилно в конзолата.
	// Допълнение 2: Използвам std::cout << std::endl, за да добавя нов ред след всяко принтиране на текст в конзолата, за по-добра четимост.

    SetConsoleOutputCP(CP_UTF8);

    // Задача 1
    std::cout << "Александър Ивов Боев" << std::endl;

    std::cout << std::endl;

    // Задача 2
    std::cout << "Университет: Нов български университет" << std::endl;
    std::cout << "Програма: Информатика" << std::endl;

    std::cout << std::endl;

    // Задача 3
    std::cout << "C++ служебни думи:" << std::endl;
    std::cout << "auto, double, break, else, case, enum, char, extern, const, float, continue, for, default, goto, do, if, int, long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while, asm, bool, catch, class, const_cast, delete, dynamic_cast, explicit, false, friend, inline, mutable, namespace, new, operator, private, protected, public, reinterpret_cast, static_cast, template, this, throw, true, try, typeid, typename, using, virtual, wchar_t" << std::endl;

    std::cout << std::endl;

    // Задача 4
    std::cout << "Определения:" << std::endl;

    std::cout << "Лексема: Най-малката част от синтаксиса на езика, като ключови думи, оператори и идентификатори." << std::endl;

    std::cout << "Литерал: Конкретна стойност в кода, като число, символ или стринг." << std::endl;

    std::cout << "Команда: Инструкция, която програмата изпълнява, като присвояване или извикване на функция." << std::endl;

    std::cout << std::endl;

    // Задача 5
    std::cout << "Директиви:" << std::endl;

    std::cout << "#define: Дефинира макрос." << std::endl;

    std::cout << "#undef: Премахва дефиниция на макрос." << std::endl;

    std::cout << "#include: Включва съдържанието на друг файл в текущия код. Използва се за добавяне на библиотеки или други файлове." << std::endl;

    std::cout << "#if: Проверява условие по време на компилация." << std::endl;

    std::cout << "#ifdef: Проверява дали даден макрос е дефиниран." << std::endl;

    std::cout << "#ifndef: Проверява дали даден макрос не е дефиниран." << std::endl;

    std::cout << "#else: Алтернатива за #if." << std::endl;

    std::cout << "#elif: Съкращение за else if." << std::endl;

    std::cout << "#endif: Затваря блок от директиви, който започва с #if, #ifdef, или #ifndef." << std::endl;

    std::cout << "#line: Променя номера на текущия ред или името на файла" << std::endl;

    std::cout << "#error: Извежда съобщение за грешка." << std::endl;

    std::cout << "#pragma: Изпраща специални команди към компилатора." << std::endl;

    return 0;
}