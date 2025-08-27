/*260. Escreva um subprograma recursivo que receba como entrada um número inteiro e  calcule a sua quantidade de algarismos. */

int qnt_alg(int num){
    if(num / 10 == 0){
        return 1;
    }

    return qnt_alg(num / 10) + 1;

}

void main(){
    int num;
    scanf("%d", &num);
    printf("%d", qnt_alg(num));
}