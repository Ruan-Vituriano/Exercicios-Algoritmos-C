/*262. Escreva um subprograma recursivo que receba como entrada dois números inteiros x  e y e calcule o quociente (a parte inteira) da divisão de x por y. Para isso, não deve  ser usada a função div.*/

int div(int x, int y){
    if(x == y){
        return 1;
    }
    if(y > x){
        return 0;
    } 

    return div(x - y, y) + 1;

}

void main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", div(x, y));
}