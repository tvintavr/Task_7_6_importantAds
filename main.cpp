#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout<<"Введите общую длину колонтитула: ";
    int lCol;
    std::cin>>lCol;

    std::cout<<"Введите количество восклицательных знаков: ";
    int exlPoints;
    std::cin>>exlPoints;

    int e;
    int l;


    if (exlPoints>-1 && lCol>=exlPoints) {
        if (lCol % 2 != exlPoints % 2) {
            std::cout<<"~";
            --lCol;
        }

        for (l=1;l<=lCol;l++) {
            if ( (l>= (lCol/2-exlPoints/2+1)) && (l<= (lCol/2-exlPoints/2+exlPoints))) {
                std::cout<<"!";
            } else {
                std::cout<<"~";
            }
        }

    } else {
        std::cout<<"Введены некорректные параметры!";
    }

}
