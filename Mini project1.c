#include<stdio.h>
void main()
{
    printf("********Syamala shoping mall*********");
    int sel;
    do{
        printf("1.skin-care\n 2.mobile\n3.clothes\n4.jewellary\n");
        printf("select the above product to buy \n");
        int opt;
        scanf("%d",&opt);
        switch(opt){
            case 1:
            {
                printf("skin-care\n");
                printf("1.moisture\n2.face-wash\n3.sunscreen\n4.conditioners\n");
                printf("select the above product to buy\n");
                 int opt;
        scanf("%d",&opt);
                switch(opt){
                    case 1:{
                        printf("moisture purchased sucessfully\n");
                    }break;
                 case 2:{
                     printf("face-wash purchased sucessfully\n");
                 }break;
                 case 3:
                 {
                        printf("subscreen purchased sucessfully\n");
                 }break;
                 case 4:
                 {
                        printf("conditioners purchased sucessfully\n");
                 }
                 
                }break;
            }break;
            case 2:{
                printf("mobile\n");
                printf("1.realme\n 2.redme\n3.iqoo\n4.iphone\n5.pocoC65\n");
                 printf("select the above product to buy\n");
                 int opt;
        scanf("%d",&opt);
                switch(opt){
                  case 1:{
                       printf("realme purchased sucessfully\n");
                  } break;
                  case 2:{
                       printf("redme purchased sucessfully\n");
                  }break;
                  case 3:
                  {
                   printf("iqoo purchased sucessfully\n");
                  }break;
                  case 4:
                  {
                       printf("iphone purchased sucessfully\n");
                  }break;
                  case 5:
                  {
                       printf("pocoC65 purchased sucessfully\n");
                  }break;
                }
            }break;
            case 3:{
                printf("clothes \n");
                 printf("1.anarkalis\n 2.baggy jeans\n3.kurtasets\n4.T-shirts\n5.mens wear\n");
                 printf("select the above product to buy\n");
                 int opt;
        scanf("%d",&opt);
                switch(opt){
                    case 1:{
                     printf("anarkalis purchased sucessfully\n");
                  } break;
                  case 2:{
                       printf("baggy jeans purchased sucessfully\n");
                  }break;
                  case 3:
                  {
                   printf("kurtasets purchased sucessfully\n");
                  }break;
                  case 4:
                  {
                       printf("T-shirts purchased sucessfully\n");
                  }break;
                  case 5:
                  {
                       printf("mens wear purchased sucessfully\n");
                  }break;
                }
            }break;
            case 4:
            {
                printf("jewellary\n");
                 printf("1.chains\n 2.rings\n3.bangles&bracelets\n4.mangtika\n5.anklets\n");
                 printf("select the above product to buy\n");
                 int opt;
        scanf("%d",&opt);
                switch(opt){
                    case 1:{
                     printf("chains purchased sucessfully\n");
                  } break;
                  case 2:{
                       printf("rings purchased sucessfully\n");
                  }break;
                  case 3:
                  {
                   printf("bangles&bracelets purchased sucessfully\n");
                  }break;
                  case 4:
                  {
                       printf("mangtika purchased sucessfully\n");
                  }break;
                  case 5:
                  {
                       printf("anklets purchased sucessfully\n");
                  }break;
                }
                
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