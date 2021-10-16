#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fact(int z)
{
  int f = 1, i;
    if (z == 0)
    {
        return(f);
    }
    else
    {
        for (i = 1; i <= z; i++)
{
            f = f * i;
}
    }
    return(f);
}

void get_Sum(int m,int k,int q, float p1, float p2){
    float ncr,ncrK,ncrQ,ncrProd,errorCode,TheoraticalSum;
    float ncr_Sum,ncr_Set_Sum,d1,d2;
    int powerVal;
    if(m%2 == 0){
        TheoraticalSum = -1.0000;  
    }
    else{
        TheoraticalSum = 1.0000;
    }
    for(int i=1;i<m;i++){
    //    ncr = fact(m) / (fact(i) * fact(m - i));
        printf("SET - %d",i);
         ncr_Set_Sum = 0.0;
       for(int j=0,l=i;j<=i,l>=0;j++,l--){
           ncrK = (fact(k) / (fact(j) * fact(k - j)));
           ncrQ = (fact(q) / (fact(l) * fact(q - l)));
           printf("\n");
           printf("iteration j = %d",j);
           printf("\b gives: %d", k);
           printf("C %d = %.6f", j, ncrK);
           //printf("\b | X | \b");
           printf("\b |iteration l = %d",l);
           printf("\b gives: %d", q);
           printf("C %d = %.6f", l, ncrQ);
           ncr_Sum = 0.0;
           ncrProd = 0.0;
           ncrProd = ncrK*ncrQ;
           if(j==0 || l==0){
               if((1-(p1*j)!=0) && (1-(p2*l)!=0)){
                  ncr_Sum = ncr_Sum + (ncrK/(1-(p1*j)))*(ncrQ/(1-(p2*l)));
               }
           }
           if(j!=0 && l!=0){
               if((p1*j+p2*l) != 1){
                   ncr_Sum = ncr_Sum + (ncrProd/(1-(p1*j+p2*l)));
               }
           }
           printf("\b | NCR sum %.8f", ncr_Sum);
           powerVal = m-1-i;
           ncr_Set_Sum = ncr_Set_Sum + pow(-1,powerVal)*ncr_Sum;
       }
        printf("\b | NCR sum at this level: %.8f", ncr_Set_Sum);
        TheoraticalSum = TheoraticalSum + ncr_Set_Sum;
    printf("\n");
    }
    printf("Theoratical Value %.8f",TheoraticalSum);
}

int main()
{
    int m, k, q, i, j;
    m=3;
    k=1;
    q=m-k;
    float* prob_arr_k;
    prob_arr_k = calloc(k, sizeof(float));
    float* prob_arr_q;
    prob_arr_q = calloc(q, sizeof(float));
    float* prob_arr;
    prob_arr = calloc(m, sizeof(float));
    float p1, p2;
    p1=0.1;
    float sum;
    p2=(1-(k*p1))/q;
    int loop,index;
    index = 0;
   
    for(i=0; i<k; i++)
    {
        prob_arr_k[i] = p1;
    }
    for(int j=0; j<q; j++)
    {
        prob_arr_q[j] = p2;
    }
    for(loop=0; loop<k;loop++){
        prob_arr[index] = prob_arr_k[loop];
        index++;
    }
    for(loop=0; loop<q;loop++){
        prob_arr[index] = prob_arr_q[loop];
        index++;
    }
    get_Sum(m, k, q, p1, p2);
   
    return 0;
}