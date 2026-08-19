// 2. Write a program that takes as input two dates, in the dd-mm-yyyy format, where the first one is your
// date of birth and the second is the current date, and calculates the number of days to your next
// birthday.


#include<stdio.h>
int main() {
int d1,d2,m1,m2,y1,y2,td,td1;
td1=0, td =0;
scanf("%d-%d-%d", &d1,&m1,&y1);
scanf("%d-%d-%d", &d2,&m2,&y2);

if (m1==m2 && d1>d2)
{printf("%d",(d1-d2));

}
else if (m1==m2 && d2>=d1)
{printf("%d",(365-(d2-d1)));

}
else if (m2>m1){
    if(m1>1) {td+=31;}
     if(m1>2) {td+=28;}
      if(m1>3) {td+=31;}
       if(m1>4) {td+=30;}
        if(m1>5) {td+=31;}
         if(m1>6) {td+=30;}
          if(m1>7) {td+=31;}
           if(m1>8) {td+=31;}
            if(m1>9) {td+=30;}
             if(m1>10) {td+=31;}
              if(m1>11) {td+=30;}
if(m2>1) {td1+=31;}
 if(m2>2) {td1+=28;}
  if(m2>3) {td1+=31;}
   if(m2>4) {td1+=30;}
    if(m2>5) {td1+=31;}
     if(m2>6) {td1+=30;}
      if(m2>7) {td1+=31;}
       if(m2>8) {td1+=31;}
        if(m2>9) {td1+=30;}
         if(m2>10) {td1+=31;}
          if(m2>11) {td1+=30;}

printf("%d", td+d1+(365-(td1+d2)));
        }
else{
    if(m1>1) {td+=31;}
     if(m1>2) {td+=28;}
      if(m1>3) {td+=31;}
       if(m1>4) {td+=30;}
        if(m1>5) {td+=31;}
         if(m1>6) {td+=30;}
          if(m1>7) {td+=31;}
           if(m1>8) {td+=31;}
            if(m1>9) {td+=30;}
             if(m1>10) {td+=31;}
              if(m1>11) {td+=30;}
if(m2>1) {td1-=31;}
 if(m2>2) {td1-=28;}
  if(m2>3) {td1-=31;}
   if(m2>4) {td1-=30;}
    if(m2>5) {td1-=31;}
     if(m2>6) {td1-=30;}
      if(m2>7) {td1-=31;}
       if(m2>8) {td1-=31;}
        if(m2>9) {td1-=30;}
         if(m2>10) {td1-=31;}
          if(m2>11) {td1-=30;}

          printf("%d", td+td1+d1-d2);
}

 return 0;
}