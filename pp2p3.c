//  Write a program that calculates the highest mark, average, and standard deviation of a set of marks
// that are entered. The input is a sequence of numbers between 0 and 100. When the number -1 is
// entered, it denotes the end of the sequence and the highest marks, average, and standard deviation
// of the marks should be printed

#include<stdio.h>
#include<math.h>
int main(){
   float i, sum,num, sq, stddev,var, max;
   sum= 0; num =0; sq= 0; stddev= 0; max=0;
while(1){
   scanf("%f", &i);
   if (i!=(-1)){
   sum = sum+i;
   num = num+1;
   sq= sq + i*i;
   if(i>max){max=i;}
   else{;}
   
   }else{break;}

}
// var = ((sq/num)-(sum/num)*(sum/num));
// stddev= sqrt(var);
   printf("AVG :%f \n", sum/num);
   // printf("stddev: %f",stddev );
   printf("%f", max);
}