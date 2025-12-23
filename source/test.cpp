#include <stdio.h>
#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int rodip;
	printf("напиши число\n");
	std::cin >> rodip;
	switch (rodip) {
	case 1488:
		printf("ПАСХАЛКО");
		break;
	case 52:
		printf("пидисят два");
		break;
	case 42:
		printf("СОРОК ДВА БРАТУХА");
		break;
	case 320:
			printf("ШОК ШЕФ ОС 320КГ");
			break;
	case 522:
		printf("я нарисовал ето в пайнт я его назвал ЛИНУКС 522КГ");
		break;
	}
	return 0;
}