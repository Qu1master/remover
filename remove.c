#include <stdio.h>

void squeeze(char s1[], char s2[]);

main(){

  char x[1000] = "cat";
  char y[1000] = "ca";

  squeeze(x,y);
  printf("%s",x);
                        
}

void squeeze(char s1[1000], char s2[1000]){

  int i,j,n,c;

  i = j = 0;
  
  while(s2[i] != '\0'){

    if(s1[j] == s2[i]){
      for(n = c = j; s1[c] != '\0'; n++){
        s1[n] = s1[++c];
      }
    }
    i++;
  }

}