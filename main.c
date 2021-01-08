#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) {
    write(1,&c,1);
}

void ft_print_alphabet(){
    char a = 'a';
    while (a<='z'){
        write(1,&a,1);
        a++;
    }
}
void ft_print_numbers() {
    char num[1] = {'0'};
    while (num[0]<='9'){
        write(1,num,1);
        num[0]++;
    }
}
void ft_is_negative(int n) {
    char sign[2] = {'N','P'};
    if (n>=0)
        write(1,&sign[1],1);
    else
        write(1,&sign[0],1);
}
void ft_print_comb() {
    char a[5] = "012, ";
    while(a[0]<='7'){
        while(a[1]<='8') {
            while(a[2]<='9') {
                if (a[0]=='7'&&a[1]=='8'&&a[2]=='9')
                {
                    a[3]='$';
                    a[4]='>';
                    write(1,a,5); break;
                }
                write(1,a,5);
                a[2]++;
            }
            a[1]++;
            a[2] = a[1]+1;
        }
        a[0]++;
        a[1] = a[0]+1;
        a[2] = a[1]+1;
    }
}

void ft_print_comb2() {
    char a[7] = "00 01, ";
    while (a[0] <= '9') {
        while (a[1] <= '9') {
            while (a[3] <= '9') {
                while (a[4] <= '9') {
                    if (a[0] == '9' && a[1] == '8' && a[3] == '9' && a[4] == '9') {
                        a[5] = '$';
                        a[6] = '>';
                        write(1, a, 7);
                        break;
                    }
                    write(1, a, 7);
                    a[4]++;
                }
                a[4] = '0';
                a[3]++;
            }
            a[1]++;
            a[3] = a[0];
            a[4] = a[1] + 1;
        }
        a[0]++;
        a[1] = '0';
        a[3] = a[1];
        a[4] = a[1] + 1;
    }
}
void ft_putnbr(int nb) {
    int a[1] = {nb};
    write(1,a,sizeof(int));
}

int main() {
    ft_putnbr(42);
}