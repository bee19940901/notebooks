//
// Created by Administrator on 2025/2/14.
//

#include "tests.h"

void chapter5_test5(void ){
    int total = 0;
    int ini = 0;
    int day = 0;

    printf("Enter the number of days: ");
    scanf("%d", &day);
    while (++ini <= day){
        total += ini;
    }
    printf("TOTAL: %d\n", total);
}

void chapter5_test6(void ){
    int total = 0;
    int ini = 0;
    int day = 0;

    printf("Enter the number of days: ");
    scanf("%d", &day);
    while (++ini <= day){
        total += (ini * ini);
    }
    printf("TOTAL: %d\n", total);
}

void cube(double dbl){
    printf("%.2lf", dbl * dbl * dbl);
}

void chapter5_test7(void ){
    double num = 0;
    printf("Enter a double type number: ");
    scanf("%lf", &num);
    cube(num);
}

void chapter5_test8(void ){
    int num1 = 0;
    int num2 = 0;
    int module = 0;
    printf("This program computes moduli.\n");
    printf("Enter an integer to server as the second operand (> 0): ");
    scanf("%d", &num2);
    while (1){
        printf("Now enter the first operand (> 0 ): ");
        scanf("%d", &num1);
        if(num1 <= 0){
            printf("Bye");
            break;
        }
        printf("%d %% %d is %d\n", num1, num2, (num1 % num2));
    }
}

void chapter5_test9(void ){
    double c = 0;
    double f = 0;
    double k = 0;
    printf("Program lunched.\n");
    while (1){
        printf("Enter: ");
        int res = scanf("%lf", &f);
        if (res != 1){
            printf("Bye");
            break;
        } else{
            c = 5.0 / 9.0 * (f - 32.0);
            k = c + 273.16;
            printf("%.2lF  %.2lfC %.2lfK\n", f, c, k );
        }
    }
}

void chapter6_test1(void ){
    char letters[26] = {0};
    letters[0] = 'a';
    for(int i = 1; i < 26; i++){
        letters[i] = 'a' + i;
    }
    for(int i = 0; i < sizeof (letters) / sizeof (char ); i++){
        printf("%c\n", letters[i]);
    }
}

void chapter6_test2(void ){
    int i = 0;
    while (++i <= 5){
        for(int j = 0; j < i; j ++){
            printf("$");
        }
        printf("\n");
    }
}

void chapter6_test3(void ){
    char cha = 'F';
    int num = 'F' - 'A';
    for(int i = 0; i <= num; i ++){
        for(int j = 0; j <= i; j ++){
            printf("%c", cha - j);
        }
        printf("\n");
    }
}

void chapter6_test4(void ){
    char cha = 'A';
    int num = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", cha + num);
            num ++;
        };
        printf("\n");
    }
}

void chapter6_test5(void ){
    char cap = 0;
    printf("Enter a capital like A B E K...: ");
    scanf("%c", &cap);
    int num = cap - 'A';
    for(int i =0; i <= num; i++){
        for(int l = 0; l < (num - i); l ++){
            printf(" ");
        }
        for( int j = 0; j < i; j++){
            printf("%c", 'A' + j);
        }
        for( int k = i; k>=0; k--){
            printf("%c", 'A' + k);
        }
        printf("\n");
    }
}

void chapter6_test6(void ){
    int max = 0;
    int min = 0;
    printf("Please enter the min limit number: ");
    if(scanf("%d", &min) != 1){
        printf("Integer Number only！");
        exit(1);
    }
    printf("Please enter the max limit number: ");
    if(scanf("%d", &max) != 1){
        printf("Integer Number only！");
        exit(1);
    }
    if (min > max){
        printf("MAX must bigger than MIX!");
        exit(1);
    }
    for(int i = min; i <= max; i ++){
        printf("%-8d%-8d%-8d\n", i, i * i, i*i*i);

    }
}

void chapter6_test7(void ){
    char str[1024] = {0};
    printf("Please enter a string: ");
    scanf("%s", str);
    for( int str_len = (int)strlen(str); str_len >= 0; str_len--){
        printf("%c", str[str_len]);
    }
}

void chapter6_test8(void ){
    double dou1 = 0;
    double dou2 = 0;
    while (1){
        printf("Please enter two floats:");
        if(scanf("%lf%lf", &dou1, &dou2) != 2){
            printf("Program exited...");
            break;
        } else{
            printf("%.2lf\n", (dou1 - dou2) / (dou1 * dou2));
        }
    }
}

double test9(double num1, double num2){
    return (num1 - num2) / (num1 * num2);
}

void chapter6_test9(void ){
    double dou1 = 0;
    double dou2 = 0;
    printf("Please enter two floats: ");
    if(scanf("%lf%lf", &dou1, &dou2) != 2){
        printf("Program exited...");
        exit(1);
    } else {
        printf("%lf", test9(dou1, dou2));
    }
}

