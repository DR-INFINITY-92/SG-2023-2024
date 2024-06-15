#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\033[1;31m");   // Crvena boja (bold)
    printf("%c%c  \n",178,178);  // Crveni deo: ispisan kao dva znaka 178 (█)
    printf("\033[0m");       // Vraćanje na normalnu boju (belu)
    printf("Hello world!\n");  // Normalni beli tekst
    printf("\033[1;33m");   // Žuta boja (normalno)
    printf("%c%c  \n",178,178);  // Zuti deo: ispisan kao dva znaka 178 (█)
    printf("\033[0m");       // Vraćanje na normalnu boju (belu)
    printf("Hello world!\n");  // Hello world! u normalnoj beloj
    printf("\033[1;35;47m");   //bold ljubicasta slova sa belom pozadinom kao highlight efekat ili efekat podvlacenja markerom
    printf("Hello world!\n");  // Hello world! u normalnoj beloj
    return 0;
}


/*Boje teksta:
30: Crna
31: Crvena
32: Zelena
33: Žuta
34: Plava
35: Magenta (ljubičasta)
36: Cijan (svetlo plava)
37: Bela
Stilovi teksta:
0: Reset (vraća na normalne postavke)
1: Bold (deblji tekst)
2: Light (svetliji tekst, nije uvek podržano)
3: Italics (nagnuti tekst, nije uvek podržano)
4: Underline (podvučeni tekst)
5: Blink (treptavi tekst, nije uvek podržano)
7: Inverse (invertovani boje pozadine i teksta)
8: Hidden (sakriveni tekst)
9: Strikethrough (precrtani tekst, nije uvek podržano)
Boje pozadine:
40: Crna
41: Crvena
42: Zelena
43: Žuta
44: Plava
45: Magenta (ljubičasta)
46: Cijan (svetlo plava)
47: Bela
Primeri korišćenja:
\033[1;32m - Bold zeleni tekst
\033[0;33m - Normalan žuti tekst
\033[4;35m - Podvučeni magenta tekst
\033[1;37;41m - Bold beli tekst na crvenoj pozadini */
