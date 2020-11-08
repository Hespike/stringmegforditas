#include <stdio.h>

void inverse(char str[]){
    int i, j;
    for(j = 0; str[j] != '\0'; j++);
    if(j ==0){ //üres string -> return}
    return;
}
    j--; //ne a \0-on legyen hanem eggyel előtte

    for(i = 0; i < j; i++, j--){
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }


}
int main(){

char str[]= "Hello World!";
inverse(str);
printf("%s\n", str);

    return 0;
}