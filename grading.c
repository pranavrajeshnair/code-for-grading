#include<stdio.h>

int main(){
    int mark;
    printf("ENTER MARKS\n");
    scanf("%d",&mark);
    if(mark>=85 && mark<=100){
    printf("your grade is A");
    }
else if(mark>=70 && mark<=84){
    printf("your grade is B");
}
else if(mark>=55 && mark<=69){
    printf("your grade is C");
}
else if(mark>=40 && mark<=54){
    printf("your grade is D");
}

else
{
  printf("your grade is F");
}
return 0;
}

         
    
    

