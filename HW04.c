#include <stdio.h>
#include <string.h>

void main()
{
    
    char *s1 = "Harry", *s2 = "Kane";
    printf(">>> strcmp\n- Compares the first non-matching characters of 2 strings\n");
    printf("- Returns <0 if string 1's non-matching character is smaller\n");
    printf("- EX: strcmp(\"%s\", \"%s\") ---> %d\n", s1, s2, strcmp(s1, s2));
    printf("- Returns >0 if string 2's non-matching character is smaller\n");
    printf("- EX: strcmp(\"%s\", \"%s\") ---> %d\n", s2, s1, strcmp(s2, s1));
    printf("- Returns 0 if the strings are identical\n");
    printf("- EX: strcmp(\"%s\", \"%s\") ---> %d\n\n", s2, s2, strcmp(s2, s2));
    
    s1 = "abc123", s2 = "abcdef";
    printf(">>> strncmp\n- Does the same comparison as strcmp, but only on the first n characters\n- The same rules from strcmp apply here\n");
    printf("- EX: strncmp(\"%s\", \"%s\", 4) ---> %d\n", s1, s2, strncmp(s1, s2, 4));
    printf("      strncmp(\"%s\", \"%s\", 4) ---> %d\n", s2, s1, strncmp(s2, s1, 4));
    printf("      strncmp(\"%s\", \"%s\", 6) ---> %d\n", s1, s1, strncmp(s1, s1, 6));
    printf("      strncmp(\"%s\", \"%s\", 3) ---> %d\n", s1, s2, strncmp(s1, s2, 3));
    
}



