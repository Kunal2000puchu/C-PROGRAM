#include<stdio.h>

struct author
{
    char name[20];
    char eid[20];
};

struct book
{
    char name[20];
    int price;
    int quan;
    struct author a;
};

struct author readAuthor()
{
    struct author z;
    printf("enter author name"); scanf("%s",z.name);
    printf("enter author Email-id"); scanf("%s",z.eid);
    return (z);
}

struct book readBook()
{
  struct book x;
  
  printf("enter book name"); scanf("%s",x.name);
    printf("enter book price"); scanf("%d",&x.price);
  printf("enter book quantity"); scanf("%d",&x.quan);
  x.a=readAuthor();
    
  return(x);
}
int main()
{
    struct book b1,b2;
    b1=readBook();
    b2=readBook();
    
    if(b1.price>b2.price)
    printf("\n author of the book is %s",b1.a.name);
    else
    printf("\n author of the book is %s",b2.a.name);
    
    return(0);
}