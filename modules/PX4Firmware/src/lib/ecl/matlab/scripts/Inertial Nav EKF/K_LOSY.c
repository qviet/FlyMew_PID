t2 = 1.0/range;
t3 = q0*q2*2.0;
t4 = q0*q0;
t5 = q1*q1;
t6 = q2*q2;
t7 = q3*q3;
t8 = q0*q1*2.0;
t9 = q0*q3*2.0;
t10 = q1*q2*2.0;
t11 = t9+t10;
t12 = q1*q3*2.0;
t13 = t4-t5-t6+t7;
t14 = t13*vd;
t15 = q2*q3*2.0;
t16 = t3+t12;
t17 = t16*vn;
t18 = t4-t5+t6-t7;
t19 = t18*ve;
t20 = t8+t15;
t21 = t20*vd;
t22 = t9-t10;
t28 = t22*vn;
t23 = t19+t21-t28;
t24 = t4+t5-t6-t7;
t25 = t3-t12;
t26 = t8-t15;
t29 = t26*ve;
t27 = t14+t17-t29;
t30 = P[4][4]*t2*t11;
t31 = P[2][4]*t2*t23;
t32 = P[3][4]*t2*t24;
t56 = P[5][4]*t2*t25;
t57 = P[1][4]*t2*t27;
t33 = t30+t31+t32-t56-t57;
t34 = t2*t11*t33;
t35 = P[4][5]*t2*t11;
t36 = P[2][5]*t2*t23;
t37 = P[3][5]*t2*t24;
t58 = P[5][5]*t2*t25;
t59 = P[1][5]*t2*t27;
t38 = t35+t36+t37-t58-t59;
t39 = P[4][1]*t2*t11;
t40 = P[2][1]*t2*t23;
t41 = P[3][1]*t2*t24;
t55 = P[1][1]*t2*t27;
t61 = P[5][1]*t2*t25;
t42 = t39+t40+t41-t55-t61;
t43 = P[4][2]*t2*t11;
t44 = P[2][2]*t2*t23;
t45 = P[3][2]*t2*t24;
t63 = P[5][2]*t2*t25;
t64 = P[1][2]*t2*t27;
t46 = t43+t44+t45-t63-t64;
t47 = t2*t23*t46;
t48 = P[4][3]*t2*t11;
t49 = P[2][3]*t2*t23;
t50 = P[3][3]*t2*t24;
t65 = P[5][3]*t2*t25;
t66 = P[1][3]*t2*t27;
t51 = t48+t49+t50-t65-t66;
t52 = t2*t24*t51;
t60 = t2*t25*t38;
t62 = t2*t27*t42;
t53 = R_LOS+t34+t47+t52-t60-t62;
t54 = 1.0/t53;
A0[0][0] = -t54*(P[0][4]*t2*t11+P[0][2]*t2*t23+P[0][3]*t2*t24-P[0][1]*t2*t27-P[0][5]*t2*t25);
A0[1][0] = -t54*(-t55+P[1][4]*t2*t11+P[1][2]*t2*t23+P[1][3]*t2*t24-P[1][5]*t2*t25);
A0[2][0] = -t54*(t44+P[2][4]*t2*t11+P[2][3]*t2*t24-P[2][1]*t2*t27-P[2][5]*t2*t25);
A0[3][0] = -t54*(t50+P[3][4]*t2*t11+P[3][2]*t2*t23-P[3][1]*t2*t27-P[3][5]*t2*t25);
A0[4][0] = -t54*(t30+P[4][2]*t2*t23+P[4][3]*t2*t24-P[4][1]*t2*t27-P[4][5]*t2*t25);
A0[5][0] = -t54*(-t58+P[5][4]*t2*t11+P[5][2]*t2*t23+P[5][3]*t2*t24-P[5][1]*t2*t27);
A0[6][0] = -t54*(P[6][4]*t2*t11+P[6][2]*t2*t23+P[6][3]*t2*t24-P[6][1]*t2*t27-P[6][5]*t2*t25);
A0[7][0] = -t54*(P[7][4]*t2*t11+P[7][2]*t2*t23+P[7][3]*t2*t24-P[7][1]*t2*t27-P[7][5]*t2*t25);
A0[8][0] = -t54*(P[8][4]*t2*t11+P[8][2]*t2*t23+P[8][3]*t2*t24-P[8][1]*t2*t27-P[8][5]*t2*t25);
A0[9][0] = -t54*(P[9][4]*t2*t11+P[9][2]*t2*t23+P[9][3]*t2*t24-P[9][1]*t2*t27-P[9][5]*t2*t25);
A0[10][0] = -t54*(P[10][4]*t2*t11+P[10][2]*t2*t23+P[10][3]*t2*t24-P[10][1]*t2*t27-P[10][5]*t2*t25);
A0[11][0] = -t54*(P[11][4]*t2*t11+P[11][2]*t2*t23+P[11][3]*t2*t24-P[11][1]*t2*t27-P[11][5]*t2*t25);
A0[12][0] = -t54*(P[12][4]*t2*t11+P[12][2]*t2*t23+P[12][3]*t2*t24-P[12][1]*t2*t27-P[12][5]*t2*t25);
A0[13][0] = -t54*(P[13][4]*t2*t11+P[13][2]*t2*t23+P[13][3]*t2*t24-P[13][1]*t2*t27-P[13][5]*t2*t25);
A0[14][0] = -t54*(P[14][4]*t2*t11+P[14][2]*t2*t23+P[14][3]*t2*t24-P[14][1]*t2*t27-P[14][5]*t2*t25);
A0[15][0] = -t54*(P[15][4]*t2*t11+P[15][2]*t2*t23+P[15][3]*t2*t24-P[15][1]*t2*t27-P[15][5]*t2*t25);
A0[16][0] = -t54*(P[16][4]*t2*t11+P[16][2]*t2*t23+P[16][3]*t2*t24-P[16][1]*t2*t27-P[16][5]*t2*t25);
A0[17][0] = -t54*(P[17][4]*t2*t11+P[17][2]*t2*t23+P[17][3]*t2*t24-P[17][1]*t2*t27-P[17][5]*t2*t25);
A0[18][0] = -t54*(P[18][4]*t2*t11+P[18][2]*t2*t23+P[18][3]*t2*t24-P[18][1]*t2*t27-P[18][5]*t2*t25);
A0[19][0] = -t54*(P[19][4]*t2*t11+P[19][2]*t2*t23+P[19][3]*t2*t24-P[19][1]*t2*t27-P[19][5]*t2*t25);
A0[20][0] = -t54*(P[20][4]*t2*t11+P[20][2]*t2*t23+P[20][3]*t2*t24-P[20][1]*t2*t27-P[20][5]*t2*t25);
A0[21][0] = -t54*(P[21][4]*t2*t11+P[21][2]*t2*t23+P[21][3]*t2*t24-P[21][1]*t2*t27-P[21][5]*t2*t25);
A0[22][0] = -t54*(P[22][4]*t2*t11+P[22][2]*t2*t23+P[22][3]*t2*t24-P[22][1]*t2*t27-P[22][5]*t2*t25);
A0[23][0] = -t54*(P[23][4]*t2*t11+P[23][2]*t2*t23+P[23][3]*t2*t24-P[23][1]*t2*t27-P[23][5]*t2*t25);
