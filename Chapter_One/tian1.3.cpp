// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

/*
int main()
{
	std::cout << "enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "the sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << std::endl;
	system("pause");
    return 0;
}

*/
// 输出hellow , world
/*
int main()
{
	std::cout << "hellow , world" << std::endl;
	system("pause");
	return 0;
}
*/
//两个数相乘
/*
int main()
{
	int v1 = 0, v2 = 0;//定义
	std::cin >> v1 >> v2;//输入
	std::cout << v1 * v2 << std::endl; //输出
	system("pause");
	return 0;
}
*/
//合起来输出
/*
int main()
{
	std::cout << "hellow , world" << std::endl;
	int v1 = 0, v2 = 0;//定义
	std::cin >> v1 >> v2;//输入
	std::cout << v1 * v2 << std::endl; //输出
	system("pause");
	return 0;
}

*/
/*
int main()
{
	int v1 = 0, v2 = 0;//定义
	std::cin >> v1 >> v2;//输入
	std::cout << "hellow , world" << v1 << " and " << v2<< " is " << v1 + v2 << std::endl;//输出
    system("pause");
	return 0;
}
*/
/*
int main()
{
	int sum = 0, val = 1;
	while (val<=10) {
		sum += val;
		++val;
		std::cout << "Sum of 1 to 10 inclusive is "
			<< sum << std::endl;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	system("pause");
	return 0;

}
*/
/*
int main()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "sum is: " << sum << std::endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

// 函数声明
int max(int num1, int num2);

int main()
{
	// 局部变量声明
	int a = 100;
	int b = 200;
	int ret;

	// 调用函数来获取最大值
	ret = max(a, b);

	cout << "Max value is : " << ret << endl;
	system("pause");
	return 0;
}

// 函数返回两个数中较大的那个数
int max(int num1, int num2)
{
	// 局部变量声明
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}
*/
//while循环
/*
int main()
{
	int sum = 0, val = 1;
	while (val <=10)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 10 inclusive is"
		<< sum << std::endl;
	system("pause");
	return 0;

}
*/

int main()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is :" << sum << std::endl;
	system("pause");
	return 0;
}