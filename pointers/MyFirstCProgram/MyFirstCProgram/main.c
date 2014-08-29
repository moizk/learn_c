//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int main()
{
    char *letter;
    
    char c = 'k';
    letter = &c;
    
    printf("%c is always the same as %c\n", c, *letter);
    
    c = 'q';
    printf("%c is always the same as %c\n", c, *letter);
    
    char eldrige[] = "eldridge";
    
    letter = &eldrige[3];
    printf("%c is in %s\n", *letter, eldrige);
    
    ++letter;
    printf("%c is in %s\n", *letter, eldrige);
    
    ++letter;
    printf("%c is in %s\n", *letter, eldrige);
    
    
    return 0;
}

