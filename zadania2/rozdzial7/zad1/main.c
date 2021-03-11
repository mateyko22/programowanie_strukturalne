//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    char napis[30];
//    int i=0, spacje=0;
//    printf("Wprowadz napis: ");
//    scanf("%c", &napis);
//    while(napis[i]!="#")
//    {
//        if (napis[i]!=" ")
//            spacje++;
//        i++;
//    }
//    printf("Liczba odstepow: %d \n", spacje);
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int main(){

    char znak;
    char ctab[400];
    int tab[400] = {0};
    int i = 1;
    while((znak = getchar()) != '#'){
        int j;
        for(j = 0; j < i; j++){
            if(ctab[j] == znak){
                tab[j]++;
                break;
            }
        }
        if(j == i){
            ctab[i - 1] = znak;
            tab[i - 1]++;
            i++;
        }
    }
    for(int x = 0; x < i - 1; x++){
        if(ctab[x] == '\n') printf("Znak: '\\n', liczba wystapien: %d\n", tab[x]);
        else printf("Znak: '%c', liczba wystapien: %d\n", ctab[x], tab[x]);
    }
    return 0;
}
