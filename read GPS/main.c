//
//  main.c
//  read GPS
//
//  Created by a20161104573 on 2017/6/26.
//  Copyright © 2017年 a20161104573. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    char str1[70];
    char str2[70];
    char time[7],LONG[11],lat[11],rate[6],course[6],altitude[7],date[7];
    int i;
    fr=fopen("//Users//a20161104573//Desktop//GPS170510.log","r+");
    fscanf(fr,"%s%s",str1,str2);
    printf("结果:%s\n%s\n",str1,str2);
    for(i=0;i<6;i++)
    {
        date[i]=str1[i+51];
    }
    date[6]='\0';
    printf("日期:%s\n",date);
    for(i=0;i<2;i++)
    {
        date[i]=str1[i+55];
    }
    date[2]='\0';
    printf("%s年",date);
    for(i=0;i<2;i++)
    {
        date[i]=str1[i+53];
    }
    date[2]='\0';
    printf("%s月",date);
    for(i=0;i<2;i++)
    {
        date[i]=str1[i+51];
    }
    date[2]='\0';
    printf("%s日\n",date);
    
    
    
    for(i=0;i<6;i++)
    {
        time[i]=str1[i+7];
    }
    time[6]='\0';
    printf("时间:%s\n",time);
    for(i=0;i<2;i++)
    {
        time[i]=str1[i+7];
    }
    time[2]='\0';
    printf("%sh",time);
    for(i=0;i<2;i++)
    {
        time[i]=str1[i+9];
    }
    time[2]='\0';
    printf("%sm",time);
    for(i=0;i<2;i++)
    {
        time[i]=str1[i+11];
    }
    time[2]='\0';
    printf("%ss\n",time);
    
    
    
    
    for(i=0;i<10;i++)
    {
        LONG[i]=str1[i+16];
    }
    LONG[10]='\0';
    printf("经度:%s\n",LONG);
    
    
    
    for(i=0;i<10;i++)
    {
        lat[i]=str1[i+28];
    }
    lat[10]='\0';
    printf("纬度:%s\n",lat);
    
    
    
    for(i=0;i<5;i++)
    {
        rate[i]=str1[i+39];
    }
    rate[5]='\0';
    printf("地面速率:%s\n",rate);
    
    
    
    for(i=0;i<5;i++)
    {
        course[i]=str1[i+45];
    }
    course[5]='\0';
    printf("地面航向:%s\n",course);
    
    
    
    for(i=0;i<6;i++)
    {
        altitude[i]=str2[i+43];
    }
    altitude[6]='\0';
    printf("海拔高度:%s\n",altitude);
    fclose(fr);
    return 0;
}
