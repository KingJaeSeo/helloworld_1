/*
#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
	int myArray[5] = { 0 };
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	//myArray[5] <- 0���� ������ �ؼ� 5�� ���������Ƿ� ����
	int myArray1[] = { 1,2,3,4 }; //�迭 4���� �����ȴ�
	int myArray1[]{ 1,2,3,4 };
	int myArray1[5]{ 1,2,3 }; // ������ 4,5�� 0���� �ʱ�ȭ
	//	1	2	3	4
	//	5	6	7	8
	int myArray2[2][4] = { {1,2,3,4}, {5,6,7,8} };
	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;
	auto [a1, a2, a3] = arr;
	vector<int> myVector = { 11, 22 };
	myVector.push_back(33);//{ 11, 22, 33 };
	myVector.push_back(44);//{ 11, 22, 33, 44 };
	//myVector�� ��� ���� ���� ���� ����غ���
	{
		vector<int> myVector = { 11, 22, 33 };
		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;
		int sum = 0;
		for (int i = 0; i < myVector.size(); ++i)
		{
			sum += myVector[i];// i ? 0, 1, 2
		}
		for (int i : myVector)
		{
			sum += i;// i ? 11, 22, 33
		}
		for (auto iter = myVector.begin(); iter < myVector.end(); iter++)
		{
			sum += *iter;// iter ? ������ ������ �ּҰ�, *�� �ּ� �ȿ� �ִ� ���� �б�
		}
		cout << "sum = " << sum << endl;
		//<---
		int myArray[3] = { 11, 22, 33 };
		//myArray�� ��� ���� 1�� ���غ��� (11, 22, 33) -> (12, 23, 34)
		for (int& i : myArray)
		{
			i++;
		}
		for (int i : myArray)
		{
			cout << "myArray[" << i << "] = " << i << endl;
		}
	}
	{
		vector<int> myVector = { 11, 22, 33 };
		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;
		int sum = 0;
		int i = 0;
		while (i < 3)
		{
			sum += myVector[i];
			i++;
		}
		sum = 0;// error C2374: 'sum': ������. ���� �� �ʱ�ȭ�߽��ϴ�.
		i = 0;
		do {
			sum += myVector[i];
			i++;
		} while (i > 3);
	}
	{
		int selection = 0;
		do {
			system("cls");
			cout << "Whar do you like? : \n";
			cout << "1) Red\n";
			cout << "2) Blue\n";
			cout << "3) Black\n";
			cout << "4) Whire\n";
			cin >> selection;
		} while (!(4 >= selection && selection >= 0));
		cout << "You like " << selection << endl;
	}
	{
		do {
			system("cls");
			int a, b = { 0 };
			cout << "put number [A B] : \n";
			cin >> a >> b;
			cout << "A + B = " << a + b << endl;
			cout << "Quit?(Y/N) : ";
			char q = ' ';
			cin >> q;
			if (q == 'Y')
			{
				break;
			}
		} while (1);
	}
}
*/