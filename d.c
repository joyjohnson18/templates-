#include <stdio.h>

int f(int n){
    if(n)
    return f(n-1)+n;
    else{
        return n;
    }
    f(4);
   
}
int main(){
    int n;
     printf("F(4)==%d\n",f(4));
return 0;

}