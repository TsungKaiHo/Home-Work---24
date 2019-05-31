//
//  main.cpp
//  Home Work 24
//
//  Created by 何宗愷 on 2019/5/30.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct course

{
    char name[10];
    int calculus;
    int computer;
    int programming;
} p;

int main(void)
{
    FILE *pFile;
    pFile=fopen("course.txt", "r");
    
    if (pFile==NULL)
    {
        printf("檔案開啟失敗!!\n");
        exit(1);
    }
    
    else
    {
    
        while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming)!=EOF)
            
        printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming);
    }
    printf("\n");
    fclose(pFile);
        
    return 0;
    
}
