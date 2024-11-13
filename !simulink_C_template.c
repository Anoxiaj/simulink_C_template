#include "mex.h"
#include "math.h"

void SPWM_2closed_loop(double out_var[6], double in_var[6])//相当于主函数名：example_func【可以按照想法更改，最后一行处也要改】
//out_var[6]输出变量，个数为6  in_var[6]输出变量，个数为6
{


}


void mexFunction(                                          //此处可更改地方
	int nlhs,                                              //     |
	mxArray *plhs[],
	int nrhs,                                              //     |
	const mxArray *prhs[]) 
    {                                                      //     |
 	float *out;
 	float *in;                                             //     |

	//allocate memory for output                           //     |
 	plhs[0] = mxCreateDoubleMatrix(6, 1, mxREAL);//输出矩阵 列向量 这里输出数据的个数要和模块里的个数一一对应
                                                 //(6,1,mxREAL)  【参数6表示输出变量维数（输出变量个数）】  【1和mxREAL默认不变】
 	out = mxGetPr(plhs[0]);
 	in = mxGetPr(prhs[0]);
  	SPWM_2closed_loop(out,in);                        //example_func为主函数名【可以按照想法更改】    out->plhs     in->prhs
    }