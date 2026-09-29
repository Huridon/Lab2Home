#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_CTYPE, "");

    float H = 10000; //высота
    float Vc = 230;//скорость самолета
    float Vp = 700;//скорость ракеты

    float ratio = Vc / Vp;
    float S = H / sqrt(1.0 - ratio * ratio); //Расчет S

    printf("Дальность поражения цели от пусковой установки S = %.2f метров.\n", S);

    return 0;
}

