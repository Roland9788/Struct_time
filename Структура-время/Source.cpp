#include <iostream>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};




int main()
{
	setlocale(LC_ALL, "Rus");

	//������� 1
	int long totalse�s = 0;

	Time time;

	cout << "������� ����, ������, ������� ����� ������ ��� Enter ";
	cin >> time.hours >> time.minutes >> time.seconds;
	cout << "����� � ��������: ";
	totalse�s = time.hours * 3600 + time.minutes * 60 + time.seconds;
	cout << totalse�s;
	cout << "\n";
	cout << "\n";
	//������� 2
	Time time1, time2, timesum;
	int long totalsecs1 = 0;
	int long totalsecs2 = 0;
	int temp = 0;
	cout << "������� ����, ������, ������� ����� ������ ��� Enter\n";
	cin >> time1.hours >> time1.minutes >> time1.seconds;
	cout << "������� ����, ������, ������� ����� ������ ��� Enter\n";
	cin >> time2.hours >> time2.minutes >> time2.seconds;
	totalsecs1 = ((time1.hours * 3600) + (time1.minutes * 60) + time1.seconds);
	totalsecs2 = ((time2.hours * 3600) + (time2.minutes * 60) + time2.seconds);
	temp = totalsecs1 + totalsecs2;

	timesum.hours = temp / 3600;
	timesum.minutes = temp % 3600 / 60;
	timesum.seconds = temp % 3600 % 60;

	cout << "�����: \n";
	cout << timesum.hours << ":" << timesum.minutes << ":" << timesum.seconds;






	return 0;
}