#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    system("chcp 1251");

    int day, month, ddmm;

    printf("Введите дату рождения в виде ddmm (dd - день, mm - месяц): ");
    scanf("%d", &ddmm);
    day = ddmm / 100;
    month = ddmm % 100;

    if (day > 31) {
        printf("Некорректная дата");
        return 0;
    }

 
    printf("Знак зодиака: ");

    switch (month) {
    case 1:  
        switch (day <= 19 ? 1 : 2) {
        case 1: 
            printf("Козерог\n"); 
            break;
        case 2: 
            printf("Водолей\n"); 
            break;
        }
        break;

    case 2: 
        switch (day <= 18 ? 1 : 2) {
        case 1:
            printf("Водолей\n");
            break;
        case 2: 
            printf("Рыбы\n"); 
            break;
        }
        break;

    case 3: 
        switch (day <= 20 ? 1 : 2) {
        case 1:
            printf("Рыбы\n"); 
            break;
        case 2:
            printf("Овен\n"); 
            break;
        }
        break;

    case 4:  
        switch (day <= 19 ? 1 : 2) {
        case 1: 
            printf("Овен\n");
            break;
        case 2:
            printf("Телец\n"); 
            break;
        }
        break;

    case 5:
        switch (day <= 20 ? 1 : 2) {
        case 1: 
            printf("Телец\n"); 
            break;
        case 2:
            printf("Близнецы\n"); 
            break;
        }
        break;

    case 6:  
        switch (day <= 20 ? 1 : 2) {
        case 1: 
            printf("Близнецы\n"); 
            break;
        case 2: 
            printf("Рак\n"); 
            break;
        }
        break;

    case 7:  
        switch (day <= 22 ? 1 : 2) {
        case 1: 
            printf("Рак\n");
            break;
        case 2: 
            printf("Лев\n");
            break;
        }
        break;

    case 8:  
        switch (day <= 22 ? 1 : 2) {
        case 1:
            printf("Лев\n"); 
            break;
        case 2: 
            printf("Дева\n"); 
            break;
        }
        break;

    case 9:  
        switch (day <= 22 ? 1 : 2) {
        case 1: 
            printf("Дева\n");
            break;
        case 2: 
            printf("Весы\n"); 
            break;
        }
        break;

    case 10: 
        switch (day <= 22 ? 1 : 2) {
        case 1:
            printf("Весы\n"); 
            break;
        case 2:
            printf("Скорпион\n");
            break;
        }
        break;

    case 11: 
        switch (day <= 21 ? 1 : 2) {
        case 1:
            printf("Скорпион\n");
            break;
        case 2:
            printf("Стрелец\n"); 
            break;
        }
        break;

    case 12: 
        switch (day <= 21 ? 1 : 2) {
        case 1:
            printf("Стрелец\n"); 
            break;
        case 2: 
            printf("Козерог\n");
            break;
        }
        break;
    default:
        printf("Некорректная дата");
    }

}