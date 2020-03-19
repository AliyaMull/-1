// Классы. Задание 4. cpp 
//Муллагалиева Алия Маратовна, 05-901

#include <iostream> 
using namespace std;
class Money
{
private:
	int first,
		second,
		sum;
public:
	Money(int m_first, int m_second)
	{
		setMoney(m_first, m_second);
	}
	void setMoney(int m_first, int m_second)
	{
		first = m_first;
		second = m_second;
		sum = first * second;
	}
	void print()
	{
		cout << "Номинал купюры: " << first << " Количество купюр: " << second << " Сумма: " << sum << endl;
	}
	void sumN()
	{
		int N = 2700;
		if (sum > N)
		{
			cout << "Ден-х средств хватит на покупку товара на сумму " << N << " руб" << endl;
		}
		else
		{
			cout << "Ден-х средств НЕ хватит на покупку товара на сумму " << N << " руб" << endl;
		}
	}
	void count()
	{
		int n = 199;
		cout << "Можно купить " << sum / n << " штук товара стоимости " << n << " руб" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	int first, second, sum;
	cout << "Введите номинал и количество купюр!\n";
	cout << "Номинал = ";
	cin >> first;
	cout << "Количество = ";
	cin >> second;

	Money objMoney(500, 5);
	objMoney.setMoney(first, second); 
		objMoney.print();
	objMoney.sumN();
	objMoney.count();
	system("pause");
	return 0;

}

