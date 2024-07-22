//             0     1     2     3      4
let altura = [1.80, 2.05, 1.30, 1.45, 1.20];
//             0   1   2   3   4
let sexo =   ['M','F','F','M','F'];  


//A maior e menor altura 
let maior = altura[0];
let menor = altura[0];

//Media altura das mulhers
let mediaMulheres = 0;
let contMulheres=0;
//Numero de Homens
let contHomens=0;
for (let i=0; i<altura.length; i++){
    if (maior < altura[i])
        maior = altura[i];
    if (menor > altura[i])
        menor = altura[i];

    if (sexo[i] == 'F'){
        mediaMulheres += altura[i];
        contMulheres++;
    }  
    if (sexo[i] == 'M'){
        contHomens++;
    }  
}

console.log(`Maior: ${maior}`);
console.log(`Menor: ${menor}`);
//Usando função Math com desestruturação do array
console.log(`Maior(JS): ${Math.max(...altura)}`);
console.log(`Menor(JS): ${Math.min(...altura)}`);

console.log(`Média Altura Mulhers: ${(mediaMulheres/contMulheres).toFixed(2)}`);
console.log(`Número de Homens: ${contHomens}`);
