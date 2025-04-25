#include <stdio.h>


int main(){

char str1[],str2[];

printf("enter string1:\n");
scanf("%s",str1);

printf("enter string2:\n");
scanf("%s",str2);

int len1=strlen(str1);
int len2=strlen(str2);

if(strlen(str1)!=strlen(str2)){
    printf("no.\n");
    return 0;
}

int cnt[26];
for(int i=0;i<26;i++){
    cnt[i]=0;
}
for(int i=0;i<len1;i++){
    cnt[str1[i]-'a']++;
}
for(int i=0;i<len2;i++){
    cnt[str2[i]-'a']--;
}

char ch='a';
for(int i=0;i<26;i++){
    if(cnt[i]!=0){
        printf("no\n");

    }
}
    return 0;
}