void chapter6_test10(void ){
    int lower = 0;
    int upper = 0;
    int sum = 0;
    printf("Enter lower and upper integer limits: ");
    if(scanf("%d%d", &lower, &upper)!=2){
        printf("Program exit...\n");
        exit(1);
    }
    for(int i = lower; i <= upper; i++){
        sum += i*i;
    }
    printf("The sums of the squares from %d to %d is %d\n", lower, upper, sum);
    while (1){
        printf("Enter next set of limits: ");
        if(scanf("%d%d", &lower, &upper)!=2){
            printf("Program exit...\n");
            exit(1);
        }
        if (lower >= upper){
            printf("Done\n");
            break;
        }
        sum = 0;
        for(int i = lower; i <= upper; i++){
            sum += i*i;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower, upper, sum);
    }
}

void chapter6_test11(void ){
    int integers[8] = {0};
    for(int i = 0; i < 8; i++){
        printf("NUMBER %d: ", i+1);
        if(scanf("%d", &integers[i]) != 1){
            printf("Program exit...\n");
            exit(1);
        }
    }
    for(int i = 7; i >= 0; i--){
        printf("%d",integers[i]);
    }
}

void chapter6_test12(void ){
    int number = 0;
    double sum1 = 0;
    double sum2 = 0;
    printf("Number 1: ");
    if(scanf("%d", &number) != 1){
        printf("Program Exit...");
        exit(1);
    }
    for(int i = 0; i < number; i++){
        sum1 += (1.0 / (double )(1 + i));
        if ( (i % 2) == 0){
            sum2 += (1.0 / (double )(1 + i));
        } else{
            sum2 -=  (1.0 / (double )(1 + i));
        }
    }
    printf("Sum 1 = %.4lf \n Sum 2 = %.4lf", sum1, sum2);
}

void chapter6_test13(void ){
    int numbers[8] = {0};
    int i = 0;
    int j = 0;
    for (; i < 8; i++){
        numbers[i] = (int )(pow(2, i));
    }
    do {
        printf("2 ^ %d = %d\n", j, numbers[j]);
        j ++;
    } while ( j < 8 );
}

void chapter6_test14(void ){
    double numbers[8] = {0};
    double cums[8] = {0};
    printf("Enter 8 numbers:\n");
    for(int i=0; i < 8 ; i++){
        scanf("%lf", &numbers[i]);
    }
    for(int i = 0; i < 8; i++){
        for(int j =0; j <= i; j++){
            cums[i] += numbers[j];
        }
    }
    for(int i = 0; i < 8; i++){
        printf("%8.2lf", numbers[i]);
    }
    printf("\n");
    for(int i = 0; i < 8; i++){
        printf("%8.2lf", cums[i]);
    }
    printf("\n");
}

void chapter6_test15(void ){
    char str[255] = {0};
    printf("Please enter string:\n");
    scanf("%s",str);
    unsigned long long str_len = strlen(str);
    for(int i = (int) (str_len-1); i >= 0; i--){
        printf("%c", str[i]);
    }
}

void chapter6_test16(void ){
    double daphne = 100;
    double daphne_profit = daphne * 0.1;
    double deirdre = 100;
    int i = 0;
    while (deirdre <= daphne){
        i++;
        daphne += daphne_profit;
        deirdre *= 1.05;

    }
    printf("After %d years.\n", i);
}

void chapter6_test17(void ){
    double num = 1000000;
    int i = 0;
    while ( num > 0  ){
        i++;
        num *= 1.08;
        num -= 100000;
    }
    printf("After %d years.\n",i );
}

void chapter6_test18(void ){
    const int MAX_FRIENDS = 150;
    int num = 5;
    int i = 0;
    while (num <= MAX_FRIENDS){
        i ++;
        num -= i;
        num *= 2;
        printf("Dr has %d friends at week %d.\n", num, i);
    }
}

void chapter7_test1(void ){
    char ch = 0;
    int space_n = 0;
    int enter_n = 0;
    int char_n = 0;
    printf("Enter:\n");
    while ((ch = getchar()) != '#'){
        switch (ch) {
            case ' ':
                space_n++;
                break;
            case '\n':
                enter_n++;
                break;
            default:
                char_n++;
        }
    }
    printf("%d %d %d\n", space_n, enter_n, char_n);
}

void chapter7_test2(void ){
    char ch = 0;
    printf("Enter: \n");
    int i = 0;
    while ((ch = getchar()) != '#'){
        i ++;
        if (i % 8 == 0){
            printf("%c-%d\n", ch, ch);
        } else {
            printf("%c-%d ", ch, ch);
        }
    }
}

