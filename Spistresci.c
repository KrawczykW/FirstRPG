#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char imie[8];
int zycie=150,exps=0,lvl=1,zloto=0,k=0,l=0,karczmarz=0,lokacja=1,win=0,stanmisji,zyciemaks=150;
int a=0;
int exp2=100;
int obrazenia=15;
struct Potwory
{
    int zyciepotwora;
    int exppotwora;
    int obrazeniapotwora;
    int zlotozapotwora;
    char nazwa[20];
};
struct Potwory p[7];
void walka()
{
    srand(time(NULL));
    switch(lokacja)
    {
    case 1:
    system("cls");
    Sleep(1000);
        printf("Przeszukujac teren zaskoczyl Cie Wielki Krab.\n");
    Sleep(2000);
        while(p[4].zyciepotwora>0&&zycie>0)
        {
            p[4].obrazeniapotwora=8+(5+rand()%15);
            printf("Twoje zycie to %d\n",zycie);
            printf("Zycie Kraba to %d\n",p[4].zyciepotwora);
            printf("Krab zadaje Ci %d obrazen\n", p[4].obrazeniapotwora);
            zycie=zycie-p[4].obrazeniapotwora;
            printf("Zadajesz Krabowi %d obrazen\n", obrazenia);
            p[4].zyciepotwora=p[4].zyciepotwora-obrazenia;
            Sleep(2000);
            system("cls");
        }
        printf("Za walke z Krabem Zdobywasz %d zlota oraz %d expa\n",p[4].zlotozapotwora,p[4].exppotwora);
        printf("Po walce zostalo Ci %d zdrowia\n",zycie);
        p[4].zyciepotwora=125;
        zloto=zloto+p[4].zlotozapotwora;
        exps=exps+p[4].exppotwora;
        stanmisji=stanmisji+10;
        system("pause");
        system("cls");
        if(stanmisji==4)
        {
            stanmisji=7+stanmisji;
        }
         if(zycie<=0)
        {
        printf("Nie zyjesz. Zabil Cie Wielki Krab\n");
        win=1;
        }
        break;
        case 3:
    system("cls");
    Sleep(1000);
        printf("Co ?! Te drzewa sie ruszaja ?! Chyba musze walczyc.\n");
        Sleep(2000);
        while(p[5].zyciepotwora>0&&zycie>0)
        {
            p[5].obrazeniapotwora=10+(10+rand()%25);
            printf("Twoje zycie to %d\n",zycie);
            printf("Zycie Enta to %d\n",p[5].zyciepotwora);
            printf("Ent zadaje Ci %d obrazen\n", p[5].obrazeniapotwora);
            zycie=zycie-p[5].obrazeniapotwora;
            printf("Zadajesz Entowi %d obrazen\n", obrazenia);
            p[5].zyciepotwora=p[5].zyciepotwora-obrazenia;
            Sleep(2000);
            system("cls");
        }
        printf("Za walke z Entem Zdobywasz %d zlota oraz %d expa\n",p[5].zlotozapotwora,p[5].exppotwora);
        printf("Po walce zostalo Ci %d zdrowia\n",zycie);
        stanmisji=stanmisji+10;
        zloto=zloto+p[5].zlotozapotwora;
        exps=exps+p[5].exppotwora;
        p[5].zyciepotwora=150;
        system("pause");
        system("cls");
         if(stanmisji==5)
        {
            stanmisji=7+stanmisji;
        }
         if(zycie<=0)
        {
        printf("Nie zyjesz. Zabil Cie Ent\n");
        win=1;
        }
        break;
        case 4:
    system("cls");
    Sleep(1000);
        printf("Nagle spod bagna wychodzi potwor!\n");
        Sleep(2000);
        while(p[0].zyciepotwora>0&&zycie>0)
        {
            p[0].obrazeniapotwora=5+(5+rand()%15);
            printf("Twoje zycie to %d\n",zycie);
            printf("Bagniak zadaje Ci %d obrazen\n", p[0].obrazeniapotwora);
            zycie=zycie-p[0].obrazeniapotwora;
            printf("Zadajesz Bagniakowi %d obrazen\n", obrazenia);
            p[0].zyciepotwora=p[0].zyciepotwora-obrazenia;
            printf("Pozostale zycie Bagniaka to %d\n",p[0].zyciepotwora);
            Sleep(2000);
            system("cls");
        }
        printf("Za walke z Bagniakiem Zdobywasz %d zlota oraz %d expa\n",p[0].zlotozapotwora,p[0].exppotwora);
        printf("Po walce zostalo Ci %d zdrowia\n",zycie);
        stanmisji=stanmisji+10;
        zloto=zloto+p[0].zlotozapotwora;
        exps=exps+p[0].exppotwora;
        p[0].zyciepotwora=75;
        system("pause");
        system("cls");
         if(stanmisji==2)
        {
            stanmisji=7+stanmisji;
        }
        if(zycie<=0)
        {
        printf("Nie zyjesz. Zabil Cie Bagniak\n");
        win=1;
        }
        break;
           case 5:
    system("cls");
    Sleep(1000);
        printf("Zloto albo smierc! A wiec wybierasz smierc.\n");
        Sleep(2000);
        while(p[1].zyciepotwora>0&&zycie>0)
        {
            p[1].obrazeniapotwora=1+(1+rand()%15);
            printf("Twoje zycie to %d\n",zycie);
            printf("Zycie Rabusia to %d\n",p[1].zyciepotwora);
            printf("Rabus zadaje Ci %d obrazen\n", p[1].obrazeniapotwora);
            zycie=zycie-p[1].obrazeniapotwora;
            printf("Zadajesz Rabusiowi %d obrazen\n", obrazenia);
            p[1].zyciepotwora=p[1].zyciepotwora-obrazenia;
            Sleep(2000);
            system("cls");
        }
        printf("Za walke z Rabusiem Zdobywasz %d zlota oraz %d expa\n",p[1].zlotozapotwora,p[1].exppotwora);
        printf("Po walce zostalo Ci %d zdrowia\n",zycie);
        stanmisji=stanmisji+10;
        p[1].zyciepotwora=50;
        zloto=zloto+p[1].zlotozapotwora;
        exps=exps+p[1].exppotwora;
        system("pause");
        system("cls");
         if(stanmisji==1)
        {
            stanmisji=7+stanmisji;
        }
         if(zycie<=0)
        {
        printf("Nie zyjesz. Zabil Cie Rabus\n");
        win=1;
        }
        break;
              case 7:
    system("cls");
    Sleep(1000);
        printf("Kto smie zaklocac moj spokoj?!\n");
        Sleep(2000);
        while(p[2].zyciepotwora>0&&zycie>0)
        {
            p[2].obrazeniapotwora=15+(5+rand()%20);
            printf("Twoje zycie to %d\n",zycie);
            printf("Zycie Golema to %d\n",p[2].zyciepotwora);
            printf("Golem zadaje Ci %d obrazen\n", p[2].obrazeniapotwora);
            zycie=zycie-p[2].obrazeniapotwora;
            printf("Zadajesz Golemowi %d obrazen\n", obrazenia);
            p[2].zyciepotwora=p[2].zyciepotwora-obrazenia;
            Sleep(2000);
            system("cls");
        }
        printf("Za walke z Golemem Zdobywasz %d zlota oraz %d expa\n",p[2].zlotozapotwora,p[2].exppotwora);
        printf("Po walce zostalo Ci %d zdrowia\n",zycie);
        stanmisji=stanmisji+10;
        exps=exps+p[2].exppotwora;
        zloto=zloto+p[2].zlotozapotwora;
        p[2].zyciepotwora=175;
        zloto=zloto+p[2].zlotozapotwora;
        exps=exps+p[2].exppotwora;
        system("pause");
        system("cls");
         if(stanmisji==6)
        {
            stanmisji=7+stanmisji;
        }
         if(zycie<=0)
        {
        printf("Nie zyjesz. Zabil Cie Golem\n");
        win=1;
        }
        break;
              case 8:
    system("cls");
    Sleep(1000);
        printf("Najpierw owine Cie w pajeczyne a potem zjem!\n");
        Sleep(2000);
        while(p[3].zyciepotwora>0&&zycie>0)
        {
            p[3].obrazeniapotwora=5+(10+rand()%17);
            printf("Twoje zycie to %d\n",zycie);
            printf("Zycie Pajaka to %d\n",p[3].zyciepotwora);
            p[3].zyciepotwora=p[3].zyciepotwora-obrazenia;
            zycie=zycie-p[3].obrazeniapotwora;
            printf("Pajak zadaje Ci %d obrazen\n", p[3].obrazeniapotwora);
            printf("Zadajesz Pajakowi %d obrazen\n", obrazenia);
            Sleep(2000);
            system("cls");
        }
        printf("Za walke z Pajakiem Zdobywasz %d zlota oraz %d expa\n",p[3].zlotozapotwora,p[3].exppotwora);
        printf("Po walce zostalo Ci %d zdrowia\n",zycie);
        p[3].zyciepotwora=100;
        zloto=zloto+p[3].zlotozapotwora;
        exps=exps+p[3].exppotwora;
        system("pause");
        system("cls");
         if(stanmisji==3)
        {
            stanmisji=7+stanmisji;
        }
         if(zycie<=0)
        {
        printf("Nie zyjesz. Zabil Cie Gigantyczny Pajak\n");
        win=1;
        }
        break;
              case 9:
    system("cls");
    Sleep(1000);
        printf("Juz czuje smak Twojego ludzkiego miesa!\n");
        Sleep(2000);
        while(p[6].zyciepotwora>0&&zycie>0)
        {
            p[6].obrazeniapotwora=15+(15+rand()%20);
            printf("Twoje zycie to %d\n",zycie);
            printf("Smok zadaje Ci %d obrazen\n", p[6].obrazeniapotwora);
            zycie=zycie-p[6].obrazeniapotwora;
            printf("Zadajesz Smokoki %d obrazen\n", obrazenia);
            p[6].zyciepotwora=p[6].zyciepotwora-obrazenia;
            printf("Pozostale zycie Smoka to %d\n",p[6].zyciepotwora);
            Sleep(2000);
            system("cls");
        }
        printf("Za walke ze Smokiem Zdobywasz %d zlota oraz %d expa\n",p[6].zlotozapotwora,p[6].exppotwora);
        printf("Po walce zostalo Ci %d zdrowia\n",zycie);
        p[6].zyciepotwora=2000;
        zloto=zloto+p[6].zlotozapotwora;
        exps=exps+p[6].exppotwora;
        system("pause");
        system("cls");
        if(zycie>0)
        {
        printf("Gratuluje. Zabiles smoka :)\n");
        win=1;
        }
        if(zycie<=0)
        {
        printf("Nie zyjesz. Zabil Cie smok\n");
        win=1;
        }
        break;
    }
}
void misje()
{
    switch(stanmisji)
    {
        case 0:
        system("cls");
        printf("Nie masz misji. Misje mozesz znalezc u karczmarza.\n");
        system("pause");
        break;
        case 2:
        system("cls");
        printf("Upoluj Bagniaka.\n");
        system("pause");
        break;
        case 6:
        system("cls");
        printf("Upoluj Golema.\n");
        system("pause");
        break;
        case 1:
        system("cls");
        printf("Upoluj Rabusia.\n");
        system("pause");
        break;
        case 3:
        system("cls");
        printf("Upoluj Gigantycznego Pajaka.\n");
        system("pause");
        break;
        case 4:
        system("cls");
        printf("Upoluj Wielkiego Kraba.\n");
        system("pause");
        break;
        case 5:
        system("cls");
        printf("Upoluj Enta.\n");
        system("pause");
        break;
        default: printf("Zwroc misje karczmarzowi, a otwrzymasz nagrode.\n"); system("pause"); system("cls");
        break;

    }

}
void mapa()
{
int i;
int j;
    printf("Jestes w lokacji :\n");
    switch(lokacja)
    {
        case 1:
        printf("Plaza.\n");
        break;
        case 2:
        printf("Karczma pod starym koniem.\n");
        break;
        case 3:
        printf("Elfi Las.\n");
        break;
        case 4:
        printf("Murlokowe Bagna.\n");
        break;
        case 5:
        printf("Opuszczona Twierdza Lorda Theranosa.\n");
        break;
        case 6:
        printf("Farmy Zlocistego Klosa.\n");
        break;
        case 7:
        printf("Kopalnia Kamiennychludzi.\n");
        break;
        case 8:
        printf("Jaskinia Smierci.\n");
        break;
        case 9:
        printf("Gora Smoczego Ducha.\n");
        break;
    }
    int a=1;
    printf("\n");
    for(i=0;i<3;i++)
    {

    for(j=0;j<3;j++)
    {
        printf("|");
        if(lokacja==a)
        {
            printf("X");
            a++;
        }
        else
        {
        printf("%d",a);
        a++;
        }
        }
        printf("|");
        printf("\n");
    }
    printf("1 - Plaza.(WIELKI KRAB-9LVL)\n2 - Karczma pod starym koniem.\n3 - Elfi Las.(ENT-12LVL)\n4 - Murlokowe Bagna.(BAGNIAK-3LVL)\n5 - Opuszczona Twierdza Lorda Theranosa.(RABUS-1LVL)\n6 - Farmy Zlocistego Klosa.\n7 - Kopalnia Kamiennychludzi.(GOLEM-14LVL)\n8 - Jaskina Smierci.(GIGANTYCZNY PAJAK-6LVL)\n9 - Gora smoczego Ducha.(SMOK-18LVL)\n");
    printf("\n");
}
void stats()
{
    if(zycie==0||zycie<0)
    {
        win=1;
    }
    if(exps>exp2)
    {
        lvl++; exps=exps-exp2; zycie=zycie+15; obrazenia=10+obrazenia; exp2=exp2+10; zyciemaks=zyciemaks+15;
    }
    if(win==0)
    {
    printf("\nIMIE: %s", imie);
    printf("\nLVL: %d", lvl);
    printf("\nEXP: %d/%d", exps, exp2);
    printf("\nZDROWIE: %d/%d",zycie,zyciemaks);
    printf("\nSAKIEWKA: %d Zlota.\n\n",zloto);
    mapa();
    }
}
void load()
    {
    int r;
    printf("       loading\n");
    for(r=0;r<=20;r++)
    {
    printf("%c",176);
    Sleep(100);
    }
    }
    void menu()
    {
    int wybormenu;
    a:
    system("cls");
    printf("\n1. Zacznij gre.\n2. Wyjdz.\n");
    scanf("%d",&wybormenu);
        switch(wybormenu)
        {
        case 1  :
        system("cls");
        break;
        case 2  :
        exit(1);
        break;
        default :   goto a;
        }
    }
    void wstep()
    {
        stanmisji=0;
        printf("Hej. Witam Cie serdecznie. A wiec w koncu przybyles. Prosze zdradz mi swoje imie towarzyszu.\n");
        scanf("%s",imie);
        system("cls");
        printf("Pozwol, ze bede sie do ciebie zwracac po imieniu %s, w koncu jestes na moim terenie. Jak juz jestes to moze bys nam pomogl z tym cholernym smokiem...Nie daje nam spokoju od setek lat.\n", imie);
    }
    void poruszaniesie()
    {
        int poruszanie;
        stats();
        printf("Ale tu pieknie i spokojnie.\n\n1. Idz na wschod.\n2. Idz na poludnie.\n3. Dziennik misji.\n4. Przeszukaj Plaze.\n");
        scanf("%d",&poruszanie);
        switch(poruszanie)
        {
            case 1    :
            lokacja=1+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2    :
            lokacja=3+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 3  :
            system("cls");
            misje();
            break;
            case 4:
            walka();
            break;
    }
    }
    void poruszaniesie2()
    {
        stats();
        printf("Witaj w karczmie pod starym koniem. Pozwol, ze napelnie Twoj kufel, a Ty zrobisz cos dla mnie.\n\n");
        printf("1. Idz na wschod.\n2. Idz na zachod.\n3. Idz na poludnie.\n4. Zobacz oferte karczmarza.\n5. Dziennik misji.\n6. Zwroc misje.\n");
        scanf("%d",&k);
        switch(k)
        {
            case 1  :
            lokacja=1+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2  :
            lokacja--;
            system("cls");
            ladowanie1();
            break;
            case 3  :
            lokacja=3+lokacja;
            system("cls");
            ladowanie1();
            break;
            break;
            case 4  :
                system("cls");
                stats();
                printf("1. Napij sie piwa, a odnowisz sobie zdrowie(20 sztuk zlota).\n2. Przyjmij misje.\n");
                scanf("%d",&karczmarz);
                switch(karczmarz)
                {
                case 1 :
                    if(zloto>=20)
                    {
                        system("cls");
                        printf("Ale to piwko bylo dobre. odrazu czuje sie lepiej."); zloto=zloto-20; zycie=zyciemaks;
                        Sleep(2000);
                    }else
                    {
                        system("cls");
                        printf("Nie masz tyle zlota.\n");
                        Sleep(1000);
                        system("cls");
                    }
                    break;
                case 2 :
                    if(lvl==1||lvl==2)
                    {
                        system("cls");
                        printf("Upoluj dla mnie Rabusia.\n");
                        stanmisji=1;
                        system("pause");
                        system("cls");
                    }
                   else if(lvl==3||lvl==4)
                    {
                        system("cls");
                        printf("Upoluj dla mnie Bagniaka.\n");
                        stanmisji=2;
                        system("pause");
                        system("cls");
                    }
                    else if(lvl==5||lvl==6)
                    {
                        system("cls");
                        printf("Upoluj dla mnie Gigantycznego Pajaka.\n");
                        stanmisji=3;
                        system("pause");
                        system("cls");
                    }
                    else if(lvl==7||lvl==8||lvl==9)
                    {
                        system("cls");
                        printf("Upoluj dla mnie Wielkiego Kraba.\n");
                        stanmisji=4;
                        system("pause");
                        system("cls");
                    }
                    else if(lvl==10||lvl==11||lvl==12)
                    {
                       system("cls");
                        printf("Upoluj dla mnie Enta.\n");
                        stanmisji=5;
                        system("pause");
                        system("cls");
                    }
                    else if(lvl==13||lvl==14)
                    {
                        system("cls");
                        printf("Upoluj dla mnie Golema.\n");
                        stanmisji=6;
                        system("pause");
                        system("cls");
                    }
                    else if(lvl>14)
                    {
                        system("cls");
                        printf("W koncu jestes na tyle silny zeby zabic smoka. Zabij go i ukoncz gre");
                        stanmisji=7;
                        system("pause");
                    }
                    else if (stanmisji>0)
                    {
                    system("cls");
                    printf("Skoncz pierw bierzaca misje zanim wezmiesz kolejna.\n");
                    system("pause");
                    system("cls");
                    }
                }
                Sleep(1500);
                break;
                case 5  :
                    misje();
                    break;
                 case 6 :
                 if(stanmisji>6)
                 {
                     system("cls");
                     printf("\nSwietnie wlasnie o to chodzi. W nagrode otrzymasz 50 expa i 10 sztuk zlota.\n");
                     stanmisji=0;
                     exps=exps+50;
                     zloto=zloto+10;
                     Sleep(2000);
                 }
                 else if(stanmisji==0)
                 {
                     system("cls");
                     printf("\nNie masz zadnej misji.\n");
                     Sleep(2000);
                 }
                 else if(stanmisji>0&&stanmisji<7)
                 {
                     system("cls");
                     printf("\nSkoncz pierw misje, a potem do mnie przyjdz.\n");
                     Sleep(2000);
                 }
                 break;
        }
    }
    void poruszaniesie3()
    {
        stats();
        printf("Ahh wszedzie te wielkie drzewa. W koncu to tereny Elfow.\n\n");
        printf("\n1. Idz na zachod.\n2. Idz na poludnie.\n3. Dziennik misji.\n4. Przeszukaj Las.\n");
        scanf("%d",&l);
        switch(l)
        {
            case 1  :
            --lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2  :
            lokacja=3+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 3  :
            misje();
            break;
            case 4:
            walka();
            break;
    }
    }
    void poruszaniesie4()
    {
        stats();
        printf("Ale tu capi...\n\n");
        printf("1. Idz na wschod.\n2. Idz na poludnie.\n3. Idz na polnoc.\n4. Dziennik misji.\n5. Przeszukaj Bagna.\n");
        scanf("%d",&l);
        switch(l)
        {
            case 1  :
            lokacja=1+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2  :
            lokacja=3+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 3  :
            lokacja=lokacja-3;
            system("cls");
            ladowanie1();
            break;
            case 4:
            misje();
            break;
            case 5:
            walka();
            break;
    }
    }
    void poruszaniesie5()
    {
        stats();
        printf("Musze przyznac, ze ta twierdza jest imponujaca\n\n");
        printf("1. Idz na wschod.\n2. Idz na zachod.\n3. Idz na poludnie.\n4. Idz na polnoc.\n5. Dziennik misji.\n6. Przeszukaj Twierdze.\n");
        scanf("%d",&l);
        switch(l)
        {
            case 1  :
            lokacja=1+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2  :
            lokacja=lokacja-1;
            system("cls");
            ladowanie1();
            break;
            case 3  :
            lokacja=3+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 4:
            lokacja=lokacja-3;
            system("cls");
            ladowanie1();
            break;
            case 5:
            misje();
            break;
            case 6:
            walka();
    }
    }
    void poruszaniesie6()
    {
        stats();
        printf("W koncu jakies miejsce gdzie moge odsapnac.\n\n");
        printf("1. Idz na zachod.\n2. Idz na poludnie.\n3. Idz na polnoc.\n4. Dziennik misji.\n");
        scanf("%d",&l);
        switch(l)
        {
            case 1  :
            lokacja=--lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2  :
            lokacja=3+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 3  :
            lokacja=lokacja-3;
            system("cls");
            ladowanie1();
            break;
            case 4:
            misje();
            break;
        }
    }
    void poruszaniesie7()
    {
        stats();
        printf("Wszedzie tylko te kilofy i rozlupane skaly.\n\n");
        printf("1. Idz na wschod.\n2. Idz na polnoc.\n3. Dziennik misji.\n4. Przeszukaj Kopalnie.\n");
        scanf("%d",&l);
        switch(l)
        {
            case 1  :
            lokacja=1+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2  :
            lokacja=lokacja-3;
            system("cls");
            ladowanie1();
            break;
            case 3:
            misje();
            break;
            case 4:
            walka();
            break;
        }
    }
    void poruszaniesie8()
    {
        stats();
        printf("Wszedzie te cholerne pajeczyny.\n\n");
        printf("1. Idz na wschod.\n2. Idz na zachod.\n3. Idz na polnoc.\n4. Dziennik misji.\n5. Przeszukaj Jaskinie.\n");
        scanf("%d",&l);
        switch(l)
        {
            case 1  :
            lokacja=1+lokacja;
            system("cls");
            ladowanie1();
            break;
            case 2  :
            lokacja=lokacja-1;
            system("cls");
            ladowanie1();
            break;
            case 3:
            lokacja=lokacja-3;
            system("cls");
            ladowanie1();
            break;
            case 4:
            misje();
            break;
            case 5:
            walka();
        }
    }
    void poruszaniesie9()
    {
        stats();
        {
        printf("Chyba tu jest ten smok o ktorym slyszalem na poczatku.\nCzuje potege smoka!\n\n");
        printf("1. Idz na zachod.\n2. Idz na polnoc.\n3. Dziennik misji.\n4. Walcz ze smokiem.\n");
        scanf("%d",&l);
        switch(l)
        {
            case 1  :
            lokacja=lokacja-1;
            system("cls");
            ladowanie1();
            break;
            case 2:
            lokacja=lokacja-3;
            system("cls");
            ladowanie1();
            break;
            case 3:
            misje();
            break;
            case 4:
            walka();
            break;
        }
        }
    }
    void ladowanie1()
{
    int r;
    printf("Trwa przemieszczanie sie.\n");
    for(r=0;r<=10;r++)
    {
    printf("%c",176);
    Sleep(100);
    }
    system("cls");
    }
    void gra()
{
    p[0].zyciepotwora=75;
    p[0].exppotwora=30;
    p[0].obrazeniapotwora;
    p[0].zlotozapotwora=10;
    strcpy(p[0].nazwa,"Bagniak");    
    p[1].zyciepotwora=50;
    p[1].exppotwora=20;
    p[1].obrazeniapotwora;
    p[1].zlotozapotwora=7;
    strcpy(p[1].nazwa,"Rabus");
    p[2].zyciepotwora=200;
    p[2].exppotwora=75;
    p[2].obrazeniapotwora;
    p[2].zlotozapotwora=25;
    strcpy(p[2].nazwa,"Golem");
    p[3].zyciepotwora=100;
    p[3].exppotwora=40;
    p[3].obrazeniapotwora;
    p[3].zlotozapotwora=13;
    strcpy(p[3].nazwa,"Gigantyczny Pajak");
    p[4].zyciepotwora=125;
    p[4].exppotwora=50;
    p[4].obrazeniapotwora;
    p[4].zlotozapotwora=17;
    strcpy(p[4].nazwa,"Wielki Krab");
    p[5].zyciepotwora=150;
    p[5].exppotwora=65;
    p[5].obrazeniapotwora;
    p[5].zlotozapotwora=20;
    strcpy(p[5].nazwa,"Ent");
    p[6].zyciepotwora=1000;
    p[6].exppotwora=2000;
    p[6].obrazeniapotwora;;
    p[6].zlotozapotwora=150;
    strcpy(p[6].nazwa,"Smok");
    menu();
    wstep();
    while(win==0){
        switch(lokacja)
        {
            case 1 :
            poruszaniesie();
            break;
            case 2 :
            poruszaniesie2();
            break;
            case 3 :
            poruszaniesie3();
            break;
            case 4 :
            poruszaniesie4();
            break;
            case 5 :
            poruszaniesie5();
            break;
            case 6 :
            poruszaniesie6();
            break;
            case 7 :
            poruszaniesie7();
            break;
            case 8 :
            poruszaniesie8();
            break;
            case 9 :
            poruszaniesie9();
            break;
    }
}
printf("Koniec gry.\n");
system("pause");
}






