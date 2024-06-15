#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void crvena_boja_bold()
{
     printf("\033[1;31m");
}
void crvena_boja_blink()
{
     printf("\033[5;31m");
}
void zuta_boja_bold()
{
     printf("\033[1;33m");
}
void normalna_bela_boja()
{
      printf("\033[0m");
}
void ocisti_text_u_konzoli()
{
    system("cls");
}
void pocetni_ekran()
{
    printf(" .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n");
    printf("| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
    printf("| |  ________    | || |     ____     | || |   ______     | || |  _______     | || |     ____     | |\n");
    printf("| | |_   ___ `.  | || |   .'    `.   | || |  |_   _ \\    | || | |_   __ \\    | || |   .'    `.   | |\n");
    printf("| |   | |   `. \\ | || |  /  .--.  \\  | || |    | |_) |   | || |   | |__) |   | || |  /  .--.  \\  | |\n");
    printf("| |   | |    | | | || |  | |    | |  | || |    |  __'.   | || |   |  __ /    | || |  | |    | |  | |\n");
    printf("| |  _| |___.' / | || |  \\  `--'  /  | || |   _| |__) |  | || |  _| |  \\ \\_  | || |  \\  `--'  /  | |\n");
    printf("| | |________.'  | || |   `.____.'   | || |  |_______/   | || | |____| |___| | || |   `.____.'   | |\n");
    printf("| |              | || |              | || |              | || |              | || |              | |\n");
    printf("| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
    printf(" '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n");
    printf("\n");
    printf(" .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n");
    printf("| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
    printf("| |  ________    | || |     ____     | || |    _______   | || |   _____      | || |     _____    | |\n");
    printf("| | |_   ___ `.  | || |   .'    `.   | || |   /  ___  |  | || |  |_   _|     | || |    |_   _|   | |\n");
    printf("| |   | |   `. \\ | || |  /  .--.  \\  | || |  |  (__ \\_|  | || |    | |       | || |      | |     | |\n");
    printf("| |   | |    | | | || |  | |    | |  | || |   '.___`-.   | || |    | |   _   | || |      | |     | |\n");
    printf("| |  _| |___.' / | || |  \\  `--'  /  | || |  |`\\____) |  | || |   _| |__/ |  | || |     _| |_    | |\n");
    printf("| | |________.'  | || |   `.____.'   | || |  |_______.'  | || |  |________|  | || |    |_____|   | |\n");
    printf("| |              | || |              | || |              | || |              | || |              | |\n");
    printf("| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
    printf(" '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n");

}
int main()
{
    crvena_boja_blink();
    //https://patorjk.com/software/taag/#p=testall&f=Big&t=Dosli na ovoj stranici genersises ascii art za dati tekst
    //posle toga taj tekst kopiras i nalepis u chat gpt i kazes mu da ispis uradi sa printf i on ce da generise u vise linija
    pocetni_ekran();
    sleep(6);//cekanje od 6 sekundi pa tek onda ide nastavak izvrsavanja programa tj. sledecih naredbi
    ocisti_text_u_konzoli();
    normalna_bela_boja();
    printf("normalni beli tekst \n");  // normalni beli tekst
    //ispisivanje 2 crvena znaka pa dva zuta sve u jednoj liniji to uradite tako sto ne stavite\n u printf naredbama
    crvena_boja_bold();
    printf(" %c % c",178,178);  // crveni deo: ispisan kao dva znaka 178 (█)
    zuta_boja_bold();
    printf(" %c %c \n",178,178);  // Zuti deo: ispisan kao dva znaka 178 (█)
    normalna_bela_boja();
    printf("Hello world!\n");  // Hello world! u normalnoj beloj
    printf("\033[1;35;47m");   //bold ljubicasta slova sa belom pozadinom kao highlight efekat ili efekat podvlacenja markerom
    printf("Hello world!\n");
    normalna_bela_boja();
    sleep(3);
    ocisti_text_u_konzoli();
    system("color f4");//sad ide bela pozadina i crvena slova
    printf("bela pozadina i crvena slova\n");
    sleep(2);
    ocisti_text_u_konzoli();
    sleep(1);
    system("color 0f");//sad ide normalna crna boja pozadine i bela slova
    printf("crna pozadina i bela slova\n");
    sleep(2);
    crvena_boja_bold();
    printf(" %c % c",178,178);  // crveni deo: ispisan kao dva znaka 178 (█)
    zuta_boja_bold();
    printf(" %c %c \n",178,178);  // Zuti deo: ispisan kao dva znaka 178 (█)
    normalna_bela_boja();
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
