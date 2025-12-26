#include<stdio.h>
#include<string.h>               
int main(){
    char username[100];
    char password[100];
    printf("enter username:");
    fgets(username,sizeof(username),stdin);
    printf("enter password:");
    fgets(password,sizeof(password),stdin);
    if(strcmp(username,"Rachit")==0 && strcmp(password,"Gupta")==0){
        printf("Login Successful");
    }
    else{
        printf("invalid login");
    }
    return 0;

}