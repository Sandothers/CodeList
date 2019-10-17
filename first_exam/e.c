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