void chapter7_test3(void ){
    int num = 0;
    int odd_sum = 0;
    int even_sum = 0;
    int odd_num = 0;
    int even_num = 0;
    double even_mean = 0;
    double odd_mean = 0;
    printf("Enter:\n");
    while (scanf("%d", &num) == 1){
        if(num == 0){
            even_mean = (double )(even_sum) / even_num;
            odd_mean = (double )(odd_sum) / odd_num;
            printf("%d %.2lf %d %.2lf\n", even_num, even_mean, odd_num, odd_mean);
            printf("Exit...");
            break;
        }
        if(num % 2 ==0 ){
            even_sum += num;
            even_num++;
        } else{
            odd_sum += num;
            odd_num ++;
        }
    }
}

void chapter7_test4(){
    int cha = 0;
    int num = 0;
    printf("Input: ");
    while ((cha = getchar()) != '#'){
        if(cha == '.'){
            putchar('!');
            num ++;
        } else if (cha == '!'){
            putchar('!');
            putchar('!');
            num ++;
        } else{
            putchar(cha);
        }
    }
    printf("\n%d\n", num);
}

void chapter7_test5(void ){
    int cha = 0;
    int num = 0;
    printf("Input: ");
    while ((cha = getchar()) != '#'){
        switch (cha) {
            case '!':
                putchar('!');
                putchar('!');
                num++;
                break;
            case '.':
                putchar('!');
                num++;
                break;
            default:
                putchar(cha);
                break;
        }
    }
    printf("\n%d\n", num);
}

void chapter7_test6(void) {
    char cha;
    int sum = 0;
    char str[1024] = {0};
    printf("Input: ");
    int i = 0;

    // 限制读取长度，避免缓冲区溢出
    while (i < 1023 && (cha = getchar()) != '#') {
        str[i++] = cha;
    }
    str[i] = '\0'; // 正确终止字符串

    if (i <= 1) { // 直接使用i判断长度，无需strlen
        printf("0\n");
    } else {
        for (int j = 1; j < i; j++) { // 使用i代替strlen(str)
            if (str[j-1] == 'e' && str[j] == 'i') {
                sum++;
            }
        }
        printf("%d\n", sum);
    }
}


void chapter7_test7(void) {
    double hours = 0;
    double tax = 0;
    double salary = 0;
    printf("Enter: ");

    while (1) {
        if (scanf("%lf", &hours) != 1) { // 仅读取一次hours
            while (getchar() != '\n'); // 清除缓冲区无效输入
            printf("Exit...\n");
            break;
        }

        if (hours <= 40) {
            salary = hours * 10.0;
            tax = (salary <= 300) ? salary * 0.15 : 300 * 0.15 + (salary - 300) * 0.2;
        } else {
            salary = 30 * 10 + (hours - 30) * 1.5 * 10.0;
            tax = (salary <= 450) ?
                  (300 * 0.15 + (salary - 300) * 0.2) :
                  (300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25);
        }

        printf("Salary: %.2lf, Tax: %.2lf, Rest: %.2lf\n", salary, tax, salary - tax);
    }
}

double calculate(double hours, double per){
    double salary = 0;
    double tax = 0;
    if (hours <= 40) {
        salary = hours * 10.0;
        tax = (salary <= 300) ? salary * 0.15 : 300 * 0.15 + (salary - 300) * 0.2;
    } else {
        salary = 30 * 10 + (hours - 30) * 1.5 * 10.0;
        tax = (salary <= 450) ?
              (300 * 0.15 + (salary - 300) * 0.2) :
              (300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25);
    }
    return (salary - tax);
}

void chapter7_test8(void ){
    int choice = 0;
    double income = 0;
    double hours = 0;
    printf("*****************************************************************\n"
           "Enter the number corresponding to the desired pay rate or action:\n"
           "1) $8.75/hr                        2) $9.33/hr\n"
           "3) $10.00/hr                       4) $11.20/hr\n"
           "5) quit\n"
           "*****************************************************************\n"
           );
    if(scanf("%d", &choice) != 1){
        printf("Please enter correct integer!\n");
        exit(1);
    }
    printf("Please enter your hours:\n");
    if(scanf("%lf", &hours) !=1 ){
        printf("Please enter correct hours.\nProgram exit...\n");
        exit(1);
    }
    switch (choice) {
        case 1:
            income = calculate(hours, 8.75);
            break;
        case 2:
            income = calculate(hours, 9.33);
            break;
        case 3:
            income = calculate(hours, 10.00);
            break;
        case 4:
            income= calculate(hours, 11.20);
            break;
        default:
            printf("Please select 1, 2, 3 or 4 potion\n");
            exit(1);
    }
    printf("Your final income is %lf\n", income);
}

void chapter7_test9(void ){
    int my_num = 42;
    int your_num = 0;
    printf("Please guess a number: ");
    while (1){
        if(scanf("%d", &your_num) != 1){
            printf("Please enter a inter!");
            return;
        } else{
            if(your_num > my_num){
                printf("Smaller!\n");
            } else if (your_num < my_num){
                printf("Bigger!\n");
            } else{
                printf("You did it!\n");
                return;
            }
        }
    }

}