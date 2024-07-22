let valor = 80;
let porcentagem = 10;

let calculo = (valor * porcentagem)/100; //Calculo Porcentual %
let valorTotal = valor + calculo;
console.log(`Valor do Jantar: \t${valor.toFixed(2)}`);
console.log(`Valor do Garçom: \t${calculo.toFixed(2)}`);
console.log(`Total a Pagar: \t\t${valorTotal.toFixed(2)}`);
