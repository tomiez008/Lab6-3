#include <stdio.h>
int main(void) {

int i1,i2,i3,i4,it,core,tt;
for (core = 0; core <= 9999; core++) { 
for (i1 = 0; i1 <=9; i1++ ) {
for (i2 = 0; i2 <=9; i2++ ) {
for (i3 = 0; i3 <=9; i3++ ) {
for (i4 = 0; i4 <=9; i4++ ) {

it = i1*i1*i1*i1 + i2*i2*i2*i2 + i3*i3*i3*i3 + i4*i4*i4*i4;
tt = i1*10*10*10 + i2*10*10 + i3*10 + i4;
 
if(it == core && it == tt) {
printf("%d[%d^4+%d^4+%d^4+%d^4] = %d+%d+%d+%d = %d \n\n ",core,i1,i2,i3,i4, i1*i1*i1*i1 ,i2*i2*i2*i2 ,i3*i3*i3*i3 ,i4*i4*i4*i4 ,it);

          }
        }
      }  
    }
  }
} 

return 0;
}



