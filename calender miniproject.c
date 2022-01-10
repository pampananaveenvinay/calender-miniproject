    #include<stdio.h>
    #include<conio.h>
    int getmonth(int,int);
    int main(){
                  int yr, x, y, z, mon;
                  printf("Enter an year to show the calendar :" );
                  scanf("%d",&yr);
                  x = ((yr-1)%400) / 100;
                  y = (((yr-1)%400) % 100) / 4;
                  z = (((yr-1)%400) % 100) - (((yr-1)%400) % 100) / 4;
                  mon = (x*5+y*2+z+1) % 7;
                  printf("\n\n\n\nJanuary\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  printf("\n\n\n\nFebruary\n\n");
                  if((yr)%4==0)
                  mon=getmonth(29,mon);
                  else
                  mon=getmonth(28,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  printf("\n\n\n\nMarch\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  printf("\n\n\n\nApril\n\n");
                  mon=getmonth(30,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  printf("\n\n\n\nMay\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  printf("\n\n\n\nJune\n\n");
                  mon=getmonth(30,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  printf("\n\n\n\nJuly\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  printf("\n\n\n\nAugust\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                   printf("\n\n\n\nSeptember\n\n");
                   mon=getmonth(30,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   printf("\n\n\n\nOctober\n\n");
                   mon=getmonth(31,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   printf("\n\n\n\nNovember\n\n");
                   mon=getmonth(30,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   printf("\n\n\n\nDecember\n\n");
                   mon=getmonth(31,mon);
     getch();
     }
     int getmonth(int p,int q)
     {
                   int a,b,c;
                   printf("\n    Sun    Mon    Tue    Wed    Thu    Fri    Sat\n");
                   for(a=0;a<=q;a++)
                   if(a>=q)
                   {
                   for(b=1;b<=p;b++)
                   {
                    if((a % 7) == 0)
                    printf("\n");
                    printf("%6d",b);
                    a++;
                    }
                    }
                    else
                    printf(" ");
                    c=(p+q)%7;
    return(c);
    }
