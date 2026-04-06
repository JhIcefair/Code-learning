#include <iostream>
#include <random>			// 现代随机数库

using namespace std;

int main(){

	// 初始化随机数生成引擎

	random_device rd;		// 硬件熵源（真随机数）
	mt19937 gen(rd());		// 梅森旋转算法引擎（伪随机数）

RE:

	//获取一个最小值min和最大值max

	cout << "请依次输入最小值和最大值，中间用空格隔开" << endl;
	int min = 0, max = 0;
	cin >> min >> max;

	//判断值有效

	while (min >= max) {
		cout << "您输入的最小值过大，请注意第一个值不要超过第二个值" << endl;
		cout << "请重新输入" << endl;
		cin >> min >> max;
	}

	//输出范围用于确认

	cout << "您选择的范围是：" << min << "——" << max << endl;
	cout << "如果确认请输入\"1\" ,如果想更改请输入\"0\"。" << endl;
	uniform_int_distribution<int> dis(min, max);		// 均匀整数分布,范围min——max
	int a = 5;
	while (a != 1) {
		int c = 0;
		cin >> a;
		switch (a)
		{
		case 0:			//如果需要重新生成，重复之前的代码
			goto RE;
		case 1:			//如果确认范围，开始生成随机数
			cout << "现在开始生成，请注意，一共有50次生成机会，每一次生成后需要输入\"0\"以继续" << endl;
			for (int i = 0; i < 50; i++)
			{
				int x = dis(gen);
				cout << x << endl;
				int b = 0;
				cin >> b;
			}
			cout << "50次生成已结束，输入任意数字结束程序" << endl;
			cin >> c;
			break;
		default:		//如果输入的不是0或1，提示重新输入
			cout << "无法确认您的意图，请注意输入0或1！" << endl;
			break;
		}
	}
}
