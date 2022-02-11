#include<stdio.h>
#include<math.h>

 float torque(float i3);
 float armatureloss(float J);
 float fieldloss(float ise);
 float hysterisisloss(float Bmax);
 float eddycurrent_loss(float Bmax);
  
#itarations
cl_1=armatureloss(76.5);
cl_2=armatureloss(73.26);
fl_1=fieldloss(4.25);
fl_2=fieldloss(4.07);
hy_1=hysterisisloss(11.49);
hy_2=hysterisisloss(10.70)
el_1=eddycurrent_loss(11.49);
el_2=eddycurrent_loss(10.70);
pl_ac=cl_1+hy_1+fl_1+el_1+18.9+10.7;
pl_dc=cl_2+hy_2+fl_2+el_2+16.05+10.45;
ef_ac=((500-pl_ac)/500)*100;
ef_dc=((500-pl_dc)/500)*100;

