#include <stdio.h>
int main()
{  int n = 5;
    for (int i = 0; i < 2 * n - 1; i++) {
    int x;
    if (i < n) {
    x = 2 * i + 1;}
    else {
    x = 2 * (2 * n - i) - 3;}
    for (int j = 0; j < x; j++) {
    printf(" ");}
    for (int k = 0; k < 2 * n - x; k++) {
    if (k==0||k==2*n-x-1||i==0||i==2*n-2){
    printf("%c ",k+65);}
    else {
    printf("  ");}}
    printf("\n");}
    return 0;}
