//Entrada
let preco = 100;

//Processamento
let aVista = preco - ((preco * 10)/100);
let aPrazo = preco/3;

//Saída de dados
console.log(`Preço: R$ ${preco.toFixed(2)}`);
console.log(`A Vista: ${aVista.toFixed(2)}`);
console.log(`Em 3x: R$ ${aPrazo.toFixed(2)}`);