//#define SIZE_X	12
#define SIZE_X	17
//#define SIZE_Y	12
#define SIZE_Y	19

#define LAYER	3   /* レイヤー数（入力・中間・出力層） */
#define INPUT	(SIZE_X * SIZE_Y + 1) /* 入力層のユニット（入力信号）数 */
#define OUTPUT	10  /* 出力層のユニット数 */
#define CTG		10    /* 学習事例数 */

#define ITERATIONS	1000   /* 学習回数（終了条件1） */


#define WD		2.00  /* 重み初期化用 */
#define MIN_ERR	0.0001       /* 最少誤差（終了条件2）*/

#define ON		0.9
#define OFF		0.1
#define SMAX	15
#define SMIN	-15
#define MAX		0.99995
#define MIN		0.00005

#define PROBLEM		"problem_list.kanji.txt"
#define FGETS_LEN 128
