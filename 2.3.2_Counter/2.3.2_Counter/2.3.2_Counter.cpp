#include <iostream>
#include <string>
#include <windows.h>

class Counter
{
public:
	Counter();
	Counter(int count);
	void plus();
	void minus();
	int equals();
private:
	int count;
};

Counter::Counter()
{
	this->count = 1;
}

Counter::Counter(int count)
{
	this->count = count;
}

void Counter::plus()
{
	++count;
}

void Counter::minus()
{
	--count;
}

int Counter::equals()
{
	return count;
}

void counting(Counter &count)
{
	std::string inText;
	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'):";
		std::cin >> inText;
		if (inText == "+")
		{
			count.plus();
		}
		else if (inText == "-")
		{
			count.minus();
		}
		else if (inText == "=")
		{
			std::cout << count.equals() << '\n';
		}
		else if (inText == "x")
		{
			std::cout << "До свидания!\n";
			break;
		}
		else
		{
			std::cout << "Неверный ввод!\n";
		}
	} while (true);    
}

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string inText;
	int start;
	do
	{
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:";
		std::cin >> inText;
		if (inText == "да")
		{
			std::cout << "Введите начальное значение счётчика:";
			std::cin >> start;
			Counter count(start);
			counting(count);
			break;
		}
		else if (inText == "нет")
		{
			Counter count;
			counting(count);
			break;
		}		
		else
		{
			std::cout << "Неверный ввод!\n";
		}
	} while (true);	
	std::system("pause");
}
