#include <stdio.h> 
#include<string.h>

char s[10000]; 

int main() 

{ 

gets(s); 

int f[300]={0},ans=0,i; 

int l=strlen(s); 

for(i=0;i<l;i++) 

{ 

if(s[i]==' ') 

continue; 

if(s[i]>='a') 

s[i]=s[i]-('a'-'A'); 

if(!(f[s[i]]++)) 

ans++; 

} 

if(ans!=26) 

printf("not "); 

printf("pangram\n"); 

return 0; 

} 