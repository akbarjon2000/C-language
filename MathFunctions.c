#include <stdio.h>
#include <math.h>

void POW();
void MOD();

int main(){

    POW();
    MOD();
    return 0;
}


void POW(){
    int x = 5;
    int y = 2;
    double z = pow(x, y);
    printf("%.1f", z);
}

void MOD(){
    double x, fraction, intpart;
    x = 8.2413;
    fraction = modf(x, &intpart);
    printf("\nfraction: %f, int: %.f", fraction, intpart);

}