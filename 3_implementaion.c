# Header file  and sourse Code file 
# work flow for linux and windows
# work flow for  unit testing

#include<stdio.h>
#include<math.h>
float torque(float i3)
   {
    float T,k;
    T=0.003*i3*i3;
return T;


   }
   float J,ise,Bmax;
float armatureloss(float J)
{

    float al,p=0.0171,A=12,lturn=0.059;
    al=J*J*A*p*lturn;

    return al;

}
float fieldloss(float ise)
    {
        float rse=2.04,fl;
        fl=ise*ise*rse;
        return fl;
    }
float hysterisisloss(float Bmax)
    {
        float hy,kh=0.08,n=1.6,f=50;
        hy=kh*f*Bmax;
        return hy;
    }
float eddycurrent_loss(float Bmax)
{
     float ke=0.08,n=1.6,f=50,v=0.87,el;
     el=ke*Bmax*f*v;
     return el;
}
int main()
{
    int j,p;

    float laa=0.087,lff=0.073,v=220,laf=0.0028,del_t=0.5,i1,i2,w=0,i=0,zr=27.37,z,r=3.64,zs=23.023,t3,wm1,Tl=0.04,J=0.00001686,B=0.00032,cl_1,fl_1,hy_1,el_1,el_2,hy_2,fl_2,cl_2,pl_ac,pl_dc,ef_ac,ef_dc;
    printf("  Armature inductance(laa)=0.087,\n\n Field inductance(lff)=0.073,\n\n Voltage(v)=220,\n\n Mutual inductance(laf)=0.0028,\n\n Step size(del_t)=0.5,\n\n i1,i2,w=0,\n\n Current(i)=0,\n\n Rotor impedance(zr)=27.37, z,\n\n Total resistance(r)=3.64,\n\n Stator impedance(zs)=23.023,\n\n Torque(t3), Speed(wm1),\n\n Load torque(Tl)=0.04,\n\n Inertia coefficient(J)=0.00001686,\n\n Friction coefficient(B)=0.00032,\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("initial current is %0.1f\t",i);
    printf("initial w=%0.1f\n",w);
    printf("\n");
    printf("  for AC source\n");
            for(j=1;j<4;j++)
                {
                    z=zs+zr;
                    i1=(i*(laa+lff))+((230*del_t));
                    i2=i1/((((r+(laf*18000))*del_t)+(laa+lff)));
                    FILE *fp;
                    fp=fopen("pro.xls","a");
                    fprintf(fp,"%f\n",i2);
                    t3=torque(i2);
                    wm1=(((w*J)+((t3-Tl)*del_t))/(J+(B*del_t)));
                    w=wm1;
                    i=i2;
                    printf(" Iteration %d\t",j);

                    printf("the current is %0.2f A\n ",i2);
                    /*printf("angular speed is %f\t",w);
                    printf("torque is %f\n",t3);*/
                    fprintf(fp,"%f\t",t3);
                    fclose(fp);
                    printf("\n");
    printf("\n");
                }
    printf("\n");
    printf("  DC operation\n");
             w=0;
             i=0;
             v=220;
            for(p=1;p<4;p++)
                {



                    i1=(i*(laa+lff))+((v*del_t));
                    i2=i1/((((r+(laf*18000))*del_t)+(laa+lff)));
                    FILE *fp;
                    fp=fopen("pro.xls","a");
                    fprintf(fp,"%f\n",i2);
                    t3=torque(i2);
                    wm1=(((w*J)+((t3-Tl)*del_t))/(J+(B*del_t)));
                    w=wm1;
                    i=i2;
                   printf(" Iteration %d\t",p);
                    printf("current is %.2f A\n",i2);
                    /* printf("angular speed is %0.4f\t",w);
                    printf("torque is %f\t",t3);*/
                    printf("\n");
                    fprintf(fp,"%f\t",t3);
                    fclose(fp);
                }
printf("--------------------------------------------------------SPEED CONTROL BY TAPPED FIELD METHOD-------------------------------------------------");




    float N,eb,n=360,k=0.0028;
    eb=(230-(4.25*25.37));
    printf("\n");
    printf("Speed control by tapped field method for Ac voltage\n");
                for(j=0;j<3;j++)
                        {
                            N=eb/(k*k*n*4.07);
                            N=fabs(N);
                            printf("The speed  is %f\n",N);
                            n=n+100;
                            FILE *fp;
                            fp=fopen("speed.xls","a");
                            fprintf(fp,"%f\t %f\n",N,n);
                            fclose(fp);
                        }
    printf("\n");
    printf("\n");
    float N1;
    eb=(220-(4.07*3.64));
    printf("\n");
    printf("Speed control by tapped field method for Dc voltage\n");
    n=360;
                    for(j=0;j<3;j++)
                        {
                            N1=eb/(k*k*n*4.07);
                            N1=fabs(N1);
                            n=n+100;
                            printf("The speed  is %f\n",N1);
                            FILE *fp;
                            fp=fopen("speed.xls","a");
                            fprintf(fp,"%f\t %f\n",N1,n);
                            fclose(fp);
                        }
                        printf("------------------------------");




printf("POWER LOSS CALCULATION-------------------------------------------------------------------------\n");
printf("armature copper loss for AC source = ");
cl_1=armatureloss(76.5);
printf("%f watts\t",cl_1);

printf("armature copper loss for DC source = ");
cl_2=armatureloss(73.26);

printf("%f watts\n",cl_2);

printf("field copper loss for AC source = ");
fl_1=fieldloss(4.25);
printf("%f watts \t",fl_1);

printf("field copper loss for DC source =");
fl_2=fieldloss(4.07);
printf("%f watts\n",fl_2);

printf("Hysterisis loss for the AC source = ");
hy_1=hysterisisloss(11.49);
printf("%f watts \t",hy_1);

printf("Hysterisis loss for DC source = ");
hy_2=hysterisisloss(10.70);
printf("%f watts\n",hy_2);

printf("eddy current loss for AC source = ");
el_1=eddycurrent_loss(11.49);
printf("%f watts     \t",el_1);
printf("eddy current loss for DC source = ");
el_2=eddycurrent_loss(10.70);
printf("%f watts \n",el_2);
printf("mechanical loss for the AC source = 18.9 watts \t\t  mechanical loss for the DC source is= 16.05 watts\n");
printf("stray loss for AC source = 10.7 watts          \t\t stray loss for DC source = 10.45 watts\n");
printf("-------------------------efficiency calculation-------------------------\n");
printf("Rated power of the universal motor is 500 watts\n");

pl_ac=cl_1+hy_1+fl_1+el_1+18.9+10.7;
printf("power loss in the universal motor for the AC supply:%f\n",pl_ac);

pl_dc=cl_2+hy_2+fl_2+el_2+16.05+10.45;
printf("power loss in the universal motor for the DC supply:%f\n",pl_dc);


ef_ac=((500-pl_ac)/500)*100;
printf("Efficiency of the universal motor for AC source is %f% \n",ef_ac);
ef_dc=((500-pl_dc)/500)*100;
printf("Efficiency of the universal motor for DC source is %f% \n",ef_dc);
printf("\n\nEFFICIENCY OF THE UNIVERSAL MOTOR FOR DC SOURCE IS GREATER THAN THAT OF AC SOURCE");

}

