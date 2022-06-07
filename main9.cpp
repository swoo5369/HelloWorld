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
	//myArray[5] <- 0부터 시작해서 5개 생성했음으로 없다

	int myArray[] = { 1,2,3,4 }; //자동으로 배열 4개 생성
	int myArray[]{ 1,2,3,4 };
	int myArray[5]{ 1,2,3 };//나머지 4,5는 0으로 초기화

	int myArray2[2][4] = { { 1,2,3,4 }, { 5,6,7,8 } }; //2개열에 4개 값을 메모리공간에 변수생성

	//  1  2  3  4
	//  5  6  7  8


	array<int, 3> arr = { 1,2,3 };//기능이 많음
	iny arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr;//각각의 변수에 값 넣기 자동으로 형변환

	vector<int> myVector = { 11,22 };//추가 가능
	myVector.push_back(33);//{ 11,22,33 };
	myVector.push_back(44);//{ 11,22,33,44 };

	//myVector에 모든 값을 더한 값을 출력해보자
	{
		vector<int> myVector = { 11, 22, 33 };

		int vectorSize = myVector.size();
		int sum = 0;

		for (int i = 0; i < myVector.size(); ++i)
		{
			sum += myVector[i];// i ? 0 ~ 2
		}

		for (int i : myVector)
		{
			sum += i;// i ? 11, 22, 33
		}

		for (auto iter = myVector.begin(); iter < myVector.end(); iter++)
		{
			sum += *iter;// iter ? 각각의 원소의 주소값,  *포인터는 주소 안에 있는 값을 읽기
		}

		cout << "sum = " << sum << endl;

		//myVector에 모든 값에 1씩 더해보자
		int myArray[3] = { 11, 22, 33 };
		for (int& i : myArray) //&주소값 참조, &가 없으면 복사해서 가져와서 원래 값이 바뀌지 않음
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
		while ( i < 3 )
		{
			sum += myVector[i];
			i++;
		}

		sum = 0;
		i = 0;
		do {
			sum += myVector[i];
			i++;
		} while (i > 3);
	}

	{
		int selection = 0;

		do{
			system("cls"); //앞의 과정을 지워준다
			cout << "What do you like? : \n";
			cout << "1) Red \n";
			cout << "2) Blue \n";
			cout << "3) Black \n";
			cout << "4) white \n";
			cin >> selection;
		} while (!(4 >= selection && selection >= 0));

		cout << "You like " << selection << endl;
	}
	
	{
		do {
			system("cls");
			int a, b = { 0 };
			cout << "Put Number [ A, B ] : \n";
			cin >> a >> b; // 스페이스바로 두번째값 입력

			cout << "A + B =  " << a + b << endl;
			cout << "Quit?(Y/N) : " << endl;
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