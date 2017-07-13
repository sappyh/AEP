#pragma line 1 "/home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/GitHub/AEP/HLS/ZS_BRAM_F_V1/core.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/home/ubuntu-admin/SharedFolder/EIT_Studies/TUB_Docs/Sem2/EmbProj/GitHub/AEP/HLS/ZS_BRAM_F_V1/core.cpp"
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
int zs_func(int ImgIn[42*50],int ImgOut[42*50]) {
#pragma empty_line
#pragma HLS INTERFACE bram port=ImgIn
#pragma HLS INTERFACE bram port=ImgOut
#pragma HLS INTERFACE s_axilite port=return bundle=CRTL_BUS
#pragma empty_line
#pragma empty_line
#pragma HLS RESOURCE variable=ImgIn core=RAM_1P_BRAM
#pragma HLS RESOURCE variable=ImgOut core=RAM_1P_BRAM
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int count = 0;
#pragma empty_line
 for (int i=1;i<42;i++)
 {
  for(int j=0;j<50;j++)
  {
#pragma empty_line
   unsigned char m1;
   unsigned char m2;
   unsigned char x,y;
#pragma empty_line
   unsigned char p0 = ImgIn[(i-1)*50 +(j-1)] ? 1 : 0 ;
   unsigned char p1 = ImgIn[(i-1)*50 +(j)] ? 1 : 0 ;
   unsigned char p2 = ImgIn[(i-1)*50 +(j+1)] ? 1 : 0 ;
   unsigned char p3 = ImgIn[(i)*50 +(j-1)] ? 1 : 0 ;
   unsigned char p4 = ImgIn[(i)*50 +(j)] ? 1 : 0 ;
   unsigned char p5 = ImgIn[(i)*50 +(j+1)] ? 1 : 0 ;
   unsigned char p6 = ImgIn[(i+1)*50 +(j-1)] ? 1 : 0 ;
   unsigned char p7 = ImgIn[(i+1)*50 +(j)] ? 1 : 0 ;
   unsigned char p8 = ImgIn[(i+1)*50 +(j+1)] ? 1 : 0 ;
#pragma empty_line
   unsigned char A=(!p1 && p2) + (!p2 && p5) +(!p5 && p8) + (!p8 && p7) + (!p7 && p6) + (!p6 && p3) + (!p3 && p0) + (!p0 && p1);
   unsigned char B=p1+p2+p5+p8+p7+p6+p3+p0;
#pragma empty_line
   m1= p1*p5*p7;
   m2=p5*p7*p3;
   x=(A == 1 && (B >= 2 && B <= 6) && !m1 && !m2);
#pragma empty_line
   m1=p1*p5*p3;
   m2=p1*p7*p3;
   y=(A == 1 && (B >= 2 && B <= 6) && !m1 && !m2);
#pragma empty_line
   int outVal = (x || y);
#pragma empty_line
   if (outVal && ImgIn[i*50 +j] == 255){
    count++;
    ImgOut[i*50 +j] = 0;
   }
  }
 }
#pragma empty_line
 for (int k=0;k<42;k++)
 {
  for(int l=0;l<50;l++)
  {
   ImgIn[k*50 +l]=ImgOut[k*50 +l];
  }
 }
#pragma empty_line
 return count;
}
