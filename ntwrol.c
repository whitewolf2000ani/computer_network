#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void modulo2divison(char divd[100],char key[100],int keyl,int datal);

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
  //  padding the duplicate dividend with k-1 "0"
  for(i=0;i<keyl-1;i++){
    temp[datal+i]='0';
  }
  modulo2divison(temp,key,keyl,datal);
  return 0;
}

void modulo2divison(char divd[100],char key[100],int keyl,int datal){
  int i,j;
  char rem[100];
  char chiro[]={0,0,0,0};
  while(datal>keyl){
    if(divd[0]==1){
      for(i=0;i<keyl;i++){
          rem[i]=divd[i]^key[i];
      }
    }
    else{
      for(i=0;i<keyl;i++){
        rem[i]=divd[i]^chiro[i];
      }
    }
    for(i=0;i<keyl;i++){
      rem[i]<<=1; 
    }
    strcpy(divd,rem);
  }
  printf("%s",divd);
}
