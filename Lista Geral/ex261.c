/*261. Escreva um subprograma recursivo que receba como entrada um número inteiro e  calcule a soma de todos os seus algarismos.  */

int soma(int num){
    if(num / 10 == 0){
        return num;
    }

    return soma(num % 10) + soma(num / 10);

}

void main(){
    int num;
    scanf("%d", &num);
    printf("%d", soma(num));
}