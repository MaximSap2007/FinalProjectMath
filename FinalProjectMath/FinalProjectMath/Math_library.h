#pragma once
#include<iostream>
#include<string>
#include<cmath>

/*Зробити калькулятор який зможе працювати з простими числами, sin cos tg ctg та степенями*/
//доробити усі помилки

class Math
{
public:
	virtual double Basic(double one, double  two, double three, double four, double five, double six, double  seven, double eight, double nine, double ten)
	{
		int PM;
		int n;
		std::cout << "Numbers:"; std::cin >> n;
		switch (n)
		{
		case 2:
			std::cout << "Input numbers for case 2:"; std::cin >> one >> two; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if(PM == 1)
			{
				std::cout << one + two;
			}
			if(PM == 2)
			{
				std::cout << one - two;
			}

			if (PM == 3)
			{
				std::cout << one * two;
			}
			if (PM == 4)
			{
				std::cout << one / two;
			}
			break;
		case 3:
			std::cout << "Input numbers for case 3:"; std::cin >> one >> two >> three;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three;
			}
			if (PM == 2)
			{
				std::cout << one - two - three;
			}

			if (PM == 3)
			{
				std::cout << one * two * three;
			}
			if (PM == 4)
			{
				std::cout << one / two / three;
			}
			break;
		case 4:
			std::cout << "Input numbers for case 4:"; std::cin >> one >> two >> three >> four;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three + four;
			}
			if (PM == 2)
			{
				std::cout << one - two - three - four;
			}

			if (PM == 3)
			{
				std::cout << one * two * three * four;
			}
			if (PM == 4)
			{
				std::cout << one / two / three / four;
			}
			break;
		case 5:
			std::cout << "Input numbers for case 5:"; std::cin >> one >> two >> three >> four >> five;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three + four + five;
			}
			if (PM == 2)
			{
				std::cout << one - two - three - four - five;
			}

			if (PM == 3)
			{
				std::cout << one * two * three * four * five;
			}
			if (PM == 4)
			{
				std::cout << one / two / three / four / five;
			}
			break;
		case 6:
			std::cout << "Input numbers for case 6:"; std::cin >> one >> two >> three >> four >> five >> six;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three + four + five + six;
			}
			if (PM == 2)
			{
				std::cout << one - two - three - four - five - six;
			}

			if (PM == 3)
			{
				std::cout << one * two * three * four * five * six;
			}
			if (PM == 4)
			{
				std::cout << one / two / three / four / five / six;
			}
			break;
		case 7:
			std::cout << "Input numbers for case 7:"; std::cin >> one >> two >> three >> four >> five >> six >> seven;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three + four + five + six + seven;
			}
			if (PM == 2)
			{
				std::cout << one - two - three - four - five - six - seven;
			}

			if (PM == 3)
			{
				std::cout << one * two * three * four * five * six * seven;
			}
			if (PM == 4)
			{
				std::cout << one / two / three / four / five / six / seven;
			}
			break;
		case 8:
			std::cout << "Input numbers for case 8:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three + four + five + six + seven + eight;
			}
			if (PM == 2)
			{
				std::cout << one - two - three - four - five - six - seven - eight;
			}

			if (PM == 3)
			{
				std::cout << one * two * three * four * five * six * seven * eight;
			}
			if (PM == 4)
			{
				std::cout << one / two / three / four / five / six / seven / eight;
			}
			break;
		case 9:
			std::cout << "Input numbers for case 9:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three + four + five + six + seven + eight + nine;
			}
			if (PM == 2)
			{
				std::cout << one - two - three - four - five - six - seven - eight - nine;
			}

			if (PM == 3)
			{
				std::cout << one * two * three * four * five * six * seven * eight * nine;
			}
			if (PM == 4)
			{
				std::cout << one / two / three / four / five / six / seven / eight / nine;
			}
			break;
		case 10:
			std::cout << "Input numbers for case 10:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << one + two + three + four + five + six + seven + eight + nine + ten;
			}
			if (PM == 2)
			{
				std::cout << one - two - three - four - five - six - seven - eight - nine - ten;
			}

			if (PM == 3)
			{
				std::cout << one * two * three * four * five * six * seven * eight * nine * ten;
			}
			if (PM == 4)
			{
				std::cout << one / two / three / four / five / six / seven / eight / nine / ten;
			}
			break;
		default:
			std::cout << "Error!";
			break;
		}
		return 0;
	}
};
class MathSinCosTgCtg : public Math
{
public:
	
