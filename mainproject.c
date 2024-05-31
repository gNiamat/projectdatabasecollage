#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct studentInf{
    char name[100];int roll;float cgpa;
};
struct professorInf{
    char name[100];int professorid;char subject[100];
};
struct staffInf{
    char name[100];int staffid;char area[100];
};
void student(int n,int type);
void professor(int n,int type);
void staff(int n, int type); 

int main(){
    char field;
    printf("which block u want to update-'student'-> s,'professor'-> p or 'staff'-> t: ");
    scanf("%c",&field);
if (field=='s'){
   int a;
   int type;
   printf("You want to Update or Reregister students: type 1 for update and 2 for reregister: ");
   scanf("%d",&type);
   printf("How many students you want to register: ");
   scanf("%d",&a);
   student(a,type);
   printf("You want to update more field: if yes type 1 other wise 2: ");
   int ch;
   scanf("%d",&ch);
 if (ch ==1){
     int chh;
     printf("Which field u want to update: type 1 for professor and 2 for staff: ");
     scanf("%d",&chh);
     if(chh==1){
       professor(a,type);
     }
     else if(chh==2){
       staff(a,type); 
     }
   }
 else {
   printf("## Update Completed ##");
   }
}
else if(field=='p'){
    int a;
    int type;
   printf("How many professor you want to update: ");
   scanf("%d",&a);
   printf("You want to Update or Reregister professor: type 1 for update and 2 for reregister: ");
   scanf("%d",&type);
   professor(a,type);
   printf("You want to update more field: if yes type 1 other wise 2: ");
   int ch;
   scanf("%d",&ch);
   if (ch==1){
     printf("Which field u want u update: type 1 for student and 2 for staff: ");
     int chh;
     scanf("%d",&chh);
     printf("you want to update or reregister: type 1 for update and 2 for reregister: ");
     scanf("%d",&type);
     if(chh==1){
       student(a,type);
     }
     else if(chh==2){
       staff(a,type); 
     }
   }
   else {
    printf("## Update Completed ##");
   }
}
else if(field=='t'){
     int a;
     int type;
   printf("How many staffs you want to update: ");
   scanf("%d",&a);
   printf("You want to Update or Reregister staff: type 1 for update and 2 for reregister: ");
   scanf("%d",&type);
   staff(a,type);
   printf("You want to update more field: if yes type 1 other wise 2: ");
   int ch;
   scanf("%d",&ch);
   if (ch==1){
     printf("Which field u want u update: tye 1 for student and 2 for professor: ");
     int chh;
     scanf("%d",&chh);
     printf("you want to update or reregister: type 1 for update and 2 for reregister: ");
     scanf("%d",&type);
     if(chh==1){
       student(a,type);
     }
     else if(chh==2){
       professor(a,type); 
     }
   }
   else {
    printf("## Update Completed ##");
   }
}
return 0;
}

void student(int n,int type){
 FILE *student;
    
    struct studentInf inf[n];
  for(int i=0;i<n;i++){
    printf("Enter details of student %d \n",i+1);
    printf("Enter student name: ");
    scanf("%s",inf[i].name);
    printf("Enter student roll: ");
    scanf("%d",&inf[i].roll);
    printf("Enter student cgpa: ");
    scanf("%f",&inf[i].cgpa);
}

if (type==1){
  student=fopen("projectdatabasecollage/studentInf.txt","a");
for (int i=0;i<n;i++){
printf("Name= %s\t Roll= %d\t Cgpa=%0.2f\t\n",inf[i].name,inf[i].roll,inf[i].cgpa);
fprintf(student,"Student %d: Name=%s\t\t",i+1,inf[i].name);
fprintf(student,"Roll=%d\t\t",inf[i].roll);
fprintf(student,"Cgpa=%0.2f\t\t\n",inf[i].cgpa);
fprintf(student,"\n");
}
}
else if(type==2){
student=fopen("projectdatabasecollage/studentInf.txt","w");
for (int i=0;i<n;i++){
printf("Name= %s\t Roll= %d\t Cgpa=%0.2f\t\n",inf[i].name,inf[i].roll,inf[i].cgpa);
fprintf(student,"Student %d: Name=%s\t\t",i+1,inf[i].name);
fprintf(student,"Roll=%d\t\t",inf[i].roll);
fprintf(student,"Cgpa=%0.2f\t\t\n",inf[i].cgpa);
fprintf(student,"\n");
}
}
fclose(student);
printf("**** Student list updated successfully. ****\n");
}
void professor(int n,int type){
 FILE *professor;
   
    struct professorInf inf[n];
  for(int i=0;i<n;i++){
    printf("Enter details of professor %d: \n",i+1);
    printf("Enter professor name: ");
    scanf("%s",inf[i].name);
    printf("Enter professor id: ");
    scanf("%d",&inf[i].professorid);
    printf("Enter professor subject: "); 
    scanf("%s",inf[i].subject);
}

if (type==1){
professor=fopen("projectdatabasecollage/professorInf.txt","a");
for (int i=0;i<n;i++){
printf("Name= %s\t Professor id= %d\t Subject=%s\t\n",inf[i].name,inf[i].professorid,inf[i].subject);
fprintf(professor,"Professor %d: Name=%s\t\t",i+1,inf[i].name);
fprintf(professor,"Professor id=%d\t\t",inf[i].professorid);
fprintf(professor,"Subject=%s\t\t\n",inf[i].subject);
fprintf(professor,"\n");
}
}
else if(type==2){
professor=fopen("projectdatabasecollage/professorInf.txt","w");
for (int i=0;i<n;i++){
printf("Name= %s\t Professor id= %d\t Subject=%s\t\n",inf[i].name,inf[i].professorid,inf[i].subject);
fprintf(professor,"Professor %d: Name=%s\t\t",i+1,inf[i].name);
fprintf(professor,"Professor id=%d\t\t",inf[i].professorid);
fprintf(professor,"Subject=%s\t\t\n",inf[i].subject);
fprintf(professor,"\n");
}
}
fclose(professor);
printf("**** Professor list updated successfully. ****\n");
}
void staff(int n,int type){
  FILE *staff;
    
    struct staffInf inf[n];
  for(int i=0;i<n;i++){
    printf("Enter details of staff %d \n",i+1);
    printf("Enter your name: ");
    scanf("%s",inf[i].name);
    printf("Enter staff id: ");
    scanf("%d",&inf[i].staffid);
    printf("Enter staff area: ");
    scanf("%s",inf[i].area);
}
if(type==1){
staff=fopen("projectdatabasecollage/staffInf.txt","a");
for (int i=0;i<n;i++){
printf("Name= %s\t Staff id= %d\t Cgpa=%0.2f\t\n",inf[i].name,inf[i].staffid,inf[i].area);
fprintf(staff,"Staff %d: name=%s\t\t",i+1,inf[i].name);
fprintf(staff,"Staff id=%d\t\t",inf[i].staffid);
fprintf(staff,"Area=%s\t\t\n",inf[i].area);
fprintf(staff,"\n");
}
}
else if(type==2){
staff=fopen("projectdatabasecollage/staffInf.txt","w");
for (int i=0;i<n;i++){
printf("Name= %s\t Staff id= %d\t Cgpa=%0.2f\t\n",inf[i].name,inf[i].staffid,inf[i].area);
fprintf(staff,"Staff %d: name=%s\t\t",i+1,inf[i].name);
fprintf(staff,"Staff id=%d\t\t",inf[i].staffid);
fprintf(staff,"Area=%s\t\t\n",inf[i].area);
fprintf(staff,"\n");
}
}
fclose(staff);
printf("**** Staff list updated successfully. ****\n");
}