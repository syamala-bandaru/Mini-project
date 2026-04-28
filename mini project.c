#include<stdio.h>
void main()
{
    printf("********Syamala shoping mall*********");
    int sel;
    do{
        printf("1.skin-caare\n 2.mobile\n3.clothes\n4.jewellary\n");
        printf("select the above product to buy \n");
        int opt;
        scanf("%d",&opt);
        switch(opt){
            case 1:
            {
                printf("skin-care purchased sucessfully\n");
            }break;
            case 2:{
                printf("mobile purchased sucessfully\n");
            }break;
            case 3:{
                printf("clothes purchased sucessfully\n");
            }break;
            case 4:
            {
                printf("jewellary purchased sucessfully\n");
            }break;
            default :{
                printf("invalid option\n");
            }
        }
        printf("do you want to continue the shopping\n");
        printf("1.continue\t0.exit");
        scanf("%d",&sel);
    }
    while(sel==1);
    printf("thank you for shopping\n*******please visit us again*******");
}