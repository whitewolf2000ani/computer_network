#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
  char key[100],data[100],temp[100],quo[100],rem[100];
  int i,j,keyl,datal;

  printf("Enter the data\n");
  scanf("%s",data);
  printf("enter the key\n");
  scanf("%s",key);

  keyl=strlen(key);
  datal=strlen(data);

  printf("%d\n",keyl);
  printf("%d\n",datal);

  for(i=0;i<datal;i++){
    temp[i]=data[i];

  }
  
  
  for(i=0;i<keyl-1;i++){
    temp[datal+i]='0';
  }
  
  









  printf("%s\n",temp);

  return 0;

}
