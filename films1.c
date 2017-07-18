/*films1.c--使用结构数组*/
#include<stdio.h>
#include<stdlib.h>
#define NMAX 45 //每部电影存放的名字大小
#define FMAX 5  //最多存放五部电影

typedef struct{
    char title[NMAX];
    int rating;
}films;

int main()
{
    /*films movies[FMAX];
    int i = 0;
    int j;

    puts("Enter first name title:");
    while(i < FMAX && gets(movies[i].title) != NULL && 
        movies[i].title[0] != '\0')
        {
            puts("Enter your rating:");
            scanf("%d",&movies[i++].rating);
            while(getchar() != '\n')
                continue;
            putchar('\n');
            puts("Enter next movie title[empty line to quit!]:");
        } 
    if(i == 0)
        puts("No movie input!");
    else 
        printf("Here are the list of the movies:\n");

    for(j = 0;j < i;j++)
        printf("Movie %s has rating %d\n",movies[j].title,movies[j].rating);
    puts(":::BYE:::");
    return 0;*/


    int n,i,j;    //n是存放的数目
    films *movies;  //指向结构的指针
    printf("Enter the maximum number of movies you'll enter:\n");
    printf("n = ");
    scanf("%d",&n);
    while(getchar()!='\n')
        continue;
    movies = (films *)malloc(n * sizeof(films));

    puts("Enter first name title:");
    while(i < n && gets(movies[i].title) != NULL && 
        movies[i].title[0] != '\0')
        {
            puts("Enter your rating:");
            scanf("%d",&movies[i++].rating);
            while(getchar() != '\n')
                continue;
            putchar('\n');
            puts("Enter next movie title[empty line to quit!]:");
        } 
    if(i == 0)
        puts("No movie input!");
    else 
        printf("Here are the list of %d movies:\n",i);

    for(j = 0;j < i;j++){
        printf("Movie %s has rating %d\n",movies[j].title,movies[j].rating);
        putchar('\n');}
    puts(":::BYE:::");
    return 0;

}