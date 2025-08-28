/*263. Escreva um subprograma recursivo que receba como entrada dois números inteiros x  e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função  mod. 
*/

int div(int x, int y){
    if(x == y){
        return 0;
    }
    if(y > x){
        return x;
    } 

    return div(x - y, y);

}

void main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("Resto: %d", div(x, y));
}