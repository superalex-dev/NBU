#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    // Задача 1
    std::cout << "Александър Ивов Боев" << std::endl;

    std::cout << std::endl;

    // Задача 2
    std::cout << "Университет: Нов български университет" << std::endl;
    std::cout << "Програма: Информатика" << std::endl;

    std::cout << std::endl;

    // Задача 3
    std::cout << "C++ ключови думи:" << std::endl;
    std::cout << "auto, double, break, else, case, enum, char, extern, const, float, continue, for, default, goto, do, if, int, long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while, asm, bool, catch, class, const_cast, delete, dynamic_cast, explicit, false, friend, inline, mutable, namespace, new, operator, private, protected, public, reinterpret_cast, static_cast, template, this, throw, true, try, typeid, typename, using, virtual, wchar_t" << std::endl;

    std::cout << std::endl;

    // Задача 4
    std::cout << "Определения:" << std::endl;
    std::cout << "Лексема: Последователност от символи в изходния код, която съответства на шаблона за токен." << std::endl;
    std::cout << "Литерал: Фиксирана стойност в изходния код, като число, символ или низ." << std::endl;
    std::cout << "Команда: Инструкция за компютъра да изпълни конкретна задача." << std::endl;

    std::cout << std::endl;

    // Задача 5
    std::cout << "Препроцесорни директиви:" << std::endl;
    std::cout << "#define: Дефинира препроцесорен макрос." << std::endl;
    std::cout << "#undef: Премахва дефиниция на препроцесорен макрос." << std::endl;
    std::cout << "#include: Включва файл." << std::endl;
    std::cout << "#if: Проверява условие по време на компилация." << std::endl;
    std::cout << "#ifdef: Проверява дали макрос е дефиниран." << std::endl;
    std::cout << "#ifndef: Проверява дали макрос не е дефиниран." << std::endl;
    std::cout << "#else: Алтернатива за #if." << std::endl;
    std::cout << "#elif: Else if за #if." << std::endl;
    std::cout << "#endif: Край на препроцесорно условие." << std::endl;
    std::cout << "#line: Променя текущия номер на ред." << std::endl;
    std::cout << "#error: Извежда съобщение за грешка." << std::endl;
    std::cout << "#pragma: Изпраща специални команди към компилатора." << std::endl;

    return 0;
}