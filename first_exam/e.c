/*
题目描述
斐波那契数列指的是这样一个数列 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233，377，610，987，1597，2584，4181，6765，10946，17711，28657，46368……..这个数列从第3项开始，每一项都等于前两项之和。现请你写一个程序计算这个数列的第n项值除以3的余数。

输入：
第一行为一个整数t(0<t，且可以用int类型存储)，代表测试用例组数。后边是t行，每行为一个正整数（这些正整数均可以用int存储），为t组测试用例。

输出
t行，每行依次对应输入的一组测试用例，如果该组测试用例输入为n，则对应输出斐波那契数列第n项的值除以3的余数。


输入样例
5
1
2
3
4
5
输出样例
1
1
2
0
2
*/
int main(){
    int num;
    int count;
    scanf("%d",&num);//读入需要采集的数据数
    long long int result[num];//建立储存模数的一个数组
    for (int i = 0; i < num; i++) {//循环num次
        scanf("%d",&count);//每次读入一个n
        long long int min = 0;
        long long int max = 1;
        long long int fib = 1;
        if (count>=2){
            for(int j = 2; j <= count; j++) {
                fib = max%3 + min%3;
                min = max%3;
                max = fib%3;
            }
        }
        result[i]=fib%3;
    }
    for ( int k=0; k < num; k++) {
        if (k!=num-1){
            printf("%lld\n",result[k]);
        }
        else {
            printf("%lld",result[k]);
        }
    }
    return 0;
}