//Họ tên: Trần Tiến Đức
//MSSV: 20204643
#include <stdio.h>

int cube(int x) {
    //#Trả về lập phương của x
    /*********************/
    return x*x*x;
    /*********************/
}

//#Viết hàm tính lập phương của một số kiểu double
/*********************/
double cube(double x) {
    return x*x*x;
}
/*********************/

int main() {
    int n;
    double f;
    scanf("%d %lf", &n, &f);

    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f));

    return 0;
}