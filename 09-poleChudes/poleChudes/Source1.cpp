#include <iostream>
#include <stdio.h>
#include <string>
//���� �����
int main()
{
    setlocale(LC_ALL, "Russian");

    char word[50]; //�����
    char d[50]; //�������
    char c;
    int guess=0;
    int guess_c=0;// ���������� ���������� �����

    std::cout << "������� ����� �� ����������: ";
    gets_s(s); //���� �����

    int count = strlen(s); // ����� ���� � �����
    
    
    for (int i = 0; i < count; i++) 
    {
        d[i] = '-' ;
        std:: cout << d[i];

    }

    printf("\n");

    //����� ������ ����� � �����

    while(guess<count) //����� ������� ����� ���� ����� ��������� ���� �� ����� ����� ���������� ���� � �������� �����
    {
        
        std::cout <<"\n ������� �����: \n ";
        std::cin>>c;
        std::cout << " \n ";

            for (int r = 0; r<count ; r++) {//���������� �������� ����� � �������� �������� � ��������� �� � ������ �������
               
                if (c == s[r]) { 
                    d[r] = s[r];
                    guess++;//������� ���� ��������� ����
                    guess_c++;//������� �� �� ��������� ��� �����
                }
            }

            if (guess_c > 0) {
                printf("���� ����� ����� \n");
            }
            else {
                std::cout << "��� ����� �����! \n";
            }

            for (int i = 0; i < count; i++) {
                std::cout << d[i];
            }

            guess_c = 0;
    }

    printf(" \n ����������, �� ������� �� �����! \n");
}
