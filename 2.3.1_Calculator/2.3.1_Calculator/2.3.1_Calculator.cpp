#include <iostream>

class Calculator
{
public:
	double add();
	double multiply();
	double subtract_1_2();
	double subtract_2_1();
	double divide_1_2();
	double divide_2_1();
	bool set_num1(double num1);
	bool set_num2(double num2);
private:
	double num1;
	double num2;
};

double Calculator::add()
{
	return num1 + num2;
}

double Calculator::multiply()
{
	return num1 * num2;
}

double Calculator::subtract_1_2()
{
	return num1 - num2;
}

double Calculator::subtract_2_1()
{
	return num2 - num1;
}

double Calculator::divide_1_2()
{
	return num1 / num2;
}

double Calculator::divide_2_1()
{
	return num2 / num1;
}

bool Calculator::set_num1(double num1)
{
	if (num1 == 0)
	{
		return false;
	}
	else
	{
		this->num1 = num1;
		return true;
	}
}

bool Calculator::set_num2(double num2)
{
	if (num2 == 0)
	{
		return false;
	}
	else
	{
		this->num2 = num2;
		return true;
	}
}

int main()
{
	setlocale(LC_ALL, "RU");
	double num1, num2;
	Calculator calc;

	do
	{
		do
		{
			std::cout << "Введите num1: ";
			std::cin >> num1;
			if (!calc.set_num1(num1))
			{
				std::cout << "Неверный ввод!" << '\n';
			}
			else 
			{
				break;
			}
		} while (true);
		
		do
		{
			std::cout << "Введите num2: ";
			std::cin >> num2;
			if (!calc.set_num2(num2))
			{
				std::cout << "Неверный ввод!" << '\n';
			}
			else 
			{
				break;
			}
		} while (true);
				
		std::cout << "num1 + num2 = " << calc.add() << '\n';
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << '\n';
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << '\n';
		std::cout << "num1 * num2 = " << calc.multiply() << '\n';
		std::cout << "num1 / num2 = " << calc.divide_1_2() << '\n';
		std::cout << "num2 / num1 = " << calc.divide_2_1() << '\n';

	} while (true);  
	std::system("pause");
}


