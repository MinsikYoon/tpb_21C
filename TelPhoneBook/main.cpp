#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu() {

	puts("===============");
	puts("1. ��ȭ��ȣ ���");
	puts("2. ��ȭ��ȣ ���");
	puts("3. ��ȭ��ȣ �˻�");
	puts("4. ��ȭ��ȣ ����");
	puts("5. ��ȭ��ȣ text ���� ���");
	puts("0. ���α׷� ����");
	puts("");
}

int main() {

	int run = 1;

	while (run) {
		puts("�޴��� �����Ͻÿ�: ");
		char c = getchar(); getchar();
		switch (c) {
		case '1':
			printf("��� 1\n");
			break;
		case '2':
			printf("��� 2\n");
			break;
		case '3':
			printf("��� 3\n");
			break;
		case '4':
			printf("��� 4\n");
			break;
		case '5':
			printf("��� 5\n");
			break;
		case '0':
			run = 0;
			break;
		}
	}
}