//Entrada
let nota1 = 7.5;
let nota2 = 10.0;

//Processamento
let media = (nota1 + nota2) / 2;

//Saída de dados
console.log(`Nota 1: ${nota1}`);
console.log(`Nota 2: ${nota2}`);
console.log(`Média : ${media.toFixed(2)}`);

if (media >= 7.5){
    console.log("Parabéns, você está aprovado");
}
    else if (media < 7 && media >=5){
        console.log("Vacilou, você está em recuperação");
    }
        else {
            console.log("Vacilou demais, você está reprovado");
        }
