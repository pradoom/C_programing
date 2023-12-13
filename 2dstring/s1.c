// #include<stdio.h>

// void main()
// {

//     char s[5][10]={"hello","rao","program","file","string"};

//     //printf("%c",++s[0][0]);//i
//     char (*p)[10]=s;

//     //printf("%c",*(*(p+2)+1)+1);//s
// }

// #include<stdio.h>
// struct student
// {
// int roll;
// int cgpa;
// int sgpa[8];
// };
// void main()
// {
// struct student s={12,8,7,2,5,9};
// int *ptr;
// ptr=(int *)&s;

// printf("%d",*(ptr+3));

// }

// #include<stdio.h>
// struct student
// {
// int roll;
// int cgpa;
// int sgpa[8];
// };
// void main()
// {
// struct student s={12,8,7,2,5,9};
// char *ptr;
// ptr=(char *)&s;

// printf("%d",*(ptr+4));

// }

// #include <stdio.h>
// #include <stdio.h>

// struct game {
//     int level;
//     int score;
//     struct player {
//         char *name;
//     } g={"hyt"};
// } g3 = {10, 200};

// void main() {
//     struct game g1 = g3;

//     printf("%d  %d  %s", g1.level, g1.score, g1.g.name);
// }

// #include<stdio.h>
// struct game
// {
// int level;
// int score;
// struct player
// {
// char *name;
// }g2;
// }g1;
// void main()
// {

// printf("%d  %d  %s",g1.level,g1.score,g1.g2.name);

//}