	double Basic(double one, double  two, double three, double four, double five, double six, double  seven, double eight, double nine, double ten) override
	{
		int PM;
		int n;

		int SinCosTgCtg;
		std::cout << "Numbers:"; std::cin >> n;
		switch (n)
		{
		case 2:
			std::cout << "Input numbers for case 2:"; std::cin >> one >> two; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if(SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two);
				}
				if(SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two);
				}
				if(SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two);
				}
				if(SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two);
				}
			}
			break;
		case 3:
			std::cout << "Input numbers for case 3:"; std::cin >> one >> two >> three;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three);
				}
			}
			break;
		case 4:
			std::cout << "Input numbers for case 4:"; std::cin >> one >> two >> three >> four;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three) + sin(four);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three) + cos(four);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three) + tan(four);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three) + 1 / tan(four);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three) - sin(four);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three) - cos(four);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three) - tan(four);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three) - 1 / tan(four);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three) * sin(four);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three) * cos(four);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three) * tan(four);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three) * 1 / tan(four);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three) / sin(four);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three) / cos(four);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three) / tan(four);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three) / 1 / tan(four);
				}
			}
			break;
		case 5:
			std::cout << "Input numbers for case 5:"; std::cin >> one >> two >> three >> four >> five;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three) + sin(four) + sin(five);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three) + cos(four) + cos(five);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three) + tan(four) + tan(five);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three) + 1 / tan(four) + 1 / tan(five);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three) - sin(four) - sin(five);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three) - cos(four) - cos(five);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three) - tan(four) - tan(five);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three) - 1 / tan(four) - 1 / tan(five);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three) * sin(four) * sin(five);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three) * cos(four) * cos(five);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three) * tan(four) * tan(five);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three) * 1 / tan(four) * 1 / tan(five);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three) / sin(four) / sin(five);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three) / cos(four) / cos(five);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three) / tan(four) / tan(five);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three) / 1 / tan(four) / 1 / tan(five);
				}
			}
			break;
		case 6:
			std::cout << "Input numbers for case 6:"; std::cin >> one >> two >> three >> four >> five >> six;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three) + sin(four) + sin(five) + sin(six);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three) + cos(four) + cos(five) + cos(six);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three) + tan(four) + tan(five) + tan(six);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three) + 1 / tan(four) + 1 / tan(five) + 1 / tan(six);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three) - sin(four) - sin(five) - sin(six);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three) - cos(four) - cos(five) - cos(six);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three) - tan(four) - tan(five) - tan(six);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three) - 1 / tan(four) - 1 / tan(five) - 1 / tan(six);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three) * sin(four) * sin(five) * sin(six);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three) * cos(four) * cos(five) * cos(six);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three) * tan(four) * tan(five) * tan(six);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three) * 1 / tan(four) * 1 / tan(five) * 1 / tan(six);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three) / sin(four) / sin(five) / sin(six);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three) / cos(four) / cos(five) / cos(six);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three) / tan(four) / tan(five) / tan(six);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three) / 1 / tan(four) / 1 / tan(five) / 1 / tan(six);
				}
			}
			break;
		case 7:
			std::cout << "Input numbers for case 7:"; std::cin >> one >> two >> three >> four >> five >> six >> seven;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three) + sin(four) + sin(five) + sin(six) + sin(seven);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three) + cos(four) + cos(five) + cos(six) + cos(seven);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three) + tan(four) + tan(five) + tan(six) + tan(seven);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three) + 1 / tan(four) + 1 / tan(five) + 1 / tan(six) + 1 / tan(seven);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three) - sin(four) - sin(five) - sin(six) - sin(seven);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three) - cos(four) - cos(five) - cos(six) - cos(seven);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three) - tan(four) - tan(five) - tan(six) - tan(seven);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three) - 1 / tan(four) - 1 / tan(five) - 1 / tan(six) - 1 / tan(seven);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three) * sin(four) * sin(five) * sin(six) * sin(seven);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three) * cos(four) * cos(five) * cos(six) * cos(seven);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three) * tan(four) * tan(five) * tan(six) * tan(seven);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three) * 1 / tan(four) * 1 / tan(five) * 1 / tan(six) * 1 / tan(seven);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three) / sin(four) / sin(five) / sin(six) / sin(seven);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three) / cos(four) / cos(five) / cos(six) / cos(seven);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three) / tan(four) / tan(five) / tan(six) / tan(seven);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three) / 1 / tan(four) / 1 / tan(five) / 1 / tan(six) / 1 / tan(seven);
				}
			}
			break;
		case 8:
			std::cout << "Input numbers for case 8:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three) + sin(four) + sin(five) + sin(six) + sin(seven) + sin(eight);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three) + cos(four) + cos(five) + cos(six) + cos(seven) + cos(eight);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three) + tan(four) + tan(five) + tan(six) + tan(seven) + tan(eight);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three) + 1 / tan(four) + 1 / tan(five) + 1 / tan(six) + 1 / tan(seven) + 1 / tan(eight);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three) - sin(four) - sin(five) - sin(six) - sin(seven) - sin(eight);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three) - cos(four) - cos(five) - cos(six) - cos(seven) - cos(eight);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three) - tan(four) - tan(five) - tan(six) - tan(seven) - tan(eight);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three) - 1 / tan(four) - 1 / tan(five) - 1 / tan(six) - 1 / tan(seven) - 1 / tan(eight);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three) * sin(four) * sin(five) * sin(six) * sin(seven) * sin(eight);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three) * cos(four) * cos(five) * cos(six) * cos(seven) * cos(eight);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three) * tan(four) * tan(five) * tan(six) * tan(seven) * tan(eight);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three) * 1 / tan(four) * 1 / tan(five) * 1 / tan(six) * 1 / tan(seven) * 1 / tan(eight);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three) / sin(four) / sin(five) / sin(six) / sin(seven) / sin(eight);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three) / cos(four) / cos(five) / cos(six) / cos(seven) / cos(eight);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three) / tan(four) / tan(five) / tan(six) / tan(seven) / tan(eight);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three) / 1 / tan(four) / 1 / tan(five) / 1 / tan(six) / 1 / tan(seven) / 1 / tan(eight);
				}
			}
			break;
		case 9:
			std::cout << "Input numbers for case 9:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three) + sin(four) + sin(five) + sin(six) + sin(seven) + sin(eight) + sin(nine);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three) + cos(four) + cos(five) + cos(six) + cos(seven) + cos(eight) + cos(nine);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three) + tan(four) + tan(five) + tan(six) + tan(seven) + tan(eight) + tan(nine);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three) + 1 / tan(four) + 1 / tan(five) + 1 / tan(six) + 1 / tan(seven) + 1 / tan(eight) + 1 / tan(nine);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three) - sin(four) - sin(five) - sin(six) - sin(seven) - sin(eight) - sin(nine);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three) - cos(four) - cos(five) - cos(six) - cos(seven) - cos(eight) - cos(nine);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three) - tan(four) - tan(five) - tan(six) - tan(seven) - tan(eight) - tan(nine);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three) - 1 / tan(four) - 1 / tan(five) - 1 / tan(six) - 1 / tan(seven) - 1 / tan(eight) - 1 / tan(nine);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three) * sin(four) * sin(five) * sin(six) * sin(seven) * sin(eight) * sin(nine);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three) * cos(four) * cos(five) * cos(six) * cos(seven) * cos(eight) * cos(nine);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three) * tan(four) * tan(five) * tan(six) * tan(seven) * tan(eight) * tan(nine);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three) * 1 / tan(four) * 1 / tan(five) * 1 / tan(six) * 1 / tan(seven) * 1 / tan(eight) * 1 / tan(nine);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three) / sin(four) / sin(five) / sin(six) / sin(seven) / sin(eight) / sin(nine);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three) / cos(four) / cos(five) / cos(six) / cos(seven) / cos(eight) / cos(nine);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three) / tan(four) / tan(five) / tan(six) / tan(seven) / tan(eight) / tan(nine);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three) / 1 / tan(four) / 1 / tan(five) / 1 / tan(six) / 1 / tan(seven) / 1 / tan(eight) / 1 / tan(nine);
				}
			}
			break;
		case 10:
			std::cout << "Input numbers for case 10:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) + sin(two) + sin(three) + sin(four) + sin(five) + sin(six) + sin(seven) + sin(eight) + sin(nine) + sin(ten);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) + cos(two) + cos(three) + cos(four) + cos(five) + cos(six) + cos(seven) + cos(eight) + cos(nine) + cos(ten);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) + tan(two) + tan(three) + tan(four) + tan(five) + tan(six) + tan(seven) + tan(eight) + tan(nine) + tan(ten);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) + 1 / tan(two) + 1 / tan(three) + 1 / tan(four) + 1 / tan(five) + 1 / tan(six) + 1 / tan(seven) + 1 / tan(eight) + 1 / tan(nine) + 1 / tan(ten);
				}
			}
			if (PM == 2)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) - sin(two) - sin(three) - sin(four) - sin(five) - sin(six) - sin(seven) - sin(eight) - sin(nine) - sin(ten);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) - cos(two) - cos(three) - cos(four) - cos(five) - cos(six) - cos(seven) - cos(eight) - cos(nine) - cos(ten);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) - tan(two) - tan(three) - tan(four) - tan(five) - tan(six) - tan(seven) - tan(eight) - tan(nine) - tan(ten);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) - 1 / tan(two) - 1 / tan(three) - 1 / tan(four) - 1 / tan(five) - 1 / tan(six) - 1 / tan(seven) - 1 / tan(eight) - 1 / tan(nine) - 1 / tan(ten);
				}
			}

			if (PM == 3)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) * sin(two) * sin(three) * sin(four) * sin(five) * sin(six) * sin(seven) * sin(eight) * sin(nine) * sin(ten);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) * cos(two) * cos(three) * cos(four) * cos(five) * cos(six) * cos(seven) * cos(eight) * cos(nine) * cos(ten);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) * tan(two) * tan(three) * tan(four) * tan(five) * tan(six) * tan(seven) * tan(eight) * tan(nine) * tan(ten);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) * 1 / tan(two) * 1 / tan(three) * 1 / tan(four) * 1 / tan(five) * 1 / tan(six) * 1 / tan(seven) * 1 / tan(eight) * 1 / tan(nine) * 1 / tan(ten);
				}
			}
			if (PM == 4)
			{
				std::cout << "Sin = 1, Cos = 2, Tg = 3 or Ctg = 4:"; std::cin >> SinCosTgCtg;
				if (SinCosTgCtg == 1)
				{
					std::cout << sin(one) / sin(two) / sin(three) / sin(four) / sin(five) / sin(six) / sin(seven) / sin(eight) / sin(nine) / sin(ten);
				}
				if (SinCosTgCtg == 2)
				{
					std::cout << cos(one) / cos(two) / cos(three) / cos(four) / cos(five) / cos(six) / cos(seven) / cos(eight) / cos(nine) / cos(ten);
				}
				if (SinCosTgCtg == 3)
				{
					std::cout << tan(one) / tan(two) / tan(three) / tan(four) / tan(five) / tan(six) / tan(seven) / tan(eight) / tan(nine) / tan(ten);
				}
				if (SinCosTgCtg == 4)
				{
					std::cout << 1 / tan(one) / 1 / tan(two) / 1 / tan(three) / 1 / tan(four) / 1 / tan(five) / 1 / tan(six) / 1 / tan(seven) / 1 / tan(eight) / 1 / tan(nine) / 1 / tan(ten);
				}
			}
			break;
		default:
			std::cout << "Error!";
			break;
		}
		return 0;
	}
};

