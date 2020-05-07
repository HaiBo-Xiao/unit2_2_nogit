// unit2_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	//用do while求1-10的和
	int sum = 0;
	int i = 1;
	do {
		sum = sum + i;
		i++;
	} while (i <= 10);
	cout << "1到10的和为 " << sum << endl;

	//复习头文件的作用
	//用while和for 代替上述求和
	int j = 1;
	int sum1 = 0;
	while (j <= 10) {
		sum1 = sum1 + j;
		j++;
	}
	cout << "用while方式求和的值为" << sum1 << endl;

	//用for代替
	int sum2 = 0;
	for (int k = 1; k <= 10; k++) {
		sum2 = sum2 + k;

	}
	cout << "用for代替的结果是 " << sum2;


	//计算图形的面积，分别由圆形，长方形，正方形

	float area, r, a, b;
	int type;
	cout << "请输入图形种类1-圆形，2-长方形，3-正方形 ";
	cin >> type;
	switch (type) {
	case 1:
		cout << "请输入半径 ";
		cin >> r;
		area = 3.14 * r * r;
		cout << "圆形的面积是" << area;
		break;
	case 2:
		cout << "请输入长和宽";
		cin >> a;
		cin >> b;
		area = a * b;
		cout << "长方形面积为" << area;
		break;
	case 3:
		cout << "请输入正方形的面积";
		cin >> a;
		area = a * a;
		cout << "正方形的面积是" << area;
		break;
	default:
		cout << "输入的类型不正确";
		break;
	}

	//声明一个时间结构体，年月日时分秒，完成初始化，并且允许用户输入
	struct MyTimeStruct {
		unsigned int year;
		unsigned int month;
		unsigned int date;
		unsigned int hour;
		unsigned int minute;
		unsigned int second;
	};
	MyTimeStruct Mytime = { 2015,1,1,0,0,0 };
	cout << "请输入年份";
	cin >> Mytime.year;

	cout << "请输入月份";
	cin >> Mytime.month;

	cout << "请输入日期";
	cin >> Mytime.date;

	cout << "请输入小时";
	cin >> Mytime.hour;

	cout << "请输入分钟";
	cin >> Mytime.minute;

	cout << "请输入秒钟";
	cin >> Mytime.second;

	//接下来判断是否合法
	if (Mytime.year < 2021 && Mytime.year>1990 &&
		Mytime.hour < 24 && Mytime.hour >= 0 &&
		Mytime.minute < 60 && Mytime.minute >= 0 &&
		Mytime.second < 60 && Mytime.second >= 0) {
		switch (Mytime.month) {
		case 1:if (Mytime.date <= 31 && 0 < Mytime.date) cout << "正确";
			break;
		case 2:
			if (Mytime.year % 4 == 0 && Mytime.year % 100 == 0) { if (Mytime.date <= 28 && 0 < Mytime.date) cout << "正确"; }
			if (Mytime.year % 4 == 0 && Mytime.year % 100 != 0) { if (Mytime.date <= 29 && 0 < Mytime.date) cout << "正确"; }
			break;
		case 3:if (Mytime.date <= 31 && 0 < Mytime.date) cout << "正确";
			break;
		case 4:if (Mytime.date <= 30 && 0 < Mytime.date) cout << "正确";
			break;
		case 5:if (Mytime.date <= 31 && 0 < Mytime.date) cout << "正确";
			break;
		case 6:if (Mytime.date <= 30 && 0 < Mytime.date) cout << "正确";
			break;
		case 7:if (Mytime.date <= 31 && 0 < Mytime.date) cout << "正确";
			break;
		case 8:if (Mytime.date <= 31 && 0 < Mytime.date) cout << "正确";
			break;
		case 9:if (Mytime.date <= 30 && 0 < Mytime.date) cout << "正确";
			break;
		case 10:if (Mytime.date <= 31 && 0 < Mytime.date) cout << "正确";
			break;
		case 11:if (Mytime.date <= 30 && 0 < Mytime.date) cout << "正确";
			break;
		case 12:if (Mytime.date <= 31 && 0 < Mytime.date) cout << "正确";
			break;
		default:cout << "月份有问题";
		}
	}
	cout << "如果没看到正确字样，则说明日期有问题";

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
