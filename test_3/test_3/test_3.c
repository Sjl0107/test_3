#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Stu
//{
//    char name[20];
//    short age;
//};
//
//int get_Max(int a,int b) {
//    return a > b ? a : b;
//    }

int main()
{
    //printf("%d\n", sizeof(char*));
    //printf("%d\n", sizeof(short*));
    //printf("%d\n", sizeof(int*));
    //printf("%d\n", sizeof(double*));
    
    /*struct Stu s1 = { "567",22 };
    struct Stu* p = &s1;
    printf("%s %d\n", s1.name, s1.age);
    printf("%s %d\n", p->name, p->age);
    printf("%s %d\n", (*p).name, (*p).age);
    
    int x = get_Max(10, 20);
    printf("%d\n", x);*/

    /*int a = 2;
    int b = 3;
    int c = 1;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b < c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("a=%d b=%d c=%d\n", a, b, c);*/
    
    /*int i = 0;
    for ( i = 1; i < 100; i++)
    {
        if ((i%3)==0) {
            printf("%d", i);
        }
    }*/
    
    //int arr[10] = {0};
    //int i = 0;
    //int max = 0;

    //for (i = 0; i < 10; i++)
    //{
    //    scanf_s("%d", &arr[i]);
    //}
    ////
    //max = arr[0];
    //for (i = 1; i < 10; i++)
    //{
    //    if (arr[i] > max)
    //        max = arr[i];
    //}
    //printf("max = %d\n", max);

    /*int i = 0;
    for ( i = 100; i < 200; i++)
    {
        int j = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j == i) {
            printf("%d", j);
        }
    }*/

    //int year = 0;
    //for (year = 1000; year <= 2000; year++)
    //{
    //    //判断year是否为闰年
    //    if (year % 4 == 0)  // 如果year能够被4整除，year可能为闰年
    //    {
    //        if (year % 100 != 0) // 如果year不能内100整除，则一定是闰年
    //        {
    //            printf("%d ", year);
    //        }
    //    }
    //    if (year % 400 == 0)  // 每400年再润一次
    //    {
    //        printf("%d ", year);
    //    }
    //}

    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += flag * 1.0 / i;
        flag = -flag;
    }
    printf("%lf\n", sum);

    return 0;
}