class MathStepeni : public Math
{
public:
	double Basic(double one, double  two, double three, double four, double five, double six, double  seven, double eight, double nine, double ten) override
	{
		int PM;
		int n;
		int step;
		std::cout << "Numbers:"; std::cin >> n;
		switch (n)
		{
		case 2:
			std::cout << "Input numbers for case 2:"; std::cin >> one >> two; std::cout << std::endl;
			//stepin -- степінь
			std::cout << "Input stepin:"; std::cin >>step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step);
			}
			break;
		case 3:
			std::cout << "Input numbers for case 3:"; std::cin >> one >> two; std::cout << std::endl;
			//stepin -- степінь
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step) - pow(three, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step) * pow(three, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step) / pow(three, step);
			}
			break;
		case 4:
			std::cout << "Input numbers for case 4:"; std::cin >> one >> two >> three >> four;
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step) + pow(four, step);
			}								  
			if (PM == 2)					  
			{								  
				std::cout << pow(one, step) - pow(two, step) - pow(three, step) - pow(four, step);
			}								  
											  
			if (PM == 3)					  
			{								  
				std::cout << pow(one, step) * pow(two, step) * pow(three, step) * pow(four, step);
			}								  
			if (PM == 4)					  
			{								  
				std::cout << pow(one, step) / pow(two, step) / pow(three, step) / pow(four, step);
			}
			break;
		case 5:
			std::cout << "Input numbers for case 5:"; std::cin >> one >> two >> three >> four >> five;
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step) + pow(four, step) + pow(five, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step) - pow(three, step) - pow(four, step) - pow(five, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step) * pow(three, step) * pow(four, step) * pow(five, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step) / pow(three, step) / pow(four, step) / pow(five, step);
			}
			break;
		case 6:
			std::cout << "Input numbers for case 6:"; std::cin >> one >> two >> three >> four >> five >> six;
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step) + pow(four, step) + pow(five, step) + pow(six, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step) - pow(three, step) - pow(four, step) - pow(five, step) - pow(six, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step) * pow(three, step) * pow(four, step) * pow(five, step) * pow(six, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step) / pow(three, step) / pow(four, step) / pow(five, step) / pow(six, step);
			}
			break;
		case 7:
			std::cout << "Input numbers for case 7:"; std::cin >> one >> two >> three >> four >> five >> six >> seven;
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step) + pow(four, step) + pow(five, step) + pow(six, step) + pow(seven, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step) - pow(three, step) - pow(four, step) - pow(five, step) - pow(six, step) - pow(seven, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step) * pow(three, step) * pow(four, step) * pow(five, step) * pow(six, step) * pow(seven, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step) / pow(three, step) / pow(four, step) / pow(five, step) / pow(six, step) / pow(seven, step);
			}
			break;
		case 8:
			std::cout << "Input numbers for case 8:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight;
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step) + pow(four, step) + pow(five, step) + pow(six, step) + pow(seven, step) + pow(eight, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step) - pow(three, step) - pow(four, step) - pow(five, step) - pow(six, step) - pow(seven, step) - pow(eight, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step) * pow(three, step) * pow(four, step) * pow(five, step) * pow(six, step) * pow(seven, step) * pow(eight, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step) / pow(three, step) / pow(four, step) / pow(five, step) / pow(six, step) / pow(seven, step) / pow(eight, step);
			}
			break;
		case 9:
			std::cout << "Input numbers for case 9:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine;
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step) + pow(four, step) + pow(five, step) + pow(six, step) + pow(seven, step) + pow(eight, step) + pow(nine, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step) - pow(three, step) - pow(four, step) - pow(five, step) - pow(six, step) - pow(seven, step) - pow(eight, step) - pow(nine, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step) * pow(three, step) * pow(four, step) * pow(five, step) * pow(six, step) * pow(seven, step) * pow(eight, step) * pow(nine, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step) / pow(three, step) / pow(four, step) / pow(five, step) / pow(six, step) / pow(seven, step) / pow(eight, step) / pow(nine, step);
			}
			break;
		case 10:
			std::cout << "Input numbers for case 10:"; std::cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
			std::cout << "Input stepin:"; std::cin >> step; std::cout << std::endl;
			std::cout << "Input 1 for +, 2 for -, 3 for * or 4 for /:"; std::cin >> PM;
			if (PM == 1)
			{
				std::cout << pow(one, step) + pow(two, step) + pow(three, step) + pow(four, step) + pow(five, step) + pow(six, step) + pow(seven, step) + pow(eight, step) + pow(nine, step) + pow(ten, step);
			}
			if (PM == 2)
			{
				std::cout << pow(one, step) - pow(two, step) - pow(three, step) - pow(four, step) - pow(five, step) - pow(six, step) - pow(seven, step) - pow(eight, step) - pow(nine, step) - pow(ten, step);
			}

			if (PM == 3)
			{
				std::cout << pow(one, step) * pow(two, step) * pow(three, step) * pow(four, step) * pow(five, step) * pow(six, step) * pow(seven, step) * pow(eight, step) * pow(nine, step) * pow(ten, step);
			}
			if (PM == 4)
			{
				std::cout << pow(one, step) / pow(two, step) / pow(three, step) / pow(four, step) / pow(five, step) / pow(six, step) / pow(seven, step) / pow(eight, step) / pow(nine, step) / pow(ten, step);
			}
			break;
		default:
			std::cout << "Error!";
			break;
		}
		return 0;
	}
};