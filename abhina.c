#include<stdio.h>
void copy(char *p,char *q){
    int i=0;
    while(q[i]!='\0'){
        p[i]=q[i];
        i++;
    }
    p[i]='\0';
    

}
int main(){
    char s1[45]="abhinav";
    char s2[50];
    copy(s2,s1);
    printf("%s", s2);
}