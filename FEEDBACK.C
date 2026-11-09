#include<stdio.h>
int main()
{
FILE *fp;
char ch;
clrscr();
fp = fopen("FEEDBACK.txt","w");

if(fp == NULL)
{
printf("File cannot be opened\n");
return 0;
}

fprintf(fp,"About the c programming class feedback.\n\n");

fprintf(fp, "1.The technical class is ok.\n");
fprintf(fp, "2.Learning c in lab class is highly likable.\n");
fprintf(fp, "3.Sometimes the compiler is not working and we felt puzzled.\n");
fprintf(fp, "4.Wish if interruption is avoided during class.\n");
fprintf(fp, "5.It would be much better to learn in lab rather than regular class.\n\n");
fclose(fp);

fp = fopen("FEEDBACK.txt","a");

fprintf(fp,"FEEDBACK ABOUT C POGRAMMING SIR.\n\n");

fprintf(fp,"Teaching is good,though i need some time to understand.\n");
fprintf(fp,"Sometimes sir struggles to explain in board.\n");
fprintf(fp,"Hope that he would conduct tests and give revision at the end.\n");
fprintf(fp,"Overall, i feel good but also needs improvements from students and c - sir too.\n");
fclose(fp);

fp = fopen("FEEDBACK.txt","r");

if (fp==NULL)
{
printf("File not found");
}
else
{
printf("\n---STUDENT FEEDBACK---\n");
printf("\n---FEEDBACK ABOUT C PROGRAMMING SIR---\n");

}

while ((ch = fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);

return 0;
}




