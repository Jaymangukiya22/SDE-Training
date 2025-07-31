#include<stdio.h>

struct _struct
{
    char name[20];
    int age;

};

union _union
{
    char name[20];
    int age;

};

void main(){
    struct _struct s;
    scanf("%s", s.name);
    scanf("%d", s.age);
    union _union u;
    scanf("%s", u.name);
    scanf("%d", u.age);

    printf("Struct: %s, %d\n", s.name, s.age);
    printf("Union: %s, %d\n", u.name, u.age);
}